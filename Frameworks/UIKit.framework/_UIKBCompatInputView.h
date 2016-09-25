/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKBCompatInputView : UIView {
    UIView * _snapshotView;
}

@property (nonatomic, retain) UIView *snapshotView;
@property (nonatomic, readonly) UIView *touchableView;

+ (BOOL)_retroactivelyRequiresConstraintBasedLayout;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_compatibleBounds;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (BOOL)_hasAutolayoutHeightConstraint;
- (void)addSubview:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSnapshotView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)snapshotView;
- (id)touchableView;

@end
