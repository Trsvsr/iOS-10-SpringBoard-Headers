//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBCollectionViewCell.h"

#import "SBUIBannerView-Protocol.h"

@class NSString, SBBannerContextView;
@protocol SBStarkSessionConfiguring;

@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView>
{
    SBBannerContextView *_contextView;
    id <SBStarkSessionConfiguring> _starkSessionConfiguration;
}

@property(retain, nonatomic) id <SBStarkSessionConfiguring> starkSessionConfiguration; // @synthesize starkSessionConfiguration=_starkSessionConfiguration;
- (void).cxx_destruct;
- (_Bool)shouldBorrowScreen;
- (id)bannerContext;
- (_Bool)_disableRasterizeInAnimations;
- (void)prepareForReuse;
- (void)noteDidDismiss;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteDidAppear;
- (void)noteWillAppear;
- (void)setBannerContext:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

