/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIComposeReviewHeaderView : UIView <SKUIComposeTextFieldListViewDelegate> {
    <SKUIComposeReviewHeaderDelegate> * _delegate;
    SKStarRatingControl * _ratingControl;
    SKUIReviewMetadata * _review;
    BOOL  _showNicknameField;
    int  _style;
    SKUIComposeTextFieldListView * _textFieldListView;
}

@property (nonatomic, readonly) int composeReviewStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIComposeReviewHeaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIResponder *initialFirstResponder;
@property (nonatomic, readonly) NSString *nickname;
@property (nonatomic) float rating;
@property (nonatomic, retain) SKUIReviewMetadata *review;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (int)composeReviewStyle;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initialFirstResponder;
- (void)layoutSubviews;
- (id)nickname;
- (int)numberOfColumnsInTextFieldList:(id)arg1;
- (int)numberOfFieldsInTextFieldList:(id)arg1;
- (float)rating;
- (id)review;
- (void)setDelegate:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setReview:(id)arg1;
- (void)sizeToFit;
- (id)textFieldList:(id)arg1 configurationForFieldAtIndex:(unsigned int)arg2;
- (void)textFieldListValidityDidChange:(id)arg1;
- (void)textFieldListValuesDidChange:(id)arg1;
- (id)title;

@end
