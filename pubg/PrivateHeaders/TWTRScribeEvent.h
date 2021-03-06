//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFSScribeEventParameters.h"

@class NSArray, NSNumber, NSString, TWTRScribeClientEventNamespace;

@interface TWTRScribeEvent : NSObject <TFSScribeEventParameters>
{
    NSString *_userID;	// 8 = 0x8
    NSString *_tweetID;	// 16 = 0x10
    NSString *_eventInfo;	// 24 = 0x18
    unsigned long long _category;	// 32 = 0x20
    TWTRScribeClientEventNamespace *_eventNamespace;	// 40 = 0x28
    NSArray *_items;	// 48 = 0x30
    NSNumber *_timestamp;	// 56 = 0x38
    NSString *_currentLanguage;	// 64 = 0x40
}

+ (id)categoryStringFromEnum:(unsigned long long)arg1;	// IMP=0x00000001007ffe68
@property(readonly, copy, nonatomic) NSString *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(readonly, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) TWTRScribeClientEventNamespace *eventNamespace; // @synthesize eventNamespace=_eventNamespace;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(readonly, copy, nonatomic) NSString *tweetID; // @synthesize tweetID=_tweetID;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;	// IMP=0x00000001007fff34
- (id)data;	// IMP=0x00000001007ffdfc
- (id)dictionaryRepresentation;	// IMP=0x00000001007ffdf0
- (id)standardParameters;	// IMP=0x00000001007ff8d0
- (id)initWithUserID:(id)arg1 eventInfo:(id)arg2 category:(unsigned long long)arg3 eventNamespace:(id)arg4 items:(id)arg5;	// IMP=0x00000001007ff800
- (id)initWithUserID:(id)arg1 tweetID:(id)arg2 category:(unsigned long long)arg3 eventNamespace:(id)arg4 items:(id)arg5;	// IMP=0x00000001007ff580
- (id)init;	// IMP=0x00000001007ff568

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

