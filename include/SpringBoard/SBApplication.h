/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBDisplay.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSString, NSTimer, SBAppContextHostView, SBCFBundle, UIRemoteApplication;

@interface SBApplication : SBDisplay
{
    NSString *_bundleIdentifier;
    NSString *_roleIdentifier;
    NSString *_displayIdentifier;
    NSString *_path;
    NSString *_iconPath;
    NSString *_smallIconPath;
    SBCFBundle *_cachedBundle;
    NSString *_launchdJobLabel;
    int _pid;
    struct SBApplicationTimes *_times;
    NSString *_displayName;
    NSString *_demoRole;
    NSMutableSet *_statusBarItemSet;
    NSMutableArray *_tags;
    UIRemoteApplication *_remoteApplication;
    SBAppContextHostView *_contextHostView;
    NSDictionary *_seatbeltEnvVars;
    NSString *_signerIdentity;
    unsigned int _eventPort;
    unsigned int _activationEventSequenceNumber;
    NSTimer *_watchdogTimer;
    unsigned int _watchdogType:4;
    unsigned int _doingBackgroundNetworking:16;
    unsigned int _failedLaunchCount:8;
    unsigned int _provisioningProfileValidated:1;
    unsigned int _enabled:1;
    unsigned int _useDemoRole:1;
    unsigned int _relauchesOnAbnormalExit:1;
    unsigned int _isDefaultRole:1;
    unsigned int _isSystemApplication:1;
    unsigned int _hasMiniAlerts:1;
    unsigned int _isRevealable:1;
    unsigned int _uiPrerederedIcon:1;
    unsigned int _uiRequiresPersistentWiFi:1;
    unsigned int _dataFlagsIsSet:1;
    unsigned int _defaultStatusBarStyle:8;
    unsigned int _defaultInterfaceOrientaton:8;
    unsigned int _sbUsesNetwork:8;
    unsigned int _dataFlags:8;
    unsigned int _launchAlerts:8;
    int _jetsamPriority;
    int _ratingRank;
    Class _iconClass;
    NSArray *_customMachServices;
    NSArray *_externalAccessoryProtocols;
}

