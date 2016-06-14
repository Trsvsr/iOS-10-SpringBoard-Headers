//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBHarmonicOscillator : NSObject
{
    double A;
    double Z;
    double k;
    double dk;
    double mink;
    double m;
    double dm;
    double minm;
    double psi_n;
    double psi_d;
    double zeta;
}

@property(nonatomic) double minimumMass; // @synthesize minimumMass=minm;
@property(nonatomic) double massDecay; // @synthesize massDecay=dm;
@property(nonatomic) double mass; // @synthesize mass=m;
@property(nonatomic) double minimumSpringStrength; // @synthesize minimumSpringStrength=mink;
@property(nonatomic) double springDecay; // @synthesize springDecay=dk;
@property(nonatomic) double springStrength; // @synthesize springStrength=k;
@property(nonatomic) double endingAmplitude; // @synthesize endingAmplitude=Z;
@property(nonatomic) double startingAmplitude; // @synthesize startingAmplitude=A;
- (double)amplitudeForElapsedTime:(double)arg1;
- (void)updateParameters;
- (void)setSpringConstant:(double)arg1;
- (id)init;

@end

