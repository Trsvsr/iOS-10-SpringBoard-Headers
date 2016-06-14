//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NCNotificationSource-Protocol.h"

@class NCNotificationDispatcher, NSString;

@interface SBWalletNotificationSource : NSObject <NCNotificationSource>
{
    NCNotificationDispatcher *_dispatcher;
}

@property(retain, nonatomic) NCNotificationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
- (void)withdrawNotificationRequestForCardItem:(id)arg1;
- (void)modifyNotificationRequestForCardItem:(id)arg1;
- (void)postNotificationRequestForCardItem:(id)arg1;
- (id)initWithDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

