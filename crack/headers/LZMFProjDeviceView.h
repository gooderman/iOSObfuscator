//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LZMFProSearchView, LZMFProjHelpView, NSMutableArray, NSString, UIButton, UITableView, UITapGestureRecognizer, ZM_UpnpModel;

@interface LZMFProjDeviceView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    _Bool _isfullscreen;
    NSMutableArray *_deviceUseArray;
    ZM_UpnpModel *_currentDevice;
    CDUnknownBlockType _selectBlock;
    UITableView *_tableView;
    UIButton *_helpBtn;
    UIButton *_cancelBtn;
    LZMFProSearchView *_searchView;
    UITapGestureRecognizer *_singleRecognizer;
    LZMFProjHelpView *_helpView;
}

@property(retain, nonatomic) LZMFProjHelpView *helpView; // @synthesize helpView=_helpView;
@property(retain, nonatomic) UITapGestureRecognizer *singleRecognizer; // @synthesize singleRecognizer=_singleRecognizer;
@property(retain, nonatomic) LZMFProSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *helpBtn; // @synthesize helpBtn=_helpBtn;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(retain, nonatomic) ZM_UpnpModel *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(nonatomic) _Bool isfullscreen; // @synthesize isfullscreen=_isfullscreen;
@property(retain, nonatomic) NSMutableArray *deviceUseArray; // @synthesize deviceUseArray=_deviceUseArray;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)createSubViews;
- (void)cancelBtnAction:(id)arg1;
- (void)helpAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)doSingleTapGestureAction:(id)arg1;
- (void)rectCoredius_BottomLeft_and_BottomRight:(id)arg1;
- (void)rectCoredius_TopLeft_and_TopRight:(id)arg1;
- (void)removeAlerterView;
- (void)addSubviewInSelf;
- (void)seAnimateWithDuration;
- (void)hiddenWayBeginSetFrame;
- (void)setHidden:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

