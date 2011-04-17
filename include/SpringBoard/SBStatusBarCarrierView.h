/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBStatusBarContentView.h>

@class NSString, SBStatusBarOperatorNameView, UIImage;

@interface SBStatusBarCarrierView : SBStatusBarContentView
{
    UIImage *_operatorIcon;
    SBStatusBarOperatorNameView *_operatorNameView;
    NSString *_operatorName;
    BOOL _operatorNameIsLooping;
    BOOL _showCarrierView;
}

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (int)priority;
- (void)clearLastOperatorNameLooped;
- (void)loopOperatorNameToBeginning:(id)fp8 didFinish:(id)fp12;
- (void)loopOperatorNameToEnd;
- (void)finishedLoopingOperatorName:(id)fp8 didFinish:(id)fp12;
- (void)startOperatorNameLooping:(id)fp8;
- (void)loopIfNecessary;
- (void)_setOperatorName:(id)fp8;
- (void)setOperatorName:(id)fp8;
- (id)_imageForOperatorName:(id)fp8 statusBarIsFullScreenOpaque:(BOOL)fp12;
- (id)operatorIconForName:(id)fp8;
- (struct CGSize)defaultSize;
- (void)operatorNameChanged;
- (void)operatorBundleChanged;
- (void)setVisible:(BOOL)fp8;
- (BOOL)isVisible;
- (float)padding;

@end
