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
      version_plist = join(xcode_contents, 'version.plist')
      next unless File.exist? version_plist

      version_plist = plist_to_hash version_plist
      short_version = version_plist['CFBundleShortVersionString']
      build_version = version_plist['ProductBuildVersion']

      xcode_name = "Xcode_#{short_version}_(#{build_version})"

      # XCTest platforms. we only care about the iPhoneSimulator.platform
      xctest = join(join(xcode_contents, 'Developer', 'Platforms', 'iPhoneSimulator.platform',
                         'Developer', 'Library', 'Frameworks', 'XCTest.framework'))

      xctest_version = plist_to_hash join(xctest, 'version.plist')

      xcode_folder = join(docs_dir, xcode_name)
      FileUtils.mkdir_p(xcode_folder)
      File.open(join(xcode_folder, 'xctest.txt'), 'w') { |f| f.write YAML.dump xctest_version }

      apple_doc xcode_folder
    end
  end # def write_docs

  def apple_doc output_folder
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
           '"/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/Library/Frameworks/XCTest.framework"'
    ].join(' ')

    `#{cmd}`
  end # def_apple_doc
end

XCUITest.new.write_docs
