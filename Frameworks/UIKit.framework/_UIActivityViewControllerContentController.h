/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityViewControllerContentController : UIViewController <SFAirDropActivityViewControllerDelegate, UIActivityGroupViewControllerDataSource, UIActivityGroupViewControllerDelegate, _UIActivityViewControllerContentControllerAPI> {
    _UIActivityGroupListViewController * _activityGroupListViewController;
    SFAirDropActivityViewController * _airDropViewController;
    <_UIActivityViewControllerContentControllerDelegate> * _delegate;
}

@property (nonatomic, retain) _UIActivityGroupListViewController *activityGroupListViewController;
@property (nonatomic, retain) SFAirDropActivityViewController *airDropViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <_UIActivityViewControllerContentControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityGroupListViewController;
- (id)activityGroupViewController:(id)arg1 availableActivitiesInCategory:(int)arg2;
- (void)activityGroupViewController:(id)arg1 didSelectActivity:(id)arg2;
- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (void)airDropActivityRequestingSharedItemsWithCompletionHandler:(id /* block */)arg1;
- (void)airDropActivityRequestingSharedItemsWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)airDropViewController;
- (void)cleanupWithSelectedActivityType:(id)arg1;
- (id)createActivityGroupViewControllerForItems:(id)arg1 category:(int)arg2 userDefaults:(id)arg3;
- (void)createContentViewControllersWithActivityItems:(id)arg1 availableActivities:(id)arg2 excludedActivityTypes:(id)arg3 includedActivityTypes:(id)arg4 excludedActivityCategories:(int)arg5 sourceIsManaged:(BOOL)arg6 allowsEmbedding:(BOOL)arg7;
- (id)delegate;
- (float)displayHeight;
- (BOOL)hasAirDrop;
- (id)initWithDelegate:(id)arg1;
- (void)invalidateLayout;
- (void)reloadImageForActivityType:(id)arg1;
- (void)setActivityGroupListViewController:(id)arg1;
- (void)setAirDropViewController:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDarkStyleOnLegacyApp:(BOOL)arg1;
- (void)setNeedsRequestingSharedItems;
- (void)setOtherActivityViewPresented:(BOOL)arg1;
- (void)setSharedItemsAvailable:(BOOL)arg1;
- (void)updateActivities:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })updatePreferredContentSizeWithWidth:(float)arg1;
- (void)viewDidLoad;

@end
