//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface XCTouchGesture : NSObject <NSSecureCoding>
{
    NSMutableArray *_touchPaths;
    _Bool _immutable;
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
- (void)addTouchPath:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property _Bool immutable; // @synthesize immutable=_immutable;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)makeImmutable;
@property(readonly) double maximumOffset;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) NSArray *touchPaths;

@end

