//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsCampaignsDbObserver.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface HsCampaignsInboxListInteractor : NSObject <HsCampaignsDbObserver>
{
    id <HsCampaignsInboxListObserver> _observer;	// 8 = 0x8
    id <HsCampaignsStorage> _storage;	// 16 = 0x10
    NSMutableArray *_campaignsList;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workerQueue;	// 32 = 0x20
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSMutableArray *campaignsList; // @synthesize campaignsList=_campaignsList;
@property(retain, nonatomic) id <HsCampaignsStorage> storage; // @synthesize storage=_storage;
@property(nonatomic) __weak id <HsCampaignsInboxListObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;	// IMP=0x0000000101446010
- (void)campaignRead:(id)arg1;	// IMP=0x0000000101445cc0
- (void)campaignSeen:(id)arg1;	// IMP=0x0000000101445a10
- (void)campaignIconImageLocalUrlUpdated:(id)arg1;	// IMP=0x0000000101445630
- (void)campaignDetailModelAdded:(id)arg1;	// IMP=0x00000001014453bc
- (void)markCampaignAsRead:(id)arg1;	// IMP=0x0000000101445084
- (void)deleteCampaignForId:(id)arg1;	// IMP=0x0000000101444c98
- (long long)getCountOfCampaigns;	// IMP=0x0000000101444c38
- (id)getCampaignInboxObjectAtIndex:(long long)arg1;	// IMP=0x0000000101444b28
- (void)waitForWorkerQueue;	// IMP=0x0000000101444ae4
- (void)cleanUp;	// IMP=0x0000000101444a9c
- (void)reloadCampaigns;	// IMP=0x0000000101444828
- (id)initWithCampaignsStorage:(id)arg1;	// IMP=0x0000000101444738

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

