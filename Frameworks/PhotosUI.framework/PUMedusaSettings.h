/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMedusaSettings : PUSettings {
    float  __desiredWidth;
    float  __testIncrement;
    double  __testInterval;
    double  __testStartDelay;
    double  __widthDelay;
}

@property (nonatomic) float _desiredWidth;
@property (nonatomic) float _testIncrement;
@property (nonatomic) double _testInterval;
@property (nonatomic) double _testStartDelay;
@property (nonatomic) double _widthDelay;

+ (void)runSizeTest;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (float)_desiredWidth;
- (float)_testIncrement;
- (double)_testInterval;
- (double)_testStartDelay;
- (double)_widthDelay;
- (void)set_desiredWidth:(float)arg1;
- (void)set_testIncrement:(float)arg1;
- (void)set_testInterval:(double)arg1;
- (void)set_testStartDelay:(double)arg1;
- (void)set_widthDelay:(double)arg1;

@end
