/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKLabelContainerView : UIView {
    UILabel * _label;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _labelPaddingInsets;
}

@property (nonatomic, retain) UIFont *labelFont;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } labelPaddingInsets;
@property (nonatomic, retain) UIColor *labelShadowColor;
@property (nonatomic) struct UIOffset { float x1; float x2; } labelShadowOffset;
@property (nonatomic, copy) NSString *labelText;
@property (nonatomic, retain) UIColor *labelTextColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)labelFont;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })labelPaddingInsets;
- (id)labelShadowColor;
- (struct UIOffset { float x1; float x2; })labelShadowOffset;
- (id)labelText;
- (id)labelTextColor;
- (void)layoutSubviews;
- (void)setLabelFont:(id)arg1;
- (void)setLabelPaddingInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLabelShadowColor:(id)arg1;
- (void)setLabelShadowOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setLabelText:(id)arg1;
- (void)setLabelTextColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
