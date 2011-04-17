/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBAlertItem.h>

@class NSString;

@interface SBUserNotificationAlert : SBAlertItem
{
    unsigned int _replyPort;
    int _token;
    int _timeout;
    unsigned int _requestFlags;
    NSString *_alertHeader;
    id _alertMessage;
    NSString *_alertMessageDelimiter;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_otherButtonTitle;
    id _keyboardTypes;
    id _autocapitalizationTypes;
    id _autocorrectionTypes;
    id _textFieldButtonDisplayDefaultButtonURLs;
    id _textFieldButtonImagePaths;
    id _textFieldTitles;
    id _textFieldValues;
    id _textFieldButtonDisplayTitles;
    id _textFieldButtonDisplayDefaultButtonTitles;
    int _currentTextFieldButtonDisplayIndex;
    double _creationTime;
    int _defaultButtonTag;
    unsigned int _replyFlags;
    unsigned int _cancel:1;
    unsigned int _isActivated:1;
    unsigned int _aboveLock:1;
    unsigned int _dismissOnLock:1;
    unsigned int _allowMenuButtonDismissal:1;
    unsigned int _oneButtonPerLine:1;
    unsigned int _groupsTextFields:1;
}

- (id)_safeLocalizedValue:(id)fp8 withBundle:(id)fp12;
- (id)initWithMessage:(id)fp8 replyPort:(unsigned int)fp12 requestFlags:(int)fp16;
- (void)dealloc;
- (Class)alertSheetClass;
- (int)token;
- (BOOL)shouldShowInLockScreen;
- (BOOL)dismissOnLock;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (void)wakeup;
- (void)cancel;
- (void)_setSheetDefaultButtonTitle:(id)fp8;
- (void)_textFieldButtonPressed:(id)fp8;
- (void)_sendResponse:(int)fp8;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (void)didDeactivateForReason:(int)fp8;

@end

