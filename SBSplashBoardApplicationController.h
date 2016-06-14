//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SplashBoard/XBApplicationController.h>

#import "FBApplicationLibraryPreInstallClient-Protocol.h"

@class FBApplicationLibrary, NSString;

@interface SBSplashBoardApplicationController : XBApplicationController <FBApplicationLibraryPreInstallClient>
{
    FBApplicationLibrary *_applicationLibrary;
}

- (void).cxx_destruct;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;
- (void)applicationLibrary:(id)arg1 didDemoteApplications:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationLibrary:(id)arg1 _willNotify_didReplaceApplications:(id)arg2 withApplications:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)applicationLibrary:(id)arg1 _willNotify_didAddApplications:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_registerForFBApplicationLibraryEventsBecauseWeAreSpringBoard;
- (id)_allApplicationsFilteredBySystem:(_Bool)arg1 bySplashBoard:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
