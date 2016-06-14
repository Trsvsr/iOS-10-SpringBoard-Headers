//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBDashBoardViewControllerObserver-Protocol.h"

@class NCBulletinNotificationSource, NCNotificationDispatcher, NSString, SBLockScreenManager, SBLockStateAggregator, SBNCAlertingController, SBNCNotificationDispatcherDelegate, SBNotificationBannerDestination, SBNotificationCenterDestination, SBQuietModeStateAggregator, SBUserAlertNotificationSource, SBWalletNotificationSource;
@protocol NCNotificationAlertDestination, NCNotificationDestination, SBAlertingNotificationDestination;

@interface SBNCNotificationDispatcher : NSObject <SBDashBoardViewControllerObserver>
{
    SBNotificationBannerDestination *_bannerDestination;
    id <SBAlertingNotificationDestination> _dashBoardDestination;
    SBWalletNotificationSource *_walletNotificationSource;
    SBNotificationCenterDestination *_notificationCenterDestination;
    NCNotificationDispatcher *_dispatcher;
    SBNCNotificationDispatcherDelegate *_dispatcherDelegate;
    NCBulletinNotificationSource *_notificationSource;
    SBUserAlertNotificationSource *_userNotificationAlertSource;
    SBLockScreenManager *_lockScreenManager;
    SBLockStateAggregator *_lockStateAggregator;
    SBQuietModeStateAggregator *_quietModeStateAggregator;
    id <NCNotificationAlertDestination> _longLookDestination;
    id <NCNotificationDestination> _legacyLockScreenDestination;
    id <NCNotificationAlertDestination> _carDestination;
    SBNCAlertingController *_alertingController;
}

@property(retain, nonatomic) SBNCAlertingController *alertingController; // @synthesize alertingController=_alertingController;
@property(retain, nonatomic) id <NCNotificationAlertDestination> carDestination; // @synthesize carDestination=_carDestination;
@property(retain, nonatomic) id <NCNotificationDestination> legacyLockScreenDestination; // @synthesize legacyLockScreenDestination=_legacyLockScreenDestination;
@property(retain, nonatomic) id <NCNotificationAlertDestination> longLookDestination; // @synthesize longLookDestination=_longLookDestination;
@property(retain, nonatomic) SBQuietModeStateAggregator *quietModeStateAggregator; // @synthesize quietModeStateAggregator=_quietModeStateAggregator;
@property(retain, nonatomic) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_lockStateAggregator;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBUserAlertNotificationSource *userNotificationAlertSource; // @synthesize userNotificationAlertSource=_userNotificationAlertSource;
@property(retain, nonatomic) NCBulletinNotificationSource *notificationSource; // @synthesize notificationSource=_notificationSource;
@property(retain, nonatomic) SBNCNotificationDispatcherDelegate *dispatcherDelegate; // @synthesize dispatcherDelegate=_dispatcherDelegate;
@property(retain, nonatomic) NCNotificationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) SBNotificationCenterDestination *notificationCenterDestination; // @synthesize notificationCenterDestination=_notificationCenterDestination;
@property(readonly, nonatomic) SBWalletNotificationSource *walletNotificationSource; // @synthesize walletNotificationSource=_walletNotificationSource;
@property(readonly, nonatomic) id <SBAlertingNotificationDestination> dashBoardDestination; // @synthesize dashBoardDestination=_dashBoardDestination;
@property(readonly, nonatomic) SBNotificationBannerDestination *bannerDestination; // @synthesize bannerDestination=_bannerDestination;
- (void).cxx_destruct;
- (void)dashBoardController:(id)arg1 didChangeActiveBehavior:(id)arg2;
- (_Bool)_lockScreenWantsBanners;
- (_Bool)_areNotificationsAllowedInLockScreen;
- (_Bool)_isCarPlayActive;
- (_Bool)_isDeviceLocked;
- (void)_setupNewDestinationsForDispatcher:(id)arg1;
- (void)_setupLegacyDestinationsForDispatcher:(id)arg1 lockScreenManager:(id)arg2;
- (void)_setupLongLookPrototypingForDispatcher:(id)arg1;
- (_Bool)_modernLockScreenEnabled;
- (_Bool)_longLookPrototypingEnabled;
- (void)_updateActiveDestinations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

