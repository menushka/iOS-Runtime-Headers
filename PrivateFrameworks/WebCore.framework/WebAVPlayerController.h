/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAVPlayerController : NSObject {
    BOOL  _allowsExternalPlayback;
    NSArray * _audioMediaSelectionOptions;
    BOOL  _canPause;
    BOOL  _canPlay;
    BOOL  _canScanBackward;
    BOOL  _canSeek;
    BOOL  _canTogglePlayback;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentDimensions;
    double  _contentDuration;
    double  _contentDurationWithinEndTimes;
    WebAVMediaSelectionOption * _currentAudioMediaSelectionOption;
    WebAVMediaSelectionOption * _currentLegibleMediaSelectionOption;
    struct WebPlaybackSessionModel { int (**x1)(); } * _delegate;
    BOOL  _externalPlaybackActive;
    NSString * _externalPlaybackAirPlayDeviceLocalizedName;
    int  _externalPlaybackType;
    BOOL  _hasEnabledAudio;
    BOOL  _hasEnabledVideo;
    NSArray * _legibleMediaSelectionOptions;
    NSArray * _loadedTimeRanges;
    double  _maxTime;
    double  _minTime;
    BOOL  _pictureInPictureInterrupted;
    BOOL  _pictureInPicturePossible;
    struct WebPlaybackSessionInterfaceAVKit { int (**x1)(); unsigned int x2; struct RetainPtr<WebAVPlayerController> { void *x_3_1_1; } x3; struct WebPlaybackSessionModel {} *x4; struct WebPlaybackSessionInterfaceAVKitClient {} *x5; bool x6; } * _playbackSessionInterface;
    AVPlayerController * _playerControllerProxy;
    BOOL  _playingOnSecondScreen;
    double  _rate;
    NSArray * _seekableTimeRanges;
    int  _status;
    AVValueTiming * _timing;
}

