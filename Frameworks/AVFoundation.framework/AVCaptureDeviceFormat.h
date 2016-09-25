/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceFormat : NSObject {
    AVCaptureDeviceFormatInternal * _internal;
}

@property (nonatomic, readonly) int autoFocusSystem;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic, readonly) struct { int x1; int x2; } highResolutionStillImageDimensions;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property (nonatomic, readonly) float maxISO;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property (nonatomic, readonly) float minISO;
@property (nonatomic, readonly) NSArray *supportedColorSpaces;
@property (getter=isVideoBinned, nonatomic, readonly) BOOL videoBinned;
@property (nonatomic, readonly) float videoFieldOfView;
@property (getter=isVideoHDRSupported, nonatomic, readonly) BOOL videoHDRSupported;
@property (nonatomic, readonly) float videoMaxZoomFactor;
@property (getter=isVideoStabilizationSupported, nonatomic, readonly) BOOL videoStabilizationSupported;
@property (nonatomic, readonly) NSArray *videoSupportedFrameRateRanges;
@property (nonatomic, readonly) float videoZoomFactorUpscaleThreshold;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (void)initialize;

- (id)AVCaptureSessionPresets;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 frameRateRanges:(id)arg2;
- (int)autoFocusSystem;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMinFrameDuration;
- (id)description;
- (id)figCaptureSourceFormat;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (struct { int x1; int x2; })highResolutionStillImageDimensions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })highestSupportedVideoFrameDuration;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (BOOL)isDefaultActiveFormat;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExperimental;
- (BOOL)isHighResPhotoFormat;
- (BOOL)isIrisSupported;
- (BOOL)isIrisVideoStabilizationSupported;
- (BOOL)isPhotoFormat;
- (BOOL)isSISSupported;
- (BOOL)isVideoBinned;
- (BOOL)isVideoHDRSupported;
- (BOOL)isVideoStabilizationModeSupported:(int)arg1;
- (BOOL)isVideoStabilizationSupported;
- (BOOL)isWideColorSupported;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lowestSupportedVideoFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (float)maxISO;
- (id)mediaType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (float)minISO;
- (BOOL)needsPhotoPreviewDPCC;
- (BOOL)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (struct { int x1; int x2; })previewDimensions;
- (int)rawBitDepth;
- (struct { int x1; int x2; })sensorDimensions;
- (id)supportedColorSpaces;
- (int)supportedFormatsArrayIndex;
- (unsigned long)supportedRawPixelFormat;
- (int)supportedStabilizationMethod;
- (BOOL)supportsDynamicCrop;
- (BOOL)supportsHighProfileH264;
- (BOOL)supportsHighResolutionStillImageOutput;
- (BOOL)supportsLowLightBoost;
- (BOOL)supportsQuadraHighResolutionStillImageOutput;
- (float)videoFieldOfView;
- (float)videoMaxZoomFactor;
- (id)videoSupportedFrameRateRanges;
- (float)videoZoomFactorUpscaleThreshold;
- (id)videoZoomSupportedDownscaleStages;
- (id)videoZoomSupportedUpscaleStages;
- (id)vtScalingMode;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (struct { int x1; int x2; })_expectedVideoDimensionsForVideoConfiguration:(int)arg1;
- (double)_framesPerSecondForVideoConfiguration:(int)arg1;
- (int)cam_compareUsingDimensions:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cam_frameDurationForVideoConfiguration:(int)arg1;
- (BOOL)cam_supportsPanoramaConfiguration:(id)arg1;
- (BOOL)cam_supportsVideoConfiguration:(int)arg1;

@end
