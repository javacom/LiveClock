/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBAlertItem.h>

@class NSString;

@interface SBWiFiPasswordAlertItem : SBAlertItem
{
    id _delegate;
    NSString *_name;
}

- (id)initWithNetworkName:(id)fp8;
- (void)dealloc;
- (void)setDelegate:(id)fp8;
- (void)dismiss;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (void)returnKeyPressed:(id)fp8;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (BOOL)dismissOnLock;

@end

