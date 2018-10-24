//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "LZMFProjManagerDelegate.h"
#import "LZMNetStatusViewDelegate.h"
#import "LZMReportErrorViewDelegate.h"
#import "LZMVideoQualityViewDelegate.h"
#import "LZMYSelectProgramDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class LZMButton, LZMFProjDeviceView, LZMFProjectBGView, LZMNetStatusView, LZMPlayerActivity, LZMPlayerButton, LZMPlayerModel, LZMPlayerSpeedView, LZMReplayView, LZMReportErrorView, LZMSlider, LZMVideoQualityView, LZMWebPlayView, LZMYSelectProgramView, NSString, UIButton, UIImageView, UILabel, UIProgressView, UITapGestureRecognizer;

@interface LZMTvShowControlView : UIView <UIGestureRecognizerDelegate, LZMNetStatusViewDelegate, LZMReportErrorViewDelegate, LZMVideoQualityViewDelegate, LZMYSelectProgramDelegate, LZMFProjManagerDelegate>
{
    _Bool _showing;
    _Bool _shrink;
    _Bool _cellVideo;
    _Bool _dragged;
    _Bool _playeEnd;
    _Bool _fullScreen;
    _Bool _isDistory;
    UIImageView *_topImageView;
    LZMButton *_backBtn;
    UILabel *_titleLabel;
    UILabel *_sourceLabel;
    LZMButton *_collectBtn;
    LZMButton *_errorBtn;
    LZMButton *_projectBtn;
    LZMButton *_lockBtn;
    LZMPlayerSpeedView *_speedView;
    LZMPlayerActivity *_activityView;
    UIImageView *_bottomImageView;
    LZMPlayerButton *_playBtn;
    LZMButton *_nextBtn;
    LZMButton *_fullScreenBtn;
    LZMButton *_chooseNumBtn;
    UIButton *_changeQualityBtn;
    UILabel *_currentTimeLabel;
    UILabel *_totalTimeLabel;
    UIProgressView *_progressView;
    LZMSlider *_progresSlider;
    UITapGestureRecognizer *_tapGesture;
    UIView *_loadFailView;
    LZMVideoQualityView *_changeQualityView;
    LZMYSelectProgramView *_chooseNumberView;
    LZMReportErrorView *_reportErrorView;
    LZMNetStatusView *_netStatusView;
    LZMWebPlayView *_webPlayView;
    LZMReplayView *_replayView;
    UILabel *_shieldLabel;
    LZMPlayerModel *_playerModel;
    double _scale;
    LZMFProjectBGView *_projectBGView;
    LZMFProjDeviceView *_deviceView;
}

