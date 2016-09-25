/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleRecord : PBCodable <NSCopying> {
    NSString * _accessoryText;
    NSMutableArray * _allowedStorefrontIds;
    long long  _backendArticleVersion;
    NTPBRecordBase * _base;
    long long  _behaviorFlags;
    NSMutableArray * _blockedStorefrontIds;
    NSString * _clusterId;
    int  _contentType;
    NSString * _contentURL;
    NSString * _coverArt;
    NSString * _displayTopicTagId;
    NSString * _excerptURL;
    NSString * _flintDocumentURL;
    NSMutableArray * _flintFontResourceIds;
    struct { 
        unsigned int backendArticleVersion : 1; 
        unsigned int behaviorFlags : 1; 
        unsigned int minimumNewsVersion : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int thumbnailFocalFrame : 1; 
        unsigned int thumbnailHQMetadata : 1; 
        unsigned int thumbnailLQMetadata : 1; 
        unsigned int thumbnailMediumMetadata : 1; 
        unsigned int thumbnailMetadata : 1; 
        unsigned int thumbnailUltraHQMetadata : 1; 
        unsigned int thumbnailWidgetHQMetadata : 1; 
        unsigned int thumbnailWidgetLQMetadata : 1; 
        unsigned int thumbnailWidgetMetadata : 1; 
        unsigned int videoDuration : 1; 
        unsigned int contentType : 1; 
        unsigned int storyType : 1; 
        unsigned int isDraft : 1; 
        unsigned int isFeatureCandidate : 1; 
        unsigned int isPaid : 1; 
        unsigned int isSponsored : 1; 
    }  _has;
    NSMutableArray * _iAdCategories;
    NSMutableArray * _iAdKeywords;
    NSMutableArray * _iAdSectionIds;
    BOOL  _isDraft;
    BOOL  _isFeatureCandidate;
    BOOL  _isPaid;
    BOOL  _isSponsored;
    long long  _minimumNewsVersion;
    NSMutableArray * _moreFromPublisherArticleIds;
    NSString * _primaryAudience;
    NTPBDate * _publishDate;
    long long  _publisherArticleVersion;
    NSString * _referencedArticleId;
    NSMutableArray * _relatedArticleIds;
    NSString * _shortExcerpt;
    NSString * _sourceChannelTagId;
    int  _storyType;
    NSString * _subtitle;
    long long  _thumbnailFocalFrame;
    long long  _thumbnailHQMetadata;
    NSString * _thumbnailHQURL;
    long long  _thumbnailLQMetadata;
    NSString * _thumbnailLQURL;
    long long  _thumbnailMediumMetadata;
    NSString * _thumbnailMediumURL;
    long long  _thumbnailMetadata;
    NSString * _thumbnailURL;
    long long  _thumbnailUltraHQMetadata;
    NSString * _thumbnailUltraHQURL;
    long long  _thumbnailWidgetHQMetadata;
    NSString * _thumbnailWidgetHQTaggedURL;
    NSString * _thumbnailWidgetHQURL;
    long long  _thumbnailWidgetLQMetadata;
    NSString * _thumbnailWidgetLQTaggedURL;
    NSString * _thumbnailWidgetLQURL;
    long long  _thumbnailWidgetMetadata;
    NSString * _thumbnailWidgetTaggedURL;
    NSString * _thumbnailWidgetURL;
    NSString * _title;
    struct { 
        unsigned long long *list; 
        unsigned int count; 
        unsigned int size; 
    }  _topicFlags;
    NSMutableArray * _topicIds;
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    }  _topicScores;
    double  _videoDuration;
    NSString * _videoURL;
}

