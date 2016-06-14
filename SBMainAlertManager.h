//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBAlertManager.h"

@class NSMapTable, SBDisableActiveInterfaceOrientationChangeAssertion;

@interface SBMainAlertManager : SBAlertManager
{
    NSMapTable *_alertToAccessoryWrappersMap;
    SBDisableActiveInterfaceOrientationChangeAssertion *_orientationLockAssertion;
}

- (void).cxx_destruct;
- (void)_assistantVisibilityDidChange:(id)arg1;
- (void)_controlCenterDidDeactivate:(id)arg1;
- (void)_notificationCenterDidDeactivate:(id)arg1;
- (void)_disablePortraitOrientationLock;
- (void)_enablePortraitOrientationLock;
- (_Bool)_needsPortraitOrientationLockForAlert:(id)arg1;
- (void)_removeHostedAccessoryViewsForRequester:(id)arg1;
- (void)_stopHostingAccessoryWindowsForDeactivatingAlert:(id)arg1;
- (void)_stopHostingAccessoryWindowsForWrapper:(id)arg1;
- (void)_hostAccessoryWindowsForActivatingAlert:(id)arg1;
- (void)_noteFinishedWithAlert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_noteAlertWillDismiss:(id)arg1;
- (void)_deactivate:(id)arg1;
- (_Bool)_canAutorotate;
- (void)_noteWillDisplayAlert:(id)arg1;
- (_Bool)deactivate:(id)arg1;
- (void)disablePortraitOrientationLockIfPossibleForAlert:(id)arg1;
- (id)hostedAccessoryWrappersForAlert:(id)arg1;
- (void)hideHostedAccessoryViewsForAlert:(id)arg1;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 delegate:(id)arg2;

@end

