//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TSETweetCustomCardAttachmentView : UIView
{
    id <TSETweetAttachmentCustomCardViewProvider> _attachment;	// 8 = 0x8
}

@property(readonly, nonatomic) id <TSETweetAttachmentCustomCardViewProvider> attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;	// IMP=0x0000000100895c0c
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100895b80
- (void)layoutSubviews;	// IMP=0x0000000100895ad0
- (id)initWithCustomCardAttachment:(id)arg1;	// IMP=0x0000000100895a14

@end

