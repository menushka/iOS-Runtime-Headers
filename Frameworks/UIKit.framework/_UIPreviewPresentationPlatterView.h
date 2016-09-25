/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewPresentationPlatterView : UIView {
    _UIPreviewPresentationEffectView * _contentClipView;
    _UIPreviewPresentationEffectView * _contentEffectView;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentSize;
    UIView * _contentTransformView;
    UIView * _contentView;
    BOOL  _dropShadowEnabled;
}

@property (nonatomic) float blurRadius;
@property (nonatomic, retain) _UIPreviewPresentationEffectView *contentClipView;
@property (nonatomic, retain) _UIPreviewPresentationEffectView *contentEffectView;
@property (nonatomic) struct CGSize { float x1; float x2; } contentSize;
@property (nonatomic, retain) UIView *contentTransformView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) float cornerRadius;
@property (getter=isDropShadowEnabled, nonatomic) BOOL dropShadowEnabled;

- (void).cxx_destruct;
- (BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)arg1;
- (float)blurRadius;
- (id)contentClipView;
- (id)contentEffectView;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)contentTransformView;
- (id)contentView;
- (float)cornerRadius;
- (id)initWithContentView:(id)arg1;
- (BOOL)isDropShadowEnabled;
- (void)layoutSubviews;
- (void)setBlurRadius:(float)arg1;
- (void)setContentClipView:(id)arg1;
- (void)setContentEffectView:(id)arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContentTransformView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setDropShadowEnabled:(BOOL)arg1;

@end
