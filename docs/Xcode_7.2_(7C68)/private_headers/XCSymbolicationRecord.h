//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XCSymbolicationRecord : NSObject
{
    unsigned long long _lineNumber;
    NSString *_filePath;
    NSString *_symbolName;
    NSString *_symbolOwner;
}

+ (id)symbolicationRecordFromRemoteServiceForAddress:(unsigned long long)arg1;
+ (id)symbolicationRecordForTask:(unsigned int)arg1 address:(unsigned long long)arg2;
+ (id)symbolicationRecordForAddress:(unsigned long long)arg1;
+ (void)_setCurrentProcessIsRemoteService;
+ (id)_symbolicationRecordForSymbolicator:(struct _CSTypeRef)arg1 address:(unsigned long long)arg2;
+ (id)failureRecord;
+ (_Bool)softLinkCoreSymbolication;
@property(copy) NSString *symbolOwner; // @synthesize symbolOwner=_symbolOwner;
@property(copy) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(copy) NSString *filePath; // @synthesize filePath=_filePath;
@property unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
- (void)dealloc;

@end

