require 'rubygems'
require 'cfpropertylist'
require 'fileutils'
require 'safe_yaml'

class XCUITest

  def join *args
    File.expand_path(File.join(*args))
  end

  def plist_to_hash plist
    CFPropertyList.native_types(CFPropertyList::List.new(file: plist).value)
  end

  def write_docs
    xcode_glob = '/Applications/Xcode*.app'
    docs_dir = join(__dir__, '..', '..', 'docs')

    Dir.glob(xcode_glob).each do |xcode|
      xcode_contents = join(xcode, 'Contents')
      xcode_version_plist = join(xcode_contents, 'version.plist')
      next unless File.exist? xcode_version_plist

      xcode_version_plist = plist_to_hash xcode_version_plist
      short_version = xcode_version_plist['CFBundleShortVersionString']
      build_version = xcode_version_plist['ProductBuildVersion']

      xcode_name = "Xcode_#{short_version}_(#{build_version})"

      # XCTest platforms. we only care about the iPhoneSimulator.platform
      xctest = join(join(xcode_contents, 'Developer', 'Platforms', 'iPhoneSimulator.platform',
                         'Developer', 'Library', 'Frameworks', 'XCTest.framework'))

      xctest_version = plist_to_hash join(xctest, 'version.plist')

      xcode_folder = join(docs_dir, xcode_name)
      FileUtils.mkdir_p(xcode_folder)
      File.open(join(xcode_folder, 'xctest.txt'), 'w') { |f| f.write YAML.dump xctest_version }
      File.open(join(xcode_folder, 'xcode.txt'), 'w') { |f| f.write YAML.dump xcode_version_plist }

      xctest_framework = '/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/Library/Frameworks/XCTest.framework'
      apple_doc join(xcode_folder, 'public_docs'), xctest_framework

      # save public headers
      FileUtils.cp_r join(xctest, 'Headers'), join(xcode_folder, 'public_headers')

      # generate private headers
      private_headers = join(xcode_folder, 'private_headers')
      class_dump private_headers

      # generate private docs
      apple_doc join(xcode_folder, 'private_docs'), private_headers
    end
  end # def write_docs

  def apple_doc output_folder, target
    appledoc = join(__dir__, '..', '..', 'bin', 'appledoc')

    # cmd from: https://github.com/joemasilotti/XCTest-Documentation
    cmd = [appledoc,
           '--project-name "XCTest"',
           '--project-company "Apple"',
           '--company-id "com.apple"',
           %Q(--output "#{output_folder}"),
           '--logformat xcode',
           '--keep-undocumented-objects',
           '--keep-undocumented-members',
           '--keep-intermediate-files',
           '--no-repeat-first-par',
           '--no-warn-invalid-crossref',
           '--install-docset',
           %Q("#{target}")
    ].join(' ')

    `#{cmd}`
  end # def_apple_doc

  def class_dump output_folder
    classdump = join(__dir__, '..', '..', 'bin', 'class-dump')

    xctest_framework = '/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/Library/Frameworks/XCTest.framework'

    cmd = [classdump,
           xctest_framework,
           '-S', # sort methods by name
           '-s', # sort classes and categories by name
           '-H', # generate header files
           %Q(-o "#{output_folder}")
    ].join(' ')

    `#{cmd}`
  end
end

# Uncomment to run
# XCUITest.new.write_docs
