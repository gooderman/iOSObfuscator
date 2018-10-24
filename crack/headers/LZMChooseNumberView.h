//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "LZMYSelectProgramDelegate.h"

@class LZMSourceInfoModel, LZMYSelectProgramView, NSString, UIButton, YYLabel;

@interface LZMChooseNumberView : UIView <LZMYSelectProgramDelegate>
{
    LZMSourceInfoModel *_sourceModel;
    CDUnknownBlockType _halfChooseNumber;
    UIButton *_exitButton;
    YYLabel *_nameLabel;
    LZMYSelectProgramView *_numberView;
}

@property(retain, nonatomic) LZMYSelectProgramView *numberView; // @synthesize numberView=_numberView;
@property(retain, nonatomic) YYLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(copy, nonatomic) CDUnknownBlockType halfChooseNumber; // @synthesize halfChooseNumber=_halfChooseNumber;
@property(retain, nonatomic) LZMSourceInfoModel *sourceModel; // @synthesize sourceModel=_sourceModel;
- (void).cxx_destruct;
- (void)programContentCollectionViewDownPan;
- (void)didSelectItem:(long long)arg1;
- (void)exitButtonAction;
- (void)setHidden:(_Bool)arg1;
- (void)buildUI;
- (id)initWithFrame:(struct CGRect)arg1 sourceModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

