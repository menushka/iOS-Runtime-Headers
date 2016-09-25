/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveWidgetTracker.framework/ProactiveWidgetTracker
 */

@interface _PWTWidgetEventTracker : NSObject {
    int  _activeDisplayMode;
    PETGoalConversionEventTracker * _conversionTracker;
    BOOL  _didBecomeVisibleWhileLocked;
    BOOL  _hasReceivedActiveDisplayModeChangeNotificationOnce;
    NSString * _identifier;
    BOOL  _isCurrentlyVisible;
    double  _lastAppearTime;
    PETScalarEventTracker * _resizeTracker;
    PETDistributionEventTracker * _screenLingerTracker;
    PETScalarEventTracker * _updateTracker;
    BOOL  _willBecomeVisible;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)userEngagedWithWidget;
- (void)widgetActiveDisplayModeDidChange:(int)arg1 withMaximumSize:(struct CGSize { float x1; float x2; })arg2;
- (void)widgetDidAppear;
- (void)widgetDidDisappear;
- (void)widgetPerformedUpdateWithResult:(unsigned int)arg1;
- (void)widgetWillAppear;
- (void)widgetWillDisappear;

@end
