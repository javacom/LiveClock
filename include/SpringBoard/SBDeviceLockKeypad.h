/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <TelephonyUI/TPPhonePad.h>

@class SBEmergencyCallButton, UIImage, UIPushButton;

@interface SBDeviceLockKeypad : TPPhonePad
{
    UIImage *_deleteIcon;
    UIPushButton *_deleteButton;
    SBEmergencyCallButton *_emergencyCallButton;
    BOOL _showDeleteIcon;
    BOOL _playKeyboardClicks;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)setPlaysKeyboardClicks:(BOOL)fp8;
- (BOOL)showsEmergencyCallButton;
- (void)setShowsEmergencyCallButton:(BOOL)fp8;
- (void)dealloc;
- (void)setShowsDeleteIcon:(BOOL)fp8;
- (id)_pressedImage;
- (void)hiddenFromView;
- (void)willBecomeVisible;
- (id)_keypadImage;
- (float)_yFudge;

@end

