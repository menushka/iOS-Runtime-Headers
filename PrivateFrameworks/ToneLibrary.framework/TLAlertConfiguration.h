/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _audioCategory;
    float  _audioVolume;
    NSURL * _externalToneFileURL;
    unsigned long long  _externalToneMediaLibraryItemIdentifier;
    NSDictionary * _externalVibrationPattern;
    BOOL  _forPreview;
    BOOL  _hasCustomAudioVolume;
    BOOL  _isFrozen;
    double  _maximumDuration;
    BOOL  _shouldIgnoreRingerSwitch;
    BOOL  _shouldRepeat;
    NSString * _toneIdentifier;
    NSString * _topic;
    int  _type;
    NSString * _vibrationIdentifier;
}

@property (nonatomic, readonly) BOOL _hasCustomAudioVolume;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic) float audioVolume;
@property (nonatomic, copy) NSURL *externalToneFileURL;
@property (nonatomic) unsigned long long externalToneMediaLibraryItemIdentifier;
@property (nonatomic, copy) NSDictionary *externalVibrationPattern;
@property (getter=isForPreview, nonatomic) BOOL forPreview;
@property (nonatomic) double maximumDuration;
@property (nonatomic) BOOL shouldIgnoreRingerSwitch;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic, copy) NSString *toneIdentifier;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic, readonly) int type;
@property (nonatomic, copy) NSString *vibrationIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_freeze;
- (BOOL)_hasCustomAudioVolume;
- (void)_performBlockIgnoringFrozenFlag:(id /* block */)arg1;
- (void)_throwForFrozenInstance;
- (id)audioCategory;
- (float)audioVolume;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalToneFileURL;
- (unsigned long long)externalToneMediaLibraryItemIdentifier;
- (id)externalVibrationPattern;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isForPreview;
- (double)maximumDuration;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioVolume:(float)arg1;
- (void)setExternalToneFileURL:(id)arg1;
- (void)setExternalToneMediaLibraryItemIdentifier:(unsigned long long)arg1;
- (void)setExternalVibrationPattern:(id)arg1;
- (void)setForPreview:(BOOL)arg1;
- (void)setMaximumDuration:(double)arg1;
- (void)setShouldIgnoreRingerSwitch:(BOOL)arg1;
- (void)setShouldRepeat:(BOOL)arg1;
- (void)setToneIdentifier:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setVibrationIdentifier:(id)arg1;
- (BOOL)shouldIgnoreRingerSwitch;
- (BOOL)shouldRepeat;
- (id)toneIdentifier;
- (id)topic;
- (int)type;
- (id)vibrationIdentifier;

@end
