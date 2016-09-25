/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridCell : UICollectionViewCell <HUGridCellProtocol> {
    BOOL  _cellContentsHidden;
    UIVisualEffect * _contentEffect;
    HUGridCellBackgroundView * _gridBackgroundView;
    UIVisualEffectView * _gridForegroundView;
    HUGridCellLayoutOptions * _layoutOptions;
    int  _primaryState;
    BOOL  _rearranging;
}

@property (getter=areCellContentsHidden, nonatomic) BOOL cellContentsHidden;
@property (nonatomic, retain) UIVisualEffect *contentEffect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUGridCellBackgroundView *gridBackgroundView;
@property (nonatomic, readonly) UIView *gridForegroundContentView;
@property (nonatomic, retain) UIVisualEffectView *gridForegroundView;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HUGridCellLayoutOptions *layoutOptions;
@property (nonatomic) int primaryState;
@property (getter=isRearranging, nonatomic) BOOL rearranging;
@property (readonly) Class superclass;

+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimationWithAspectRatio:(float)arg1;
+ (Class)layoutOptionsClass;

- (void).cxx_destruct;
- (void)_setupCommonCellAppearance;
- (void)_updateForegroundStyle;
- (void)_updateTintColorSettingsForSubviewsOfView:(id)arg1 desiredDisplayStyle:(unsigned int)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (BOOL)areCellContentsHidden;
- (id)contentEffect;
- (void)contentEffectDidChange;
- (id)gridBackgroundView;
- (id)gridForegroundContentView;
- (id)gridForegroundView;
- (unsigned int)iconDisplayStyleForPrimaryState:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isRearranging;
- (id)item;
- (id)layoutOptions;
- (void)layoutOptionsDidChange;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (int)primaryState;
- (void)setCellContentsHidden:(BOOL)arg1;
- (void)setContentEffect:(id)arg1;
- (void)setGridBackgroundView:(id)arg1;
- (void)setGridForegroundView:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setPrimaryState:(int)arg1;
- (void)setRearranging:(BOOL)arg1;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)updateUIWithPrimaryState:(int)arg1 animate:(BOOL)arg2;

@end
