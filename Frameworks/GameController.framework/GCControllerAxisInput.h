/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerAxisInput : GCControllerElement

@property (getter=isDigital, nonatomic, readonly) BOOL digital;
@property (getter=isFlipped, nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) GCControllerButtonInput *negative;
@property (nonatomic, readonly) GCControllerButtonInput *positive;
@property (nonatomic, readonly) float value;
@property (nonatomic, copy) id /* block */ valueChangedHandler;

- (BOOL)_setValue:(float)arg1;
- (BOOL)_setValue:(float)arg1 queue:(id)arg2;
- (id)description;
- (BOOL)isAnalog;
- (BOOL)isDigital;
- (BOOL)isFlipped;
- (id)negative;
- (id)positive;
- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1 queue:(id)arg2;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (float)value;
- (id /* block */)valueChangedHandler;

@end
