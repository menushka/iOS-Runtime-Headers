/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedInvitationCell : PUFeedCell {
    UIButton * __acceptButon;
    UIView * __bottomSeparatorView;
    UIButton * __declineButton;
    UILabel * __subtitleLabel;
    UILabel * __titleLabel;
    NSString * _subtitle;
    NSString * _title;
}

@property (setter=_setAcceptButton:, nonatomic, retain) UIButton *_acceptButon;
@property (setter=_setBottomSeparatorView:, nonatomic, retain) UIView *_bottomSeparatorView;
@property (setter=_setDeclineButton:, nonatomic, retain) UIButton *_declineButton;
@property (setter=_setSubtitleLabel:, nonatomic, retain) UILabel *_subtitleLabel;
@property (setter=_setTitleLabel:, nonatomic, retain) UILabel *_titleLabel;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_acceptButon;
- (id)_bottomSeparatorView;
- (id)_declineButton;
- (id)_delegate;
- (void)_replyButtonAction:(id)arg1;
- (void)_setAcceptButton:(id)arg1;
- (void)_setBottomSeparatorView:(id)arg1;
- (void)_setDeclineButton:(id)arg1;
- (void)_setSubtitleLabel:(id)arg1;
- (void)_setTitleLabel:(id)arg1;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)subtitle;
- (id)title;

@end
