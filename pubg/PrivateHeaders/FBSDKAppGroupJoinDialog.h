//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKWebDialogDelegate.h"

@class FBSDKWebDialog, NSString;

@interface FBSDKAppGroupJoinDialog : NSObject <FBSDKWebDialogDelegate>
{
    FBSDKWebDialog *_webDialog;	// 8 = 0x8
    id <FBSDKAppGroupJoinDialogDelegate> _delegate;	// 16 = 0x10
    NSString *_groupID;	// 24 = 0x18
}

+ (id)showWithGroupID:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010070dc5c
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) __weak id <FBSDKAppGroupJoinDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010070e444
- (void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2;	// IMP=0x000000010070e2f8
- (void)webDialogDidCancel:(id)arg1;	// IMP=0x000000010070e27c
- (void)webDialog:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010070e1f4
- (void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2;	// IMP=0x000000010070e068
- (_Bool)validateWithError:(id *)arg1;	// IMP=0x000000010070dfbc
- (_Bool)show;	// IMP=0x000000010070de20
- (_Bool)canShow;	// IMP=0x000000010070de18
- (void)dealloc;	// IMP=0x000000010070ddb8
- (id)init;	// IMP=0x000000010070dd08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

