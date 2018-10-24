//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRAgentMessageView.h"

@class NSMutableArray, UITapGestureRecognizer;

@interface DRAgentMessageThreeImagesView : DRAgentMessageView
{
    id <DRAgentMessageThreeImagesAdDelegate> delegate;
    NSMutableArray *_imgsArray;
    NSMutableArray *_imgUrlArray;
    UITapGestureRecognizer *_firstImageTap;
}

+ (double)getMessageThreeImagesViewHeight:(double)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *firstImageTap; // @synthesize firstImageTap=_firstImageTap;
@property(retain, nonatomic) NSMutableArray *imgUrlArray; // @synthesize imgUrlArray=_imgUrlArray;
@property(retain, nonatomic) NSMutableArray *imgsArray; // @synthesize imgsArray=_imgsArray;
@property(nonatomic) __weak id <DRAgentMessageThreeImagesAdDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)threeImgsClick:(id)arg1;
- (void)imageWithData:(id)arg1;
- (void)setAdvertDataModel:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 messageViewType:(long long)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

