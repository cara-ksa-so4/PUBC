//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSError, NSException, NSMutableArray;

@interface BFTask : NSObject
{
    id _result;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSException *_exception;	// 24 = 0x18
    _Bool _cancelled;	// 32 = 0x20
    _Bool _faulted;	// 33 = 0x21
    _Bool _completed;	// 34 = 0x22
    NSObject *_lock;	// 40 = 0x28
    NSCondition *_condition;	// 48 = 0x30
    NSMutableArray *_callbacks;	// 56 = 0x38
}

+ (id)taskFromExecutor:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001006a0de4
+ (id)taskWithDelay:(int)arg1 cancellationToken:(id)arg2;	// IMP=0x00000001006a0be4
+ (id)taskWithDelay:(int)arg1;	// IMP=0x00000001006a0ac4
+ (id)taskForCompletionOfAnyTask:(id)arg1;	// IMP=0x00000001006a0260
+ (id)taskForCompletionOfAllTasksWithResults:(id)arg1;	// IMP=0x00000001006a0168
+ (id)taskForCompletionOfAllTasks:(id)arg1;	// IMP=0x000000010069f990
+ (id)cancelledTask;	// IMP=0x000000010069f968
+ (id)taskWithException:(id)arg1;	// IMP=0x000000010069f904
+ (id)taskWithError:(id)arg1;	// IMP=0x000000010069f8a0
+ (id)taskWithResult:(id)arg1;	// IMP=0x000000010069f83c
@property(retain, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic, getter=isFaulted) _Bool faulted; // @synthesize faulted=_faulted;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;	// IMP=0x00000001006a26d8
- (id)description;	// IMP=0x00000001006a2464
- (void)waitUntilFinished;	// IMP=0x00000001006a2300
- (void)warnOperationOnMainThread;	// IMP=0x00000001006a22fc
- (id)continueWithSuccessBlock:(CDUnknownBlockType)arg1 cancellationToken:(id)arg2;	// IMP=0x00000001006a2244
- (id)continueWithSuccessBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001006a21ac
- (id)continueWithExecutor:(id)arg1 successBlock:(CDUnknownBlockType)arg2 cancellationToken:(id)arg3;	// IMP=0x00000001006a2004
- (id)continueWithExecutor:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001006a1fa0
- (id)continueWithBlock:(CDUnknownBlockType)arg1 cancellationToken:(id)arg2;	// IMP=0x00000001006a1ee8
- (id)continueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001006a1e50
- (id)continueWithExecutor:(id)arg1 block:(CDUnknownBlockType)arg2 cancellationToken:(id)arg3;	// IMP=0x00000001006a1728
- (id)continueWithExecutor:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001006a16c4
- (void)runContinuations;	// IMP=0x00000001006a1494
- (_Bool)trySetCancelled;	// IMP=0x00000001006a1384
- (_Bool)trySetException:(id)arg1;	// IMP=0x00000001006a11e4
@property(readonly, nonatomic) NSException *exception;
- (_Bool)trySetError:(id)arg1;	// IMP=0x00000001006a1094
@property(readonly, nonatomic) NSError *error;
- (_Bool)trySetResult:(id)arg1;	// IMP=0x00000001006a0f58
@property(readonly, nonatomic) id result;
- (id)initCancelled;	// IMP=0x000000010069f7d0
- (id)initWithException:(id)arg1;	// IMP=0x000000010069f748
- (id)initWithError:(id)arg1;	// IMP=0x000000010069f6c0
- (id)initWithResult:(id)arg1;	// IMP=0x000000010069f638
- (id)init;	// IMP=0x000000010069f534

@end

