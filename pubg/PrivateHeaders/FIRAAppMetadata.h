//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FIRAAppMetadata : NSObject
{
    int _lastBundleIndex;	// 8 = 0x8
    double _lastBundleStartTimestamp;	// 16 = 0x10
    double _lastBundleEndTimestamp;	// 24 = 0x18
}

@property(nonatomic) double lastBundleEndTimestamp; // @synthesize lastBundleEndTimestamp=_lastBundleEndTimestamp;
@property(nonatomic) double lastBundleStartTimestamp; // @synthesize lastBundleStartTimestamp=_lastBundleStartTimestamp;
@property(readonly, nonatomic) int lastBundleIndex; // @synthesize lastBundleIndex=_lastBundleIndex;
- (void)incrementLastBundleIndex;	// IMP=0x000000010089ff38
- (id)initWithLastBundleIndex:(int)arg1 lastBundleStartTimestamp:(double)arg2 lastBundleEndTimestamp:(double)arg3;	// IMP=0x000000010089fe54

@end

