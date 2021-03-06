/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBAlertItem.h>

#import <UIKit/UIModalViewDelegate-Protocol.h>

@class SBInstalledApplicationIcon, UIPushButton;

@interface SBAppRatingsAlertItem : SBAlertItem <UIModalViewDelegate>
{
    SBInstalledApplicationIcon *_icon;
    UIPushButton *_rateButton;
    BOOL _uninstallOnDismiss;
}

- (id)initWithIcon:(id)fp8 uninstallOnDismiss:(BOOL)fp12;
- (void)dealloc;
- (Class)alertSheetClass;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (void)_starsControlValueChanged:(id)fp8;
- (BOOL)shouldShowInLockScreen;
- (BOOL)dismissOnLock;

@end

