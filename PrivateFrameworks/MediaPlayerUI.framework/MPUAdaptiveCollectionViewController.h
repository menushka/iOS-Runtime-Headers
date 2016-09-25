/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUAdaptiveCollectionViewController : MPUDataSourceViewController <MPUInsetProxyScrollViewDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInsetAdditions;
    MPUInsetProxyScrollView * _insetProxyScrollView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _scrollIndicatorInsetsAdditions;
    NSMutableDictionary * _sizeClassToClassMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableDictionary *sizeClassToClassMap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyNewContentInsetAdditions:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 withExistingContentInsetAdditions:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 toScrollView:(id)arg3;
- (void)_applyNewScrollIndicatorInsetsAdditions:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 withExistingScrollIndicatorInsetsAdditions:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 toScrollView:(id)arg3;
- (id)_childDataSourceViewController;
- (id)_indexPathOfTopVisibleItem;
- (void)_restoreTopVisibleIndexPath:(id)arg1;
- (void)_updateViewControllerIfNecessary;
- (id)contentScrollView;
- (void)dataSourceDidInvalidate;
- (void)dealloc;
- (void)insetProxyScrollViewContentInsetDidChange:(id)arg1;
- (void)insetProxyScrollViewScrollIndicatorInsetsDidChange:(id)arg1;
- (void)reloadData;
- (void)setSizeClassToClassMap:(id)arg1;
- (void)setViewControllerClass:(Class)arg1 forHorizontalSizeClass:(int)arg2;
- (id)sizeClassToClassMap;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
