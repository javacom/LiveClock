/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSString, SBDismissOnlyAlertItem;

@interface SBLockdownManager : NSObject
{
    int _state;
    BOOL _settingUpActivationState;
    BOOL _isBricked;
    BOOL _isInternalInstall;
    BOOL _hasShownWaitingAlertThisSession;
    BOOL _hasShownMismatchedSIM;
    SBDismissOnlyAlertItem *_activatingAlertItem;
    NSString *_unqiueDeviceIdentifier;
}

+ (id)sharedInstance;
- (id)init;
- (BOOL)_hasEverRegistered;
- (void)_setHasEverRegistered:(BOOL)fp8;
- (BOOL)_isRegisteredToNetwork;
- (void)_setCurrentAlertItem:(id)fp8;
- (BOOL)_shouldShowTelephonyAlerts;
- (void)_postAlertsIfNeeded;
- (void)_resetActivationState;
- (void)_activationFailed;
- (void)_serviceAvailabilityChanged:(id)fp8;
- (void)_setupActivationState;
- (BOOL)brickedDevice;
- (BOOL)isInternalInstall;
- (int)lockdownState;
- (id)uniqueDeviceIdentifier;
- (void)dealloc;
- (id)valueForDomain:(id)fp8 key:(id)fp12;

@end
