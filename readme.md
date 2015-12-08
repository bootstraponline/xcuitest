# XCUITest

Documentation utilities for learning more about XCUITest

- Private headers & documentation
- Public headers & documentation
- version.plist for Xcode & XCTest

# Developer notes

- Run xcuitest.rb directly to write the files

- appledoc [built from revision](https://github.com/tomaz/appledoc/commit/dad3122bf8fd336e4169fd7702132d48ffc00f3e) `dad3122bf8fd336e4169fd7702132d48ffc00f3e`

```
$ git clone https://github.com/tomaz/appledoc.git
$ xcodebuild -target appledoc -configuration Release install
$ cp /tmp/appledoc.dst/usr/local/bin/appledoc .
```

- class-dump [built from revision](https://github.com/nygard/class-dump/commit/7acf1f00a03a219388a1d19d66edaa954c0be3a5) `7acf1f00a03a219388a1d19d66edaa954c0be3a5`
- After building in Xcode, run `open ~/Library/Developer/Xcode/DerivedData` to find the build product

# Credit

- Apple doc command from [joemasilotti/XCTest-Documentation](https://github.com/joemasilotti/XCTest-Documentation)
- [appledoc](https://github.com/tomaz/appledoc/)
- [class-dump](https://github.com/nygard/class-dump)