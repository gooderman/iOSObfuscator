//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface IMNativeRenderViewController : UIViewController
{
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (_Bool)prefersStatusBarHidden;
- (void)didReceiveMemoryWarning;
- (void)rotateViewIfOrientationNotSupported:(unsigned long long)arg1;
- (void)rotateViewBy:(long long)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithView:(id)arg1 withOrientation:(long long)arg2 withSafeAreaFrame:(struct CGRect)arg3 withUnsafeAreaColor:(id)arg4;
- (void)viewDidLoad;

@end

