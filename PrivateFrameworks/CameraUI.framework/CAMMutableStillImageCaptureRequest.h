/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMutableStillImageCaptureRequest : CAMStillImageCaptureRequest <CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestPower>

@property (nonatomic) unsigned int assertionIdentifier;
@property (nonatomic, copy) NSString *burstIdentifier;
@property (nonatomic) int captureDevice;
@property (nonatomic) int captureMode;
@property (nonatomic) int captureOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int deferredPersistenceOptions;
@property (nonatomic) <CAMStillImageCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { float x1; float x2; } desiredPreviewSize;
@property (nonatomic) int effectFilterType;
@property (nonatomic) int flashMode;
@property (readonly) unsigned int hash;
@property (nonatomic) int hdrMode;
@property (nonatomic, copy) NSString *irisIdentifier;
@property (nonatomic) int irisMode;
@property (nonatomic, copy) NSURL *localDestinationURL;
@property (nonatomic, copy) NSURL *localVideoDestinationURL;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) unsigned int maximumBurstLength;
@property (nonatomic) int origin;
@property (nonatomic, copy) NSString *originalIrisIdentifier;
@property (nonatomic, copy) NSURL *originalLocalVideoDestinationURL;
@property (nonatomic, copy) NSString *originalPersistenceUUID;
@property (nonatomic, copy) NSString *originalVideoPersistenceUUID;
@property (nonatomic) int persistenceOptions;
@property (nonatomic, copy) NSString *persistenceUUID;
@property (nonatomic) int physicalButtonType;
@property (nonatomic) unsigned short sessionIdentifier;
@property (nonatomic) BOOL shouldDelayRemotePersistence;
@property (nonatomic) BOOL shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) BOOL shouldPersistDiagnosticsToSidecar;
@property (readonly) Class superclass;
@property (nonatomic) int temporaryPersistenceOptions;
@property (nonatomic, copy) NSString *timelapseIdentifier;
@property (nonatomic) BOOL usesStillImageStabilization;
@property (nonatomic, copy) NSString *videoPersistenceUUID;
@property (nonatomic) BOOL wantsAudioForCapture;
@property (nonatomic) BOOL wantsAutoDuoImageFusion;
@property (nonatomic) BOOL wantsHighResolutionStills;
@property (nonatomic) BOOL wantsSquareCrop;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAssertionIdentifier:(unsigned int)arg1;
- (void)setBurstIdentifier:(id)arg1;
- (void)setCaptureDevice:(int)arg1;
- (void)setCaptureMode:(int)arg1;
- (void)setCaptureOrientation:(int)arg1;
- (void)setCapturedFromPhotoBooth:(BOOL)arg1;
- (void)setDeferredPersistenceOptions:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredPreviewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setEffectFilterType:(int)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setHdrMode:(int)arg1;
- (void)setIrisIdentifier:(id)arg1;
- (void)setIrisMode:(int)arg1;
- (void)setLocalDestinationURL:(id)arg1;
- (void)setLocalVideoDestinationURL:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMaximumBurstLength:(unsigned int)arg1;
- (void)setOrigin:(int)arg1;
- (void)setOriginalIrisIdentifier:(id)arg1;
- (void)setOriginalLocalVideoDestinationURL:(id)arg1;
- (void)setOriginalPersistenceUUID:(id)arg1;
- (void)setOriginalVideoPersistenceUUID:(id)arg1;
- (void)setPersistenceOptions:(int)arg1;
- (void)setPersistenceUUID:(id)arg1;
- (void)setPhysicalButtonType:(int)arg1;
- (void)setSessionIdentifier:(unsigned short)arg1;
- (void)setShouldDelayRemotePersistence:(BOOL)arg1;
- (void)setShouldExtractDiagnosticsFromMetadata:(BOOL)arg1;
- (void)setShouldPersistDiagnosticsToSidecar:(BOOL)arg1;
- (void)setTemporaryPersistenceOptions:(int)arg1;
- (void)setTimelapseIdentifier:(id)arg1;
- (void)setUsesStillImageStabilization:(BOOL)arg1;
- (void)setVideoPersistenceUUID:(id)arg1;
- (void)setWantsAudioForCapture:(BOOL)arg1;
- (void)setWantsAutoDuoImageFusion:(BOOL)arg1;
- (void)setWantsHighResolutionStills:(BOOL)arg1;
- (void)setWantsSquareCrop:(BOOL)arg1;

@end
