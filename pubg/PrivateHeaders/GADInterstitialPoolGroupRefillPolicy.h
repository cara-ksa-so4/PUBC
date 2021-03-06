//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADInterstitialPoolRefilling.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString;

@interface GADInterstitialPoolGroupRefillPolicy : NSObject <GADInterstitialPoolRefilling>
{
    NSHashTable *_pools;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_lockQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001009922d0
- (void)addPool:(id)arg1;	// IMP=0x00000001009921b8
- (void)fillPools;	// IMP=0x0000000100992014
- (id)init;	// IMP=0x0000000100991f14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

