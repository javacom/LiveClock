/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBStatusBarContentView.h>

@class UIProgressIndicator;

@interface SBStatusBarProgressView : SBStatusBarContentView
{
    UIProgressIndicator *_progressIndicator;
    BOOL _wasLastUsingASlowConnection;
    BOOL _showProgressView;
    BOOL _showOnLeft;
}

- (id)init;
- (void)dealloc;
- (void)dataConnectionTypeChanged;
- (void)start;
- (void)stop;
- (void)progressChanged;
- (int)priority;
- (void)setVisible:(BOOL)fp8;
- (BOOL)isVisible;
- (BOOL)showOnLeft;
- (void)setShowOnLeft:(BOOL)fp8;
- (float)padding;

@end