@property BOOL allowsExternalPlayback;
@property (retain) NSArray *audioMediaSelectionOptions;
@property BOOL canPause;
@property BOOL canPlay;
@property BOOL canScanBackward;
@property (readonly) BOOL canScanForward;
@property BOOL canSeek;
@property (readonly) BOOL canSeekToBeginning;
@property (readonly) BOOL canSeekToEnd;
@property BOOL canTogglePlayback;
@property struct CGSize { float x1; float x2; } contentDimensions;
@property double contentDuration;
@property double contentDurationWithinEndTimes;
@property (retain) WebAVMediaSelectionOption *currentAudioMediaSelectionOption;
@property (retain) WebAVMediaSelectionOption *currentLegibleMediaSelectionOption;
@property struct WebPlaybackSessionModel { int (**x1)(); }*delegate;
@property (getter=isExternalPlaybackActive) BOOL externalPlaybackActive;
@property (retain) NSString *externalPlaybackAirPlayDeviceLocalizedName;
@property int externalPlaybackType;
@property (readonly) BOOL hasAudioMediaSelectionOptions;
@property BOOL hasEnabledAudio;
@property BOOL hasEnabledVideo;
@property (readonly) BOOL hasLegibleMediaSelectionOptions;
@property (readonly) BOOL hasMediaSelectionOptions;
@property (retain) NSArray *legibleMediaSelectionOptions;
@property (retain) NSArray *loadedTimeRanges;
@property double maxTime;
@property double minTime;
@property (getter=isPictureInPictureInterrupted) BOOL pictureInPictureInterrupted;
@property (getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property struct WebPlaybackSessionInterfaceAVKit { int (**x1)(); unsigned int x2; struct RetainPtr<WebAVPlayerController> { void *x_3_1_1; } x3; struct WebPlaybackSessionModel {} *x4; struct WebPlaybackSessionInterfaceAVKitClient {} *x5; bool x6; }*playbackSessionInterface;
@property (retain) AVPlayerController *playerControllerProxy;
@property (getter=isPlaying) BOOL playing;
@property (getter=isPlayingOnExternalScreen, readonly) BOOL playingOnExternalScreen;
@property (getter=isPlayingOnSecondScreen, readonly) BOOL playingOnSecondScreen;
@property double rate;
@property (retain) NSArray *seekableTimeRanges;
@property int status;
@property (retain) AVValueTiming *timing;

+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;

- (BOOL)allowsExternalPlayback;
- (id)audioMediaSelectionOptions;
- (void)beginScanningBackward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (BOOL)canPause;
- (BOOL)canPlay;
- (BOOL)canScanBackward;
- (BOOL)canScanForward;
- (BOOL)canSeek;
- (BOOL)canSeekToBeginning;
- (BOOL)canSeekToEnd;
- (BOOL)canTogglePlayback;
- (struct CGSize { float x1; float x2; })contentDimensions;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (id)currentAudioMediaSelectionOption;
- (id)currentLegibleMediaSelectionOption;
- (double)currentTimeWithinEndTimes;
- (void)dealloc;
- (struct WebPlaybackSessionModel { int (**x1)(); }*)delegate;
- (void)endScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)endScrubbing:(id)arg1;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (int)externalPlaybackType;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (BOOL)hasAudioMediaSelectionOptions;
- (BOOL)hasEnabledAudio;
- (BOOL)hasEnabledVideo;
- (BOOL)hasLegibleMediaSelectionOptions;
- (BOOL)hasLiveStreamingContent;
- (BOOL)hasMediaSelectionOptions;
- (id)init;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isPictureInPictureInterrupted;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPlaying;
- (BOOL)isPlayingOnExternalScreen;
- (BOOL)isPlayingOnSecondScreen;
- (id)legibleMediaSelectionOptions;
- (id)loadedTimeRanges;
- (double)maxTime;
- (double)minTime;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (struct WebPlaybackSessionInterfaceAVKit { int (**x1)(); unsigned int x2; struct RetainPtr<WebAVPlayerController> { void *x_3_1_1; } x3; struct WebPlaybackSessionModel {} *x4; struct WebPlaybackSessionInterfaceAVKitClient {} *x5; bool x6; }*)playbackSessionInterface;
- (id)player;
- (id)playerControllerProxy;
- (double)rate;
- (void)resetState;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekToBeginning:(id)arg1;
- (void)seekToEnd:(id)arg1;
- (void)seekToTime:(double)arg1;
- (id)seekableTimeRanges;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setAudioMediaSelectionOptions:(id)arg1;
- (void)setCanPause:(BOOL)arg1;
- (void)setCanPlay:(BOOL)arg1;
- (void)setCanScanBackward:(BOOL)arg1;
- (void)setCanSeek:(BOOL)arg1;
- (void)setCanTogglePlayback:(BOOL)arg1;
- (void)setContentDimensions:(struct CGSize { float x1; float x2; })arg1;
- (void)setContentDuration:(double)arg1;
- (void)setContentDurationWithinEndTimes:(double)arg1;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)setCurrentTimeWithinEndTimes:(double)arg1;
- (void)setDelegate:(struct WebPlaybackSessionModel { int (**x1)(); }*)arg1;
- (void)setExternalPlaybackActive:(BOOL)arg1;
- (void)setExternalPlaybackAirPlayDeviceLocalizedName:(id)arg1;
- (void)setExternalPlaybackType:(int)arg1;
- (void)setHasEnabledAudio:(BOOL)arg1;
- (void)setHasEnabledVideo:(BOOL)arg1;
- (void)setLegibleMediaSelectionOptions:(id)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setMaxTime:(double)arg1;
- (void)setMinTime:(double)arg1;
- (void)setPictureInPictureInterrupted:(BOOL)arg1;
- (void)setPictureInPicturePossible:(BOOL)arg1;
- (void)setPlaybackSessionInterface:(struct WebPlaybackSessionInterfaceAVKit { int (**x1)(); unsigned int x2; struct RetainPtr<WebAVPlayerController> { void *x_3_1_1; } x3; struct WebPlaybackSessionModel {} *x4; struct WebPlaybackSessionInterfaceAVKitClient {} *x5; bool x6; }*)arg1;
- (void)setPlayerControllerProxy:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setRate:(double)arg1;
- (void)setSeekableTimeRanges:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTiming:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (int)status;
- (id)timing;
- (void)togglePlayback:(id)arg1;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;

@end
