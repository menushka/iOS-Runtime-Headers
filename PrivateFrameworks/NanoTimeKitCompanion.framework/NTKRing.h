/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRing : NSObject {
    float  _backgroundRingAlpha;
    float  _fillFraction;
    float  _radius;
    int  _ringStyle;
    float  _strokeWidth;
}

@property float backgroundRingAlpha;
@property float fillFraction;
@property float radius;
@property int ringStyle;
@property float strokeWidth;

+ (id)_fillFractionStringForFillFraction:(float)arg1 withFormatter:(id)arg2;
+ (id)fillFractionStringForFillFraction:(float)arg1;
+ (id)fillFractionStringWithSymbolForFillFraction:(float)arg1;

- (float)_validFillFraction:(float)arg1;
- (float)backgroundRingAlpha;
- (float)fillFraction;
- (void)fillFraction:(float)arg1;
- (id)fillFractionString;
- (id)fillFractionStringWithSymbol;
- (id)init;
- (id)initWithFillFraction:(float)arg1 style:(int)arg2;
- (id)initWithFillFraction:(float)arg1 style:(int)arg2 radius:(float)arg3 strokeWidth:(float)arg4;
- (float)radius;
- (id)ringImage;
- (int)ringStyle;
- (void)setBackgroundRingAlpha:(float)arg1;
- (void)setFillFraction:(float)arg1;
- (void)setRadius:(float)arg1;
- (void)setRingStyle:(int)arg1;
- (void)setStrokeWidth:(float)arg1;
- (float)strokeWidth;

@end
