//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LZMProgramChannel, NSArray, NSMutableArray, NSString;

@interface LZMProgramModel : NSObject
{
    _Bool _isBooking;
    _Bool _isShield;
    _Bool _isPlaying;
    _Bool _isJumpOut;
    long long _programId;
    NSString *_limit;
    NSString *_play_time;
    NSString *_play_date;
    NSString *_end_time;
    NSString *_playback;
    NSString *_title;
    NSString *_name;
    long long _external;
    long long _tv_channel_id;
    LZMProgramChannel *_channel;
    long long _playStatus;
    NSMutableArray *_playBackUrlArry;
    NSMutableArray *_UrlSourceArray;
    NSMutableArray *_WebSourceArray;
    NSArray *_AllSourceArray;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *AllSourceArray; // @synthesize AllSourceArray=_AllSourceArray;
@property(retain, nonatomic) NSMutableArray *WebSourceArray; // @synthesize WebSourceArray=_WebSourceArray;
@property(retain, nonatomic) NSMutableArray *UrlSourceArray; // @synthesize UrlSourceArray=_UrlSourceArray;
@property(retain, nonatomic) NSMutableArray *playBackUrlArry; // @synthesize playBackUrlArry=_playBackUrlArry;
@property(nonatomic) long long playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) _Bool isJumpOut; // @synthesize isJumpOut=_isJumpOut;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isShield; // @synthesize isShield=_isShield;
@property(nonatomic) _Bool isBooking; // @synthesize isBooking=_isBooking;
@property(retain, nonatomic) LZMProgramChannel *channel; // @synthesize channel=_channel;
@property(nonatomic) long long tv_channel_id; // @synthesize tv_channel_id=_tv_channel_id;
@property(nonatomic) long long external; // @synthesize external=_external;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *playback; // @synthesize playback=_playback;
@property(copy, nonatomic) NSString *end_time; // @synthesize end_time=_end_time;
@property(copy, nonatomic) NSString *play_date; // @synthesize play_date=_play_date;
@property(copy, nonatomic) NSString *play_time; // @synthesize play_time=_play_time;
@property(copy, nonatomic) NSString *limit; // @synthesize limit=_limit;
@property(nonatomic) long long programId; // @synthesize programId=_programId;
- (void).cxx_destruct;
- (double)getTimeIntervalForTimeString:(id)arg1;
- (void)lzm_SelectSourcePlayOrWebPlayWithArray:(id)arg1;

@end

