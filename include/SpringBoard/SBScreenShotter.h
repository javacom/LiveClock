/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface SBScreenShotter : NSObject
{
    BOOL _writingScreenshot;
}

+ (id)sharedInstance;
- (void)finishedWritingScreenshot:(id)fp8 didFinishSavingWithError:(id)fp12 context:(void *)fp16;
- (void)saveScreenshot:(BOOL)fp8;
- (BOOL)writingScreenshot;
- (void)setWritingScreenshot:(BOOL)fp8;

@end

