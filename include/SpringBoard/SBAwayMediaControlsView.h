/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class MPAudioDeviceController, UIButton, UILabel, UIPushButton, UISlider;

@interface SBAwayMediaControlsView : UIView
{
    unsigned int _beganSeeking:1;
    int _seekingDirection;
    UIPushButton *_prevButton;
    UIPushButton *_nextButton;
    UIPushButton *_playPauseButton;
    UISlider *_slider;
    UIButton *_routeButton;
    UILabel *_routeLabel;
    MPAudioDeviceController *_audioDeviceController;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (id)_createButtonWithImage:(id)fp8 action:(SEL)fp12 tag:(int)fp16;
- (void)layoutSubviews;
- (void)_showRouteButton:(BOOL)fp8 volumeSlider:(BOOL)fp12 animated:(BOOL)fp16;
- (struct CGRect)_sliderFrameWithRouteButton:(BOOL)fp8;
- (void)_updateInformation;
- (void)setAlpha:(float)fp8;
- (void)removeFromSuperview;
- (void)_playPauseButtonAction:(id)fp8;
- (void)_changeTrackButtonDown:(id)fp8;
- (void)_changeTrackButtonUp:(id)fp8;
- (void)_changeTrackButtonTouchPause:(id)fp8;
- (void)_volumeChange:(id)fp8;
- (void)_showAudioRoutes:(id)fp8;
- (void)_registerForNowPlayingNotifications;
- (void)_unregisterForNowPlayingNotifications;
- (void)_registerForVolumeNotifications;
- (void)_unregisterForVolumeNotifications;
- (void)_nowPlayingChanged:(id)fp8;
- (void)_systemVolumeChanged:(id)fp8;
- (void)audioDeviceControllerAudioRoutesChanged:(id)fp8;
- (void)audioDeviceControllerMediaServerDied:(id)fp8;

@end

