/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIContentConstraintsLayoutGuide : UILayoutGuide {
    NSLayoutConstraint * _bottomConstraint;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _edgeInsets;
    NSLayoutConstraint * _leadingConstraint;
    NSLayoutConstraint * _maximumHeightConstraint;
    struct CGSize { 
        float width; 
        float height; 
    }  _maximumSize;
    NSLayoutConstraint * _maximumWidthConstraint;
    NSLayoutConstraint * _minimumHeightConstraint;
    struct CGSize { 
        float width; 
        float height; 
    }  _minimumSize;
    NSLayoutConstraint * _minimumWidthConstraint;
    NSLayoutConstraint * _topConstraint;
    NSLayoutConstraint * _trailingConstraint;
    BOOL  _wantsMaximumSizeConstraintsActive;
    BOOL  _wantsMinimumSizeConstraintsActive;
}

@property (nonatomic, readonly) NSLayoutConstraint *bottomConstraint;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic, readonly) NSLayoutConstraint *leadingConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *maximumHeightConstraint;
@property (nonatomic) struct CGSize { float x1; float x2; } maximumSize;
@property (nonatomic, readonly) NSLayoutConstraint *maximumWidthConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic) struct CGSize { float x1; float x2; } minimumSize;
@property (nonatomic, readonly) NSLayoutConstraint *minimumWidthConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *topConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *trailingConstraint;
@property (nonatomic, readonly) BOOL wantsMaximumSizeConstraintsActive;
@property (nonatomic, readonly) BOOL wantsMinimumSizeConstraintsActive;

- (void).cxx_destruct;
- (id)_allMarginConstraints;
- (id)_allSizeConstraints;
- (void)_clearConstraints;
- (void)_setAllMarginConstraintsActive:(BOOL)arg1;
- (void)_setAllSizeConstraintsActive:(BOOL)arg1;
- (void)_updateAllMarginConstraintConstants;
- (void)_updateAllSizeConstraints;
- (id)bottomConstraint;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)init;
- (id)leadingConstraint;
- (id)maximumHeightConstraint;
- (struct CGSize { float x1; float x2; })maximumSize;
- (id)maximumWidthConstraint;
- (id)minimumHeightConstraint;
- (struct CGSize { float x1; float x2; })minimumSize;
- (id)minimumWidthConstraint;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMaximumSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMinimumSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setOwningView:(id)arg1;
- (id)topConstraint;
- (id)trailingConstraint;
- (BOOL)wantsMaximumSizeConstraintsActive;
- (BOOL)wantsMinimumSizeConstraintsActive;

@end
