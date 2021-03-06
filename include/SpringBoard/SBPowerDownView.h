/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBAlertDisplay.h>

@class NSTimer, SBPowerDownController, TPBottomButtonBar, TPTopLockBar, UIView;

@interface SBPowerDownView : SBAlertDisplay
{
    UIView *_dimView;
    TPTopLockBar *_lockView;
    TPBottomButtonBar *_cancelView;
    SBPowerDownController *_powerDownController;
    NSTimer *_autoDismissTimer;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (void)cancelAutoDismissTimer;
- (void)resetAutoDismissTimer;
- (void)cancel:(id)fp8;
- (void)lockBarUnlocked:(id)fp8;
- (void)lockBarStartedTracking:(id)fp8;
- (void)lockBarStoppedTracking:(id)fp8;
- (void)powerDown:(id)fp8;
- (void)setPowerDownController:(id)fp8;
- (void)finishedAnimatingIn;
- (void)finishedAnimatingOut;
- (void)notifyDelegateOfPowerDown;
- (void)animateIn;
- (void)animateOut;
- (void)animateDark;

@end

