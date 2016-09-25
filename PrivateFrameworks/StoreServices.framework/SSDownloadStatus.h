/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadStatus : NSObject <NSCopying, SSXPCCoding> {
    SSDownloadPhase * _activePhase;
    BOOL  _contentRestricted;
    NSError * _error;
    BOOL  _failed;
    BOOL  _paused;
}

@property (nonatomic, readonly) SSDownloadPhase *activePhase;
@property (getter=isContentRestricted, nonatomic) BOOL contentRestricted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (getter=isFailed, nonatomic) BOOL failed;
@property (getter=isFailedTransient, nonatomic, readonly) BOOL failedTransient;
@property (readonly) unsigned int hash;
@property (getter=isPausable, nonatomic) BOOL pausable;
@property (getter=isPaused, nonatomic) BOOL paused;
@property (nonatomic, readonly) float percentComplete;
@property (readonly) Class superclass;

- (id)activePhase;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)error;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isContentRestricted;
- (BOOL)isFailed;
- (BOOL)isFailedTransient;
- (BOOL)isPausable;
- (BOOL)isPaused;
- (float)percentComplete;
- (void)setContentRestricted:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setFailed:(BOOL)arg1;
- (void)setOperationProgress:(id)arg1;
- (void)setOperationType:(int)arg1;
- (void)setPausable:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setPercentComplete:(float)arg1;

@end
