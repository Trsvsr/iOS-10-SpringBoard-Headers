//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

@class SBCallToActionLabel, SBDashBoardVibrantWallpaperButton, SBSlideUpAppGrabberView, SBWallpaperEffectView, UIView, _UILegibilitySettings;
@protocol SBUILegibility;

@interface SBDashBoardMainPageView : SBDashBoardViewBase
{
    _UILegibilitySettings *_legibilitySettings;
    SBCallToActionLabel *_callToActionLabel;
    UIView *_clippingLine;
    SBWallpaperEffectView *_slideUpAppGrabberBackgroundView;
    _Bool _logoutHugCorner;
    UIView<SBUILegibility> *_statusTextView;
    SBDashBoardVibrantWallpaperButton *_logoutButtonView;
    SBSlideUpAppGrabberView *_slideUpAppGrabberView;
    SBWallpaperEffectView *_wallpaperEffectView;
}

@property(retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
@property(retain, nonatomic) SBSlideUpAppGrabberView *slideUpAppGrabberView; // @synthesize slideUpAppGrabberView=_slideUpAppGrabberView;
@property(retain, nonatomic) SBDashBoardVibrantWallpaperButton *logoutButtonView; // @synthesize logoutButtonView=_logoutButtonView;
@property(retain, nonatomic) UIView<SBUILegibility> *statusTextView; // @synthesize statusTextView=_statusTextView;
@property(retain, nonatomic) SBCallToActionLabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_logoutButtonInsets;
- (void)_updateCallToActionLegibility;
- (void)_updateSlideToAppGrabberBackgroundView;
- (void)_updateSlideUpAppGrabberViewForLegibilitySettings;
- (void)_updateLogoutButtonForLegibilitySettings;
- (void)_updateStatusTextViewForLegibilitySettings;
- (id)_legibilityPrototypeSettings;
- (void)_layoutSlideUpAppGrabberView;
- (void)_layoutCallToActionLabel;
- (void)_layoutLogoutButtonView;
- (void)_layoutStatusTextView;
- (void)_layoutWallpaperEffectView;
- (id)presentationRegions;
- (void)layoutSubviews;
- (void)updateForPresentation:(id)arg1;
- (void)updateForLegibilitySettings:(id)arg1;

@end

