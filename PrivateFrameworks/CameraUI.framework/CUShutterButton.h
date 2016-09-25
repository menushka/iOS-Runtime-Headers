/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CUShutterButton : UIButton {
    UIView * __innerView;
    UIImageView * __outerImageView;
    CAMShutterButtonRingView * __outerView;
    UIActivityIndicatorView * __progressActivityIndicatorView;
    CAMTimelapseShutterRingView * __timelapseOuterView;
    int  _layoutStyle;
    int  _mode;
    BOOL  _pulsing;
    BOOL  _showDisabled;
    struct CAMShutterButtonSpec { 
        float outerRingDiameter; 
        float outerRingStrokeWidth; 
        float stopSquareSideLength; 
        float stopSquareCornerRadius; 
        float interRingSpacing; 
    }  _spec;
    BOOL  _spinning;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _tappableEdgeInsets;
}

@property (nonatomic, readonly) UIView *_innerView;
@property (nonatomic, readonly) UIImageView *_outerImageView;
@property (nonatomic, readonly) CAMShutterButtonRingView *_outerView;
@property (nonatomic, readonly) UIActivityIndicatorView *_progressActivityIndicatorView;
@property (nonatomic, readonly) CAMTimelapseShutterRingView *_timelapseOuterView;
@property (nonatomic) int layoutStyle;
@property (nonatomic) int mode;
@property (getter=isPulsing, nonatomic) BOOL pulsing;
@property (nonatomic) BOOL showDisabled;
@property (nonatomic) struct CAMShutterButtonSpec { float x1; float x2; float x3; float x4; float x5; } spec;
@property (getter=isSpinning, nonatomic) BOOL spinning;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } tappableEdgeInsets;

+ (id)shutterButtonWithLayoutStyle:(int)arg1;
+ (id)shutterButtonWithSpec:(struct CAMShutterButtonSpec { float x1; float x2; float x3; float x4; float x5; })arg1 layoutStyle:(int)arg2;
+ (id)smallShutterButtonWithLayoutStyle:(int)arg1;
+ (id)tinyShutterButtonWithLayoutStyle:(int)arg1;

- (void).cxx_destruct;
- (id)_colorForMode:(int)arg1;
- (void)_commonCAMShutterButtonInitializationWithLayoutStyle:(int)arg1;
- (float)_cornerRadiusForMode:(int)arg1;
- (float)_innerCircleDiameter;
- (id)_innerView;
- (BOOL)_isStopMode:(int)arg1;
- (id)_outerImageForMode:(int)arg1;
- (id)_outerImageView;
- (id)_outerView;
- (void)_performHighlightAnimation;
- (void)_performModeSwitchAnimationFromMode:(int)arg1 toMode:(int)arg2 animated:(BOOL)arg3;
- (id)_progressActivityIndicatorView;
- (BOOL)_shouldShowContrastBorderForMode:(int)arg1 layoutStyle:(int)arg2;
- (BOOL)_shouldUseImageViewForMode:(int)arg1;
- (BOOL)_shouldUseTimelapseOuterViewForMode:(int)arg1;
- (struct CGSize { float x1; float x2; })_sizeForMode:(int)arg1;
- (struct CAMShutterButtonSpec { float x1; float x2; float x3; float x4; float x5; })_specForLayoutStyle:(int)arg1;
- (id)_timelapseOuterView;
- (void)_updateOuterAndInnerLayers;
- (void)_updateSpinningAnimations;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 layoutStyle:(int)arg2;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isPulsing;
- (BOOL)isSpinning;
- (int)layoutStyle;
- (void)layoutSubviews;
- (int)mode;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLayoutStyle:(int)arg1;
- (void)setMode:(int)arg1;
- (void)setMode:(int)arg1 animated:(BOOL)arg2;
- (void)setPulsing:(BOOL)arg1;
- (void)setShowDisabled:(BOOL)arg1;
- (void)setSpec:(struct CAMShutterButtonSpec { float x1; float x2; float x3; float x4; float x5; })arg1;
- (void)setSpinning:(BOOL)arg1;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)showDisabled;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct CAMShutterButtonSpec { float x1; float x2; float x3; float x4; float x5; })spec;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tappableEdgeInsets;

@end
