//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TWTRErrorLogger.h"

@class NSString, TWTRScribeService;

@interface TWTRScribeSink : NSObject <TWTRErrorLogger>
{
    TWTRScribeService *_scribeService;	// 8 = 0x8
}

+ (id)verifyCredentialsUniqueNamespace;	// IMP=0x000000010081e920
+ (id)timelineImpressionNamespaceWithTimelineType:(unsigned long long)arg1;	// IMP=0x000000010081e884
+ (id)timelineUniqueNamespaceWithTimelineType:(unsigned long long)arg1;	// IMP=0x000000010081e738
+ (id)twitterKitLoginUsageNamespace;	// IMP=0x000000010081e6d0
+ (id)twitterKitTweetViewUsageNamespaceWithTweetViewStyle:(id)arg1 showingActions:(id)arg2;	// IMP=0x000000010081e61c
+ (id)tweetViewShareNamespace;	// IMP=0x000000010081e5a4
+ (id)tweetViewImpressionNamespaceWithStyle:(id)arg1 showingActions:(id)arg2;	// IMP=0x000000010081e4f0
+ (id)tweetLoadNamespace;	// IMP=0x000000010081e478
@property(retain, nonatomic) TWTRScribeService *scribeService; // @synthesize scribeService=_scribeService;
- (void).cxx_destruct;	// IMP=0x000000010081f588
- (id)authEventWithType:(id)arg1 eventName:(id)arg2;	// IMP=0x000000010081f43c
- (void)didFailWebLogin;	// IMP=0x000000010081f3b8
- (void)didCancelWebLogin;	// IMP=0x000000010081f334
- (void)didFinishWebLogin;	// IMP=0x000000010081f2b0
- (void)didStartWebLogin;	// IMP=0x000000010081f22c
- (void)didFailSafariLogin;	// IMP=0x000000010081f1a8
- (void)didCancelSafariLogin;	// IMP=0x000000010081f124
- (void)didFinishSafariLogin;	// IMP=0x000000010081f0a0
- (void)didStartSafariLogin;	// IMP=0x000000010081f01c
- (void)didFailSSOLogin;	// IMP=0x000000010081ef98
- (void)didCancelSSOLogin;	// IMP=0x000000010081ef14
- (void)didFinishSSOLogin;	// IMP=0x000000010081ee90
- (void)didStartSSOLogin;	// IMP=0x000000010081ee0c
- (void)didTapSendFromComposerWithSelectedUserID:(id)arg1;	// IMP=0x000000010081ecf4
- (void)didTapCancelFromComposerWithSelectedUserID:(id)arg1;	// IMP=0x000000010081ebdc
- (void)didOpenComposer;	// IMP=0x000000010081eab4
- (void)didEncounterError:(id)arg1 withMessage:(id)arg2;	// IMP=0x000000010081e988
- (id)currentUserID;	// IMP=0x000000010081e3b0
- (id)uniqueScribeEventWithNamespace:(id)arg1;	// IMP=0x000000010081e308
- (void)scribeUniqueEventWithNamespace:(id)arg1;	// IMP=0x000000010081e258
- (void)scribeImpressionEventWithTweetID:(id)arg1 userID:(id)arg2 namespace:(id)arg3 items:(id)arg4;	// IMP=0x000000010081e150
- (void)didVerifyCredentialsForSession:(id)arg1;	// IMP=0x000000010081e064
- (void)didStartOAuthLogin;	// IMP=0x000000010081df78
- (void)didSeeTweetViewWithStyle:(id)arg1 showingActions:(id)arg2;	// IMP=0x000000010081de4c
- (void)didShareTweetWithID:(id)arg1 forUserID:(id)arg2 fromViewName:(unsigned long long)arg3;	// IMP=0x000000010081dcf8
- (void)didDismissPhotoGallery;	// IMP=0x000000010081dbf8
- (void)didNavigateInsideGallery;	// IMP=0x000000010081daf8
- (void)didSeeMediaEntity:(id)arg1 fromTweetID:(id)arg2;	// IMP=0x000000010081d9e0
- (void)didPresentPhotoGallery;	// IMP=0x000000010081d8e0
- (void)didPlayPercentOfMedia:(unsigned long long)arg1 fromPlaybackConfiguration:(id)arg2 inTweetID:(id)arg3 publishedByOwnerID:(id)arg4;	// IMP=0x000000010081d54c
- (void)didShowMediaEntities:(id)arg1 inTweetID:(id)arg2 publishedByOwnerID:(id)arg3;	// IMP=0x000000010081d074
- (void)didShowQuoteTweetDetailWithTweetID:(id)arg1;	// IMP=0x000000010081cf84
- (void)didShowTweetDetailWithTweetID:(id)arg1 forUserID:(id)arg2;	// IMP=0x000000010081ce7c
- (void)didShowQuoteTweetWithID:(id)arg1;	// IMP=0x000000010081cd88
- (void)didShowTweetWithID:(id)arg1 style:(unsigned long long)arg2 showingActions:(_Bool)arg3;	// IMP=0x000000010081cc58
- (void)didUnlikeTweetWithID:(id)arg1 forUserID:(id)arg2 fromViewName:(unsigned long long)arg3;	// IMP=0x000000010081cb38
- (void)didLikeTweetWithID:(id)arg1 forUserID:(id)arg2 fromViewName:(unsigned long long)arg3;	// IMP=0x000000010081c9bc
- (void)didFilterWithTweetsShown:(unsigned long long)arg1;	// IMP=0x000000010081c7b0
- (void)didFilterRequestedTweets:(unsigned long long)arg1 totalFilters:(unsigned long long)arg2 totalFilteredTweets:(unsigned long long)arg3;	// IMP=0x000000010081c594
- (void)didShowTimelineOfType:(unsigned long long)arg1 timelineID:(id)arg2;	// IMP=0x000000010081c3d4
- (void)didLoadTweetsWithIDs:(id)arg1;	// IMP=0x000000010081c17c
- (id)initWithScribeService:(id)arg1;	// IMP=0x000000010081c0f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

