//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKLoginDelegate.h"

@class NSString;

@interface IMSDKLoginTwitterManager : NSObject <IMSDKLoginDelegate>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001009346b0
+ (id)sharedInstance;	// IMP=0x00000001009343d0
- (_Bool)isSupportApi;	// IMP=0x0000000100935be0
- (_Bool)isInstalled;	// IMP=0x0000000100935bd8
- (void)logout;	// IMP=0x0000000100935ad0
- (void)bindWithSubChannel:(id)arg1 extra:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100935aa4
- (void)checkAndLoginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100935a3c
- (void)loginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x00000001009359d4
- (id)channelID;	// IMP=0x00000001009359a8
- (void)handleLoginWithSession:(id)arg1 actionType:(int)arg2 error:(id)arg3 handle:(CDUnknownBlockType)arg4;	// IMP=0x0000000100934d60
- (void)loginTwitterWithPermissions:(id)arg1 actionType:(int)arg2 handle:(CDUnknownBlockType)arg3;	// IMP=0x0000000100934714
- (id)mutablecopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100934700
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001009346d8
- (id)initSingleton;	// IMP=0x00000001009344ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

