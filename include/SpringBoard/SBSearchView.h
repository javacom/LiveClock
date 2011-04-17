/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class SBRoundedCornerView, UIKeyboard, UILabel, UISearchBar, UITableView;

@interface SBSearchView : UIView
{
    SBRoundedCornerView *_roundedCornerView;
    UISearchBar *_searchBar;
    UITableView *_tableView;
    UIKeyboard *_keyboard;
    UILabel *_noResultsLabel;
    BOOL _isKeyboardVisible;
    BOOL _inAnimationBlock;
    BOOL _showSearchKeyWhenAnimatingKeyboard;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (BOOL)_initializeKeyboardIfNotBricked;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)fp8;
- (void)layoutCornerView;
- (float)_footerHeight;
- (void)layoutFooterView;
- (BOOL)isKeyboardVisible;
- (void)setShowsKeyboard:(BOOL)fp8 animated:(BOOL)fp12;
- (void)keyboardAnimationDidStop:(id)fp8 finished:(id)fp12 context:(void *)fp16;
- (void)_fixUpRespondersAndPreheat;
- (void)setShowingNoResultsText:(BOOL)fp8;
- (void)setShowsSearchKeyWhenAnimatingKeyboard:(BOOL)fp8;
- (void)_setDistantContentViewTransform;
- (void)scatter:(BOOL)fp8 startTime:(double)fp12;
- (void)scatterAnimationDidStop;
- (void)unscatter:(BOOL)fp8 startTime:(double)fp12;
- (void)unscatterAnimationDidStop;
- (id)tableView;
- (id)searchBar;

@end