@property (nonatomic, retain) NSString *accessoryText;
@property (nonatomic, retain) NSMutableArray *allowedStorefrontIds;
@property (nonatomic) long long backendArticleVersion;
@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic) long long behaviorFlags;
@property (nonatomic, retain) NSMutableArray *blockedStorefrontIds;
@property (nonatomic, retain) NSString *clusterId;
@property (nonatomic) int contentType;
@property (nonatomic, retain) NSString *contentURL;
@property (nonatomic, retain) NSString *coverArt;
@property (nonatomic, retain) NSString *displayTopicTagId;
@property (nonatomic, readonly) NSArray *endOfArticleTopicIDs;
@property (nonatomic, retain) NSString *excerptURL;
@property (nonatomic, retain) NSString *flintDocumentURL;
@property (nonatomic, retain) NSMutableArray *flintFontResourceIds;
@property (nonatomic, readonly) BOOL hasAccessoryText;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic, readonly) BOOL hasBase;
@property (nonatomic) BOOL hasBehaviorFlags;
@property (nonatomic, readonly) BOOL hasClusterId;
@property (nonatomic) BOOL hasContentType;
@property (nonatomic, readonly) BOOL hasContentURL;
@property (nonatomic, readonly) BOOL hasCoverArt;
@property (nonatomic, readonly) BOOL hasDisplayTopicTagId;
@property (nonatomic, readonly) BOOL hasExcerptURL;
@property (nonatomic, readonly) BOOL hasFlintDocumentURL;
@property (nonatomic) BOOL hasIsDraft;
@property (nonatomic) BOOL hasIsFeatureCandidate;
@property (nonatomic) BOOL hasIsPaid;
@property (nonatomic) BOOL hasIsSponsored;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (nonatomic, readonly) BOOL hasPrimaryAudience;
@property (nonatomic, readonly) BOOL hasPublishDate;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic, readonly) BOOL hasReferencedArticleId;
@property (nonatomic, readonly) BOOL hasShortExcerpt;
@property (nonatomic, readonly) BOOL hasSourceChannelTagId;
@property (nonatomic) BOOL hasStoryType;
@property (nonatomic, readonly) BOOL hasSubtitle;
@property (nonatomic) BOOL hasThumbnailFocalFrame;
@property (nonatomic) BOOL hasThumbnailHQMetadata;
@property (nonatomic, readonly) BOOL hasThumbnailHQURL;
@property (nonatomic) BOOL hasThumbnailLQMetadata;
@property (nonatomic, readonly) BOOL hasThumbnailLQURL;
@property (nonatomic) BOOL hasThumbnailMediumMetadata;
@property (nonatomic, readonly) BOOL hasThumbnailMediumURL;
@property (nonatomic) BOOL hasThumbnailMetadata;
@property (nonatomic, readonly) BOOL hasThumbnailURL;
@property (nonatomic) BOOL hasThumbnailUltraHQMetadata;
@property (nonatomic, readonly) BOOL hasThumbnailUltraHQURL;
@property (nonatomic) BOOL hasThumbnailWidgetHQMetadata;
@property (nonatomic, readonly) BOOL hasThumbnailWidgetHQTaggedURL;
@property (nonatomic, readonly) BOOL hasThumbnailWidgetHQURL;
@property (nonatomic) BOOL hasThumbnailWidgetLQMetadata;
@property (nonatomic, readonly) BOOL hasThumbnailWidgetLQTaggedURL;
@property (nonatomic, readonly) BOOL hasThumbnailWidgetLQURL;
@property (nonatomic) BOOL hasThumbnailWidgetMetadata;
@property (nonatomic, readonly) BOOL hasThumbnailWidgetTaggedURL;
@property (nonatomic, readonly) BOOL hasThumbnailWidgetURL;
@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic) BOOL hasVideoDuration;
@property (nonatomic, readonly) BOOL hasVideoURL;
@property (nonatomic, retain) NSMutableArray *iAdCategories;
@property (nonatomic, retain) NSMutableArray *iAdKeywords;
@property (nonatomic, retain) NSMutableArray *iAdSectionIds;
@property (nonatomic) BOOL isDraft;
@property (nonatomic) BOOL isFeatureCandidate;
@property (nonatomic) BOOL isPaid;
@property (nonatomic) BOOL isSponsored;
@property (nonatomic) long long minimumNewsVersion;
@property (nonatomic, retain) NSMutableArray *moreFromPublisherArticleIds;
@property (nonatomic, retain) NSString *primaryAudience;
@property (nonatomic, retain) NTPBDate *publishDate;
@property (nonatomic) long long publisherArticleVersion;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic, retain) NSMutableArray *relatedArticleIds;
@property (nonatomic, retain) NSString *shortExcerpt;
@property (nonatomic, retain) NSString *sourceChannelTagId;
@property (nonatomic) int storyType;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic) long long thumbnailFocalFrame;
@property (nonatomic) long long thumbnailHQMetadata;
@property (nonatomic, retain) NSString *thumbnailHQURL;
@property (nonatomic) long long thumbnailLQMetadata;
@property (nonatomic, retain) NSString *thumbnailLQURL;
@property (nonatomic) long long thumbnailMediumMetadata;
@property (nonatomic, retain) NSString *thumbnailMediumURL;
@property (nonatomic) long long thumbnailMetadata;
@property (nonatomic, retain) NSString *thumbnailURL;
@property (nonatomic) long long thumbnailUltraHQMetadata;
@property (nonatomic, retain) NSString *thumbnailUltraHQURL;
@property (nonatomic) long long thumbnailWidgetHQMetadata;
@property (nonatomic, retain) NSString *thumbnailWidgetHQTaggedURL;
@property (nonatomic, retain) NSString *thumbnailWidgetHQURL;
@property (nonatomic) long long thumbnailWidgetLQMetadata;
@property (nonatomic, retain) NSString *thumbnailWidgetLQTaggedURL;
@property (nonatomic, retain) NSString *thumbnailWidgetLQURL;
@property (nonatomic) long long thumbnailWidgetMetadata;
@property (nonatomic, retain) NSString *thumbnailWidgetTaggedURL;
@property (nonatomic, retain) NSString *thumbnailWidgetURL;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) unsigned long long*topicFlags;
@property (nonatomic, readonly) unsigned int topicFlagsCount;
@property (nonatomic, retain) NSMutableArray *topicIds;
@property (nonatomic, readonly) double*topicScores;
@property (nonatomic, readonly) unsigned int topicScoresCount;
@property (nonatomic) double videoDuration;
@property (nonatomic, retain) NSString *videoURL;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)allowedStorefrontIdsType;
+ (Class)blockedStorefrontIdsType;
+ (Class)flintFontResourceIdsType;
+ (Class)iAdCategoriesType;
+ (Class)iAdKeywordsType;
+ (Class)iAdSectionIdsType;
+ (Class)moreFromPublisherArticleIdsType;
+ (Class)relatedArticleIdsType;
+ (Class)topicIdsType;

