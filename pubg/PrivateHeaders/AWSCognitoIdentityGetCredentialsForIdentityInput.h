//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSDictionary, NSString;

@interface AWSCognitoIdentityGetCredentialsForIdentityInput : AWSRequest
{
    NSString *_customRoleArn;	// 8 = 0x8
    NSString *_identityId;	// 16 = 0x10
    NSDictionary *_logins;	// 24 = 0x18
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bdea90
@property(retain, nonatomic) NSDictionary *logins; // @synthesize logins=_logins;
@property(retain, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
@property(retain, nonatomic) NSString *customRoleArn; // @synthesize customRoleArn=_customRoleArn;
- (void).cxx_destruct;	// IMP=0x0000000100bdeba8

@end

