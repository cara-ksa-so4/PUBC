//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3MetricsConfiguration, NSString;

@interface AWSS3PutBucketMetricsConfigurationRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    AWSS3MetricsConfiguration *_metricsConfiguration;	// 24 = 0x18
}

+ (id)metricsConfigurationJSONTransformer;	// IMP=0x0000000100c0d8e4
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0d838
@property(retain, nonatomic) AWSS3MetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100c0d994

@end

