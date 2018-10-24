//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LZMYLocationTableItemBaseView.h"

@class NSString;

@interface LZMYLocationItemView : LZMYLocationTableItemBaseView
{
    long long _selectIndex;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
- (void).cxx_destruct;
- (void)visibleChannelProgramListManage;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)requestProgramListDataChannelModel:(long long)arg1 withIndexPath:(id)arg2;
- (void)requsetChannelTablePlaceId:(long long)arg1;
- (void)getData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end

