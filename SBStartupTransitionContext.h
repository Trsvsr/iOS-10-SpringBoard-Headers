//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class BKSDisplayRenderOverlay, NSString, NSURL, UMUser;

@interface SBStartupTransitionContext : NSObject <BSDescriptionProviding>
{
    NSString *_reason;
    NSString *_fromApplicationBundleID;
    NSURL *_applicationLaunchURL;
    _Bool _fromLocked;
    _Bool _fromOTASoftwareUpdate;
    _Bool _isDark;
    _Bool _isLogin;
    _Bool _isLogout;
    BKSDisplayRenderOverlay *_overlay;
    UMUser *_user;
    _Bool _hasUserSwitchOverlayMismatch;
}

@property(nonatomic) _Bool hasUserSwitchOverlayMismatch; // @synthesize hasUserSwitchOverlayMismatch=_hasUserSwitchOverlayMismatch;
@property(nonatomic, getter=isDark) _Bool dark; // @synthesize dark=_isDark;
@property(retain, nonatomic) BKSDisplayRenderOverlay *overlay; // @synthesize overlay=_overlay;
@property(nonatomic, getter=isLogout) _Bool logout; // @synthesize logout=_isLogout;
@property(nonatomic, getter=isLogin) _Bool login; // @synthesize login=_isLogin;
@property(nonatomic) _Bool fromOTASoftwareUpdate; // @synthesize fromOTASoftwareUpdate=_fromOTASoftwareUpdate;
@property(nonatomic) _Bool fromLocked; // @synthesize fromLocked=_fromLocked;
@property(copy, nonatomic) NSString *fromApplicationBundleID; // @synthesize fromApplicationBundleID=_fromApplicationBundleID;
@property(copy, nonatomic) NSURL *applicationLaunchURL; // @synthesize applicationLaunchURL=_applicationLaunchURL;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)_parseOverlayInfo;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_representation;
- (void)_reallyInitFromRepresentation:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_initWithRebootContext:(id)arg1;
- (id)_initWithRestartRequest:(id)arg1 fromLocked:(_Bool)arg2 fromApplication:(id)arg3;
- (id)_initWithRepresentation:(id)arg1 user:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

