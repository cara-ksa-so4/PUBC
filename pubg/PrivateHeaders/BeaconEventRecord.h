//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeaconPersistObject.h"

#import "NSMutableCopying.h"

@class NSMutableDictionary, NSString;

@interface BeaconEventRecord : BeaconPersistObject <NSMutableCopying>
{
    _Bool isSuccess;	// 52 = 0x34
    _Bool isRealEvent;	// 53 = 0x35
    int eventType;	// 56 = 0x38
    NSString *apn;	// 64 = 0x40
    NSString *srcIp;	// 72 = 0x48
    NSString *eventName;	// 80 = 0x50
    NSString *eventValue;	// 88 = 0x58
    long long eventTime;	// 96 = 0x60
    long long elapse;	// 104 = 0x68
    long long packageSize;	// 112 = 0x70
    NSMutableDictionary *params;	// 120 = 0x78
}

+ (id)initWithEName:(id)arg1 eValue:(id)arg2 apn:(id)arg3 srcIp:(id)arg4 eTime:(long long)arg5 elapse:(long long)arg6 pkgSize:(long long)arg7 isSuccess:(_Bool)arg8;	// IMP=0x00000001007bad20
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params;
@property(nonatomic) _Bool isRealEvent; // @synthesize isRealEvent;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess;
@property(nonatomic) long long packageSize; // @synthesize packageSize;
@property(nonatomic) long long elapse; // @synthesize elapse;
@property(nonatomic) int eventType; // @synthesize eventType;
@property(nonatomic) long long eventTime; // @synthesize eventTime;
@property(retain, nonatomic) NSString *eventValue; // @synthesize eventValue;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName;
@property(retain, nonatomic) NSString *srcIp; // @synthesize srcIp;
@property(retain, nonatomic) NSString *apn; // @synthesize apn;
- (void).cxx_destruct;	// IMP=0x00000001007bb89c
- (void)dealloc;	// IMP=0x00000001007bb5cc
- (id)createWUPModel;	// IMP=0x00000001007bb22c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001007baec4

@end

