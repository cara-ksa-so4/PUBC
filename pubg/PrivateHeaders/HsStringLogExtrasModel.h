//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsLogExtrasModel.h"

@class NSString;

@interface HsStringLogExtrasModel : NSObject <HsLogExtrasModel>
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;	// IMP=0x00000001013cc600
- (id)consoleLoggingMessage;	// IMP=0x00000001013cc4d0
- (id)initWithKey:(id)arg1 value:(id)arg2;	// IMP=0x00000001013cc41c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

