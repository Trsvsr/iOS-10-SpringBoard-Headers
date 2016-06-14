//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBIconZoomAnimator.h"

#import "SBIconListLayoutDelegate-Protocol.h"

@class NSString, SBCenterZoomSettings, UIView;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate>
{
    UIView *_zoomView;
    double _iconZoomedZ;
    double _centerRow;
    double _centerCol;
    struct CGPoint _cameraPosition;
}

@property(readonly, nonatomic) struct CGPoint cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(readonly, nonatomic) UIView *zoomView; // @synthesize zoomView=_zoomView;
- (void).cxx_destruct;
- (void)_calculateCentersAndCameraPosition;
- (id)_animationFactoryForDock;
- (id)_animationFactoryForIcon:(id)arg1;
- (void)_positionView:(id)arg1 forIcon:(id)arg2;
- (void)iconListViewLayoutInvalidated:(id)arg1;
- (void)iconListView:(id)arg1 wouldHaveMovedIcon:(id)arg2;
- (double)_iconZoomDelay;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (id)initWithFolderController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBCenterZoomSettings *settings; // @dynamic settings;
@property(readonly) Class superclass;

@end

