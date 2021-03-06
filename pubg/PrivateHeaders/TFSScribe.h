//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSObject<OS_dispatch_queue>, NSURL;

@interface TFSScribe : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSURL *_storeURL;	// 16 = 0x10
    NSURL *_modelURL;	// 24 = 0x18
    long long _requestID;	// 32 = 0x20
    NSManagedObjectContext *_managedObjectContext;	// 40 = 0x28
    unsigned int _flags;	// 48 = 0x30
    id <TFSScribeErrorDelegate> _errorDelegate;	// 56 = 0x38
}

+ (void)setDebugEnabled:(_Bool)arg1;	// IMP=0x00000001007f932c
+ (_Bool)isDebugEnabled;	// IMP=0x00000001007f9324
@property(nonatomic) __weak id <TFSScribeErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
- (void).cxx_destruct;	// IMP=0x00000001007fcbf4
- (id)_modelURL;	// IMP=0x00000001007fcb20
- (void)_handleScribeError:(id)arg1;	// IMP=0x00000001007fcab0
- (void)_resetScribeEvents;	// IMP=0x00000001007fc894
- (void)_removePersistentStore;	// IMP=0x00000001007fc678
- (void)_performInManagedObjectContext:(CDUnknownBlockType)arg1;	// IMP=0x00000001007fc4b0
- (void)_setupManagedObjectContext;	// IMP=0x00000001007fc178
- (void)_deleteImpressionsForUserID:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x00000001007fbfb0
- (void)_deleteEventsForUserID:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x00000001007fbde8
- (void)deleteUserID:(id)arg1;	// IMP=0x00000001007fbb8c
- (void)_didFlushEventsWithRequestID:(long long)arg1 disposition:(unsigned long long)arg2 userID:(id)arg3 managedObjectContext:(id)arg4;	// IMP=0x00000001007fb7c0
- (id)_flushEventsWithRequestID:(long long)arg1 userID:(id)arg2 managedObjectContext:(id)arg3;	// IMP=0x00000001007fb27c
- (void)_batchImpressionsForUserID:(id)arg1 requestHandler:(id)arg2 managedObjectContext:(id)arg3;	// IMP=0x00000001007faea0
- (void)flushUserID:(id)arg1 token:(id)arg2 requestHandler:(id)arg3;	// IMP=0x00000001007fa520
- (void)flushUserID:(id)arg1 requestHandler:(id)arg2;	// IMP=0x00000001007fa4cc
- (void)_enqueueImpression:(id)arg1 eventName:(id)arg2 query:(id)arg3 clientVersion:(id)arg4 timestamp:(id)arg5 userID:(id)arg6 managedObjectContext:(id)arg7;	// IMP=0x00000001007fa368
- (void)enqueueImpression:(id)arg1 eventName:(id)arg2 query:(id)arg3 clientVersion:(id)arg4 userID:(id)arg5;	// IMP=0x00000001007f9f30
- (void)_enqueueEvent:(id)arg1 timestamp:(id)arg2 managedObjectContext:(id)arg3;	// IMP=0x00000001007f9b78
- (void)enqueueEvent:(id)arg1;	// IMP=0x00000001007f9908
- (void)resume;	// IMP=0x00000001007f98bc
- (void)suspend;	// IMP=0x00000001007f9870
- (void)closeWithStartBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001007f9608
- (void)close;	// IMP=0x00000001007f95f4
- (void)openWithStartBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001007f9444
- (void)open;	// IMP=0x00000001007f9430
- (id)initWithStoreURL:(id)arg1 modelURL:(id)arg2;	// IMP=0x00000001007f9350
- (id)initWithStoreURL:(id)arg1;	// IMP=0x00000001007f9340
- (id)init;	// IMP=0x00000001007f9330

@end

