//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCSeqenceHandlerRunner.h"

#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class BCFeedbackKit, BCFeedbackViewController, NSMutableDictionary, NSString, UIPopoverController, UIWebView;

@interface YWImagePickRunner : BCSeqenceHandlerRunner <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate>
{
    int _takingPhotoType;
    BCFeedbackViewController *_viewController;
    UIWebView *_bridgeWebView;
    NSMutableDictionary *_serviceDict;
    BCFeedbackKit *_feedbackKit;
    UIPopoverController *_popoverCtrl;
}

@property(retain, nonatomic) UIPopoverController *popoverCtrl; // @synthesize popoverCtrl=_popoverCtrl;
@property(nonatomic) __weak BCFeedbackKit *feedbackKit; // @synthesize feedbackKit=_feedbackKit;
@property(retain, nonatomic) NSMutableDictionary *serviceDict; // @synthesize serviceDict=_serviceDict;
@property(nonatomic) int takingPhotoType; // @synthesize takingPhotoType=_takingPhotoType;
@property(nonatomic) __weak UIWebView *bridgeWebView; // @synthesize bridgeWebView=_bridgeWebView;
@property(nonatomic) __weak BCFeedbackViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)ask4PostPhotoWithOriginImage:(id)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_showActionSheet;
- (void)_showAlbumPickerView;
- (void)_showCamaraPickerView;
- (void)endChooseImageWithCode:(int)arg1 errorMsg:(id)arg2;
- (void)startPickImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

