//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKWebViewJavascriptBridgeBaseDelegate.h"
#import "WKNavigationDelegate.h"

@class IMSDKWebViewJavascriptBridgeBase, NSString, WKWebView;

@interface IMSDKWKWebViewJavascriptBridge : NSObject <WKNavigationDelegate, IMSDKWebViewJavascriptBridgeBaseDelegate>
{
    WKWebView *_webView;	// 8 = 0x8
    id <WKNavigationDelegate> _webViewDelegate;	// 16 = 0x10
    long long _uniqueId;	// 24 = 0x18
    IMSDKWebViewJavascriptBridgeBase *_base;	// 32 = 0x20
}

+ (id)bridgeForWebView:(id)arg1;	// IMP=0x0000000100698064
+ (void)enableLogging;	// IMP=0x0000000100698050
- (void).cxx_destruct;	// IMP=0x0000000100698df8
- (id)_evaluateJavascript:(id)arg1;	// IMP=0x0000000100698d94
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100698cb0
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100698bcc
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x0000000100698b0c
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100698918
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010069881c
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100698724
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x0000000100698664
- (void)WKFlushMessageQueue;	// IMP=0x0000000100698510
- (void)_setupInstance:(id)arg1;	// IMP=0x0000000100698450
- (void)dealloc;	// IMP=0x00000001006983a8
- (void)disableJavscriptAlertBoxSafetyTimeout;	// IMP=0x0000000100698390
- (void)setWebViewDelegate:(id)arg1;	// IMP=0x000000010069837c
- (void)reset;	// IMP=0x0000000100698364
- (void)removeHandler:(id)arg1;	// IMP=0x00000001006982ec
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010069822c
- (void)callHandler:(id)arg1 data:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000001006981b8
- (void)callHandler:(id)arg1 data:(id)arg2;	// IMP=0x0000000100698164
- (void)callHandler:(id)arg1;	// IMP=0x0000000100698150
- (void)send:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;	// IMP=0x00000001006980f4
- (void)send:(id)arg1;	// IMP=0x00000001006980e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

