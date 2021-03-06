//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsSyncProvider.h"

@class HsCampaignsInboxPoller, HsNetworkManager, NSString;

@interface HsCampaignsInboxNetworkManager : NSObject <HsSyncProvider>
{
    HsNetworkManager *_networkManager;	// 8 = 0x8
    id <HsNetworkDataProvider> _dataProvider;	// 16 = 0x10
    id <HsNetworkResponseDelegate> _responseProvider;	// 24 = 0x18
    HsCampaignsInboxPoller *_inboxPoller;	// 32 = 0x20
}

@property(retain, nonatomic) HsCampaignsInboxPoller *inboxPoller; // @synthesize inboxPoller=_inboxPoller;
@property(nonatomic) __weak id <HsNetworkResponseDelegate> responseProvider; // @synthesize responseProvider=_responseProvider;
@property(nonatomic) __weak id <HsNetworkDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) __weak HsNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
- (void).cxx_destruct;	// IMP=0x000000010147e068
- (_Bool)isFullSyncEnabled;	// IMP=0x000000010147dfa0
- (id)syncWithError:(id *)arg1;	// IMP=0x000000010147dbac
- (void)restartPoller;	// IMP=0x000000010147db30
- (void)startPolling;	// IMP=0x000000010147daf0
- (void)stopPolling;	// IMP=0x000000010147dab0
- (id)initWithNetworkManager:(id)arg1 andInboxSyncController:(id)arg2;	// IMP=0x000000010147d938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

