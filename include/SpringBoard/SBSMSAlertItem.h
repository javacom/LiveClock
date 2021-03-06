/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBAlertItem.h>

@class CKMessage, NSString;

@interface SBSMSAlertItem : SBAlertItem
{
    CKMessage *_message;
    int _alignment;
    BOOL _alignmentHasBeenSet;
    BOOL _displayingEntireMessage;
    BOOL _playedSound;
    NSString *_name;
}

+ (BOOL)shouldPlayMessageReceived;
+ (void)playMessageReceived;
+ (void)prefsChanged;
+ (BOOL)_showSMSPreview;
+ (BOOL)shouldHideSMSPreview;
- (void)dealloc;
- (void)_tag;
- (void)_untag;
- (void)_deactivateAllTaggedSMSAlertItems;
- (void)willActivate;
- (void)didDeactivateForReason:(int)fp8;
- (void)setMessage:(id)fp8;
- (void)willPresentAlertSheet:(id)fp8;
- (id)address;
- (id)name;
- (BOOL)senderIsVoicemail;
- (BOOL)hasAttachments;
- (id)messageText;
- (id)alertImageData;
- (int)_groupID;
- (void)reply;
- (Class)alertSheetClass;
- (id)alertSheet;
- (void)_markReadIfDisplayingEntireMessage;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (int)bodyTextAlignmentForAlertSheet:(id)fp8 displayedLineCount:(int)fp12;
- (void)performUnlockAction;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (id)lockLabel;
- (BOOL)willShowInAwayItems;
- (BOOL)shouldShowInEmergencyCall;

@end

