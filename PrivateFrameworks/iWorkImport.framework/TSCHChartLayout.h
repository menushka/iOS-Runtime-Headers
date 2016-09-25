/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartLayout : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _legendModelGeometryFrame;
    TSCHChartInfo * mChartInfo;
    struct { 
        BOOL forceOmitLegend; 
        BOOL forceOmitTitle; 
        BOOL forceOmitAxisTitle; 
        BOOL enable3DTightBounds; 
        BOOL enable3DScaledDepthBounds; 
        int maxDepthRatioType; 
        unsigned int max3DLimitingSeries; 
    }  mLayoutSettings;
    BOOL  mNeedsLayout;
}

@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } chartAreaFrame;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } chartBodyFrame;
@property (readonly) TSCHChartInfo *chartInfo;
@property unsigned int dataSetIndex;
@property struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; int x6; unsigned int x7; } layoutSettings;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } legendDrawingFrame;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } legendFrame;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } legendGeometryFrame;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } legendModelGeometryFrame;
@property (readonly) TSCHChartModel *model;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } outerLayoutFrame;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } outerShadowFrame;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } titleFrame;

+ (id)chartLayoutWithChartInfo:(id)arg1;
+ (struct CGSize { float x1; float x2; })legendSizeForChartInfo:(id)arg1 initialWidth:(float)arg2;
+ (id)propertiesThatInvalidateLayout;

- (void)beginDynamicOperation;
- (void)beginResize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForResize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chartAreaFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chartBodyFrame;
- (id)chartInfo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertChartLayoutSpaceRectToNaturalSpaceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertChartLayoutSpaceToNaturalSpace:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertNaturalSpaceRectToChartLayoutSpaceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertNaturalSpaceToChartLayoutSpace:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)dataSetIndex;
- (void)dealloc;
- (void)endDynamicOperation;
- (void)endResize;
- (id)hitChartElements:(struct CGPoint { float x1; float x2; })arg1 passingTest:(id /* block */)arg2;
- (id)initWithChartInfo:(id)arg1;
- (void)invalidate;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (BOOL)isValid;
- (void)layoutForChartAreaSize:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutForChartBodySize:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutForCircumscribingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutForResizingSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; int x6; unsigned int x7; })layoutSettings;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })legendDrawingFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })legendFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })legendGeometryFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })legendModelGeometryFrame;
- (id)model;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })outerLayoutFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })outerShadowFrame;
- (void)processChanges:(id)arg1;
- (id)renderersWithRep:(id)arg1;
- (void)setDataSetIndex:(unsigned int)arg1;
- (void)setForceOmitLegend:(BOOL)arg1;
- (void)setLayoutSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; int x6; unsigned int x7; })arg1;
- (void)setLegendGeometryFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLegendModelGeometryFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLegendSize:(struct CGSize { float x1; float x2; })arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (void)takeSizeFromTracker:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleFrame;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToConvertChartLayoutToNatural;

@end
