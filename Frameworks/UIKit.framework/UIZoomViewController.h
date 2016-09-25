/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIZoomViewController : UIViewController {
    UIWindow * _window;
    UIButton * _zoomButton;
}

- (void).cxx_destruct;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (void)_changeZoom:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1 forWindow:(id)arg2;
- (void)_setupPositioningAndRotationForInterfaceOrientation:(int)arg1 offscreen:(BOOL)arg2;
- (void)_suspendAnimationStarted:(id)arg1;
- (void)_updateZoomButtonTitle;
- (id)_window;
- (void)_zoomOrientationAnimationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3;
- (void)_zoomOrientationChange:(id)arg1;
- (id)_zoomText:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isClassicControlWindow:(id)arg1;
- (void)loadView;
- (id)screen;

@end
