//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

@interface VungleOperationQueue : NSOperationQueue
{
    id <OperationQueueDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <OperationQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100af5f20
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x0000000100af5d18
- (void)addOperation:(id)arg1;	// IMP=0x0000000100af55d4

@end

