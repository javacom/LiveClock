/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject-Protocol.h>

@protocol WebFormDelegate <NSObject>
- (void)textFieldDidBeginEditing:(id)fp8 inFrame:(id)fp12;
- (void)textFieldDidEndEditing:(id)fp8 inFrame:(id)fp12;
- (void)textDidChangeInTextField:(id)fp8 inFrame:(id)fp12;
- (void)textDidChangeInTextArea:(id)fp8 inFrame:(id)fp12;
- (BOOL)textField:(id)fp8 doCommandBySelector:(SEL)fp12 inFrame:(id)fp16;
- (BOOL)textField:(id)fp8 shouldHandleEvent:(struct __GSEvent *)fp12 inFrame:(id)fp16;
- (void)formElementDidSetValue:(id)fp8 inFrame:(id)fp12;
- (void)formElementDidFocus:(id)fp8 inFrame:(id)fp12;
- (void)formElementDidBlur:(id)fp8 inFrame:(id)fp12;
- (void)frame:(id)fp8 sourceFrame:(id)fp12 willSubmitForm:(id)fp16 withValues:(id)fp20 submissionListener:(id)fp24;
@end

