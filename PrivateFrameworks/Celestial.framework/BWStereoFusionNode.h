/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStereoFusionNode : BWNode {
    struct opaqueCMSampleBuffer { } * _cachedFrameFromTelephotoSourceForLaterProcessing;
    struct opaqueCMSampleBuffer { } * _cachedFrameFromWideSourceForLaterProcessing;
    NSDictionary * _cameraAlignmentInfo;
    NSDictionary * _cameraInfoByPortType;
    int (* _createSampleBufferProcessorFunction;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    BWNodeOutput * _defaultOutput;
    BOOL  _expectsTelephotoFrame;
    BOOL  _expectsTelephotoPreBracketFrame;
    BOOL  _expectsWideFrame;
    BOOL  _expectsWidePreBracketFrame;
    BWNodeInput * _masterInput;
    NSMutableArray * _nodeErrorsForTelephoto;
    NSMutableArray * _nodeErrorsForWide;
    BOOL  _performSBPProcessing;
    BOOL  _processSequenceHasBeenSetForPreBracketFrames;
    int  _processingType;
    BOOL  _receivedTelephotoFrame;
    BOOL  _receivedTelephotoPreBracketFrame;
    BOOL  _receivedWideFrame;
    BOOL  _receivedWidePreBracketFrame;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSDictionary * _sbpZoomRectangleDictionary;
    BWNodeOutput * _stereoHDROutput;
    BWNodeInput * _telephotoInput;
    NSDictionary * _telephotoSensorIDDictionary;
    BOOL  _usesHDRPreBracketFrameForErrorRecoveryDownstream;
    BWNodeInput * _wideInput;
}

@property (nonatomic, readonly) BWNodeOutput *defaultOutput;
@property (nonatomic, readonly) BWNodeOutput *stereoHDROutput;
@property (nonatomic, readonly) BWNodeInput *telephotoInput;
@property (nonatomic, readonly) BWNodeInput *wideInput;

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (void)_endSequence;
- (void)_handleError:(long)arg1 forSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 input:(id)arg3;
- (id)_initWithTelephotoSensorIDDictionary:(id)arg1 processingType:(int)arg2 cameraAlignmentInfo:(id)arg3 cameraInfoByPortType:(id)arg4 sbpCreationFunction:(int (*)arg5 treatSoftErrorsAsHardErrors:(BOOL)arg6;
- (void)_processCachedSampleBufferInSampleBufferProcessor;
- (void)_processSampleBufferInSampleBufferProcessor:(struct opaqueCMSampleBuffer { }*)arg1 metadataDictionary:(id)arg2;
- (void)_processSequenceInSampleBufferProcessor;
- (BOOL)_receivedExpectedNumberOfFramesOrErrors;
- (void)_sampleBufferProcessorOutputReady:(long)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)_setExpectedInputFramesWithResolvedCaptureSettings:(id)arg1;
- (long)_setPropertyOnSampleBufferProcessorWithKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)_setZoomRectangleOnSampleBufferProcessorIfNecessaryBasedOnMetadata:(id)arg1 captureType:(int)arg2;
- (void)_setZoomRectangleOnSampleBufferProcessorWithRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (long)_setupSampleBufferProcessor;
- (BOOL)_shouldProcessPreBracketFrames;
- (BOOL)attachesInputBracketToOutputSampleBuffer;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)defaultOutput;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithTelephotoSensorIDDictionary:(id)arg1 processingType:(int)arg2 cameraAlignmentInfo:(id)arg3 cameraInfoByPortType:(id)arg4;
- (BOOL)isCaptureRequestStateReset;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (struct OpaqueFigSampleBufferProcessor { }*)sampleBufferProcessor;
- (id)sbpOptionsDictionary;
- (void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1;
- (void)setUsesHDRPreBracketFrameForErrorRecoveryDownstream:(BOOL)arg1;
- (id)stereoHDROutput;
- (id)telephotoInput;
- (BOOL)usesHDRPreBracketFrameForErrorRecoveryDownstream;
- (id)wideInput;

@end
