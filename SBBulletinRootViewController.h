//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SBBulletinRootView, SBBulletinWindowController, _SBBulletinRootViewControllerTransitionContext;

@interface SBBulletinRootViewController : UIViewController
{
    SBBulletinRootView *_rootView;
    SBBulletinWindowController *_windowController;
    _SBBulletinRootViewControllerTransitionContext *_activeTransitionContext;
}

- (void).cxx_destruct;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wantsFullScreenLayout;
- (void)loadView;
- (id)initWithBulletinWindowController:(id)arg1;

@end

