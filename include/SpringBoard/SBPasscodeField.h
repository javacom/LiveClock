/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIPasscodeField.h>

@interface SBPasscodeField : UIPasscodeField
{
    float _width;
    BOOL _isAlphanumericField;
}

- (id)okButton;
- (void)setIsAlphanumericField:(BOOL)fp8;
- (void)_updateFields;
- (void)textFieldDidResignFirstResponder:(id)fp8;
- (void)_textDidChange;
- (id)entryField;
- (void)setButtonWidth:(float)fp8;
- (void)adjustOKButtonFrame;

@end
