/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBAlert.h>

@class SBPowerDownView;

@interface SBPowerDownController : SBAlert
{
    int _count;
    id _delegate;
    SBPowerDownView *_powerDownView;
    BOOL _isFront;
}

+ (id)sharedInstance;
- (void)dealloc;
- (double)autoLockTime;
- (BOOL)isOrderedFront;
- (void)orderFront;
- (void)orderOut;
- (id)powerDownView;
- (void)activate;
- (void)_restoreIconListIfNecessary;
- (void)deactivate;
- (id)alertDisplayViewWithSize:(struct CGSize)fp8;
- (void)alertDisplayWillBecomeVisible;
- (void)setDelegate:(id)fp8;
- (void)powerDown;
- (void)cancel;

@end

