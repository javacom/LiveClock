/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBAlertItem.h>

@interface SBSIMLockAlertItem : SBAlertItem
{
    int _status;
}

+ (id)alertTitleForStatus:(int)fp8 languageCode:(id)fp12;
+ (id)alertTitleForStatus:(int)fp8;
- (id)initWithStatus:(int)fp8;
- (void)dealloc;
- (BOOL)canUnlock;
- (id)alertTitleForLanguageCode:(id)fp8;
- (id)alertTextForLanguageCode:(id)fp8;
- (int)status;
- (void)didDeactivateForReason:(int)fp8;
- (void)unlock;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (void)performUnlockAction;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (id)lockLabel;

@end

