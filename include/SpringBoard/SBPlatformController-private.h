/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <SpringBoard/SBPlatformController.h>

@interface SBPlatformController (private)
- (id)currentConfigurationName;
- (void)postCurrentConfiguration;
- (void)_mergeDictionary:(id)fp8 intoDictionary:(id)fp12;
- (void)_addConfigurationNamed:(id)fp8 toCompositeDictionary:(id)fp12;
- (BOOL)allowSensitiveUI:(BOOL)fp8 hasInternalBundle:(BOOL)fp12;
- (BOOL)isCarrierInstall:(BOOL)fp8 hasInternalBundle:(BOOL)fp12;
- (id)_macAddress;
- (BOOL)allowYouTube;
- (BOOL)allowYouTubePlugin;
- (BOOL)allowWiFi;
- (void)discoverCurrentConfiguration;
- (struct __CFBoolean *)currentITunesStoreCapability;
- (void)noteConfigurationChanged:(id)fp8;
@end

