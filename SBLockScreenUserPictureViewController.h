//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBLockOverlayViewController.h"

@class SBLockScreenUserPictureView, UMUser;

@interface SBLockScreenUserPictureViewController : SBLockOverlayViewController
{
    UMUser *_user;
    SBLockScreenUserPictureView *_userPictureView;
    _Bool _notificationListVisible;
}

- (void).cxx_destruct;
- (void)_notificationListDidDisappear:(id)arg1;
- (void)_notificationListDidAppear:(id)arg1;
- (_Bool)shouldBeHidden;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

