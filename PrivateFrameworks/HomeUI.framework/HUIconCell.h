/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUIconCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {
    UIView * _containerView;
    BOOL  _disabled;
    NSArray * _dynamicConstraints;
    BOOL  _hideIcon;
    float  _iconAlpha;
    UIView * _iconContainerView;
    unsigned int  _iconDisplayStyle;
    UIColor * _iconForegroundColor;
    BOOL  _iconForegroundColorFollowsTintColor;
    struct CGSize { 
        float width; 
        float height; 
    }  _iconSize;
    HUIconView * _iconView;
    HFItem * _item;
}

@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (getter=isDisabled, nonatomic) BOOL disabled;
@property (nonatomic, retain) NSArray *dynamicConstraints;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hideIcon;
@property (nonatomic) float iconAlpha;
@property (nonatomic, retain) UIView *iconContainerView;
@property (nonatomic) unsigned int iconDisplayStyle;
@property (nonatomic, retain) UIColor *iconForegroundColor;
@property (nonatomic) BOOL iconForegroundColorFollowsTintColor;
@property (nonatomic) struct CGSize { float x1; float x2; } iconSize;
@property (nonatomic, retain) HUIconView *iconView;
@property (nonatomic, retain) HFItem *item;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_createIconViews;
- (id)_immutableVerticalConstraintsForContentSubview:(id)arg1;
- (void)_updateIcon;
- (id)containerView;
- (id)dynamicConstraints;
- (BOOL)hideIcon;
- (float)iconAlpha;
- (id)iconContainerView;
- (unsigned int)iconDisplayStyle;
- (id)iconForegroundColor;
- (BOOL)iconForegroundColorFollowsTintColor;
- (struct CGSize { float x1; float x2; })iconSize;
- (id)iconView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isDisabled;
- (id)item;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setContainerView:(id)arg1;
- (void)setDisabled:(BOOL)arg1;
- (void)setDynamicConstraints:(id)arg1;
- (void)setHideIcon:(BOOL)arg1;
- (void)setIconAlpha:(float)arg1;
- (void)setIconContainerView:(id)arg1;
- (void)setIconDisplayStyle:(unsigned int)arg1;
- (void)setIconForegroundColor:(id)arg1;
- (void)setIconForegroundColorFollowsTintColor:(BOOL)arg1;
- (void)setIconSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setIconView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end
