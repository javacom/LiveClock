/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBDisplayStack : NSObject
{
    NSMutableArray *_displayStack;
    void *_pushCallback;
    void *_popCallback;
}

- (id)init;
- (void)dealloc;
- (void)setPushCallBack:(void *)fp8;
- (void)setPopCallBack:(void *)fp8;
- (BOOL)isEmpty;
- (void)pushDisplay:(id)fp8;
- (id)pop;
- (id)popDisplay:(id)fp8;
- (id)displays;
- (BOOL)containsDisplay:(id)fp8;
- (id)topDisplay;
- (id)topApplication;
- (id)topAlert;
- (id)description;

@end

