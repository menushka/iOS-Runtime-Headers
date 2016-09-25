/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleHomeCollectionViewCell : UICollectionViewCell {
    UIView * _actionIndicatorView;
    UIImageView * _avatarView;
    UIImage * _image;
    BOOL  _isFavorite;
    BOOL  _isReordering;
    NSString * _name;
    UILabel * _nameLabel;
    unsigned int  _photoQuantity;
    UILabel * _quantityLabel;
    PXRoundedCornerOverlayView * _roundCornerOverlay;
    UIView * _selectionView;
    float  _textAlpha;
}

@property (getter=isActionIndicatorHidden, nonatomic) BOOL actionIndicatorHidden;
@property (nonatomic, retain) UIView *actionIndicatorView;
@property (nonatomic, readonly) UIImageView *avatarView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) BOOL isFavorite;
@property (setter=setReordering:, nonatomic) BOOL isReordering;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic) unsigned int photoQuantity;
@property (nonatomic, retain) UILabel *quantityLabel;
@property (nonatomic, retain) PXRoundedCornerOverlayView *roundCornerOverlay;
@property (nonatomic, retain) UIView *selectionView;
@property (nonatomic) float textAlpha;

+ (float)preferredHeightForWidth:(float)arg1 forAvatarPercentage:(float)arg2 withSizeClass:(int)arg3 isFavorite:(BOOL)arg4;

- (void).cxx_destruct;
- (int)_preferredSizeClass;
- (void)_updateType;
- (id)actionIndicatorView;
- (float)avatarCenterYOffset;
- (id)avatarView;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isActionIndicatorHidden;
- (BOOL)isFavorite;
- (BOOL)isReordering;
- (void)layoutSubviews;
- (id)name;
- (id)nameLabel;
- (unsigned int)photoQuantity;
- (void)prepareForReuse;
- (id)quantityLabel;
- (id)roundCornerOverlay;
- (id)selectionView;
- (void)setActionIndicatorHidden:(BOOL)arg1;
- (void)setActionIndicatorView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsFavorite:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPhotoQuantity:(unsigned int)arg1;
- (void)setQuantityLabel:(id)arg1;
- (void)setReordering:(BOOL)arg1;
- (void)setRoundCornerOverlay:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setTextAlpha:(float)arg1;
- (float)textAlpha;
- (void)traitCollectionDidChange:(id)arg1;

@end
