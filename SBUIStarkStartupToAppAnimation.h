//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUIAnimationController.h"

@class UIView, _SBUIStarkStartupToAppAnimation;

@interface SBUIStarkStartupToAppAnimation : SBUIAnimationController
{
    _SBUIStarkStartupToAppAnimation *_animation;
}

@property(readonly, nonatomic) _SBUIStarkStartupToAppAnimation *animation; // @synthesize animation=_animation;
- (void).cxx_destruct;
- (id)_waitToStartTransaction;
- (id)_animationWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3;
- (void)_applicationDependencyStateChanged;
- (id)_animationProgressDependencies;
@property(readonly, nonatomic) UIView *fromLockoutView;
- (id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3;
- (id)initFromLockoutView:(id)arg1 starkScreenController:(id)arg2;

@end

