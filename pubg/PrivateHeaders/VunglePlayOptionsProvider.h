//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface VunglePlayOptionsProvider : NSObject <NSCopying>
{
    _Bool _startMuted;	// 8 = 0x8
    NSString *_placement;	// 16 = 0x10
    NSString *_user;	// 24 = 0x18
    NSDictionary *_extraInformation;	// 32 = 0x20
    unsigned long long _supportedOrientations;	// 40 = 0x28
    unsigned long long _ordinalView;	// 48 = 0x30
    double _flexAutoCloseTime;	// 56 = 0x38
    NSString *_incentivizedAlertTitle;	// 64 = 0x40
    NSString *_incentivizedAlertBody;	// 72 = 0x48
    NSString *_incentivizedAlertCloseButtonLabel;	// 80 = 0x50
    NSString *_incentivizedAlertContinueButtonLabel;	// 88 = 0x58
}

@property(copy, nonatomic) NSString *incentivizedAlertContinueButtonLabel; // @synthesize incentivizedAlertContinueButtonLabel=_incentivizedAlertContinueButtonLabel;
@property(copy, nonatomic) NSString *incentivizedAlertCloseButtonLabel; // @synthesize incentivizedAlertCloseButtonLabel=_incentivizedAlertCloseButtonLabel;
@property(copy, nonatomic) NSString *incentivizedAlertBody; // @synthesize incentivizedAlertBody=_incentivizedAlertBody;
@property(copy, nonatomic) NSString *incentivizedAlertTitle; // @synthesize incentivizedAlertTitle=_incentivizedAlertTitle;
@property(nonatomic) double flexAutoCloseTime; // @synthesize flexAutoCloseTime=_flexAutoCloseTime;
@property(nonatomic) unsigned long long ordinalView; // @synthesize ordinalView=_ordinalView;
@property(nonatomic) _Bool startMuted; // @synthesize startMuted=_startMuted;
@property(nonatomic) unsigned long long supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(copy, nonatomic) NSDictionary *extraInformation; // @synthesize extraInformation=_extraInformation;
@property(copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSString *placement; // @synthesize placement=_placement;
- (void).cxx_destruct;	// IMP=0x0000000100acf838
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100acf4cc
- (void)assignPropertiesWithPlayOptions:(id)arg1;	// IMP=0x0000000100acf130
- (_Bool)validateExtraInfoDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100aceeb8
- (_Bool)validatePlayOptionsDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100acec78
- (id)customIncentivizedTexts;	// IMP=0x0000000100acea68
- (id)incentivizedAlertControllerWithOKBlock:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100ace704
- (id)initWithPlayOptionsDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100ace620

@end

