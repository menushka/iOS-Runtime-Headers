/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentSummaryCell : PKTableViewCell {
    UILabel * _amountLabel;
    <PKPassPaymentSummaryCellDelegate> * _delegate;
    UIButton * _detailsButton;
}

@property (nonatomic, retain) NSString *amountText;
@property (nonatomic) <PKPassPaymentSummaryCellDelegate> *delegate;
@property (nonatomic, retain) NSString *detailText;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *primaryText;
@property (nonatomic) int primaryTextNumberOfLines;
@property (nonatomic) BOOL showDetailsButton;

+ (id)_amountTextFont;
+ (id)_detailTextFont;
+ (id)_primaryTextFont;
+ (struct CGSize { float x1; float x2; })_sizeForLabelWithText:(id)arg1 font:(id)arg2 maximumNumberOfLines:(int)arg3 width:(float)arg4;
+ (float)heightWithPrimaryText:(id)arg1 primaryTextNumberOfLines:(int)arg2 detailText:(id)arg3 amountText:(id)arg4 image:(id)arg5 showDetailsButton:(BOOL)arg6 width:(float)arg7;

- (void).cxx_destruct;
- (void)_detailsButtonPressed:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_separatorFrame;
- (id)amountText;
- (void)dealloc;
- (id)delegate;
- (id)detailText;
- (id)image;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)primaryText;
- (int)primaryTextNumberOfLines;
- (void)setAmountText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setPrimaryTextNumberOfLines:(int)arg1;
- (void)setShowDetailsButton:(BOOL)arg1;
- (BOOL)showDetailsButton;

@end
