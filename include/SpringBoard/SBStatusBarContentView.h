/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class SBStatusBarContentsView;

@interface SBStatusBarContentView : UIView
{
    SBStatusBarContentsView *_contentsView;
    int _mode;
}

- (id)initWithContentsView:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)setMode:(int)fp8;
- (int)effectiveModeForImages;
- (void)start;
- (void)stop;
- (id)textFont;
- (void)drawText:(id)fp8 atPoint:(struct CGPoint)fp12 forWidth:(float)fp20 lineBreakMode:(int)fp24;
- (void)enableShadow;
- (int)priority;
- (int)compare:(id)fp8;
- (void)setVisible:(BOOL)fp8;
- (BOOL)isVisible;
- (BOOL)showOnLeft;
- (void)setShowOnLeft:(BOOL)fp8;
- (float)padding;
- (void)setOverlap:(float)fp8;
- (float)overlap;

@end

