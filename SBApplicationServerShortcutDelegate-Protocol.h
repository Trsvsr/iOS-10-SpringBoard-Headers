//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBApplicationServerDelegate-Protocol.h"

@class NSArray, NSString, SBApplicationServer;
@protocol FBSystemServiceClient;

@protocol SBApplicationServerShortcutDelegate <SBApplicationServerDelegate>
- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSystemServiceClient>)arg2 setDynamicApplicationShortcutItems:(NSArray *)arg3 forBundleIdentifier:(NSString *)arg4;
- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSystemServiceClient>)arg2 fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg3 forBundleIdentifier:(NSString *)arg4 withCompletion:(void (^)(SBSApplicationShortcutServiceFetchResult *))arg5;
@end

