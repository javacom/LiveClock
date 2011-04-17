/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBAlert.h>

@class AVController, AVQueue, NSString, NSTimer;

@interface SBSIMToolkitAlert : SBAlert
{
    BOOL _needsResponse;
    NSTimer *_timeoutTimer;
    NSString *_tone;
    AVController *_avController;
    AVQueue *_avQueue;
    BOOL _interruptedAudio;
}

+ (struct __CTServerConnection *)simToolkitServerConnection;
+ (BOOL)wantsNextUserEvent;
+ (void)userEventOccurred;
+ (void)setCurrentAlert:(id)fp8;
+ (id)currentAlert;
+ (void)dismissCurrentAlert;
+ (void)test;
+ (void)_idleScreenShown:(id)fp8;
+ (void)_stopSTKMonitor;
+ (void)_startSTKMonitor;
+ (void)_restartMonitor;
+ (void)registerForAlerts;
- (void)setNeedsResponse:(BOOL)fp8;
- (BOOL)needsResponse;
- (void)sendResponse:(struct __CFString *)fp8 withString:(id)fp12;
- (void)sendResponse:(struct __CFString *)fp8 withBool:(BOOL)fp12;
- (void)sendResponse:(struct __CFString *)fp8;
- (unsigned long)_soundIDForTone:(struct __CFString *)fp8;
- (void)_setAudioInterrupted:(BOOL)fp8;
- (void)_playbackDidEnd:(id)fp8;
- (void)playRingtoneWithIdentifier:(id)fp8 loop:(BOOL)fp12;
- (void)_stopTone:(id)fp8;
- (BOOL)sendResponseUponDisplay;
- (BOOL)dismissesAfterNextEvent;
- (BOOL)oneShotInputEntry;
- (void)dealloc;
- (BOOL)allowsEventOnlySuspension;
- (void)deactivate;
- (void)_playTone:(struct __CFString *)fp8 forDuration:(float)fp12;
- (struct __CFString *)toolkitAlertType;
- (id)alertDisplayViewWithSize:(struct CGSize)fp8;
- (void)clearTimeoutTimer;
- (BOOL)_delayEnabled;
- (void)restartTimeoutTimer:(float)fp8;
- (void)startTimeoutTimerIfNecessary;
- (void)displayDidTimeout;

@end