+ (id)snapshotsDirectory;
+ (void)flushLaunchAlertsOfType:(int)fp8;
+ (void)userElapsedCPUTime:(double *)fp8 systemElapsedCPUTime:(double *)fp12 idleElapsedCPUTime:(double *)fp16;
- (id)initWithBundleIdentifier:(id)fp8 roleIdentifier:(id)fp12 path:(id)fp16 bundle:(id)fp20 infoDictionary:(id)fp24 isSystemApplication:(BOOL)fp28 signerIdentity:(id)fp32 provisioningProfileValidated:(BOOL)fp36;
- (void)_watchdogFired;
- (void)_watchdogFiredFired;
- (void)_startWatchdogTimerType:(int)fp8;
- (void)_cancelWatchdogTimer;
- (void)_markWatchdogCPUTimes;
- (void)startWatchdogTimerForPhoneSlideIfNecessary;
- (void)_scheduleWatchdogAssertionWithTimeout:(double *)fp8 token:(unsigned int)fp12;
- (unsigned int)addWatchdogAssertionWithTimeout:(double *)fp8;
- (void)renewWatchdogAssertionWithToken:(unsigned int)fp8 timeout:(double *)fp12;
- (void)_clearWatchdogAssertions;
- (void)removeWatchdogAssertionWithToken:(unsigned int)fp8;
- (void)_watchdogAssertExpired:(id)fp8;
- (BOOL)shouldWatchdog;
- (BOOL)isBeingDebugged;
- (double)autoDimTime;
- (double)autoLockTime;
- (void)dealloc;
- (unsigned int)activationEventSequenceNumber;
- (BOOL)isSameExecutableAsApplication:(id)fp8;
- (id)bundleIdentifier;
- (void)setRoleIdentifier:(id)fp8;
- (id)roleIdentifier;
- (void)setIsDefaultRole:(BOOL)fp8;
- (BOOL)isDefaultRole;
- (id)path;
- (id)bundle;
- (void)purgeBundleCaches;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)fp8;
- (id)demoRole;
- (void)setDemoRole:(id)fp8;
- (void)setUseDemoRole:(BOOL)fp8;
- (void)setTags:(id)fp8;
- (id)tags;
- (void)_addInternalDebugVariablesToEnvironment;
- (BOOL)hasMiniAlerts;
- (void)setHasMiniAlerts:(BOOL)fp8;
- (int)dataUsage;
- (void)_setDataUsage:(int)fp8;
- (void)setUsesBackgroundNetwork:(BOOL)fp8;
- (void)_setDoingBackgroundNetworking:(unsigned int)fp8;
- (void)setUsesEdgeNetwork:(BOOL)fp8;
- (void)setUsesWiFiNetwork:(BOOL)fp8;
- (void)_resetDataUsage;
- (id)displayIdentifier;
- (id)pathForIcon;
- (id)pathForSmallIcon;
- (BOOL)isSystemApplication;
- (BOOL)isWidgetApplication;
- (BOOL)isUserRatable;
- (void)flushSnapshotsForAllRoles;
- (BOOL)shouldLaunchPNGless;
- (id)_additionalDisplayQualification;
- (id)defaultImage:(char *)fp8;
- (Class)iconClass;
- (BOOL)isRevealable;
- (BOOL)isPrerenderedIcon;
- (id)displayName;
- (void)setDisplayName:(id)fp8;
- (void)_sendCurrentDeviceOrientation;
- (int)ratingRank;
- (void)markLaunchTime;
- (BOOL)launch;
- (void)activate;
- (void)deactivate;
- (void)deactivated;
- (void)kill;
- (void)_cancelAutoRelaunch;
- (void)_relaunchNow;
- (void)_relaunchAfterAbnormalExit:(BOOL)fp8;
- (void)_relaunchAfterAbnormalExit;
- (void)removeStatusBarItems;
- (int)defaultStatusBarMode;
- (int)defaultStatusBarOrientation;
- (void)_resetEventPort;
- (void)willActivateOtherRole:(id)fp8;
- (void)exitedCommon;
- (void)exitedAbnormally;
- (void)exitedNormally;
- (unsigned int)jetsamPriority;
- (int)pid;
- (void)setPid:(int)fp8;
- (unsigned int)eventPort;
- (id)contextHostView;
- (void)_clearContextHostView;
- (void)_setContextHostView:(id)fp8;
- (void)_hideContextHostView;
- (void)_unregisterRemoteViewsAndSheets;
- (id)launchdJobLabel;
- (void)setLaunchdJobLabel:(id)fp8;
- (id)seatbeltEnvironmentVariables;
- (void)setSeatbeltEnvironmentVariables:(id)fp8;
- (id)signerIdentity;
- (int)applicationSignatureState;
- (BOOL)_signatureNeedsExplicitUserTrust;
- (BOOL)_doesProfileMatchSignerIdentity:(struct _MISProfile *)fp8;
- (id)_expirationDateForProvisioningProfile;
- (void)markApplicationIdentityAsTrusted;
- (BOOL)provisioningProfileValidated;
- (id)externalAccessoryProtocols;
- (int)failedLaunchCount;
- (void)launchFailed;
- (void)launchSucceeded:(BOOL)fp8;
- (void)prepareForUninstallation;
- (void)setRelaunchesAfterAbnormalExit:(BOOL)fp8;
- (BOOL)relaunchesAfterAbnormalExit;
- (void)noteAddedStatusBarItem:(id)fp8;
- (void)noteRemovedStatusBarItem:(id)fp8;
- (id)remoteApplication;
- (void)_purgeRemoteApplication;
- (BOOL)showLaunchAlertForType:(int)fp8;
- (void)resetLaunchAlertForType:(int)fp8;
- (double)elapsedCPUTime;

@end
