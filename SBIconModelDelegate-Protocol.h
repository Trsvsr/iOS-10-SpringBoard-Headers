//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSIndexPath, NSString, SBApplication, SBIcon, SBIconModel, SBRootFolder, UIWebClip;

@protocol SBIconModelDelegate <NSObject>
- (NSIndexPath *)iconModel:(SBIconModel *)arg1 customInsertionIndexPathForIcon:(SBIcon *)arg2 inRootFolder:(SBRootFolder *)arg3;
- (NSDictionary *)placeholdersByDisplayIDForIconModel:(SBIconModel *)arg1;
- (SBApplication *)iconModel:(SBIconModel *)arg1 applicationWithBundleIdentifier:(NSString *)arg2;
- (_Bool)canAddDownloadingIconForApplication:(SBApplication *)arg1;
- (_Bool)canAddWebClip:(UIWebClip *)arg1;
- (_Bool)supportsDock;
- (unsigned long long)maxColCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxIconCountForDock;
- (unsigned long long)maxIconCountForListInFolderClass:(Class)arg1;
- (unsigned long long)maxListCountForFolders;

@optional
- (void)didDeleteIconState:(SBIconModel *)arg1;
- (void)didSaveIconState:(SBIconModel *)arg1;
- (_Bool)canSaveIconState:(SBIconModel *)arg1;
- (void)willUnarchiveIconModel:(SBIconModel *)arg1 withMetadata:(NSDictionary *)arg2;
@end

