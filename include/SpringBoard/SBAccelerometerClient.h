/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface SBAccelerometerClient : NSObject
{
    struct __CFMachPort *_cfMachPort;
    unsigned int _port;
    double _updateInterval;
    double _lastUpdateTime;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
}

- (BOOL)passesThresholdForX:(float)fp8 y:(float)fp12 z:(float)fp16;
- (void)setCFMachPort:(struct __CFMachPort *)fp8;
- (void)dealloc;
- (float)zThreshold;
- (void)setZThreshold:(float)fp8;
- (float)yThreshold;
- (void)setYThreshold:(float)fp8;
- (float)xThreshold;
- (void)setXThreshold:(float)fp8;
- (double)lastUpdateTime;
- (void)setLastUpdateTime:(double)fp8;
- (double)updateInterval;
- (void)setUpdateInterval:(double)fp8;
- (struct __CFMachPort *)CFMachPort;
- (unsigned int)port;
- (void)setPort:(unsigned int)fp8;

@end

