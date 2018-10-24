//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TVESection, UIScrollView;

@interface TVEChannelIconView : UIView
{
    id <TVEChannelIconViewDelegate> _delegate;
    UIScrollView *_iconScrollView;
    TVESection *_iconSection;
}

@property(retain, nonatomic) TVESection *iconSection; // @synthesize iconSection=_iconSection;
@property(retain, nonatomic) UIScrollView *iconScrollView; // @synthesize iconScrollView=_iconScrollView;
@property(nonatomic) __weak id <TVEChannelIconViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)iconClick:(id)arg1;
- (void)loadData:(id)arg1;
- (id)init;

@end

