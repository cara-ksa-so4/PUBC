//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"

@class MidasIAPUserInfo, MidasIapOrderInfo, NSMutableSet, NSString, SKProductsRequest;

@interface MidasIAPProductInfoRequester : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    _Bool _fromIntroPrice;	// 8 = 0x8
    MidasIapOrderInfo *_orderInfo;	// 16 = 0x10
    MidasIAPUserInfo *_userInfo;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
    SKProductsRequest *_req;	// 40 = 0x28
    NSMutableSet *_ids;	// 48 = 0x30
    SKProductsRequest *_preheatReq;	// 56 = 0x38
    CDUnknownBlockType _preHeatCompletion;	// 64 = 0x40
}

@property(copy, nonatomic) CDUnknownBlockType preHeatCompletion; // @synthesize preHeatCompletion=_preHeatCompletion;
@property(retain, nonatomic) SKProductsRequest *preheatReq; // @synthesize preheatReq=_preheatReq;
@property(retain, nonatomic) NSMutableSet *ids; // @synthesize ids=_ids;
@property(retain, nonatomic) SKProductsRequest *req; // @synthesize req=_req;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool fromIntroPrice; // @synthesize fromIntroPrice=_fromIntroPrice;
@property(retain, nonatomic) MidasIAPUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) MidasIapOrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
- (void).cxx_destruct;	// IMP=0x00000001005abe94
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001005ab858
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000001005ab014
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;	// IMP=0x00000001005ab010
- (id)json;	// IMP=0x00000001005aa368
- (_Bool)needRequest:(id)arg1;	// IMP=0x00000001005aa030
- (void)prepare:(id)arg1;	// IMP=0x00000001005a9d2c
- (void)preheatProuctInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001005a9c08
- (void)callGetProductInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001005a95c0
- (void)dealloc;	// IMP=0x00000001005a9484

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

