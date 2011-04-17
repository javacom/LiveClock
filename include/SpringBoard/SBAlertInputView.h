/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBSlidingAlertDisplay.h>

#import <UIKit/UITextFieldDelegate-Protocol.h>

@class SBTextDisplayView, UIKeyboard, UINavigationBar, UIScroller, UITextField;

@interface SBAlertInputView : SBSlidingAlertDisplay <UITextFieldDelegate>
{
    UITextField *_inputTextField;
    UIKeyboard *_keyboard;
    SBTextDisplayView *_textDisplay;
    UIScroller *_scroller;
    UINavigationBar *_bar;
    BOOL _digitsOnly;
    id _delegate;
    int _minLength;
    int _maxLength;
}

+ (id)createTopBarForInstance:(id)fp8;
+ (id)createBottomBarForInstance:(id)fp8;
- (void)setDelegate:(id)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;
- (BOOL)showsDesktopImage;
- (void)setMiddleContentAlpha:(float)fp8;
- (void)setText:(id)fp8;
- (void)alertDisplayWillBecomeVisible;
- (void)setMinLength:(int)fp8;
- (void)setMaxLength:(int)fp8;
- (void)_setNavigationBar:(id)fp8;
- (void)_setInputTextField:(id)fp8;
- (void)_setKeyboard:(id)fp8;
- (BOOL)textField:(id)fp8 shouldInsertText:(id)fp12 replacingRange:(struct _NSRange)fp16;
- (void)setDigitsOnly:(BOOL)fp8;
- (void)sbAlertInputViewSendClicked:(id)fp8;
- (void)sbAlertInputViewCancelClicked:(id)fp8;
- (id)textField;
- (void)_sendClicked:(id)fp8;

@end

