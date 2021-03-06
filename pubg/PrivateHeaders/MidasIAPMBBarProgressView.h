//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface MidasIAPMBBarProgressView : UIView
{
    float _progress;	// 8 = 0x8
    UIColor *_lineColor;	// 16 = 0x10
    UIColor *_progressRemainingColor;	// 24 = 0x18
    UIColor *_progressColor;	// 32 = 0x20
}

@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIColor *progressRemainingColor; // @synthesize progressRemainingColor=_progressRemainingColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;	// IMP=0x00000001005b6734
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001005b669c
- (id)observableKeypaths;	// IMP=0x00000001005b6648
- (void)unregisterFromKVO;	// IMP=0x00000001005b6514
- (void)registerForKVO;	// IMP=0x00000001005b63d8
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000001005b5ea0
- (void)dealloc;	// IMP=0x00000001005b5e50
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001005b5d00
- (id)init;	// IMP=0x00000001005b5ce0

@end

