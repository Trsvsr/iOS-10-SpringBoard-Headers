//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBApplication, SBProxyRemoteView;

@interface SBSheetView : UIView
{
    SBProxyRemoteView *_remoteProxyView;
    SBApplication *_app;
    _Bool _wasPresentedAnimated;
}

- (void).cxx_destruct;
- (void)noteSheetDidEnd;
- (_Bool)wasPresentedAnimated;
- (id)application;
- (id)remoteViewIdentifier;
- (id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 wasPresentedAnimated:(_Bool)arg3;

@end

