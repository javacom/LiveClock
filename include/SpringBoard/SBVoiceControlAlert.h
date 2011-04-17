/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBAlert.h>

@interface SBVoiceControlAlert : SBAlert
{
}

+ (void)registerForAlerts;
+ (BOOL)shouldEnterVoiceControl;
+ (BOOL)resetVoiceControlIfNecessary:(BOOL)fp8;
+ (void)setNextRecognitionAudioInputPaths:(id)fp8;
- (void)_setRoutingAttributesForWiredHeadset;
- (id)init;
- (id)initFromWiredHeadsetButton;
- (BOOL)allowsEventOnlySuspension;
- (void)deactivate;
- (void)deactivateAfterLocking;
- (id)initFromMenuButton;
- (void)dealloc;
- (void)_proximityChanged:(id)fp8;
- (void)handleHeadsetButtonUpFromActivation:(BOOL)fp8;
- (void)handleMenuButtonTap;
- (double)autoDimTime;
- (id)alertDisplayViewWithSize:(struct CGSize)fp8;

@end
