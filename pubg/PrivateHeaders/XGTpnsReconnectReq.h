//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XGJceObjectV2.h"

@class NSArray, NSString, XGMutableInfo;

@interface XGTpnsReconnectReq : XGJceObjectV2
{
    unsigned char jcev2_p_2_r_networkType;	// 8 = 0x8
    unsigned char jcev2_p_6_o_deviceType;	// 9 = 0x9
    unsigned int jcev2_p_10_o_connVersion;	// 12 = 0xc
    NSString *jcev2_p_0_r_token;	// 16 = 0x10
    NSString *jcev2_p_1_r_deviceId;	// 24 = 0x18
    NSArray *jcev2_p_3_o_unregInfoList__b0x9i_VOXGUnregInfo;	// 32 = 0x20
    NSArray *jcev2_p_4_o_recvMsgList__b0x9i_VOXGTpnsPushClientReport;	// 40 = 0x28
    XGMutableInfo *jcev2_p_5_o_mutableInfo;	// 48 = 0x30
    NSArray *jcev2_p_7_o_msgClickList__b0x9i_VOXGTpnsClickClientReport;	// 56 = 0x38
    NSString *jcev2_p_8_o_sdkVersion;	// 64 = 0x40
    NSString *jcev2_p_9_o_reserved;	// 72 = 0x48
    long long jcev2_p_11_o_guid;	// 80 = 0x50
}

+ (id)jceType;	// IMP=0x00000001014d5ac4
+ (void)initialize;	// IMP=0x00000001014d5984
@property(nonatomic, getter=jce_guid, setter=setJce_guid:) long long jcev2_p_11_o_guid; // @synthesize jcev2_p_11_o_guid;
@property(nonatomic, getter=jce_connVersion, setter=setJce_connVersion:) unsigned int jcev2_p_10_o_connVersion; // @synthesize jcev2_p_10_o_connVersion;
@property(retain, nonatomic, getter=jce_reserved, setter=setJce_reserved:) NSString *jcev2_p_9_o_reserved; // @synthesize jcev2_p_9_o_reserved;
@property(retain, nonatomic, getter=jce_sdkVersion, setter=setJce_sdkVersion:) NSString *jcev2_p_8_o_sdkVersion; // @synthesize jcev2_p_8_o_sdkVersion;
@property(retain, nonatomic, getter=jce_msgClickList, setter=setJce_msgClickList:) NSArray *jcev2_p_7_o_msgClickList__b0x9i_VOXGTpnsClickClientReport; // @synthesize jcev2_p_7_o_msgClickList__b0x9i_VOXGTpnsClickClientReport;
@property(nonatomic, getter=jce_deviceType, setter=setJce_deviceType:) unsigned char jcev2_p_6_o_deviceType; // @synthesize jcev2_p_6_o_deviceType;
@property(retain, nonatomic, getter=jce_mutableInfo, setter=setJce_mutableInfo:) XGMutableInfo *jcev2_p_5_o_mutableInfo; // @synthesize jcev2_p_5_o_mutableInfo;
@property(retain, nonatomic, getter=jce_recvMsgList, setter=setJce_recvMsgList:) NSArray *jcev2_p_4_o_recvMsgList__b0x9i_VOXGTpnsPushClientReport; // @synthesize jcev2_p_4_o_recvMsgList__b0x9i_VOXGTpnsPushClientReport;
@property(retain, nonatomic, getter=jce_unregInfoList, setter=setJce_unregInfoList:) NSArray *jcev2_p_3_o_unregInfoList__b0x9i_VOXGUnregInfo; // @synthesize jcev2_p_3_o_unregInfoList__b0x9i_VOXGUnregInfo;
@property(nonatomic, getter=jce_networkType, setter=setJce_networkType:) unsigned char jcev2_p_2_r_networkType; // @synthesize jcev2_p_2_r_networkType;
@property(retain, nonatomic, getter=jce_deviceId, setter=setJce_deviceId:) NSString *jcev2_p_1_r_deviceId; // @synthesize jcev2_p_1_r_deviceId;
@property(retain, nonatomic, getter=jce_token, setter=setJce_token:) NSString *jcev2_p_0_r_token; // @synthesize jcev2_p_0_r_token;
- (void).cxx_destruct;	// IMP=0x00000001014d5c90
- (id)init;	// IMP=0x00000001014d5a24

@end

