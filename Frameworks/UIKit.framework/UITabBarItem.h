/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarItem : UIBarItem {
    int  __barMetrics;
    int  __imageStyle;
    UIColor * __tintColor;
    SEL  _action;
    _UITabBarItemAppearanceStorage * _appearanceStorage;
    NSString * _badgeValue;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _imageInsets;
    UIImage * _selectedImage;
    UIImage * _selectedTemplateImage;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int customSelectedImage : 1; 
        unsigned int customUnselectedImage : 1; 
    }  _tabBarItemFlags;
    id  _target;
    UIImage * _templateImage;
    NSString * _title;
    UIImage * _unselectedImage;
    UITabBarButton * _view;
}

@property (setter=_setBarMetrics:, nonatomic) int _barMetrics;
@property (setter=_setImageStyle:, nonatomic) int _imageStyle;
@property (getter=_isSelected, setter=_setSelected:, nonatomic) BOOL _selected;
@property (setter=_setTintColor:, nonatomic, retain) UIColor *_tintColor;
@property (nonatomic, copy) UIColor *badgeColor;
@property (nonatomic, copy) NSString *badgeValue;
@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic) struct UIOffset { float x1; float x2; } titlePositionAdjustment;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_appearanceBlindViewClasses;

- (void).cxx_destruct;
- (int)_barMetrics;
- (id)_createViewForTabBar:(id)arg1 asProxyView:(BOOL)arg2;
- (id)_imageForState:(unsigned int)arg1 metrics:(int)arg2 position:(int)arg3 type:(int)arg4;
- (int)_imageStyle;
- (id)_internalTemplateImage;
- (id)_internalTemplateImages;
- (id)_internalTitle;
- (BOOL)_isSelected;
- (void)_setBarMetrics:(int)arg1;
- (void)_setImageStyle:(int)arg1;
- (void)_setInternalTemplateImage:(id)arg1;
- (void)_setInternalTitle:(id)arg1;
- (void)_setSelected:(BOOL)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned int)arg3;
- (void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2;
- (id)_tintColor;
- (void)_updateButtonForTintColor:(id)arg1 selected:(BOOL)arg2;
- (id)_updateImageWithTintColor:(id)arg1 isSelected:(BOOL)arg2 getImageOffset:(struct UIOffset { float x1; float x2; }*)arg3;
- (void)_updateToMatchCurrentState;
- (void)_updateView;
- (void)_updateViewAndPositionItems:(BOOL)arg1;
- (void)_updateViewBadge;
- (SEL)action;
- (BOOL)animatedBadge;
- (id)badgeColor;
- (id)badgeTextAttributesForState:(unsigned int)arg1;
- (id)badgeValue;
- (void)encodeWithCoder:(id)arg1;
- (id)finishedSelectedImage;
- (id)finishedUnselectedImage;
- (BOOL)hasTitle;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTabBarSystemItem:(int)arg1 tag:(int)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(int)arg3;
- (BOOL)isEnabled;
- (BOOL)isSystemItem;
- (id)resolvedTitle;
- (id)selectedImage;
- (void)setAction:(SEL)arg1;
- (void)setAnimatedBadge:(BOOL)arg1;
- (void)setBadgeColor:(id)arg1;
- (void)setBadgeTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setBadgeValue:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setUnselectedImage:(id)arg1;
- (void)setView:(id)arg1;
- (int)systemItem;
- (id)target;
- (id)title;
- (struct UIOffset { float x1; float x2; })titlePositionAdjustment;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (id)unselectedImage;
- (id)view;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;

@end
