//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCTestCase;

@interface _XCTestExpectationImplementation : NSObject
{
    _Bool _hasCompleted;
    XCTestCase *_testCase;
    NSString *_expectationDescription;
}

@property(copy) NSString *expectationDescription; // @synthesize expectationDescription=_expectationDescription;
@property XCTestCase *testCase; // @synthesize testCase=_testCase;
@property _Bool hasCompleted; // @synthesize hasCompleted=_hasCompleted;
- (void)dealloc;

@end

