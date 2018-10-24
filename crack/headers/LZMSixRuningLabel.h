//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIFont, UILabel, UIScrollView;

@interface LZMSixRuningLabel : UIView
{
    struct CGSize expectedLabelSize;
    float time;
    int speed;
    UIFont *_TheFont;
    UILabel *lab1;
    UILabel *lab2;
    UIScrollView *superView1;
    NSString *_strText;
}

@property(copy, nonatomic) NSString *strText; // @synthesize strText=_strText;
@property(nonatomic) int speed; // @synthesize speed;
@property(retain, nonatomic) UIScrollView *superView1; // @synthesize superView1;
@property(retain, nonatomic) UILabel *lab2; // @synthesize lab2;
@property(retain, nonatomic) UILabel *lab1; // @synthesize lab1;
@property(copy, nonatomic) UIFont *_TheFont; // @synthesize _TheFont;
- (void).cxx_destruct;
- (void)setLabelTextColor:(id)arg1;
- (void)beautyLiveMoveAction;
- (void)setBeautyLiveNoticeText:(id)arg1;
- (void)moveAction;
- (void)setLabelText:(id)arg1 andTheType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 duration:(double)arg2 andFadeLength:(float)arg3 andTheFont:(id)arg4 andTextColor:(id)arg5;

@end

