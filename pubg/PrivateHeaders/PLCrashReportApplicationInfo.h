//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PLCrashReportApplicationInfo : NSObject
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    NSString *_applicationVersion;	// 16 = 0x10
}

@property(readonly, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(readonly, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void)dealloc;	// IMP=0x0000000101581ca0
- (id)initWithApplicationIdentifier:(id)arg1 applicationVersion:(id)arg2;	// IMP=0x0000000101581c08

@end

