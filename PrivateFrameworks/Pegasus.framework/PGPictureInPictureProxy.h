/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPictureInPictureProxy : NSObject <PGPictureInPictureExportedInterface> {
    NSXPCConnection * _connection;
    int  _controlsStyle;
    <PGPictureInPictureProxyDelegate> * _delegate;
    struct { 
        unsigned int pictureInPictureProxyViewFrameForTransitionAnimation : 1; 
        unsigned int pictureInPictureProxy_willStartPictureInPictureWithAnimationType : 1; 
        unsigned int pictureInPictureProxy_didStartPictureInPictureWithAnimationType : 1; 
        unsigned int pictureInPictureProxy_failedToStartPictureInPictureWithAnimationType_error : 1; 
        unsigned int pictureInPictureProxy_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler : 1; 
        unsigned int pictureInPictureProxy_willStopPictureInPictureWithAnimationType_reason : 1; 
        unsigned int pictureInPictureProxy_didStopPictureInPictureWithAnimationType_reason : 1; 
        unsigned int pictureInPictureProxyPictureInPictureInterruptionBegan : 1; 
        unsigned int pictureInPictureProxyPictureInPictureInterruptionEnded : 1; 
    }  _delegateRespondsTo;
    PGHostedWindow * _hostedWindow;
    BOOL  _isHostedWindowSizeChangeDuringPinchGesture;
    BOOL  _isPictureInPictureActive;
    BOOL  _isPictureInPicturePossible;
    BOOL  _isPictureInPictureSuspended;
    BOOL  _isStartingStoppingOrCancellingPictureInPicture;
    NSArray * _loadedTimeRanges;
    PGSetterThrottler * _loadedTimeRangesSetterThrottler;
    BOOL  _pictureInPictureShouldStartWhenEnteringBackground;
    BOOL  _pictureInPictureWasStartedWhenEnteringBackground;
    double  _playbackProgress;
    PGSetterThrottler * _playbackProgressSetterThrottler;
    double  _playbackRate;
    struct CGSize { 
        float width; 
        float height; 
    }  _preferredContentSize;
    NSObject<OS_dispatch_queue> * _queue;
    UIViewController * _rootViewController;
    UIViewController<PGPictureInPictureViewController> * _viewController;
}

@property (nonatomic, readonly) int controlsStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PGPictureInPictureProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isPictureInPictureActive, nonatomic, readonly) BOOL pictureInPictureActive;
@property (getter=isPictureInPicturePossible, nonatomic, readonly) BOOL pictureInPicturePossible;
@property (nonatomic) BOOL pictureInPictureShouldStartWhenEnteringBackground;
@property (getter=isPictureInPictureSuspended, nonatomic, readonly) BOOL pictureInPictureSuspended;
@property (nonatomic, readonly) BOOL pictureInPictureWasStartedWhenEnteringBackground;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController<PGPictureInPictureViewController> *viewController;

+ (void)_updatePictureInPictureActive:(BOOL)arg1;
+ (BOOL)isPictureInPictureActive;
+ (BOOL)isPictureInPictureSupported;
+ (id)pictureInPictureProxyWithControlsStyle:(int)arg1 viewController:(id)arg2;

- (void).cxx_destruct;
- (void)_startPictureInPictureAnimated:(BOOL)arg1 enteringBackground:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_stopPictureInPictureAnimated:(BOOL)arg1 activateApplicationIfNeededAndRestoreUserInterface:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_viewFrameForTransitionAnimationAssumeApplicationActive:(BOOL)arg1;
- (oneway void)actionButtonTapped;
- (int)controlsStyle;
- (void)dealloc;
- (id)delegate;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)hostedWindowSizeChangeEnded;
- (id)init;
- (id)initWithControlsStyle:(int)arg1 viewController:(id)arg2;
- (BOOL)isPictureInPictureActive;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPictureInPictureSuspended;
- (id)loadedTimeRanges;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (oneway void)pictureInPictureCancelRequestedAnimated:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)pictureInPictureCancelled;
- (oneway void)pictureInPictureInterruptionBegan;
- (oneway void)pictureInPictureInterruptionEnded;
- (oneway void)pictureInPictureResumed;
- (BOOL)pictureInPictureShouldStartWhenEnteringBackground;
- (oneway void)pictureInPictureStartRequestedAnimated:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)pictureInPictureStopRequestedAnimated:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)pictureInPictureSuspended;
- (BOOL)pictureInPictureWasStartedWhenEnteringBackground;
- (double)playbackProgress;
- (double)playbackRate;
- (void)preferredContentSizeDidChangeForViewController;
- (void)rotateContentContainer:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg1;
- (void)setPlaybackProgress:(double)arg1 playbackRate:(double)arg2;
- (void)startPictureInPicture;
- (void)stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1;
- (oneway void)updateHostedWindowSize:(struct CGSize { float x1; float x2; })arg1 animationType:(int)arg2 initialSpringVelocity:(float)arg3 synchronizationFence:(id)arg4;
- (oneway void)updatePictureInPicturePossible:(BOOL)arg1;
- (id)viewController;

@end
