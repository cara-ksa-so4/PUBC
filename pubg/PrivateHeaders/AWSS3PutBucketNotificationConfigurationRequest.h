//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3NotificationConfiguration, NSString;

@interface AWSS3PutBucketNotificationConfigurationRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    AWSS3NotificationConfiguration *_notificationConfiguration;	// 16 = 0x10
}

+ (id)notificationConfigurationJSONTransformer;	// IMP=0x0000000100c0da7c
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0d9e8
@property(retain, nonatomic) AWSS3NotificationConfiguration *notificationConfiguration; // @synthesize notificationConfiguration=_notificationConfiguration;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100c0db08

@end

