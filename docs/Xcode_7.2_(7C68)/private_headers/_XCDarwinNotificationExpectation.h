//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTest/XCTestExpectation.h>

@class NSString;

@interface _XCDarwinNotificationExpectation : XCTestExpectation
{
    NSString *_notificationName;
    int _notifyToken;
}

@property(copy) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void)cleanup;
- (void)fulfill;
- (void)startObserving;
- (void)dealloc;

@end

