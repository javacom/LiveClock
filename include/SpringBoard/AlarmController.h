/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SBSleepProofTimer;

@interface AlarmController : NSObject
{
    SBSleepProofTimer *_alarmTimer;
    NSMutableArray *_alarmList;
    NSMutableArray *_alarmsToFire;
    unsigned int _isReadingAlarms:1;
    SBSleepProofTimer *_countDownTimer;
    double _countDownUntilTime;
    NSString *_countDownSoundIdentifier;
}

+ (id)sharedAlarmController;
- (void)_loadAlarms;
- (void)_saveAlarms;
- (void)_loadCountDownTimer;
- (void)_saveCountDownTimer;
- (void)_alarmChanged:(id)fp8;
- (void)_resetCountDownTime;
- (id)init;
- (void)dealloc;
- (void)_significantTimeChanged:(id)fp8;
- (unsigned int)addAlarm:(id)fp8;
- (void)removeAlarmAtIndex:(unsigned int)fp8;
- (id)alarms;
- (void)_scheduleAlarms;
- (void)_alarmTimeReached;
- (void)setCountDownTime:(double)fp8 withSoundIdentifier:(id)fp16;
- (void)_countDownTimerFired;
- (double)countDownTime;
- (id)countDownTimerSoundIdentifier;

@end

