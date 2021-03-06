//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsMessageTableViewCell.h"

@class UIColor, UIImageView, UIView;

@interface HsTypingIndicatorTableViewCell : HsMessageTableViewCell
{
    UIView *_indicatorView1;	// 8 = 0x8
    UIView *_indicatorView2;	// 16 = 0x10
    UIView *_indicatorView3;	// 24 = 0x18
    UIImageView *_bubbleImageView;	// 32 = 0x20
    UIColor *_startColor;	// 40 = 0x28
    UIColor *_endColor;	// 48 = 0x30
    double _animationDuration;	// 56 = 0x38
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(retain, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
@property(nonatomic) __weak UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(nonatomic) __weak UIView *indicatorView3; // @synthesize indicatorView3=_indicatorView3;
@property(nonatomic) __weak UIView *indicatorView2; // @synthesize indicatorView2=_indicatorView2;
@property(nonatomic) __weak UIView *indicatorView1; // @synthesize indicatorView1=_indicatorView1;
- (void).cxx_destruct;	// IMP=0x0000000101373208
- (void)applyTheming;	// IMP=0x0000000101373004
- (id)bubbleImage;	// IMP=0x0000000101372fd8
- (id)typingViewForIndex:(int)arg1;	// IMP=0x0000000101372fa0
- (void)animateTyping;	// IMP=0x0000000101372c0c
- (void)setupViewsDefaults;	// IMP=0x000000010137298c
- (void)updateWithDM:(id)arg1;	// IMP=0x0000000101372890
- (void)awakeFromNib;	// IMP=0x0000000101372830

@end

