/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasZoomingImageTransitionController : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, VideosExtrasOptionallyInteractiveAnimationController> {
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialPinchCenter;
    float  _initialPinchScale;
    BOOL  _interactive;
    unsigned int  _itemIndex;
    BOOL  _shouldUseSpringAnimation;
    VideosExtrasBorderedImageView * _zoomingImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGPoint { float x1; float x2; } initialPinchCenter;
@property (nonatomic) float initialPinchScale;
@property (getter=isInteractive, nonatomic) BOOL interactive;
@property (nonatomic) unsigned int itemIndex;
@property (nonatomic) BOOL shouldUseSpringAnimation;
@property (readonly) Class superclass;
@property (nonatomic, retain) VideosExtrasBorderedImageView *zoomingImageView;

- (void).cxx_destruct;
- (float)_desiredSpeedForNonInteractiveAnimationWithDuration:(double)arg1 deferredTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 finalTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;
- (float)_destinationScale;
- (float)_maximumDistanceTravelledForPoints:(struct CGPoint { float x1; float x2; }*)arg1 count:(unsigned long)arg2 currentTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3 finalTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg4;
- (void)animateTransition:(id)arg1;
- (void)completeInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;
- (id)initWithItemIndex:(unsigned int)arg1 forInteractiveTransition:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })initialPinchCenter;
- (float)initialPinchScale;
- (BOOL)isInteractive;
- (unsigned int)itemIndex;
- (void)prepareInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;
- (void)setInitialPinchCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInitialPinchScale:(float)arg1;
- (void)setInteractive:(BOOL)arg1;
- (void)setItemIndex:(unsigned int)arg1;
- (void)setShouldUseSpringAnimation:(BOOL)arg1;
- (void)setZoomingImageView:(id)arg1;
- (BOOL)shouldUseSpringAnimation;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;
- (id)zoomingImageView;

@end
