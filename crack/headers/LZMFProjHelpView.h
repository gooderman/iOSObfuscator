//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIScrollView;

@interface LZMFProjHelpView : UIView <UIScrollViewDelegate>
{
    CDUnknownBlockType _backPlayBlock;
    UIView *_naviVIew;
    UIScrollView *_rootScrollView;
}

@property(retain, nonatomic) UIScrollView *rootScrollView; // @synthesize rootScrollView=_rootScrollView;
@property(retain, nonatomic) UIView *naviVIew; // @synthesize naviVIew=_naviVIew;
@property(copy, nonatomic) CDUnknownBlockType backPlayBlock; // @synthesize backPlayBlock=_backPlayBlock;
- (void).cxx_destruct;
- (void)backAction:(id)arg1;
- (void)creayeNavi;
- (void)createRootScrollView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

