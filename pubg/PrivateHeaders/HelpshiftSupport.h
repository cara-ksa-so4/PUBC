//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsApiProvider.h"

@class NSString;

@interface HelpshiftSupport : NSObject <HsApiProvider>
{
    id <HelpshiftSupportDelegate> delegate;	// 8 = 0x8
}

+ (_Bool)setSDKLanguage:(id)arg1;	// IMP=0x000000010148abcc
+ (void)conversationViewControllerWithConfig:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010148a880
+ (id)flowToPerformCustomActionOnTarget:(id)arg1 andSelector:(SEL)arg2 withOptionalObject:(id)arg3 withDisplayText:(id)arg4;	// IMP=0x000000010148a7f8
+ (id)flowToShowNestedDynamicFormWithFlows:(id)arg1 withDisplayText:(id)arg2;	// IMP=0x000000010148a79c
+ (id)flowToShowSingleFAQForPublishId:(id)arg1 withDisplayText:(id)arg2 andConfig:(id)arg3;	// IMP=0x000000010148a71c
+ (id)flowToShowSingleFAQForPublishId:(id)arg1 withDisplayText:(id)arg2 andConfigOptions:(id)arg3;	// IMP=0x000000010148a66c
+ (id)flowToShowFAQSectionForPublishId:(id)arg1 withDisplayText:(id)arg2 andConfig:(id)arg3;	// IMP=0x000000010148a5ec
+ (id)flowToShowFAQSectionForPublishId:(id)arg1 withDisplayText:(id)arg2 andConfigOptions:(id)arg3;	// IMP=0x000000010148a53c
+ (id)flowToShowFAQsWithDisplayText:(id)arg1 andConfig:(id)arg2;	// IMP=0x000000010148a4e0
+ (id)flowToShowFAQsWithDisplayText:(id)arg1 andConfigOptions:(id)arg2;	// IMP=0x000000010148a44c
+ (id)flowToShowConversationWithDisplayText:(id)arg1 andConfig:(id)arg2;	// IMP=0x000000010148a3f0
+ (id)flowToShowConversationWithDisplayText:(id)arg1 andConfigOptions:(id)arg2;	// IMP=0x000000010148a35c
+ (void)requestDynamicFormWithTitle:(id)arg1 andFlows:(id)arg2;	// IMP=0x000000010148a1ac
+ (id)dynamicFormWithTitle:(id)arg1 andFlows:(id)arg2;	// IMP=0x0000000101489fcc
+ (_Bool)pushDynamicFormOnViewController:(id)arg1 withTitle:(id)arg2 andFlows:(id)arg3;	// IMP=0x0000000101489cd0
+ (_Bool)showDynamicFormOnViewController:(id)arg1 withTitle:(id)arg2 andFlowsData:(id)arg3 withConfigOptions:(id)arg4;	// IMP=0x0000000101489930
+ (_Bool)showDynamicFormOnViewController:(id)arg1 withTitle:(id)arg2 andFlows:(id)arg3 withConfig:(id)arg4;	// IMP=0x00000001014895a8
+ (_Bool)showDynamicFormOnViewController:(id)arg1 withTitle:(id)arg2 andFlows:(id)arg3 withConfigOptions:(id)arg4;	// IMP=0x00000001014894e0
+ (void)addLog:(id)arg1;	// IMP=0x00000001014894c4
+ (void)log:(id)arg1;	// IMP=0x0000000101489330
+ (_Bool)handleContinueUserActivity:(id)arg1 withController:(id)arg2 andRestorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000101489194
+ (void)closeHelpshiftSupportSession;	// IMP=0x00000001014890d8
+ (void)clearBreadCrumbs;	// IMP=0x000000010148901c
+ (void)handleLocalNotification:(id)arg1 withController:(id)arg2;	// IMP=0x0000000101488f5c
+ (void)handleRemoteNotification:(id)arg1 isAppLaunch:(_Bool)arg2 withController:(id)arg3;	// IMP=0x0000000101488d58
+ (void)handleRemoteNotification:(id)arg1 withController:(id)arg2;	// IMP=0x00000001014889dc
+ (void)requestUnreadMessagesCount:(_Bool)arg1;	// IMP=0x00000001014888d0
+ (long long)getNotificationCountFromRemote:(_Bool)arg1;	// IMP=0x00000001014887a4
+ (void)checkIfConversationActive;	// IMP=0x000000010148871c
+ (_Bool)isConversationActive;	// IMP=0x000000010148867c
+ (void)setMetadataObjectBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000101488568
+ (void)setMetadataBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000101488454
+ (void)leaveBreadCrumb:(id)arg1;	// IMP=0x0000000101488348
+ (void)setName:(id)arg1 andEmail:(id)arg2;	// IMP=0x00000001014881cc
+ (void)setUserIdentifier:(id)arg1;	// IMP=0x00000001014880c0
+ (void)showAlertToRateAppWithURL:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001014880a4
+ (void)showSingleFAQ:(id)arg1 withController:(id)arg2 withConfig:(id)arg3;	// IMP=0x0000000101487ea8
+ (void)showSingleFAQ:(id)arg1 withController:(id)arg2 withOptions:(id)arg3;	// IMP=0x0000000101487e0c
+ (void)showFAQSection:(id)arg1 withController:(id)arg2 withConfig:(id)arg3;	// IMP=0x0000000101487c10
+ (void)showFAQSection:(id)arg1 withController:(id)arg2 withOptions:(id)arg3;	// IMP=0x0000000101487b74
+ (void)showFAQs:(id)arg1 withConfig:(id)arg2;	// IMP=0x00000001014879c4
+ (void)showFAQs:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000001014877d8
+ (void)showConversation:(id)arg1 withConfig:(id)arg2;	// IMP=0x0000000101487628
+ (void)showConversation:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000001014875ac
+ (void)setLanguage:(id)arg1;	// IMP=0x000000010148746c
+ (void)pauseDisplayOfInAppNotification:(_Bool)arg1;	// IMP=0x0000000101487394
+ (id)sharedInstance;	// IMP=0x00000001014869f0
@property(retain, nonatomic) id <HelpshiftSupportDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;	// IMP=0x000000010148ad50
- (id)dynamicFormWithTitle:(id)arg1 andFlows:(id)arg2;	// IMP=0x000000010148ab70
- (_Bool)pushDynamicFormOnViewController:(id)arg1 withTitle:(id)arg2 andFlows:(id)arg3;	// IMP=0x000000010148aaf8
- (_Bool)showDynamicFormOnViewController:(id)arg1 withTitle:(id)arg2 andFlows:(id)arg3 withConfigOptions:(id)arg4;	// IMP=0x000000010148aa64
- (void)_handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000101487390
- (void)_handleInteractiveRemoteNotification:(id)arg1 forAction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001014872ec
- (void)_handleInteractiveLocalNotification:(id)arg1 forAction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000101487250
- (_Bool)_handleLocalNotificationWithUserInfoDictionary:(id)arg1 withController:(id)arg2;	// IMP=0x000000010148705c
- (_Bool)_handleRemoteNotification:(id)arg1 isAppLaunch:(_Bool)arg2 withController:(id)arg3;	// IMP=0x0000000101486ffc
- (_Bool)_handleRemoteNotification:(id)arg1 withController:(id)arg2;	// IMP=0x0000000101486c7c
- (_Bool)_setSDKLanguage:(id)arg1;	// IMP=0x0000000101486c00
- (void)_registerDeviceToken:(id)arg1;	// IMP=0x0000000101486bec
- (_Bool)_clearAnonymousUser;	// IMP=0x0000000101486bd8
- (_Bool)_logout;	// IMP=0x0000000101486bc4
- (_Bool)_login:(id)arg1;	// IMP=0x0000000101486bb0
- (void)_setName:(id)arg1 andEmail:(id)arg2;	// IMP=0x0000000101486b68
- (void)_installForApiKey:(id)arg1 domainName:(id)arg2 appID:(id)arg3 withConfig:(id)arg4;	// IMP=0x0000000101486ae0
- (void)_installForApiKey:(id)arg1 domainName:(id)arg2 appID:(id)arg3;	// IMP=0x0000000101486a70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

