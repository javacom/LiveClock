/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBApplicationIcon.h>

@class UIWebClip;

@interface SBWidgetApplicationIcon : SBApplicationIcon
{
    UIWebClip *_webClip;
}

- (id)initWithApplication:(id)fp8;
- (void)dealloc;
- (id)icon;
- (BOOL)shouldEllipsizeLabel;
- (id)modificationDate:(BOOL)fp8;
- (BOOL)allowsCloseBox;
- (void)completeUninstall;
- (id)uninstallAlertTitle;
- (id)uninstallAlertBody;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertCancelTitle;
- (id)webClip;

@end