@property(retain, nonatomic) LZMFProjDeviceView *deviceView; // @synthesize deviceView=_deviceView;
@property(retain, nonatomic) LZMFProjectBGView *projectBGView; // @synthesize projectBGView=_projectBGView;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic, getter=isDistory) _Bool isDistory; // @synthesize isDistory=_isDistory;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic, getter=isPlayEnd) _Bool playeEnd; // @synthesize playeEnd=_playeEnd;
@property(nonatomic, getter=isDragged) _Bool dragged; // @synthesize dragged=_dragged;
@property(nonatomic, getter=isCellVideo) _Bool cellVideo; // @synthesize cellVideo=_cellVideo;
@property(nonatomic, getter=isShrink) _Bool shrink; // @synthesize shrink=_shrink;
@property(nonatomic, getter=isShowing) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) LZMPlayerModel *playerModel; // @synthesize playerModel=_playerModel;
@property(retain, nonatomic) UILabel *shieldLabel; // @synthesize shieldLabel=_shieldLabel;
@property(retain, nonatomic) LZMReplayView *replayView; // @synthesize replayView=_replayView;
@property(retain, nonatomic) LZMWebPlayView *webPlayView; // @synthesize webPlayView=_webPlayView;
@property(retain, nonatomic) LZMNetStatusView *netStatusView; // @synthesize netStatusView=_netStatusView;
@property(retain, nonatomic) LZMReportErrorView *reportErrorView; // @synthesize reportErrorView=_reportErrorView;
@property(retain, nonatomic) LZMYSelectProgramView *chooseNumberView; // @synthesize chooseNumberView=_chooseNumberView;
@property(retain, nonatomic) LZMVideoQualityView *changeQualityView; // @synthesize changeQualityView=_changeQualityView;
@property(retain, nonatomic) UIView *loadFailView; // @synthesize loadFailView=_loadFailView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) LZMSlider *progresSlider; // @synthesize progresSlider=_progresSlider;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIButton *changeQualityBtn; // @synthesize changeQualityBtn=_changeQualityBtn;
@property(retain, nonatomic) LZMButton *chooseNumBtn; // @synthesize chooseNumBtn=_chooseNumBtn;
@property(retain, nonatomic) LZMButton *fullScreenBtn; // @synthesize fullScreenBtn=_fullScreenBtn;
@property(retain, nonatomic) LZMButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) LZMPlayerButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) LZMPlayerActivity *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) LZMPlayerSpeedView *speedView; // @synthesize speedView=_speedView;
@property(retain, nonatomic) LZMButton *lockBtn; // @synthesize lockBtn=_lockBtn;
@property(retain, nonatomic) LZMButton *projectBtn; // @synthesize projectBtn=_projectBtn;
@property(retain, nonatomic) LZMButton *errorBtn; // @synthesize errorBtn=_errorBtn;
@property(retain, nonatomic) LZMButton *collectBtn; // @synthesize collectBtn=_collectBtn;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) LZMButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
- (void).cxx_destruct;
- (void)selectDevice:(id)arg1;
- (void)forbidTransform;
- (void)getSearchDeviceWithArray:(id)arg1;
- (void)exitBTNAction:(id)arg1;
- (void)projectBtnClick:(id)arg1;
- (void)lzm_proTellPlayerActivity;
- (void)lzm_sourceChangedAndExitProject;
- (void)didSelectItem:(long long)arg1;
- (void)reportErrorForIndex:(long long)arg1 withErrorInfo:(id)arg2;
- (void)netStatusViewPlayerContinuePlay:(id)arg1;
- (void)lzmdelegate_ChangeVideoQualityWithIndex:(long long)arg1;
- (void)buildChooseNumberView:(id)arg1;
- (void)cancelAutoFadeOutControlView;
- (void)autoFadeOutControlView;
- (void)hideControlView;
- (void)showControlView;
- (void)lzm_viewWillDisAppear;
- (void)lzm_viewWillAppear;
- (void)lzm_playerPlayEnd;
- (void)lzm_playerPlayStart;
- (void)lzm_collect:(_Bool)arg1;
- (void)lzm_webPlay;
- (void)lzm_netWorkStatusConfigWithStatus:(long long)arg1;
- (void)lzm_playerStatusFailed:(id)arg1;
- (void)lzm_sourceState:(long long)arg1 showShieldView:(_Bool)arg2;
- (void)lzm_playerDraggedEnd;
- (void)lzm_playerDraggedBegin;
- (void)lzm_playerDraggedTime:(long long)arg1 totalTime:(long long)arg2 isForward:(_Bool)arg3;
- (void)lzm_playerCurrentTime:(long long)arg1 totalTime:(long long)arg2 sliderValue:(double)arg3 bufferProgress:(double)arg4;
- (void)lzm_playerResetControlView;
- (void)lzm_playerHideControlView;
- (void)lzm_playerShowControlView;
- (void)lzm_playerShowOrHideControlView;
- (void)lzm_playerCancelAutoFadeOutControlView;
- (void)lzm_playerActivity:(_Bool)arg1 showText:(id)arg2;
- (void)lzm_playerPlayBtnState:(_Bool)arg1;
- (void)lzm_playerModel:(id)arg1;
- (void)setShieldConstraint;
- (void)portraitSubViewsConstraints;
- (void)setOrientationPortraitConstraint;
- (void)landscapeSubViewsConstraints;
- (void)setOrientationLandscapeConstraint;
- (void)replayBtnClick;
- (void)progressSliderTapGesture:(id)arg1;
- (void)progressSliderTouchEnded:(id)arg1;
- (void)progressSliderValueChanged:(id)arg1;
- (void)progressSliderTouchBegan:(id)arg1;
- (void)reportBtnClick:(id)arg1;
- (void)reloadBtnClick:(id)arg1;
- (void)chooseNumBtnAction:(id)arg1;
- (void)changeQuailtyAction:(id)arg1;
- (void)errorBtnClick:(id)arg1;
- (void)fullScreenBtnClick:(id)arg1;
- (void)collectBtnClick:(id)arg1;
- (void)lockScrrenBtnClick:(id)arg1;
- (void)backBtnClick:(id)arg1;
- (void)nextBtnClick:(id)arg1;
- (void)playBtnClick:(id)arg1;
- (void)buildBottomView;
- (void)buildMiddleView;
- (void)buildTopView;
- (void)listeningRotating;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

