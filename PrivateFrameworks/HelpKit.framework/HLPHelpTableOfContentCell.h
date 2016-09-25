/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpTableOfContentCell : UITableViewCell {
    BOOL  _RTL;
    UIImageView * _arrowImageView;
    NSLayoutConstraint * _arrowImageViewLeadingConstraint;
    NSLayoutConstraint * _arrowImageViewWidthConstraint;
    BOOL  _closed;
    HLPHelpItem * _helpItem;
    float  _minNameLabelHeight;
    UILabel * _nameLabel;
    NSLayoutConstraint * _nameLabelMinHeightConstraint;
    NSLayoutConstraint * _sectionImageLeadingConstraint;
    HLPURLSession * _sectionImageURLSession;
    UIImageView * _sectionImageView;
    NSLayoutConstraint * _sectionImageWidthConstraint;
    BOOL  _showFirstLevelIcon;
}

@property (nonatomic) BOOL RTL;
@property (nonatomic, retain) UIImageView *arrowImageView;
@property (nonatomic) BOOL closed;
@property (nonatomic, retain) HLPHelpItem *helpItem;
@property (nonatomic) float minNameLabelHeight;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UIImageView *sectionImageView;
@property (nonatomic) BOOL showFirstLevelIcon;

- (void).cxx_destruct;
- (BOOL)RTL;
- (id)accessibilityLabel;
- (id)arrowImageView;
- (BOOL)closed;
- (void)dealloc;
- (id)helpItem;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (float)minNameLabelHeight;
- (id)nameLabel;
- (void)prepareForReuse;
- (id)sectionImageView;
- (void)setArrowImageView:(id)arg1;
- (void)setClosed:(BOOL)arg1;
- (void)setHelpItem:(id)arg1;
- (void)setMinNameLabelHeight:(float)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setRTL:(BOOL)arg1;
- (void)setSectionImageView:(id)arg1;
- (void)setShowFirstLevelIcon:(BOOL)arg1;
- (BOOL)showFirstLevelIcon;
- (void)toggle;
- (void)updateConstraints;
- (void)updateFonts;
- (void)updateToggleImageAnimated:(BOOL)arg1;

@end
