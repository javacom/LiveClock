/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface SBVoicemailManager : NSObject
{
    CDAnonymousStruct4 _alertMark;
    CDAnonymousStruct4 _awayItemMark;
    BOOL _hasVisualVoicemail;
    int _visualVoicemailSubscriptionToken;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setHasVisualVoicemail:(BOOL)fp8;
- (void)_updateVisualVoicemailState;
- (BOOL)_hasVisualVoicemail;
- (void)_mark:(CDAnonymousStruct4 *)fp8;
- (void)markForAlerts;
- (void)markForAwayItems;
- (void)mark;
- (id)copyVisualVoicemailRecordsForAwayItems;
- (void)_presentAlertForRecord:(void *)fp8 visualVoicemail:(BOOL)fp12;
- (void)_handleVoicemailAvailableNotification:(id)fp8;
- (void)_handleVoicemailStoreChangedNotification;
- (void)_handleVoicemailFallbackNotification;

@end
