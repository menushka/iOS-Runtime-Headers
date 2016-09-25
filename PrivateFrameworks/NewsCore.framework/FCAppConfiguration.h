/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAppConfiguration : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    long long  _appConfigRefreshRate;
    long long  _articleRapidUpdatesTimeout;
    long long  _autoScrollToTopFeedTimeout;
    double  _batchedFeedTimeout;
    FCResource * _configurationResource;
    <FCContentContext> * _context;
    FCCoverArticlesConfiguration * _coverArticlesConfig;
    NSString * _defaultStoreFrontID;
    NSString * _editorialChannelID;
    NSString * _embedConfigurationAssetID;
    long long  _endOfArticleMaxInaccessiblePaidArticleCount;
    double  _endOfArticleMinPaidHeadlineRatio;
    NSDictionary * _endpointConfigsByEnvironment;
    FCForYouGroupsConfiguration * _forYouGroupsConfiguration;
    BOOL  _forceAppConfigUpdate;
    BOOL  _forceTrendingSearchesUpdate;
    NSArray * _hiddenFeedIDs;
    FCIAdConfiguration * _iAdConfig;
    long long  _initialArticlesFromNewFavorite;
    double  _interstitialAdLoadDelay;
    long long  _longReminderTime;
    long long  _minimumArticleUpdateInterval;
    long long  _minimumDistanceBetweenImageOnTopTiles;
    long long  _newFavoriteNotificationAlertsFrequency;
    long long  _notificationArticleCacheTimeout;
    long long  _notificationArticleWithRapidUpdatesCacheTimeout;
    long long  _notificationEnabledChannelsRefreshFrequency;
    FCNotificationsConfiguration * _notificationsConfig;
    long long  _numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
    NSMutableArray * _observationBlocks;
    NSHashTable * _observers;
    NSArray * _onboardingFeedIDs;
    NTPBPersonalizationConfig * _personalizationConfig;
    NSDictionary * _personalizationTreatments;
    NSSet * _preferredLanguages;
    FCPrefetchConfiguration * _prefetchConfig;
    double  _prerollLoadingTimeout;
    NSArray * _presubscribedFeedIDs;
    FCAsyncSerialQueue * _requestSerialQueue;
    long long  _shortReminderTime;
    long long  _subscriptionsGlobalMeteredCount;
    long long  _subscriptionsGracePeriodForTokenVerificationSeconds;
    long long  _subscriptionsPlacardGlobalMaximumPerDay;
    long long  _subscriptionsPlacardPublisherFrequencyInDays;
    double  _tileProminenceScoreBalanceValue;
    long long  _timeBetweenSameWidgetReinsertion;
    long long  _timeBetweenWidgetInsertions;
    FCRecommendedCategory * _topLevelCategory;
    FCTopStoriesConfiguration * _topStoriesConfig;
    FCResource * _trendingSearchesResource;
    NSArray * _trendingTopics;
    long long  _trendingTopicsRefreshRate;
    BOOL  _universalLinksEnabled;
    NTPBWidgetConfig * _widgetConfiguration;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) long long appConfigRefreshRate;
