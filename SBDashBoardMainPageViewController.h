//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDashBoardPageViewController.h"

#import "SBDashBoardPageViewControllerProtocol-Protocol.h"

@class NSArray, NSSet, NSString, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardMainPageContentViewController, UIColor, _UILegibilitySettings;
@protocol SBDashBoardViewControllerProtocol, SBDashBoardViewPresenting, UICoordinateSpace;

@interface SBDashBoardMainPageViewController : SBDashBoardPageViewController <SBDashBoardPageViewControllerProtocol>
{
}

+ (_Bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;
+ (Class)isolationViewControllerClass;
@property(readonly, nonatomic) SBDashBoardMainPageContentViewController *contentViewController;

// Remaining properties
@property(readonly, copy, nonatomic) SBDashBoardAppearance *activeAppearance;
@property(readonly, copy, nonatomic) SBDashBoardBehavior *activeBehavior;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) _Bool authenticated;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(nonatomic) __weak id <SBDashBoardViewControllerProtocol> dashBoardViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long participantState;
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationType;
@property(nonatomic) __weak id <SBDashBoardViewPresenting> presenter;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long scrollingMode;
@property(readonly) Class superclass;
@property(nonatomic, getter=isTransitioning) _Bool transitioning;

@end

