//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SBLayoutElementViewController;

@interface SBAppResizeElementControllerCacheKey : NSObject <NSCopying>
{
    SBLayoutElementViewController *_elementViewController;
    struct CGSize _elementViewSize;
}

@property(readonly, nonatomic) struct CGSize elementViewSize; // @synthesize elementViewSize=_elementViewSize;
@property(readonly, nonatomic) SBLayoutElementViewController *elementViewController; // @synthesize elementViewController=_elementViewController;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithLayoutElementViewController:(id)arg1;

@end

