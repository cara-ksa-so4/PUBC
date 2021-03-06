//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, VungleNetworkManager, VungleOperationQueue;

@interface VungleReportAdController : NSObject
{
    _Bool _isSendingReports;	// 8 = 0x8
    VungleNetworkManager *_networkManager;	// 16 = 0x10
    VungleOperationQueue *_reportAdQueue;	// 24 = 0x18
    NSURL *_URL;	// 32 = 0x20
}

@property(nonatomic) _Bool isSendingReports; // @synthesize isSendingReports=_isSendingReports;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) VungleOperationQueue *reportAdQueue; // @synthesize reportAdQueue=_reportAdQueue;
@property(nonatomic) __weak VungleNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
- (void).cxx_destruct;	// IMP=0x0000000100ab86e4
- (id)sortSavedAdReportsByCreationDate:(id)arg1;	// IMP=0x0000000100ab8504
- (id)savedAdReportsDirectoryContentsWithError:(id *)arg1;	// IMP=0x0000000100ab83a4
- (id)sortedSavedReportURLs;	// IMP=0x0000000100ab82f8
- (void)dispatchSendReportsOperation:(CDUnknownBlockType)arg1;	// IMP=0x0000000100ab8014
- (_Bool)saveReport:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100ab7f24
- (void)sendSavedReports:(CDUnknownBlockType)arg1;	// IMP=0x0000000100ab7db0
- (id)initWithURL:(id)arg1 networkManager:(id)arg2;	// IMP=0x0000000100ab7cc8

@end