@property (nonatomic) long long articleRapidUpdatesTimeout;
@property (nonatomic) long long autoScrollToTopFeedTimeout;
@property (nonatomic) double batchedFeedTimeout;
@property (nonatomic, retain) FCResource *configurationResource;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, readonly) FCCoverArticlesConfiguration *coverArticlesConfig;
@property (nonatomic, retain) NSString *defaultStoreFrontID;
@property (nonatomic, retain) NSString *editorialChannelID;
@property (nonatomic, retain) NSString *embedConfigurationAssetID;
@property (nonatomic) long long endOfArticleMaxInaccessiblePaidArticleCount;
@property (nonatomic) double endOfArticleMinPaidHeadlineRatio;
@property (nonatomic, retain) NSDictionary *endpointConfigsByEnvironment;
@property (nonatomic, retain) FCForYouGroupsConfiguration *forYouGroupsConfiguration;
@property (nonatomic) BOOL forceAppConfigUpdate;
@property (nonatomic) BOOL forceTrendingSearchesUpdate;
@property (nonatomic, retain) NSArray *hiddenFeedIDs;
@property (nonatomic, retain) FCIAdConfiguration *iAdConfig;
@property (nonatomic) long long initialArticlesFromNewFavorite;
@property (nonatomic) double interstitialAdLoadDelay;
@property (nonatomic) long long longReminderTime;
@property (nonatomic) long long minimumArticleUpdateInterval;
@property (nonatomic) long long minimumDistanceBetweenImageOnTopTiles;
@property (nonatomic) long long newFavoriteNotificationAlertsFrequency;
@property (nonatomic) long long notificationArticleCacheTimeout;
@property (nonatomic) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property (nonatomic) long long notificationEnabledChannelsRefreshFrequency;
@property (nonatomic, retain) FCNotificationsConfiguration *notificationsConfig;
@property (nonatomic) long long numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
@property (nonatomic, retain) NSMutableArray *observationBlocks;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSArray *onboardingFeedIDs;
@property (nonatomic, readonly) double parsecPopulationCeiling;
@property (nonatomic, readonly) double parsecPopulationFloor;
@property (nonatomic, retain) NTPBPersonalizationConfig *personalizationConfig;
@property (nonatomic, retain) NSDictionary *personalizationTreatments;
@property (nonatomic, retain) NSSet *preferredLanguages;
@property (nonatomic, retain) FCPrefetchConfiguration *prefetchConfig;
@property (nonatomic) double prerollLoadingTimeout;
@property (nonatomic, retain) NSArray *presubscribedFeedIDs;
@property (nonatomic, readonly) NSArray *recommendedCategories;
@property (nonatomic, retain) FCAsyncSerialQueue *requestSerialQueue;
@property (nonatomic) long long shortReminderTime;
@property (nonatomic) long long subscriptionsGlobalMeteredCount;
@property (nonatomic) long long subscriptionsGracePeriodForTokenVerificationSeconds;
@property (nonatomic) long long subscriptionsPlacardGlobalMaximumPerDay;
@property (nonatomic) long long subscriptionsPlacardPublisherFrequencyInDays;
@property (nonatomic) double tileProminenceScoreBalanceValue;
@property (nonatomic) long long timeBetweenSameWidgetReinsertion;
@property (nonatomic) long long timeBetweenWidgetInsertions;
@property (nonatomic, retain) FCRecommendedCategory *topLevelCategory;
@property (nonatomic, readonly) NSArray *topLevelCuratedTagIDs;
@property (nonatomic, readonly) NSArray *topLevelRecommendedChannelTagIDs;
@property (nonatomic, readonly) NSArray *topLevelRecommendedTopicTagIDs;
@property (nonatomic, retain) FCTopStoriesConfiguration *topStoriesConfig;
@property (nonatomic, retain) FCResource *trendingSearchesResource;
@property (nonatomic, readonly) NSArray *trendingTopics;
@property (nonatomic) long long trendingTopicsRefreshRate;
@property (nonatomic) BOOL universalLinksEnabled;
@property (nonatomic, readonly, copy) NTPBWidgetConfig *widgetConfiguration;

