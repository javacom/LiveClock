/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class SBClipCornerView, UIImageView;

@interface SBRoundedCornerView : UIView
{
    SBClipCornerView *_clipCornerViews[4];
    float _cornerRadius;
    float _cornerSize;
    float _edgeInset;
    UIImageView *_imageSuperview;
}

- (id)initWithCornerRadius:(float)fp8 size:(float)fp12 inset:(float)fp16 imageSuperview:(id)fp20;
- (struct CGPoint)_originForCornerIndex:(int)fp8 withBoundsSize:(struct CGSize)fp12;
- (void)_layoutSubviews;
- (void)setFrame:(struct CGRect)fp8;
- (void)dealloc;

@end

