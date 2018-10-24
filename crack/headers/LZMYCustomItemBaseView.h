//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LZMTvGroupModel, NSMutableArray, NSString, UITableView;

@interface LZMYCustomItemBaseView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSMutableArray *_historyDataArray;
    NSMutableArray *_colloctDataArray;
    NSMutableArray *_selfAddDataArray;
    LZMTvGroupModel *_model;
}

@property(retain, nonatomic) LZMTvGroupModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *selfAddDataArray; // @synthesize selfAddDataArray=_selfAddDataArray;
@property(retain, nonatomic) NSMutableArray *colloctDataArray; // @synthesize colloctDataArray=_colloctDataArray;
@property(retain, nonatomic) NSMutableArray *historyDataArray; // @synthesize historyDataArray=_historyDataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)getData;
- (void)renderUIWithModel:(id)arg1 Index:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

