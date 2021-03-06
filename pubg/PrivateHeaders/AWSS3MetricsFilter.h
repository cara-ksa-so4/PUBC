//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3MetricsAndOperator, AWSS3Tag, NSString;

@interface AWSS3MetricsFilter : AWSModel
{
    AWSS3MetricsAndOperator *_AND;	// 8 = 0x8
    NSString *_prefix;	// 16 = 0x10
    AWSS3Tag *_tag;	// 24 = 0x18
}

+ (id)tagJSONTransformer;	// IMP=0x0000000100c0ac9c
+ (id)ANDJSONTransformer;	// IMP=0x0000000100c0ac58
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0abac
@property(retain, nonatomic) AWSS3Tag *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) AWSS3MetricsAndOperator *AND; // @synthesize AND=_AND;
- (void).cxx_destruct;	// IMP=0x0000000100c0ad4c

@end

