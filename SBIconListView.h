//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, SBIcon, SBIconListModel, SBIconViewMap, UIFocusContainerGuide, UIFocusGuide;
@protocol SBIconListLayoutDelegate;

@interface SBIconListView : UIView
{
    SBIconListModel *_model;
    SBIconViewMap *_viewMap;
    long long _orientation;
    double _statusBarHeight;
    SBIcon *_bouncedIcon;
    NSMutableArray *_removedIcons;
    NSArray *_rotationContainers;
    unsigned int _needsLayout:1;
    unsigned int _rotating:1;
    UIView *_fadeView;
    _Bool _purged;
    UIFocusContainerGuide *_pageContainerGuide;
    _Bool _isEditing;
    _Bool _layoutReversed;
    UIFocusGuide *_nextIconFocusGuide;
    UIFocusGuide *_previousIconFocusGuide;
    id <SBIconListLayoutDelegate> _layoutDelegate;
    struct CGRect _wallpaperRelativeFrame;
}

+ (unsigned long long)maxVisibleIcons;
+ (unsigned long long)maxIcons;
+ (unsigned long long)iconColumnsForInterfaceOrientation:(long long)arg1;
+ (unsigned long long)maxVisibleIconRowsInterfaceOrientation:(long long)arg1;
+ (unsigned long long)iconRowsForInterfaceOrientation:(long long)arg1;
+ (long long)rotationAnchor;
@property(nonatomic) __weak id <SBIconListLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) struct CGRect wallpaperRelativeFrame; // @synthesize wallpaperRelativeFrame=_wallpaperRelativeFrame;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIFocusGuide *previousIconFocusGuide; // @synthesize previousIconFocusGuide=_previousIconFocusGuide;
@property(retain, nonatomic) UIFocusGuide *nextIconFocusGuide; // @synthesize nextIconFocusGuide=_nextIconFocusGuide;
@property(nonatomic, getter=isLayoutReversed) _Bool layoutReversed; // @synthesize layoutReversed=_layoutReversed;
@property(nonatomic) _Bool purged; // @synthesize purged=_purged;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;
- (void).cxx_destruct;
- (_Bool)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1;
- (void)_sendLayoutDelegateLayoutInvalidated;
- (void)_sendLayoutDelegateWouldHaveMovedIcon:(id)arg1;
- (void)cleanupAfterRotation;
- (void)performRotationWithDuration:(double)arg1;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)rowAtPoint:(struct CGPoint)arg1;
- (unsigned long long)columnAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1;
- (double)verticalIconPadding;
- (double)horizontalIconPadding;
- (double)horizontalBumpForColumn:(unsigned long long)arg1;
- (double)sideIconInset;
- (double)bottomIconInset;
- (double)topIconInset;
- (id)bouncedIcon;
- (void)setBouncedIcon:(id)arg1;
- (_Bool)isDock;
- (void)enumerateIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIconsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_updateEditingStateForIcons:(id)arg1 animated:(_Bool)arg2;
- (void)updateEditingStateAnimated:(_Bool)arg1;
- (void)showIconImagesFromColumn:(long long)arg1 toColumn:(long long)arg2 totalColumns:(long long)arg3 allowAnimations:(_Bool)arg4;
- (void)showAllIcons;
- (id)iconAtPoint:(struct CGPoint)arg1 index:(unsigned long long *)arg2 proposedOrder:(int *)arg3 grabbedIcon:(id)arg4;
- (id)iconAtPoint:(struct CGPoint)arg1 index:(unsigned long long *)arg2;
- (void)layoutIconsIfNeeded:(double)arg1 domino:(_Bool)arg2;
- (void)layoutIconsNow;
- (void)setIconsNeedLayout;
- (void)layoutFocusGuides;
- (void)setFrame:(struct CGRect)arg1;
- (unsigned long long)indexOfIcon:(id)arg1;
- (struct SBIconCoordinate)coordinateForIconAtIndex:(unsigned long long)arg1;
- (struct SBIconCoordinate)coordinateForIcon:(id)arg1;
- (id)viewForIcon:(id)arg1;
- (struct CGPoint)centerForIconCoordinate:(struct SBIconCoordinate)arg1;
- (struct CGPoint)centerForIcon:(id)arg1;
- (struct CGPoint)originForIcon:(id)arg1;
- (struct CGPoint)originForIconAtIndex:(unsigned long long)arg1;
- (struct CGSize)defaultIconSize;
- (void)removeAllIconAnimations;
- (void)setAlphaForAllIcons:(double)arg1;
- (void)removeIcon:(id)arg1;
- (void)removeIconAtIndex:(unsigned long long)arg1;
- (id)removedIcons;
- (id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2 moveNow:(_Bool)arg3;
- (id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2 moveNow:(_Bool)arg3 pop:(_Bool)arg4;
- (id)placeIcon:(id)arg1 atIndex:(unsigned long long)arg2 moveNow:(_Bool)arg3 pop:(_Bool)arg4;
- (void)_layoutIcon:(id)arg1 atIndex:(unsigned long long)arg2 createViewNow:(_Bool)arg3 pop:(_Bool)arg4;
- (void)_popIconView:(id)arg1;
- (unsigned long long)firstFreeSlotOrLastSlotIndexForType:(int)arg1;
- (unsigned long long)firstFreeSlotOrLastSlotIndex;
- (unsigned long long)firstFreeSlotIndexForType:(int)arg1;
- (unsigned long long)firstFreeSlotIndex;
- (_Bool)containsIcon:(id)arg1;
- (_Bool)isFull;
- (_Bool)isEmpty;
- (id)visibleIcons;
- (id)icons;
- (_Bool)compactIcons:(_Bool)arg1;
- (unsigned long long)rowForIcon:(id)arg1;
- (id)description;
- (struct SBIconCoordinate)iconCoordinateForIndex:(unsigned long long)arg1 forOrientation:(long long)arg2;
- (unsigned long long)indexForCoordinate:(struct SBIconCoordinate)arg1 forOrientation:(long long)arg2;
- (int)iconLocation;
- (unsigned long long)iconRowsForSpacingCalculation;
- (unsigned long long)iconsInRowForSpacingCalculation;
- (unsigned long long)iconColumnsForCurrentOrientation;
- (unsigned long long)iconRowsForCurrentOrientation;
- (struct CGPoint)_wallpaperRelativeIconCenterForIconView:(id)arg1;
- (struct CGPoint)_wallpaperRelativeIconCenterForIconImageCenter:(struct CGPoint)arg1;
- (Class)baseIconViewClass;
- (id)viewMap;
- (id)model;
- (void)setModel:(id)arg1;
- (id)tintColor;
- (void)dealloc;
- (id)initWithModel:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;
- (id)init;
- (Class)modelClass;

@end

