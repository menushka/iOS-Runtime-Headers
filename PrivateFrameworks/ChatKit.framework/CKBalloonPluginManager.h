/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBalloonPluginManager : NSObject <CKAppInstallationWatcherObserver> {
    NSMutableDictionary * _activeBrowsers;
    BOOL  _appStoreAutoEnableToggled;
    NSArray * _browserPlugins;
    BOOL  _isAppInstalationEnabled;
    BOOL  _isAppRemovalEnabled;
    BOOL  _keepingEmptySections;
    NSString * _lastLaunchedIdentifier;
    IMBalloonPlugin * _lastViewedPlugin;
    int  _numberOfSectionsToKeep;
    NSSet * _oldVisibleSwitcherPluginIdentifiers;
    NSDictionary * _pluginIndexPathMap;
    NSDictionary * _pluginLaunchTimeMap;
    NSDictionary * _pluginSeenMap;
    NSDictionary * _pluginVersionMap;
    CKPreviewDispatchCache * _snapshotCache;
    NSMutableArray * _visibleInstallations;
    NSArray * _visiblePlugins;
    NSArray * _visiblePluginsBySection;
    NSArray * _visibleSwitcherPlugins;
}

@property (nonatomic, retain) NSMutableDictionary *activeBrowsers;
@property (nonatomic, readonly) NSArray *allEnabledPlugins;
@property (nonatomic, readonly) NSArray *allPlugins;
@property (getter=isAppStoreAutoEnableToggled, nonatomic) BOOL appStoreAutoEnableToggled;
@property (nonatomic, retain) NSArray *browserPlugins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *disabledPlugins;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isAppInstalationEnabled;
@property (nonatomic, readonly) BOOL isAppRemovalEnabled;
@property (nonatomic) BOOL isAppRemovalEnabled;
@property (nonatomic, readonly) BOOL isAppStoreEnabled;
@property (getter=isKeepingEmptySections, nonatomic) BOOL keepingEmptySections;
@property (nonatomic, retain) NSString *lastLaunchedIdentifier;
@property (nonatomic) IMBalloonPlugin *lastViewedPlugin;
@property (nonatomic) int numberOfSectionsToKeep;
@property (nonatomic, retain) NSSet *oldVisibleSwitcherPluginIdentifiers;
@property (nonatomic, retain) NSDictionary *pluginIndexPathMap;
@property (nonatomic, retain) NSDictionary *pluginLaunchTimeMap;
@property (nonatomic, retain) NSDictionary *pluginSeenMap;
@property (nonatomic, retain) NSDictionary *pluginVersionMap;
@property (nonatomic, retain) CKPreviewDispatchCache *snapshotCache;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *visibleDrawerPlugins;
@property (nonatomic, retain) NSMutableArray *visibleInstallations;
@property (nonatomic, retain) NSArray *visiblePlugins;
@property (nonatomic, retain) NSArray *visiblePluginsBySection;
@property (nonatomic, retain) NSArray *visibleSwitcherPlugins;

