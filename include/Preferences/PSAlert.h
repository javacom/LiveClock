/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

#import <UIKit/UIModalViewDelegate-Protocol.h>

@class NSString, UIModalView;

@interface PSAlert : NSObject <UIModalViewDelegate>
{
    id _delegate;
    id _userInfo;
    UIModalView *_sheet;
    NSString *_body;
    NSString *_title;
    NSString *_defaultButton;
    NSString *_alternateButton;
    int _buttonClicked;
    BOOL _displayed;
}

+ (id)alertWithBodyText:(id)fp8 defaultButton:(id)fp12 alternateButton:(id)fp16;
+ (void)displayAlertWithBodyText:(id)fp8 defaultButton:(id)fp12 alternateButton:(id)fp16 delegate:(id)fp20 userInfo:(id)fp24;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)fp8;
- (void)setBodyText:(id)fp8;
- (id)bodyText;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setDefaultButton:(id)fp8;
- (id)defaultButton;
- (void)setAlternateButton:(id)fp8;
- (id)alternateButton;
- (id)alertSheet;
- (void)display;
- (void)setUserInfo:(id)fp8;
- (id)userInfo;
- (void)dismiss;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;

@end

