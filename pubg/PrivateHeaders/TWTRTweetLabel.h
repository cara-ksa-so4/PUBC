//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TWTRAttributedLabel.h"

@class NSArray, UIColor;

@interface TWTRTweetLabel : TWTRAttributedLabel
{
    UIColor *_linkColor;	// 8 = 0x8
    long long _entityDisplayTypes;	// 16 = 0x10
    NSArray *_entityRanges;	// 24 = 0x18
}

@property(readonly, nonatomic) NSArray *entityRanges; // @synthesize entityRanges=_entityRanges;
@property(nonatomic) long long entityDisplayTypes; // @synthesize entityDisplayTypes=_entityDisplayTypes;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
- (void).cxx_destruct;	// IMP=0x0000000100854c18
- (_Bool)entityExistsAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000100854b9c
- (void)updateTextAlignment:(id)arg1;	// IMP=0x0000000100854b48
- (void)setTextFromTweet:(id)arg1;	// IMP=0x0000000100854994
- (void)layoutSubviews;	// IMP=0x00000001008547bc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001008546f8
- (id)init;	// IMP=0x00000001008546dc

@end

