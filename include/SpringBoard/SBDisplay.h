/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface SBDisplay : NSObject
{
    NSMutableDictionary *_displayValues;
    NSMutableDictionary *_activationValues;
    NSMutableDictionary *_deactivationValues;
    unsigned int _displaySettings;
    unsigned int _activationSettings;
    unsigned int _deactivationSettings;
    NSMutableSet *_suppressVolumeHudCategories;
    float _autoDimOverride;
    float _autoLockOverride;
    float _accelerometerSampleInterval;
    unsigned int _expectsFaceContact:1;
    unsigned int _accelerometerDeviceOrientationChangedEventsEnabled:1;
    unsigned int _proximityEventsEnabled:1;
    unsigned int _showsProgress;
}

+ (id)_displayStatePath;
+ (void)loadDisplayStates;
+ (void)purgeOrphanedDisplayStates;
+ (void)saveDisplayStates;
+ (void)performDelayedSaveDisplayStates;
+ (id)_applicationStateIDForDisplayIdentifier:(id)fp8 urlScheme:(id)fp12;
+ (id)_defaultValueForKey:(id)fp8 applicationStateID:(id)fp12;
+ (void)setDefaultValue:(id)fp8 forKey:(id)fp12 displayIdentifier:(id)fp16 urlScheme:(id)fp20;
+ (id)defaultValueForKey:(id)fp8 displayIdentifier:(id)fp12 urlScheme:(id)fp16;
+ (void)resetDefaultValuesForDisplayIdentifier:(id)fp8 urlScheme:(id)fp12;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)displayIdentifier;
- (id)urlScheme;
- (void)clearDisplaySettings;
- (void)setDisplaySetting:(unsigned int)fp8 flag:(BOOL)fp12;
- (void)setDisplaySetting:(unsigned int)fp8 value:(id)fp12;
- (id)displayValue:(unsigned int)fp8;
- (BOOL)displaySetting:(unsigned int)fp8;
- (void)clearActivationSettings;
- (void)setActivationSetting:(unsigned int)fp8 flag:(BOOL)fp12;
- (void)setActivationSetting:(unsigned int)fp8 value:(id)fp12;
- (id)activationValue:(unsigned int)fp8;
- (BOOL)activationSetting:(unsigned int)fp8;
- (void)clearDeactivationSettings;
- (void)setDeactivationSetting:(unsigned int)fp8 flag:(BOOL)fp12;
- (BOOL)deactivationSetting:(unsigned int)fp8;
- (void)setDeactivationSetting:(unsigned int)fp8 value:(id)fp12;
- (id)deactivationValue:(unsigned int)fp8;
- (void)activate;
- (void)launchSucceeded:(BOOL)fp8;
- (void)deactivate;
- (void)deactivated;
- (void)deactivateAfterLocking;
- (void)kill;
- (void)_exitedCommon;
- (void)exitedAbnormally;
- (void)exitedNormally;
- (BOOL)allowsEventOnlySuspension;
- (BOOL)allowsDoubleHeightStatusBar:(BOOL)fp8;
- (void)updateStatusBar:(double)fp8 fence:(int)fp16 animation:(int)fp20 startTime:(double)fp24;
- (void)updateStatusBar:(double)fp8;
- (int)defaultStatusBarMode;
- (int)statusBarMode;
- (int)defaultStatusBarOrientation;
- (int)statusBarOrientation;
- (double)autoDimTime;
- (void)setAutoDimTime:(double)fp8;
- (double)autoLockTime;
- (void)setAutoLockTime:(double)fp8;
- (void)setExpectsFaceContact:(BOOL)fp8;
- (BOOL)expectsFaceContact;
- (void)setAccelerometerSampleInterval:(double)fp8;
- (double)accelerometerSampleInterval;
- (void)setAccelerometerDeviceOrientationChangedEventsEnabled:(BOOL)fp8;
- (BOOL)accelerometerDeviceOrientationChangedEventsEnabled;
- (void)setProximityEventsEnabled:(BOOL)fp8;
- (BOOL)proximityEventsEnabled;
- (void)setShowsProgress:(BOOL)fp8;
- (BOOL)showsProgress;
- (void)setSystemVolumeHUDEnabled:(BOOL)fp8 forCategory:(id)fp12;
- (BOOL)showSystemVolumeHUDForCategory:(id)fp8;
- (id)description;
- (id)descriptionForDisplaySettings:(unsigned int)fp8;
- (id)displaySettingsDescription;
- (id)descriptionForActivationSettings:(unsigned int)fp8;
- (id)activationSettingsDescription;
- (id)descriptionForDeactivationSettings:(unsigned int)fp8;
- (id)deactivationSettingsDescription;

@end

