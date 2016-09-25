/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUActionButton : UIButton {
    BOOL  _animatingTouchDown;
    UIColor * _backgroundImageColor;
    UIColor * _imageViewTintColor;
    id /* block */  _touchUpAnimationCompleteHandler;
    UIImageView * _transformingImageView;
}

@property (nonatomic) BOOL animatingTouchDown;
@property (nonatomic, retain) UIColor *backgroundImageColor;
@property (nonatomic, retain) UIColor *imageViewTintColor;
@property (nonatomic, copy) id /* block */ touchUpAnimationCompleteHandler;
@property (nonatomic, retain) UIImageView *transformingImageView;

+ (id)buttonWithTitle:(id)arg1 color:(id)arg2 icon:(id)arg3;

- (void).cxx_destruct;
- (void)_animateHighlighted:(BOOL)arg1;
- (void)_setupInternalTouchActions;
- (void)_touchDown;
- (void)_touchUp;
- (BOOL)animatingTouchDown;
- (id)backgroundImageColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)imageViewTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAnimatingTouchDown:(BOOL)arg1;
- (void)setBackgroundImageColor:(id)arg1;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setImageViewTintColor:(id)arg1;
- (void)setTouchUpAnimationCompleteHandler:(id /* block */)arg1;
- (void)setTransformingImageView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id /* block */)touchUpAnimationCompleteHandler;
- (id)transformingImageView;

@end
