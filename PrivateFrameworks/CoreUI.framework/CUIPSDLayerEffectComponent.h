/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectComponent : NSObject {
    NSString * _name;
    BOOL  _visible;
}

@property (retain) NSString *name;
@property BOOL visible;

- (id)_colorFromShapeEffectValue:(union { float x1; unsigned int x2; struct _rgbcolor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; short x4; unsigned int x5; })arg1;
- (void)dealloc;
- (unsigned int)effectType;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;
- (BOOL)visible;

@end
