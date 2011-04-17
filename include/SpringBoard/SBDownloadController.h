/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

#import <iTunesStore/ISDownloadQueueDelegate-Protocol.h>

@class ISDownloadQueue;

@interface SBDownloadController : NSObject <ISDownloadQueueDelegate>
{
    ISDownloadQueue *_downloadQueue;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)downloadQueue:(id)fp8 changedWithRemovals:(id)fp12 disappearances:(id)fp16;
- (void)_showDownloadQueueError;
- (void)downloadQueueError:(id)fp8;
- (BOOL)checkQueue;
- (id)currentDownloads;
- (id)downloadQueue;
- (void)_networkUsageChanged:(id)fp8;

@end
