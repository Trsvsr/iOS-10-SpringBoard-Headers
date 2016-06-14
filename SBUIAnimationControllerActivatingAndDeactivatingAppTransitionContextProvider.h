//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBUIAnimationControllerTransitionContextProvider-Protocol.h"

@class NSSet, NSString, SBWorkspaceApplication;

@interface SBUIAnimationControllerActivatingAndDeactivatingAppTransitionContextProvider : NSObject <SBUIAnimationControllerTransitionContextProvider>
{
    SBWorkspaceApplication *_activatingApp;
    SBWorkspaceApplication *_deactivatingApp;
}

+ (id)transitionContextProviderWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2;
@property(retain, nonatomic) SBWorkspaceApplication *deactivatingApp; // @synthesize deactivatingApp=_deactivatingApp;
@property(retain, nonatomic) SBWorkspaceApplication *activatingApp; // @synthesize activatingApp=_activatingApp;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *deactivatingApps;
@property(readonly, copy, nonatomic) NSSet *activatingApps;
- (id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

