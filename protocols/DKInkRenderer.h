/* Generated by RuntimeBrowser.
 */

@protocol DKInkRenderer <NSObject>

@required

- (void)addPoint:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; })arg1;
- (void)beginStroke;
- (void)clear;
- (void)completeAnimationsImmediately;
- (<DKInkRendererDelegate> *)delegate;
- (void)display;
- (BOOL)drawingEnabled;
- (float)drawingScale;
- (void)endStroke;
- (void)flush;
- (void)force;
- (BOOL)initialized;
- (UIColor *)inkColor;
- (unsigned int)maximumPointsForBleedAnimation;
- (unsigned int)mode;
- (void)removeLastStroke;
- (void)resetRendererState;
- (BOOL)scaleDrawingToFitCanvas;
- (void)setDelegate:(id <DKInkRendererDelegate>)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)setDrawingScale:(float)arg1;
- (void)setInkColor:(UIColor *)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setScaleDrawingToFitCanvas:(BOOL)arg1;
- (UIImage *)snapshot;
- (BOOL)supportsBleedAnimation;
- (void)teardown;

@end
