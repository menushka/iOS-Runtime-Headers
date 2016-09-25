/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTableHeaderView : UIView {
    UIColor * _bottomBorderColor;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    int  _index;
    int  _style;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIColor *bottomBorderColor;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic) int index;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) int style;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;

- (id)bottomBorderColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (int)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBottomBorderColor:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setIndex:(int)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (id)shadowColor;
- (void)sizeToFit;
- (int)style;
- (id)subtitle;
- (id)subtitleFont;
- (id)textColor;
- (id)title;
- (id)titleFont;

@end
