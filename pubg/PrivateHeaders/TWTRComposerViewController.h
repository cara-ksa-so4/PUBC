//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface TWTRComposerViewController : UIViewController
{
    id <TWTRComposerViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)emptyComposer;	// IMP=0x00000001008533e8
@property(nonatomic) __weak id <TWTRComposerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001008535c0
- (id)initWithInitialText:(id)arg1 image:(id)arg2 videoData:(id)arg3;	// IMP=0x00000001008534d8
- (id)initWithInitialText:(id)arg1 image:(id)arg2 videoURL:(id)arg3;	// IMP=0x0000000100853424

@end

