/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryDigitalFaceView : NTKFaceView {
    UIColor * _complicationForegroundColor;
    float  _currentLogoPlatterXOffset;
    struct CGPoint { 
        float x; 
        float y; 
    }  _logoPlatterCenter;
    NTKComplicationDisplayWrapperView * _logoWrapperView;
    NTKUtilityComplicationFactory * _utilityComplicationFactory;
}

+ (id)_swatchForEditModeDependsOnOptions:(int)arg1;
+ (id)_swatchImageForColorOption:(id)arg1;
+ (id)_swatchImageForEditOption:(id)arg1 mode:(int)arg2 withSelectedOptions:(id)arg3;

- (void).cxx_destruct;
- (void)_applyColor:(id)arg1 toComplicationView:(id)arg2;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (float)_bottomComplicationAlphaForEditMode:(int)arg1;
- (void)_cleanupAfterEditing;
- (float)_complicationAlphaForEditMode:(int)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (float)_keylineEdgeGapForState:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(int)arg1 slot:(id)arg2;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (float)_keylinePaddingForState:(int)arg1;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (float)_logoPlatterAlphaForEditMode:(int)arg1;
- (float)_logoPlatterXOffsetForEditMode:(int)arg1;
- (void)_logoTapped;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)_positionLogoPlatterView;
- (void)_prepareForEditing;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (void)_setupLogoViews;
- (BOOL)_supportsTimeScrubbing;
- (float)_timeAlphaForEditMode:(int)arg1;
- (float)_timeTravelStatusModuleCaptionConstraintPadding;
- (void)_unloadSnapshotContentViews;
- (int)_utilitySlotForSlot:(id)arg1;
- (float)_verticalPaddingForStatusBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
