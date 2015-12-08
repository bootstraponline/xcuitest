//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTest/XCTest.h>

@class NSInvocation, XCTestCaseRun, XCTestContext, _XCTestCaseImplementation;

@interface XCTestCase : XCTest
{
    id _internalImplementation;
}

+ (id)_baselineDictionary;
+ (_Bool)_treatMissingBaselinesAsTestFailures;
+ (id)defaultPerformanceMetrics;
+ (_Bool)_reportPerformanceFailuresForLargeImprovements;
+ (_Bool)_enableSymbolication;
+ (id)testInvocations;
+ (_Bool)isInheritingTestCases;
+ (id)testCaseWithSelector:(SEL)arg1;
+ (id)testCaseWithInvocation:(id)arg1;
+ (void)tearDown;
+ (void)setUp;
+ (id)defaultTestSuite;
+ (id)allTestMethodInvocations;
+ (void)_allTestMethodInvocations:(id)arg1;
+ (id)testMethodInvocations;
+ (id)allSubclasses;
@property(retain) _XCTestCaseImplementation *internalImplementation; // @synthesize internalImplementation=_internalImplementation;
- (void)removeUIInterruptionMonitor:(id)arg1;
- (id)addUIInterruptionMonitorWithDescription:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly) XCTestContext *testContext;
@property(readonly) unsigned long long activityRecordStackDepth;
- (void)startActivityWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)measureMetrics:(id)arg1 automaticallyStartMeasuring:(_Bool)arg2 forBlock:(CDUnknownBlockType)arg3;
- (void)_logAndReportPerformanceMetrics:(id)arg1 perfMetricResultsForIDs:(id)arg2 withBaselinesForTest:(id)arg3 defaultBaselinesForPerfMetricID:(id)arg4;
- (void)_recordValues:(id)arg1 forPerformanceMetricID:(id)arg2 name:(id)arg3 unitsOfMeasurement:(id)arg4 baselineName:(id)arg5 baselineAverage:(id)arg6 maxPercentRegression:(id)arg7 maxPercentRelativeStandardDeviation:(id)arg8 maxRegression:(id)arg9 maxStandardDeviation:(id)arg10 file:(id)arg11 line:(unsigned long long)arg12;
- (id)_symbolicationRecordForTestCodeInAddressStack:(id)arg1;
- (void)measureBlock:(CDUnknownBlockType)arg1;
- (void)stopMeasuring;
- (void)startMeasuring;
- (_Bool)_isMeasuringMetrics;
- (_Bool)_didStopMeasuring;
- (_Bool)_didStartMeasuring;
- (_Bool)_didMeasureMetrics;
- (id)_perfMetricDataForID;
- (unsigned long long)numberOfTestIterationsForTestWithSelector:(SEL)arg1;
- (void)afterTestIteration:(unsigned long long)arg1 selector:(SEL)arg2;
- (void)beforeTestIteration:(unsigned long long)arg1 selector:(SEL)arg2;
- (void)tearDownTestWithSelector:(SEL)arg1;
- (void)setUpTestWithSelector:(SEL)arg1;
- (void)performTest:(id)arg1;
- (void)invokeTest;
- (Class)testRunClass;
- (Class)_requiredTestRunBaseClass;
- (void)_recordUnexpectedFailureWithDescription:(id)arg1 exception:(id)arg2;
- (void)_enqueueFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (void)_dequeueFailures;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (void)_interruptTest;
@property(nonatomic) _Bool shouldHaltWhenReceivesControl;
@property _Bool continueAfterFailure;
@property(retain) XCTestCaseRun *testCaseRun;
@property(retain) NSInvocation *invocation;
- (void)dealloc;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)nameForLegacyLogging;
- (id)name;
- (id)languageAgnosticTestMethodName;
- (unsigned long long)testCaseCount;
- (id)initWithSelector:(SEL)arg1;
- (id)initWithInvocation:(id)arg1;
- (id)init;
- (void)_fulfillExpectation:(id)arg1;
- (_Bool)_expectationsHaveBeenFulfilled;
- (id)expectationForPredicate:(id)arg1 evaluatedWithObject:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)expectationForNotification:(id)arg1 object:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)keyValueObservingExpectationForObject:(id)arg1 keyPath:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)keyValueObservingExpectationForObject:(id)arg1 keyPath:(id)arg2 expectedValue:(id)arg3;
- (void)waitForExpectationsWithTimeout:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_configureTimeoutForInterval:(double)arg1 forWaitAtAddress:(unsigned long long)arg2 testClassName:(id)arg3 testMethodName:(id)arg4;
- (void)_completeWithResult:(id)arg1;
- (id)expectationWithDescription:(id)arg1;
- (id)_expectationForDarwinNotification:(id)arg1;

@end
