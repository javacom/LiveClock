/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

#import <Preferences/PSBaseView-Protocol.h>

@class PSRootController;

@interface PSViewController : NSObject <PSBaseView>
{
    id <PSBaseView> _parentController;
    PSRootController *_rootController;
}

+ (BOOL)isOverlay;
- (id)initForContentSize:(struct CGSize)fp8;
- (id)navigationTitle;
- (id)navigationItem;
- (void)pushNavigationItemWithTitle:(id)fp8;
- (void)insertNavigationItem:(id)fp8 atIndex:(int)fp12;
- (void)insertNavigationItem:(id)fp8 atIndexFromEnd:(int)fp12;
- (void)pushNavigationItem:(id)fp8;
- (void)popNavigationItem;
- (void)popNavigationItemWithAnimation:(BOOL)fp8;
- (void)hideNavigationBarButtons;
- (void)showNavigationBarButtons:(id)fp8:(id)fp12;
- (void)showLeftButton:(id)fp8 withStyle:(int)fp12 rightButton:(id)fp16 withStyle:(int)fp20;
- (void)setNavigationBarEnabled:(BOOL)fp8;
- (void)setPrompt:(id)fp8;
- (void)navigationBarButtonClicked:(int)fp8;
- (id)view;
- (void)setParentController:(id)fp8;
- (id)parentController;
- (void)setRootController:(id)fp8;
- (id)rootController;
- (void)setPreferenceValue:(id)fp8 specifier:(id)fp12;
- (id)readPreferenceValue:(id)fp8;
- (void)viewDidBecomeVisible;
- (void)viewWillBecomeVisible:(void *)fp8;
- (void)viewWillRedisplay;
- (void)viewTransitionCompleted;
- (void)suspend;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)didWake;
- (void)pushController:(id)fp8;
- (void)handleURL:(id)fp8;
- (BOOL)popController;
- (BOOL)popControllerWithAnimation:(BOOL)fp8;
- (id)methodSignatureForSelector:(SEL)fp8;
- (void)forwardInvocation:(id)fp8;

@end

