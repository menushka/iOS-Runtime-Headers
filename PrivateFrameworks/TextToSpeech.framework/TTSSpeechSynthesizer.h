/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate> {
    unsigned int  _audioQueueFlags;
    unsigned int  _audioSessionID;
    BOOL  _audioSessionIDIsValid;
    NSString * _bundleIdentifier;
    NSMutableDictionary * _channels;
    NSMutableArray * _currentRequestOwners;
    <TTSSpeechSynthesizerDelegate> * _delegate;
    int  _footprint;
    BOOL  _ignoreSubstitutions;
    NSArray * _outputChannels;
    NSArray * _phonemeSubstitutions;
    float  _pitch;
    NSObject<OS_dispatch_queue> * _queue;
    float  _rate;
    void * _speakingRequestClientContext;
    NSMutableArray * _speechRequests;
    struct { 
        unsigned int delegateStartWithRequest : 1; 
        unsigned int delegateFinishWithRequest : 1; 
        unsigned int delegateFinishWithPhonemesSpokenWithRequest : 1; 
        unsigned int delegatePauseWithRequest : 1; 
        unsigned int delegateContinueWithRequest : 1; 
        unsigned int delegateWillSpeakWithRequest : 1; 
        unsigned int willUseInput : 1; 
    }  _synthesizerFlags;
    BOOL  _useMonarchStyleRate;
    BOOL  _useSharedSession;
    NSArray * _userSubstitutions;
    NSString * _voiceIdentifier;
    float  _volume;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) <TTSSpeechSynthesizerDelegate> *delegate;
@property (nonatomic) BOOL ignoreSubstitutions;
@property (nonatomic, retain) NSArray *outputChannels;
@property (nonatomic, copy) NSArray *phonemeSubstitutions;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;
@property (nonatomic, readonly) NSString *resolvedVoiceIdentifier;
@property (nonatomic) void*speakingRequestClientContext;
@property (nonatomic, copy) NSArray *userSubstitutions;
@property (nonatomic, retain) NSString *voiceIdentifier;
@property (nonatomic) float volume;

+ (id)_speechServiceForVoiceIdentifier:(id)arg1;
+ (id)allAvailableVoices;
+ (id)availableLanguageCodes;
+ (id)availableVoices;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (BOOL)employSpeechMarkupForType:(int)arg1 identifier:(id)arg2 withLanguage:(id)arg3;
+ (void)initialize;
+ (BOOL)isSystemSpeaking;
+ (void)refreshAllAvailableVoices;
+ (id)speechMarkupStringForType:(int)arg1 forIdentifier:(id)arg2;
+ (id)supportedIPAPhonemeLanguages;
+ (void)testingSetAllVoices:(id)arg1;
+ (id)voiceForIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_applySubstitution:(id)arg1 toText:(id)arg2 wordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 request:(id)arg4 phonemes:(id*)arg5;
- (BOOL)_continueSpeakingRequest:(id)arg1 withError:(id*)arg2;
- (void)_mediaServicesDied;
- (BOOL)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (id)_preprocessText:(id)arg1 languageCode:(id)arg2;
- (void)_processPhonemeSubstitutions:(id)arg1 toText:(id)arg2 request:(id)arg3 bundleIdentifier:(id)arg4 voice:(id)arg5;
- (void)_processUserSubstitutions:(id)arg1 toText:(id)arg2 request:(id)arg3 bundleIdentifier:(id)arg4 voice:(id)arg5;
- (void)_setDelegate:(id)arg1;
- (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2;
- (BOOL)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id*)arg5 error:(id*)arg6;
- (BOOL)_stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (id)bundleIdentifier;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(int)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (BOOL)continueSpeakingRequest:(id)arg1 withError:(id*)arg2;
- (BOOL)continueSpeakingWithError:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (int)footprint;
- (BOOL)ignoreSubstitutions;
- (id)init;
- (BOOL)isSpeaking;
- (float)maximumRate;
- (float)minimumRate;
- (id)outputChannels;
- (BOOL)pauseSpeakingAtNextBoundary:(int)arg1 error:(id*)arg2;
- (BOOL)pauseSpeakingAtNextBoundary:(int)arg1 synchronously:(BOOL)arg2 error:(id*)arg3;
- (BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 error:(id*)arg3;
- (BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (id)phonemeSubstitutions;
- (float)pitch;
- (float)rate;
- (id)resolvedVoiceIdentifier;
- (id)resolvedVoiceIdentifierForLanguageCode:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFootprint:(int)arg1;
- (void)setIgnoreSubstitutions:(BOOL)arg1;
- (void)setOutputChannels:(id)arg1;
- (void)setPhonemeSubstitutions:(id)arg1;
- (void)setPitch:(float)arg1;
- (void)setRate:(float)arg1;
- (void)setSpeakingRequestClientContext:(void*)arg1;
- (void)setUseMonarchStyleRate:(BOOL)arg1;
- (void)setUserSubstitutions:(id)arg1;
- (void)setVoiceIdentifier:(id)arg1;
- (void)setVolume:(float)arg1;
- (void*)speakingRequestClientContext;
- (id)speechString;
- (BOOL)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4;
- (BOOL)startSpeakingIPAPhonemes:(id)arg1 withLanguageCode:(id)arg2 request:(id*)arg3 error:(id*)arg4;
- (BOOL)startSpeakingString:(id)arg1 error:(id*)arg2;
- (BOOL)startSpeakingString:(id)arg1 request:(id*)arg2 error:(id*)arg3;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 request:(id*)arg3 error:(id*)arg4;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4;
- (BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id*)arg3;
- (BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id*)arg3 error:(id*)arg4;
- (BOOL)stopSpeakingAtNextBoundary:(int)arg1 error:(id*)arg2;
- (BOOL)stopSpeakingAtNextBoundary:(int)arg1 synchronously:(BOOL)arg2 error:(id*)arg3;
- (BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 error:(id*)arg3;
- (BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (void)useAudioQueueFlags:(unsigned int)arg1;
- (BOOL)useMonarchStyleRate;
- (void)useSharedAudioSession:(BOOL)arg1;
- (void)useSpecificAudioSession:(unsigned int)arg1;
- (id)userSubstitutions;
- (id)voiceIdentifier;
- (float)volume;

@end
