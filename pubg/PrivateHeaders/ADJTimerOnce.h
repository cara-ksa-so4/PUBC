//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface ADJTimerOnce : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_source;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
    unsigned long long _start;	// 32 = 0x20
    NSDate *_fireDate;	// 40 = 0x28
    id <ADJLogger> _logger;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
}

+ (id)timerWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 name:(id)arg3;	// IMP=0x0000000100788854
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic) unsigned long long start; // @synthesize start=_start;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void).cxx_destruct;	// IMP=0x00000001007890d8
- (void)dealloc;	// IMP=0x0000000100788f44
- (void)cancel;	// IMP=0x0000000100788f34
- (void)cancel:(_Bool)arg1;	// IMP=0x0000000100788e30
- (void)startIn:(double)arg1;	// IMP=0x0000000100788be0
- (double)fireIn;	// IMP=0x0000000100788b54
- (id)initBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 name:(id)arg3;	// IMP=0x00000001007888fc

@end

