/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBContainerKeyView : UIKBKeyView {
    UIKBKeyView * _keyView;
}

- (id)contentsKeyView;
- (void)dealloc;
- (void)dimKeys:(id)arg1;
- (void)displayLayer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawFrame;
- (id)factory;
- (BOOL)hasRendered;
- (int)imageOrientationForLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)key;
- (id)keyplane;
- (id)layerForRenderFlags:(int)arg1;
- (void)prepareForDisplay;
- (id)renderConfig;
- (BOOL)requiresSublayers;
- (void)setDrawFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFactory:(id)arg1;
- (void)setNeedsDisplay;
- (void)setRenderConfig:(id)arg1;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;

@end
