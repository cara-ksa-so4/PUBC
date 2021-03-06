//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSObject<OS_dispatch_queue>, NSRecursiveLock;

@interface VKOperation : NSOperation
{
    _Bool _wasCancelled;	// 24 = 0x18
    long long _state;	// 32 = 0x20
    NSRecursiveLock *_lock;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_responseQueue;	// 48 = 0x30
}

@property(nonatomic, getter=isCancelled) _Bool wasCancelled; // @synthesize wasCancelled=_wasCancelled;
@property(nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;	// IMP=0x0000000100b6a888
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100b6a5ec
- (void)cancel;	// IMP=0x0000000100b6a56c
- (_Bool)isConcurrent;	// IMP=0x0000000100b6a564
- (_Bool)isFinished;	// IMP=0x0000000100b6a540
- (_Bool)isExecuting;	// IMP=0x0000000100b6a51c
- (_Bool)isReady;	// IMP=0x0000000100b6a4bc
- (id)init;	// IMP=0x0000000100b6a1d4

@end

