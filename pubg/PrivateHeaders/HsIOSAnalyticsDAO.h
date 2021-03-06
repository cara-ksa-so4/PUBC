//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsAnalyticsDao.h"

@class HsIOSKVStroreProvider, NSString;

@interface HsIOSAnalyticsDAO : NSObject <HsAnalyticsDao>
{
    HsIOSKVStroreProvider *_storeProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000101448260
- (id)unsyncedAnalyticsDataWithError:(id *)arg1;	// IMP=0x00000001014481e8
- (void)purgeStoredAnalyticsDataForKey:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001014480f4
- (void)storeUnsyncedAnalyticsData:(id)arg1 forKey:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000101447fe4
- (id)initWithPlatform:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000101447f30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

