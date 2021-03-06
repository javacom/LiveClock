/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBAlert.h>

@class NSTimer;

@interface SBUSSDAlert : SBAlert
{
    unsigned int _receivedString:1;
    unsigned int _dismissOnActivate:1;
    NSTimer *_delayedDismissTimer;
}

+ (void)registerForSettingsAlerts;
+ (void)registerForAlerts;
+ (void)test;
+ (id)errorStringForCode:(unsigned int)fp8;
+ (void)_daemonRestart:(id)fp8;
+ (void)_newSIM:(id)fp8;
- (void)dealloc;
- (id)alertDisplayViewWithSize:(struct CGSize)fp8;
- (void)USSDStringAvailable:(id)fp8 allowsResponse:(BOOL)fp12;
- (BOOL)allowsResponse;
- (BOOL)receivedString;
- (void)setDismissOnActivate:(BOOL)fp8;
- (void)_delayedDismiss;
- (void)activate;
- (void)deactivate;

@end

