/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement <NSSecureCoding> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _chromeBuffer;
    struct CGPoint { 
        float x; 
        float y; 
    }  _normalizedOffset;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } chromeBuffer;
@property (nonatomic) struct CGPoint { float x1; float x2; } normalizedOffset;

+ (id)infoWithPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)placementWithUndockedOffset:(struct CGPoint { float x1; float x2; })arg1 chromeBuffer:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
+ (BOOL)supportsSecureCoding;

- (Class)applicatorClassForKeyboard:(BOOL)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })chromeBuffer;
- (void)encodeWithCoder:(id)arg1;
- (float)heightOfInputViews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)inputViewWillAppear;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUndocked;
- (struct CGPoint { float x1; float x2; })normalizedOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(BOOL)arg2;
- (void)setChromeBuffer:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setNormalizedOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end
