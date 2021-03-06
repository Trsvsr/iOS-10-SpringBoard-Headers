//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSString, SBBootDefaults, UMUser;

@interface SBInitialRestartState : NSObject <BSDescriptionProviding>
{
    _Bool _isAuthenticated;
    _Bool _isInLostMode;
    _Bool _isBlocked;
    _Bool _hasPasscodeSet;
    _Bool _requiresSetup;
    _Bool _shouldNeverLock;
    UMUser *_currentUser;
    SBBootDefaults *_bootDefaults;
}

@property(retain, nonatomic) SBBootDefaults *bootDefaults; // @synthesize bootDefaults=_bootDefaults;
@property(retain, nonatomic) UMUser *currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) _Bool shouldNeverLock; // @synthesize shouldNeverLock=_shouldNeverLock;
@property(nonatomic) _Bool hasPasscodeSet; // @synthesize hasPasscodeSet=_hasPasscodeSet;
@property(nonatomic) _Bool requiresSetup; // @synthesize requiresSetup=_requiresSetup;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_isBlocked;
@property(nonatomic, getter=isInLostMode) _Bool inLostMode; // @synthesize inLostMode=_isInLostMode;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_isAuthenticated;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

