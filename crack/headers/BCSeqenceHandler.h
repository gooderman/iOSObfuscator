//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCHandler.h"

@class NSMutableSet;

@interface BCSeqenceHandler : BCHandler
{
    NSMutableSet *_delegateSet;
}

@property(retain, nonatomic) NSMutableSet *delegateSet; // @synthesize delegateSet=_delegateSet;
- (void).cxx_destruct;
- (void)endRunner:(id)arg1;
- (void)beginRunner:(id)arg1;
- (id)initWithEvent:(id)arg1 shouldOpenUI:(_Bool)arg2;
- (id)initWithEvent:(id)arg1;

@end