- (void).cxx_destruct;
- (id)ANFEmbedConfigurationAssetID;
- (id)_categoryFromProtobufCategory:(id)arg1;
- (void)_didChange;
- (void)_didChangeTrendingTopics;
- (void)_extractCommonValuesFromProtobufConfiguration:(id)arg1;
- (void)_extractCoverArticlesFromLanguageConfiguration:(id)arg1;
- (void)_extractEditorialChannelFromLanguageConfiguration:(id)arg1;
- (void)_extractEndpointConfigurationFromProtobufConfiguration:(id)arg1;
- (void)_extractFeedIDsFromLanguageConfigurations:(id)arg1;
- (void)_extractNotificationsConfigFromLanguageConfiguration:(id)arg1;
- (void)_extractPersonalizationConfigFromProtobufConfiguration:(id)arg1;
- (void)_extractPrefetchConfigFromProtobufConfiguration:(id)arg1;
- (void)_extractTopLevelCategoryFromLanguageConfiguration:(id)arg1;
- (void)_extractTopStoriesFromLanguageConfiguration:(id)arg1;
- (void)_extractTrendingTopicsFromLanguageConfiguration:(id)arg1;
- (void)_extractWidgetConfigFromProtobufConfiguration:(id)arg1;
- (void)_extractiAdConfigFromProtobufConfiguration:(id)arg1;
- (void)_fetchAppConfigurationForStoreFrontID:(id)arg1 cachePolicy:(unsigned int)arg2 refreshRate:(double)arg3 completionQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)_fetchTrendingSearchesForStoreFrontID:(id)arg1 cachePolicy:(unsigned int)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)_languageConfigurationsInProtobufConfiguration:(id)arg1;
- (id)_languageConfigurationsInProtobufTrendingConfiguration:(id)arg1;
- (void)_processConfigurationData:(id)arg1;
- (void)_processTrendingSearchesData:(id)arg1;
- (id)accessQueue;
- (void)addChangeObservationBlock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (long long)appConfigRefreshRate;
- (long long)articleRapidUpdatesTimeout;
- (long long)autoScrollToTopFeedTimeout;
- (double)batchedFeedTimeout;
- (id)configurationResource;
- (id)context;
- (id)coverArticlesConfig;
- (id)defaultStoreFrontID;
- (id)editorialChannelID;
- (id)embedConfigurationAssetID;
- (long long)endOfArticleMaxInaccessiblePaidArticleCount;
- (double)endOfArticleMinPaidHeadlineRatio;
- (id)endpointConfigsByEnvironment;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)arg1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchTrendingSearchesIfNeededWithCompletion:(id /* block */)arg1;
- (id)forYouGroupsConfiguration;
- (BOOL)forceAppConfigUpdate;
- (BOOL)forceTrendingSearchesUpdate;
- (void)forceUpdateOnNextLaunch;
- (id)hiddenFeedIDs;
- (id)iAdConfig;
- (id)init;
- (id)initWithContext:(id)arg1;
- (long long)initialArticlesFromNewFavorite;
- (double)interstitialAdLoadDelay;
- (long long)longReminderTime;
- (long long)minimumArticleUpdateInterval;
- (long long)minimumDistanceBetweenImageOnTopTiles;
- (long long)newFavoriteNotificationAlertsFrequency;
- (long long)notificationArticleCacheTimeout;
- (long long)notificationArticleWithRapidUpdatesCacheTimeout;
- (long long)notificationEnabledChannelsRefreshFrequency;
- (id)notificationsConfig;
- (long long)numberOfScreenfulsScrolledToBypassWidgetTimeLimit;
- (id)observationBlocks;
- (id)observers;
- (id)onboardingFeedIDs;
- (double)parsecPopulationCeiling;
- (double)parsecPopulationFloor;
- (id)personalizationConfig;
- (id)personalizationTreatmentForFeldsparID:(id)arg1;
- (int)personalizationTreatmentIDForFeldsparID:(id)arg1;
- (id)personalizationTreatments;
- (id)preferredLanguages;
- (id)prefetchConfig;
- (double)prerollLoadingTimeout;
- (id)presubscribedFeedIDs;
- (id)recommendedCategories;
- (void)removeObserver:(id)arg1;
- (id)requestSerialQueue;
- (void)setAccessQueue:(id)arg1;
- (void)setAppConfigRefreshRate:(long long)arg1;
- (void)setArticleRapidUpdatesTimeout:(long long)arg1;
- (void)setAutoScrollToTopFeedTimeout:(long long)arg1;
- (void)setBatchedFeedTimeout:(double)arg1;
- (void)setConfigurationResource:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultStoreFrontID:(id)arg1;
- (void)setEditorialChannelID:(id)arg1;
- (void)setEmbedConfigurationAssetID:(id)arg1;
- (void)setEndOfArticleMaxInaccessiblePaidArticleCount:(long long)arg1;
- (void)setEndOfArticleMinPaidHeadlineRatio:(double)arg1;
- (void)setEndpointConfigsByEnvironment:(id)arg1;
- (void)setForYouGroupsConfiguration:(id)arg1;
- (void)setForceAppConfigUpdate:(BOOL)arg1;
- (void)setForceTrendingSearchesUpdate:(BOOL)arg1;
- (void)setHiddenFeedIDs:(id)arg1;
- (void)setIAdConfig:(id)arg1;
- (void)setInitialArticlesFromNewFavorite:(long long)arg1;
- (void)setInterstitialAdLoadDelay:(double)arg1;
- (void)setLongReminderTime:(long long)arg1;
- (void)setMinimumArticleUpdateInterval:(long long)arg1;
- (void)setMinimumDistanceBetweenImageOnTopTiles:(long long)arg1;
- (void)setNewFavoriteNotificationAlertsFrequency:(long long)arg1;
- (void)setNotificationArticleCacheTimeout:(long long)arg1;
- (void)setNotificationArticleWithRapidUpdatesCacheTimeout:(long long)arg1;
- (void)setNotificationEnabledChannelsRefreshFrequency:(long long)arg1;
- (void)setNotificationsConfig:(id)arg1;
- (void)setNumberOfScreenfulsScrolledToBypassWidgetTimeLimit:(long long)arg1;
- (void)setObservationBlocks:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOnboardingFeedIDs:(id)arg1;
- (void)setPersonalizationConfig:(id)arg1;
- (void)setPersonalizationTreatments:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setPrefetchConfig:(id)arg1;
- (void)setPrerollLoadingTimeout:(double)arg1;
- (void)setPresubscribedFeedIDs:(id)arg1;
- (void)setRequestSerialQueue:(id)arg1;
- (void)setShortReminderTime:(long long)arg1;
- (void)setSubscriptionsGlobalMeteredCount:(long long)arg1;
- (void)setSubscriptionsGracePeriodForTokenVerificationSeconds:(long long)arg1;
- (void)setSubscriptionsPlacardGlobalMaximumPerDay:(long long)arg1;
- (void)setSubscriptionsPlacardPublisherFrequencyInDays:(long long)arg1;
- (void)setTileProminenceScoreBalanceValue:(double)arg1;
- (void)setTimeBetweenSameWidgetReinsertion:(long long)arg1;
- (void)setTimeBetweenWidgetInsertions:(long long)arg1;
- (void)setTopLevelCategory:(id)arg1;
- (void)setTopStoriesConfig:(id)arg1;
- (void)setTrendingSearchesResource:(id)arg1;
- (void)setTrendingTopicsRefreshRate:(long long)arg1;
- (void)setUniversalLinksEnabled:(BOOL)arg1;
- (long long)shortReminderTime;
- (long long)subscriptionsGlobalMeteredCount;
- (long long)subscriptionsGracePeriodForTokenVerificationSeconds;
- (long long)subscriptionsPlacardGlobalMaximumPerDay;
- (long long)subscriptionsPlacardPublisherFrequencyInDays;
- (double)tileProminenceScoreBalanceValue;
- (long long)timeBetweenSameWidgetReinsertion;
- (long long)timeBetweenWidgetInsertions;
- (id)topLevelCategory;
- (id)topLevelCuratedTagIDs;
- (id)topLevelRecommendedChannelTagIDs;
- (id)topLevelRecommendedTopicTagIDs;
- (id)topStoriesConfig;
- (id)trendingSearchesResource;
- (id)trendingTopics;
- (long long)trendingTopicsRefreshRate;
- (BOOL)universalLinksEnabled;
- (id)widgetConfiguration;

@end