- (id)accessoryText;
- (void)addAllowedStorefrontIds:(id)arg1;
- (void)addBlockedStorefrontIds:(id)arg1;
- (void)addFlintFontResourceIds:(id)arg1;
- (void)addIAdCategories:(id)arg1;
- (void)addIAdKeywords:(id)arg1;
- (void)addIAdSectionIds:(id)arg1;
- (void)addMoreFromPublisherArticleIds:(id)arg1;
- (void)addRelatedArticleIds:(id)arg1;
- (void)addTopicFlags:(unsigned long long)arg1;
- (void)addTopicIds:(id)arg1;
- (void)addTopicScores:(double)arg1;
- (id)allowedStorefrontIds;
- (id)allowedStorefrontIdsAtIndex:(unsigned int)arg1;
- (unsigned int)allowedStorefrontIdsCount;
- (long long)backendArticleVersion;
- (id)base;
- (long long)behaviorFlags;
- (id)blockedStorefrontIds;
- (id)blockedStorefrontIdsAtIndex:(unsigned int)arg1;
- (unsigned int)blockedStorefrontIdsCount;
- (void)clearAllowedStorefrontIds;
- (void)clearBlockedStorefrontIds;
- (void)clearFlintFontResourceIds;
- (void)clearIAdCategories;
- (void)clearIAdKeywords;
- (void)clearIAdSectionIds;
- (void)clearMoreFromPublisherArticleIds;
- (void)clearRelatedArticleIds;
- (void)clearTopicFlags;
- (void)clearTopicIds;
- (void)clearTopicScores;
- (id)clusterId;
- (int)contentType;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArt;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayTopicTagId;
- (id)excerptURL;
- (id)flintDocumentURL;
- (id)flintFontResourceIds;
- (id)flintFontResourceIdsAtIndex:(unsigned int)arg1;
- (unsigned int)flintFontResourceIdsCount;
- (BOOL)hasAccessoryText;
- (BOOL)hasBackendArticleVersion;
- (BOOL)hasBase;
- (BOOL)hasBehaviorFlags;
- (BOOL)hasClusterId;
- (BOOL)hasContentType;
- (BOOL)hasContentURL;
- (BOOL)hasCoverArt;
- (BOOL)hasDisplayTopicTagId;
- (BOOL)hasExcerptURL;
- (BOOL)hasFlintDocumentURL;
- (BOOL)hasIsDraft;
- (BOOL)hasIsFeatureCandidate;
- (BOOL)hasIsPaid;
- (BOOL)hasIsSponsored;
- (BOOL)hasMinimumNewsVersion;
- (BOOL)hasPrimaryAudience;
- (BOOL)hasPublishDate;
- (BOOL)hasPublisherArticleVersion;
- (BOOL)hasReferencedArticleId;
- (BOOL)hasShortExcerpt;
- (BOOL)hasSourceChannelTagId;
- (BOOL)hasStoryType;
- (BOOL)hasSubtitle;
- (BOOL)hasThumbnailFocalFrame;
- (BOOL)hasThumbnailHQMetadata;
- (BOOL)hasThumbnailHQURL;
- (BOOL)hasThumbnailLQMetadata;
- (BOOL)hasThumbnailLQURL;
- (BOOL)hasThumbnailMediumMetadata;
- (BOOL)hasThumbnailMediumURL;
- (BOOL)hasThumbnailMetadata;
- (BOOL)hasThumbnailURL;
- (BOOL)hasThumbnailUltraHQMetadata;
- (BOOL)hasThumbnailUltraHQURL;
- (BOOL)hasThumbnailWidgetHQMetadata;
- (BOOL)hasThumbnailWidgetHQTaggedURL;
- (BOOL)hasThumbnailWidgetHQURL;
- (BOOL)hasThumbnailWidgetLQMetadata;
- (BOOL)hasThumbnailWidgetLQTaggedURL;
- (BOOL)hasThumbnailWidgetLQURL;
- (BOOL)hasThumbnailWidgetMetadata;
- (BOOL)hasThumbnailWidgetTaggedURL;
- (BOOL)hasThumbnailWidgetURL;
- (BOOL)hasTitle;
- (BOOL)hasVideoDuration;
- (BOOL)hasVideoURL;
- (unsigned int)hash;
- (id)iAdCategories;
- (id)iAdCategoriesAtIndex:(unsigned int)arg1;
- (unsigned int)iAdCategoriesCount;
- (id)iAdKeywords;
- (id)iAdKeywordsAtIndex:(unsigned int)arg1;
- (unsigned int)iAdKeywordsCount;
- (id)iAdSectionIds;
- (id)iAdSectionIdsAtIndex:(unsigned int)arg1;
- (unsigned int)iAdSectionIdsCount;
- (BOOL)isDraft;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFeatureCandidate;
- (BOOL)isPaid;
- (BOOL)isSponsored;
- (void)mergeFrom:(id)arg1;
- (long long)minimumNewsVersion;
- (id)moreFromPublisherArticleIds;
- (id)moreFromPublisherArticleIdsAtIndex:(unsigned int)arg1;
- (unsigned int)moreFromPublisherArticleIdsCount;
- (id)primaryAudience;
- (id)publishDate;
- (long long)publisherArticleVersion;
- (BOOL)readFrom:(id)arg1;
- (id)referencedArticleId;
- (id)relatedArticleIds;
- (id)relatedArticleIdsAtIndex:(unsigned int)arg1;
- (unsigned int)relatedArticleIdsCount;
- (void)setAccessoryText:(id)arg1;
- (void)setAllowedStorefrontIds:(id)arg1;
- (void)setBackendArticleVersion:(long long)arg1;
- (void)setBase:(id)arg1;
- (void)setBehaviorFlags:(long long)arg1;
- (void)setBlockedStorefrontIds:(id)arg1;
- (void)setClusterId:(id)arg1;
- (void)setContentType:(int)arg1;
- (void)setContentURL:(id)arg1;
- (void)setCoverArt:(id)arg1;
- (void)setDisplayTopicTagId:(id)arg1;
- (void)setExcerptURL:(id)arg1;
- (void)setFlintDocumentURL:(id)arg1;
- (void)setFlintFontResourceIds:(id)arg1;
- (void)setHasBackendArticleVersion:(BOOL)arg1;
- (void)setHasBehaviorFlags:(BOOL)arg1;
- (void)setHasContentType:(BOOL)arg1;
- (void)setHasIsDraft:(BOOL)arg1;
- (void)setHasIsFeatureCandidate:(BOOL)arg1;
- (void)setHasIsPaid:(BOOL)arg1;
- (void)setHasIsSponsored:(BOOL)arg1;
- (void)setHasMinimumNewsVersion:(BOOL)arg1;
- (void)setHasPublisherArticleVersion:(BOOL)arg1;
- (void)setHasStoryType:(BOOL)arg1;
- (void)setHasThumbnailFocalFrame:(BOOL)arg1;
- (void)setHasThumbnailHQMetadata:(BOOL)arg1;
- (void)setHasThumbnailLQMetadata:(BOOL)arg1;
- (void)setHasThumbnailMediumMetadata:(BOOL)arg1;
- (void)setHasThumbnailMetadata:(BOOL)arg1;
- (void)setHasThumbnailUltraHQMetadata:(BOOL)arg1;
- (void)setHasThumbnailWidgetHQMetadata:(BOOL)arg1;
- (void)setHasThumbnailWidgetLQMetadata:(BOOL)arg1;
- (void)setHasThumbnailWidgetMetadata:(BOOL)arg1;
- (void)setHasVideoDuration:(BOOL)arg1;
- (void)setIAdCategories:(id)arg1;
- (void)setIAdKeywords:(id)arg1;
- (void)setIAdSectionIds:(id)arg1;
- (void)setIsDraft:(BOOL)arg1;
- (void)setIsFeatureCandidate:(BOOL)arg1;
- (void)setIsPaid:(BOOL)arg1;
- (void)setIsSponsored:(BOOL)arg1;
- (void)setMinimumNewsVersion:(long long)arg1;
- (void)setMoreFromPublisherArticleIds:(id)arg1;
- (void)setPrimaryAudience:(id)arg1;
- (void)setPublishDate:(id)arg1;
- (void)setPublisherArticleVersion:(long long)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setRelatedArticleIds:(id)arg1;
- (void)setShortExcerpt:(id)arg1;
- (void)setSourceChannelTagId:(id)arg1;
- (void)setStoryType:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnailFocalFrame:(long long)arg1;
- (void)setThumbnailHQMetadata:(long long)arg1;
- (void)setThumbnailHQURL:(id)arg1;
- (void)setThumbnailLQMetadata:(long long)arg1;
- (void)setThumbnailLQURL:(id)arg1;
- (void)setThumbnailMediumMetadata:(long long)arg1;
- (void)setThumbnailMediumURL:(id)arg1;
- (void)setThumbnailMetadata:(long long)arg1;
- (void)setThumbnailURL:(id)arg1;
- (void)setThumbnailUltraHQMetadata:(long long)arg1;
- (void)setThumbnailUltraHQURL:(id)arg1;
- (void)setThumbnailWidgetHQMetadata:(long long)arg1;
- (void)setThumbnailWidgetHQTaggedURL:(id)arg1;
- (void)setThumbnailWidgetHQURL:(id)arg1;
- (void)setThumbnailWidgetLQMetadata:(long long)arg1;
- (void)setThumbnailWidgetLQTaggedURL:(id)arg1;
- (void)setThumbnailWidgetLQURL:(id)arg1;
- (void)setThumbnailWidgetMetadata:(long long)arg1;
- (void)setThumbnailWidgetTaggedURL:(id)arg1;
- (void)setThumbnailWidgetURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicFlags:(unsigned long long*)arg1 count:(unsigned int)arg2;
- (void)setTopicIds:(id)arg1;
- (void)setTopicScores:(double*)arg1 count:(unsigned int)arg2;
- (void)setVideoDuration:(double)arg1;
- (void)setVideoURL:(id)arg1;
- (id)shortExcerpt;
- (id)sourceChannelTagId;
- (int)storyType;
- (id)subtitle;
- (long long)thumbnailFocalFrame;
- (long long)thumbnailHQMetadata;
- (id)thumbnailHQURL;
- (long long)thumbnailLQMetadata;
- (id)thumbnailLQURL;
- (long long)thumbnailMediumMetadata;
- (id)thumbnailMediumURL;
- (long long)thumbnailMetadata;
- (id)thumbnailURL;
- (long long)thumbnailUltraHQMetadata;
- (id)thumbnailUltraHQURL;
- (long long)thumbnailWidgetHQMetadata;
- (id)thumbnailWidgetHQTaggedURL;
- (id)thumbnailWidgetHQURL;
- (long long)thumbnailWidgetLQMetadata;
- (id)thumbnailWidgetLQTaggedURL;
- (id)thumbnailWidgetLQURL;
- (long long)thumbnailWidgetMetadata;
- (id)thumbnailWidgetTaggedURL;
- (id)thumbnailWidgetURL;
- (id)title;
- (unsigned long long*)topicFlags;
- (unsigned long long)topicFlagsAtIndex:(unsigned int)arg1;
- (unsigned int)topicFlagsCount;
- (id)topicIds;
- (id)topicIdsAtIndex:(unsigned int)arg1;
- (unsigned int)topicIdsCount;
- (double*)topicScores;
- (double)topicScoresAtIndex:(unsigned int)arg1;
- (unsigned int)topicScoresCount;
- (double)videoDuration;
- (id)videoURL;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)endOfArticleTopicIDs;
- (id)generateFlintDocumentAssetHandleWithAssetManager:(id)arg1;
- (id)generateThumbnailAssetHandleForURL:(id)arg1 withAssetManager:(id)arg2;
- (id)generateWebExcerptAssetHandleWithAssetManager:(id)arg1;

@end
