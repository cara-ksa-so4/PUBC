//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface GADCorrelator : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;	// 8 = 0x8
    unsigned int _correlationID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001009e0f38
@property(readonly) unsigned int correlationID;
- (void)reset;	// IMP=0x00000001009e0d40
- (id)init;	// IMP=0x00000001009e0cb0

@end

