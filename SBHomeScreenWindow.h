//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBWindow.h"

@class SBHomeScreenViewController;

@interface SBHomeScreenWindow : SBWindow
{
}

+ (_Bool)sb_autorotates;
+ (struct CGRect)constrainFrameToScreen:(struct CGRect)arg1;
@property(readonly, nonatomic) __weak SBHomeScreenViewController *homeScreenViewController;
- (id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5;

@end

