/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRemoteQueueSinkNode : BWSinkNode {
    BOOL  _attachPanoramaMetadata;
    struct opaqueCMFormatDescription { } * _cachedVideoFormatDescription;
    BOOL  _cameraSupportsFlash;
    int  _clientVideoRetainedBufferCount;
    <BWRemoteQueueSinkNodeDelegate> * _delegate;
    BOOL  _disableFlatDictionaryVDOMetadata;
    BOOL  _discardsLateSampleBuffers;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastPTS;
    struct OpaqueFigFlatDictionaryKeySpec { } * _makerNoteKeySpec;
    BOOL  _mediaTypeIsVideo;
    struct OpaqueFigSimpleMutex { } * _peerTerminationMutex;
    BOOL  _pixelBufferAttachmentModificationAllowed;
    struct remoteQueueSenderOpaque { } * _remoteQueueSender;
    BOOL  _sentDiagnosticMetadata;
    struct shmemPoolOpaque { } * _sharedMemoryPool;
    struct __CFAllocator { } * _sharedMemoryPoolCFAllocator;
    NSDictionary * _videoColorInfoOverride;
}

@property (nonatomic) <BWRemoteQueueSinkNodeDelegate> *delegate;

+ (void)initialize;

- (void)_attachDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_handlePeerTerminated;
- (BOOL)attachPanoramaMetadata;
- (BOOL)cameraSupportsFlash;
- (int)clientVideoRetainedBufferCount;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)didReachEndOfDataForInput:(id)arg1;
- (BOOL)discardsLateSampleBuffers;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithMediaType:(unsigned long)arg1;
- (id)nodeSubType;
- (BOOL)pixelBufferAttachmentModificationAllowed;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)registerSurfacesFromSourcePool:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAttachPanoramaMetadata:(BOOL)arg1;
- (void)setCameraSupportsFlash:(BOOL)arg1;
- (void)setClientVideoRetainedBufferCount:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscardsLateSampleBuffers:(BOOL)arg1;
- (void)setPixelBufferAttachmentModificationAllowed:(BOOL)arg1;
- (void)setVideoColorInfoOverride:(id)arg1;
- (id)videoColorInfoOverride;

@end
