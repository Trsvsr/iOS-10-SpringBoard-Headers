//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBSoftwareUpdateSettings : SBUISettings
{
    unsigned long long _defaultRepopDuration;
    unsigned long long _repopStrategyTest;
}

+ (id)settingsControllerModule;
@property(nonatomic) unsigned long long repopStrategyTest; // @synthesize repopStrategyTest=_repopStrategyTest;
@property(nonatomic) unsigned long long defaultRepopDuration; // @synthesize defaultRepopDuration=_defaultRepopDuration;
- (void)setDefaultValues;

@end

