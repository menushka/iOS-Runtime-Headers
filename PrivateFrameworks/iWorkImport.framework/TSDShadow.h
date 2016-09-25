/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShadow : NSObject <NSCopying, NSMutableCopying, TSDMixing, TSSPreset, TSSPresetSource> {
    float  mAngle;
    TSUColor * mColor;
    BOOL  mEnabled;
    float  mOffset;
    float  mOpacity;
    float  mRadius;
}

@property (nonatomic, readonly) float angle;
@property (nonatomic, readonly, copy) TSUColor *color;
@property (getter=isEnabled, nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) float offset;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } offsetDelta;
@property (nonatomic, readonly) float opacity;
@property (nonatomic, readonly) NSString *presetKind;
@property (nonatomic, readonly) float radius;

+ (BOOL)automaticallyNotifiesObserversOfTSUColor;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (BOOL)canMixWithNilObjects;
+ (id)contactShadowWithAngle:(float)arg1 offset:(float)arg2 radius:(float)arg3 height:(float)arg4 opacity:(float)arg5 color:(id)arg6 enabled:(BOOL)arg7;
+ (id)curvedShadowWithOffset:(float)arg1 angle:(float)arg2 radius:(float)arg3 curve:(float)arg4 opacity:(float)arg5 color:(id)arg6 enabled:(BOOL)arg7;
+ (id)defaultDisabledShadow;
+ (id)defaultShadow;
+ (id)instanceWithArchive:(const struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; float x7; int x8; float x9; bool x10; int x11; struct DropShadowArchive {} *x12; struct ContactShadowArchive {} *x13; struct CurvedShadowArchive {} *x14; }*)arg1 unarchiver:(id)arg2;
+ (id)keyPathsForValuesAffectingTSUColor;
+ (id)mixableObjectClasses;
+ (id)p_defaultShadowEnabled:(BOOL)arg1;
+ (id)presetKinds;
+ (id)shadowWithAngle:(float)arg1 offset:(float)arg2 radius:(float)arg3 opacity:(float)arg4 color:(id)arg5 enabled:(BOOL)arg6;
+ (id)shadowWithNSShadow:(id)arg1;

- (id)NSShadow;
- (float)angle;
- (void)applyToContext:(struct CGContext { }*)arg1 viewScale:(float)arg2;
- (void)applyToContext:(struct CGContext { }*)arg1 viewScale:(float)arg2 flipped:(BOOL)arg3;
- (void)applyToContext:(struct CGContext { }*)arg1 viewScale:(float)arg2 flipped:(BOOL)arg3 extraOffset:(struct CGSize { float x1; float x2; })arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForRep:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInNaturalSpaceForRep:(id)arg1;
- (float)clampOffset:(float)arg1;
- (float)clampOpacity:(float)arg1;
- (float)clampRadius:(float)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)differenceRequiresRebuilding:(id)arg1;
- (unsigned int)hash;
- (id)i_initWithOpacity:(float)arg1 color:(id)arg2 enabled:(BOOL)arg3;
- (struct CGImage { }*)i_newEmptyImage;
- (id)initWithArchive:(const struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; float x7; int x8; float x9; bool x10; int x11; struct DropShadowArchive {} *x12; struct ContactShadowArchive {} *x13; struct CurvedShadowArchive {} *x14; }*)arg1 unarchiver:(id)arg2;
- (BOOL)isContactShadow;
- (BOOL)isCurvedShadow;
- (BOOL)isDropShadow;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (id)mixedBaseObjectWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newShadowClampedForSwatches;
- (struct CGImage { }*)newShadowImageForRep:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (float)offset;
- (struct CGPoint { float x1; float x2; })offsetDelta;
- (float)opacity;
- (id)presetKind;
- (float)radius;
- (void)saveToArchive:(struct ShadowArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; float x6; float x7; int x8; float x9; bool x10; int x11; struct DropShadowArchive {} *x12; struct ContactShadowArchive {} *x13; struct CurvedShadowArchive {} *x14; }*)arg1 archiver:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shadowBoundsForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shadowBoundsForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 additionalAngle:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shadowBoundsForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 additionalTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (id)shadowByTransformingByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (unsigned int)shadowType;
- (BOOL)showForEditingText;
- (id)typeDescription;
- (BOOL)usesOpenGL;

@end