+ (id)recentPlugin;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addAppWithBalloonIdentifier:(id)arg1;
- (void)_adjustVisiblePluginsBySectionForSectionCapacities:(id)arg1;
- (id)_decodeIndexPathMap:(id)arg1;
- (id)_encodeIndexPathMap:(id)arg1;
- (void)_invalidatePluginForKey:(id)arg1;
- (void)_refreshVisibleDrawerPluginsDueToAppInstallationChange;
- (void)_removeAppWithBalloonIdentifier:(id)arg1;
- (void)_setSeen:(BOOL)arg1 forPlugin:(id)arg2;
- (BOOL)_shouldUninstallContainingBundle:(id)arg1;
- (id)activeBrowsers;
- (id)allEnabledPlugins;
- (id)allPlugins;
- (id)allPluginsPassingTest:(id /* block */)arg1;
- (void)appInstallationWatcher:(id)arg1 addedAppInstallation:(id)arg2;
- (void)appInstallationWatcher:(id)arg1 changedAppInstallation:(id)arg2;
- (unsigned int)badgeValueForPlugin:(id)arg1;
- (void)beginKeepingEmptySections;
- (id)browserPlugins;
- (id)browserSnapshotForKey:(id)arg1;
- (void)cleanSeenMap;
- (void)dealloc;
- (id)descriptionOfVisibleDrawerPlugins;
- (id)digitalTouchViewControllerWithDataSource:(id)arg1;
- (id)disabledPlugins;
- (void)endKeepingEmptySections;
- (id)existingPhotoBrowserViewController;
- (id)existingViewControllerForPluginIdentifier:(id)arg1;
- (id)filteredArrayOfInstallationsThatShouldBeVisible:(id)arg1;
- (void)forceKillRemoteExtensions;
- (void)forceTearDownRemoteViews;
- (void)handleManagedConfigSettingsChangeNotification:(id)arg1;
- (id)handwritingViewControllerWithPluginPayloads:(id)arg1;
- (struct __CFString { }*)healthKitAchievementAvailabilityChangedNotification;
- (void)healthStickerStatusChanged;
- (id)init;
- (void)invalidateAllActivePlugins;
- (void)invalidateAllActiveSwitcherPlugins;
- (void)invalidatePhotosPlugin;
- (BOOL)isAppInstalationEnabled;
- (BOOL)isAppRemovalEnabled;
- (BOOL)isAppStoreAutoEnableToggled;
- (BOOL)isAppStoreEnabled;
- (BOOL)isEnabledAndVisible:(id)arg1;
- (BOOL)isInternalPlugin:(id)arg1;
- (BOOL)isKeepingEmptySections;
- (BOOL)isPluginEnabled:(id)arg1;
- (BOOL)isPluginSeen:(id)arg1;
- (BOOL)isPluginSeenWithInstalledVersion:(id)arg1;
- (BOOL)isPluginVisible:(id)arg1;
- (BOOL)isViewController:(id)arg1 fromPluginWithIdentifier:(id)arg2;
- (id)lastLaunchedIdentifier;
- (id)lastLaunchedPlugin;
- (id)lastViewedPlugin;
- (int)lastViewedPluginIndex;
- (unsigned int)launchStatusForPlugin:(id)arg1;
- (id)launchTimeForPlugin:(id)arg1;
- (id)newViewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2;
- (int)numberOfSectionsToKeep;
- (id)oldVisibleSwitcherPluginIdentifiers;
- (id)photosBrowserViewControllerWithPluginPayloads:(id)arg1;
- (id)pluginForIdentifier:(id)arg1;
- (id)pluginIndexPathMap;
- (id)pluginLaunchTimeMap;
- (id)pluginSeenMap;
- (id)pluginVersionMap;
- (void)prepareForSuspend;
- (void)refreshPlugins;
- (void)regeneratePluginIndexPaths;
- (void)reloadInstalledApps:(id)arg1;
- (void)removeVisibleInstallationWithID:(id)arg1;
- (void)saveWithNotification:(BOOL)arg1;
- (void)setActiveBrowsers:(id)arg1;
- (void)setAppStoreAutoEnableToggled:(BOOL)arg1;
- (void)setBrowserPlugins:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forPlugin:(id)arg2;
- (void)setIsAppInstalationEnabled:(BOOL)arg1;
- (void)setIsAppRemovalEnabled:(BOOL)arg1;
- (void)setKeepingEmptySections:(BOOL)arg1;
- (void)setLastLaunchedIdentifier:(id)arg1;
- (void)setLastViewedPlugin:(id)arg1;
- (void)setNumberOfSectionsToKeep:(int)arg1;
- (void)setOldVisibleSwitcherPluginIdentifiers:(id)arg1;
- (void)setPluginIndexPathMap:(id)arg1;
- (void)setPluginLaunchTimeMap:(id)arg1;
- (void)setPluginSeenMap:(id)arg1;
- (void)setPluginVersionMap:(id)arg1;
- (void)setSeen:(BOOL)arg1 forPlugin:(id)arg2;
- (void)setSnapshotCache:(id)arg1;
- (void)setVisibleInstallations:(id)arg1;
- (void)setVisiblePlugins:(id)arg1;
- (void)setVisiblePluginsBySection:(id)arg1;
- (void)setVisibleSwitcherPlugins:(id)arg1;
- (id)snapshotCache;
- (unsigned int)unseenPluginCount;
- (void)updateAppInstallations;
- (void)updateIndexPath:(id)arg1 forPlugin:(id)arg2;
- (void)updateLaunchStatus:(unsigned int)arg1 forPlugin:(id)arg2 withNotification:(BOOL)arg3;
- (void)updateLaunchTimeForPlugin:(id)arg1;
- (void)updateSnapshotForBrowserViewController:(id)arg1 currentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)viewControllerForPluginIdentifier:(id)arg1;
- (id)viewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2;
- (id)visibleDrawerPlugins;
- (id)visibleInstallations;
- (id)visiblePlugins;
- (id)visiblePluginsBySection;
- (id)visibleSwitcherPlugins;

@end
