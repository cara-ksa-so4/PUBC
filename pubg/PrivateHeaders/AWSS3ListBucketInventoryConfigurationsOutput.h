//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSNumber, NSString;

@interface AWSS3ListBucketInventoryConfigurationsOutput : AWSModel
{
    NSString *_continuationToken;	// 8 = 0x8
    NSArray *_inventoryConfigurationList;	// 16 = 0x10
    NSNumber *_isTruncated;	// 24 = 0x18
    NSString *_nextContinuationToken;	// 32 = 0x20
}

+ (id)inventoryConfigurationListJSONTransformer;	// IMP=0x0000000100c06eec
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c06e28
@property(retain, nonatomic) NSString *nextContinuationToken; // @synthesize nextContinuationToken=_nextContinuationToken;
@property(retain, nonatomic) NSNumber *isTruncated; // @synthesize isTruncated=_isTruncated;
@property(retain, nonatomic) NSArray *inventoryConfigurationList; // @synthesize inventoryConfigurationList=_inventoryConfigurationList;
@property(retain, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
- (void).cxx_destruct;	// IMP=0x0000000100c06fc0

@end

