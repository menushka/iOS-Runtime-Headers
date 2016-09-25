/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOnboardingCircleImageDataConsumer : SKUIImageDataConsumer {
    struct CGSize { 
        float width; 
        float height; 
    }  _outputSize;
    UIColor * _tintColor;
    BOOL  _usesSaturationFilter;
}

@property (nonatomic) struct CGSize { float x1; float x2; } outputSize;
@property (nonatomic, copy) UIColor *tintColor;
@property (nonatomic) BOOL usesSaturationFilter;

- (void).cxx_destruct;
- (id)_saturationBackgroundImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)imageForImage:(id)arg1;
- (struct CGSize { float x1; float x2; })outputSize;
- (void)setOutputSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTintColor:(id)arg1;
- (void)setUsesSaturationFilter:(BOOL)arg1;
- (id)tintColor;
- (BOOL)usesSaturationFilter;

@end
