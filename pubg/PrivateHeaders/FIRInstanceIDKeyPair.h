//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface FIRInstanceIDKeyPair : NSObject
{
    struct __SecKey *_privateKey;	// 8 = 0x8
    struct __SecKey *_publicKey;	// 16 = 0x10
    NSData *_publicKeyData;	// 24 = 0x18
    NSData *_privateKeyData;	// 32 = 0x20
}

+ (id)appIdentityWithKeyPair:(id)arg1;	// IMP=0x000000010091bc60
+ (_Bool)deleteKeyPairWithPrivateTag:(id)arg1 publicTag:(id)arg2 error:(id *)arg3;	// IMP=0x000000010091babc
+ (_Bool)updateKeyRef:(struct __SecKey *)arg1 fromTag:(id)arg2 toTag:(id)arg3;	// IMP=0x000000010091b8fc
+ (struct __SecKey *)cachedKeyRefWithTag:(id)arg1;	// IMP=0x000000010091b858
+ (id)keyDataWithTag:(id)arg1;	// IMP=0x000000010091b79c
+ (id)queryDictWithTag:(id)arg1 addReturnAttr:(_Bool)arg2 withTypeData:(_Bool)arg3;	// IMP=0x000000010091b610
+ (id)keyPairForPrivateKeyTag:(id)arg1 publicKeyTag:(id)arg2 error:(id *)arg3;	// IMP=0x000000010091b418
+ (id)generateRSA2048KeyPairWithPrivateTag:(id)arg1 publicTag:(id)arg2 error:(id *)arg3;	// IMP=0x000000010091af00
@property(retain, nonatomic) NSData *privateKeyData; // @synthesize privateKeyData=_privateKeyData;
@property(retain, nonatomic) NSData *publicKeyData; // @synthesize publicKeyData=_publicKeyData;
- (void).cxx_destruct;	// IMP=0x000000010091be20
- (struct __SecKey *)privateKey;	// IMP=0x000000010091bc50
- (struct __SecKey *)publicKey;	// IMP=0x000000010091bc40
- (_Bool)isValid;	// IMP=0x000000010091bc10
- (void)dealloc;	// IMP=0x000000010091ae94
- (id)initWithPrivateKey:(struct __SecKey *)arg1 publicKey:(struct __SecKey *)arg2 publicKeyData:(id)arg3 privateKeyData:(id)arg4;	// IMP=0x000000010091adb4
- (id)init;	// IMP=0x000000010091ad80

@end

