# XCUITest

Documentation utilities for learning more about XCUITest

# Developer notes

- appledoc [built from revision](https://github.com/tomaz/appledoc/commit/dad3122bf8fd336e4169fd7702132d48ffc00f3e) `dad3122bf8fd336e4169fd7702132d48ffc00f3e`

```
$ git clone https://github.com/tomaz/appledoc.git
$ xcodebuild -target appledoc -configuration Release install
$ cp /tmp/appledoc.dst/usr/local/bin/appledoc .
```


appledoc xcuitest command from [joemasilotti](https://github.com/joemasilotti/XCTest-Documentation)

./bin/appledoc --project-name "XCTest" \
               --project-company "Apple" \
               --company-id "com.apple" \
               --output "./docset" \
               --logformat xcode \
               --keep-undocumented-objects \
               --keep-undocumented-members \
               --keep-intermediate-files \
               --no-repeat-first-par \
               --no-warn-invalid-crossref \
               --install-docset \
               "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/Library/Frameworks/XCTest.framework"

- class-dump [built from revision](7acf1f00a03a219388a1d19d66edaa954c0be3a5)
- After building in Xcode, run `open ~/Library/Developer/Xcode/DerivedData` to find the build product