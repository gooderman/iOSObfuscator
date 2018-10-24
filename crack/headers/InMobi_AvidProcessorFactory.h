//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface InMobi_AvidProcessorFactory : NSObject
{
    id <InMobi_AvidNodeProcessor> _screenProcessor;
    id <InMobi_AvidNodeProcessor> _windowProcessor;
    id <InMobi_AvidNodeProcessor> _viewProcessor;
    id <InMobi_AvidNodeProcessor> _emptyProcessor;
}

+ (id)sharedFactory;
- (void).cxx_destruct;
- (id)emptyProcessor;
- (id)processorForView;
- (id)processorForWindow;
- (id)processorForScreen;

@end

