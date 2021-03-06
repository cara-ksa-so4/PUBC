//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface HsRequestModel : NSObject
{
    short _method;	// 8 = 0x8
    short _requestMode;	// 10 = 0xa
    NSString *_requestId;	// 16 = 0x10
    NSString *_url;	// 24 = 0x18
    NSDictionary *_data;	// 32 = 0x20
}

@property(nonatomic) short requestMode; // @synthesize requestMode=_requestMode;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) short method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;	// IMP=0x0000000101405f24
- (id)initPostRequestForUrl:(id)arg1 withData:(id)arg2 withRequestMode:(short)arg3;	// IMP=0x0000000101405dfc
- (id)initGetRequestForUrl:(id)arg1 withData:(id)arg2 withRequestMode:(short)arg3;	// IMP=0x0000000101405d80
- (id)initRequestForUrl:(id)arg1 withData:(id)arg2 withRequestMode:(short)arg3;	// IMP=0x0000000101405c38

@end

