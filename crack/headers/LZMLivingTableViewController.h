//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LZMViewController.h"

#import "LZMSegmentControlDelegate.h"

@class LZMSegmentControl, NSMutableArray, NSString;

@interface LZMLivingTableViewController : LZMViewController <LZMSegmentControlDelegate>
{
    NSMutableArray *_titles;
    NSMutableArray *_controllers;
    NSMutableArray *_dataArray;
    NSMutableArray *_provioncNames;
    LZMSegmentControl *_groupControl;
}

@property(retain, nonatomic) LZMSegmentControl *groupControl; // @synthesize groupControl=_groupControl;
@property(retain, nonatomic) NSMutableArray *provioncNames; // @synthesize provioncNames=_provioncNames;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSMutableArray *controllers; // @synthesize controllers=_controllers;
@property(retain, nonatomic) NSMutableArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
- (void)segmentControlDidselectAtIndex:(long long)arg1;
- (void)scrollToHotLive;
- (void)setUpTitlesAndControllers;
- (void)searchButtonAction:(id)arg1;
- (void)bookingButtonAction:(id)arg1;
- (void)buildNavbarButton;
- (void)buildGroupControl;
- (void)requestTvGroupsData;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

