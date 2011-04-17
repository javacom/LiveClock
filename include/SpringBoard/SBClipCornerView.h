/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIImage;

@interface SBClipCornerView : UIView
{
    float _cornerRadius;
    int _rectCorner;
    struct CGPoint _pathOrigin;
    struct CGPath *_clipPath;
    UIImage *_backgroundImage;
    struct CGRect _backgroundImageSubrect;
}

- (void)_updateCornerPath;
- (id)initWithCornerRadius:(float)fp8 forCorner:(int)fp12;
- (void)setCornerRadius:(float)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (void)setBackgroundImage:(id)fp8;
- (void)setBackgroundImageSubrect:(struct CGRect)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)dealloc;
- (struct CGRect)backgroundImageSubrect;
- (id)backgroundImage;
- (float)cornerRadius;

@end

