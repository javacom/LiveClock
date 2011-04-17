/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBAlertItem.h>

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem
{
    NSString *_title;
    NSString *_body;
    double _autoDismissInterval;
}

- (id)initWithTitle:(id)fp8 body:(id)fp12;
- (void)dealloc;
- (double)autoDismissInterval;
- (void)setAutoDismissInterval:(double)fp8;
- (void)setTitle:(id)fp8;
- (void)setBodyText:(id)fp8;
- (id)title;
- (id)bodyText;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (void)performUnlockAction;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (id)lockLabel;

@end

