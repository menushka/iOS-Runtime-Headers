/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridHeader : UIView {
    UIKBBackdropView * _backdropView;
    UILabel * _inlineTextLabel;
    float  _inlineTextRightMargin;
    UIButton * _toggleButton;
}

@property (nonatomic, retain) UIKBBackdropView *backdropView;
@property (nonatomic, copy) NSString *inlineText;
@property (nonatomic, retain) UILabel *inlineTextLabel;
@property (nonatomic) float inlineTextRightMargin;
@property (nonatomic, retain) UIButton *toggleButton;

- (id)backdropView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inlineText;
- (id)inlineTextLabel;
- (float)inlineTextRightMargin;
- (void)layoutSubviews;
- (void)setBackdropView:(id)arg1;
- (void)setInlineText:(id)arg1;
- (void)setInlineTextLabel:(id)arg1;
- (void)setInlineTextRightMargin:(float)arg1;
- (void)setToggleButton:(id)arg1;
- (id)toggleButton;

@end
