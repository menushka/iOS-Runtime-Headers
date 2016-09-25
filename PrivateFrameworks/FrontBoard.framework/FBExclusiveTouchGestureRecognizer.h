/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBExclusiveTouchGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        float x; 
        float y; 
    }  _accumulatedMovement;
    BOOL  _achievedMaximumAbsoluteAccumulatedMovement;
    struct CGPoint { 
        float x; 
        float y; 
    }  _maximumAbsoluteAccumulatedMovement;
}

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } accumulatedMovement;
@property (nonatomic, readonly) BOOL achievedMaximumAbsoluteAccumulatedMovement;
@property (nonatomic) <FBExclusiveTouchGestureRecognizerDelegate> *delegate;
@property (nonatomic) struct CGPoint { float x1; float x2; } maximumAbsoluteAccumulatedMovement;

- (struct CGPoint { float x1; float x2; })accumulatedMovement;
- (BOOL)achievedMaximumAbsoluteAccumulatedMovement;
- (id)description;
- (struct CGPoint { float x1; float x2; })maximumAbsoluteAccumulatedMovement;
- (void)reset;
- (void)setMaximumAbsoluteAccumulatedMovement:(struct CGPoint { float x1; float x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
