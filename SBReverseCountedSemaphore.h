//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface SBReverseCountedSemaphore : NSObject
{
    NSObject<OS_dispatch_group> *_group;
}

- (void).cxx_destruct;
- (void)wait;
- (void)decrement;
- (void)increment;
- (id)init;

@end

