/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell {
    UIButton * _button;
    float  _rightMargin;
    BOOL  _rightMarginAdjusted;
    SEL  _tapAction;
    id  _tapTarget;
}

@property (readonly) UIButton *button;
@property (readonly) UILabel *label;
@property (nonatomic) float rightMargin;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int textAlignment;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (float)rightMargin;
- (void)setRightMargin:(float)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (id)text;
- (int)textAlignment;
- (void)tintColorDidChange;

@end
