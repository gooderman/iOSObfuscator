//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVEBaseModel.h"

@class NSString;

@interface TVEStyle : TVEBaseModel
{
    long long _layout;
    long long _num_per_row;
    NSString *_interval;
    NSString *_top_margin;
    NSString *_display_score;
    NSString *_display_online;
    NSString *_display_hot;
    NSString *_paging;
    NSString *_local_recommend;
}

@property(copy, nonatomic) NSString *local_recommend; // @synthesize local_recommend=_local_recommend;
@property(copy, nonatomic) NSString *paging; // @synthesize paging=_paging;
@property(copy, nonatomic) NSString *display_hot; // @synthesize display_hot=_display_hot;
@property(copy, nonatomic) NSString *display_online; // @synthesize display_online=_display_online;
@property(copy, nonatomic) NSString *display_score; // @synthesize display_score=_display_score;
@property(copy, nonatomic) NSString *top_margin; // @synthesize top_margin=_top_margin;
@property(copy, nonatomic) NSString *interval; // @synthesize interval=_interval;
@property(nonatomic) long long num_per_row; // @synthesize num_per_row=_num_per_row;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
- (void).cxx_destruct;

@end

