/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraFile : ICCameraItem {
    void * _fileProperties;
}

@property (readonly) BOOL burstFavorite;
@property (readonly) BOOL burstPicked;
@property (readonly) NSString *burstUUID;
@property BOOL fetchingMetadata;
@property BOOL fetchingThumbnail;
@property long long fileSize;
@property (readonly) BOOL hasOverriddenOrientation;
@property (readonly) BOOL highFramerate;
@property (retain) NSMutableDictionary *metadata_hidden;
@property unsigned int orientation;
@property (getter=isRaw) BOOL raw;
@property (readonly) BOOL timeLapse;

// Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture

- (BOOL)burstFavorite;
- (BOOL)burstPicked;
- (id)burstUUID;
- (void)dealloc;
- (id)description;
- (double)duration;
- (BOOL)fetchingMetadata;
- (BOOL)fetchingThumbnail;
- (long long)fileSize;
- (void)finalize;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (id)handleCommandCompletionNotification:(id)arg1;
- (BOOL)hasMetadata;
- (BOOL)hasOverriddenOrientation;
- (BOOL)hasThumbnail;
- (BOOL)highFramerate;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (BOOL)isRaw;
- (id)metadata;
- (id)metadata_hidden;
- (unsigned int)orientation;
- (void)overrideOrientation:(unsigned int)arg1;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)setFetchingMetadata:(BOOL)arg1;
- (void)setFetchingThumbnail:(BOOL)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setHasMetadata:(BOOL)arg1;
- (void)setHasThumbnail:(BOOL)arg1;
- (void)setKeywordPropertiesFromMetadata;
- (void)setMetadata_hidden:(id)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setRaw:(BOOL)arg1;
- (struct CGImage { }*)thumbnail;
- (BOOL)timeLapse;

// Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary

- (id)fileExtension;
- (id)importIdentifier;
- (id)parentFolderName;

@end
