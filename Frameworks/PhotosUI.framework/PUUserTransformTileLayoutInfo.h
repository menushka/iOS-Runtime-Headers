/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUserTransformTileLayoutInfo : PUTileLayoutInfo {
    PUDisplayTileTransform * _displayTileTransform;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _untransformedContentFrame;
}

@property (nonatomic, readonly) PUDisplayTileTransform *displayTileTransform;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } untransformedContentFrame;

- (void).cxx_destruct;
- (id)clone;
- (id)description;
- (id)displayTileTransform;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { float x1; float x2; })arg2 size:(struct CGSize { float x1; float x2; })arg3 alpha:(float)arg4 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 zPosition:(float)arg6 coordinateSystem:(id)arg7;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint { float x1; float x2; })arg2 size:(struct CGSize { float x1; float x2; })arg3 alpha:(float)arg4 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 zPosition:(float)arg6 coordinateSystem:(id)arg7 untransformedContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg8 displayTileTransform:(id)arg9;
- (BOOL)isGeometryEqualToLayoutInfo:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })untransformedContentFrame;

@end
