/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIMapDetailsContainerView : UIView {
    BOOL  _autoCenteringDisabled;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _backgroundInsets;
    UIView * _detailsView;
    UIView * _mapView;
}

@property (nonatomic) BOOL autoCenteringDisabled;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } backgroundInsets;
@property (nonatomic, retain) UIView *detailsView;
@property (nonatomic, retain) UIView *mapView;

- (void).cxx_destruct;
- (BOOL)autoCenteringDisabled;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundInsets;
- (id)detailsView;
- (void)layoutSubviews;
- (id)mapView;
- (void)setAutoCenteringDisabled:(BOOL)arg1;
- (void)setBackgroundInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDetailsView:(id)arg1;
- (void)setMapView:(id)arg1;

@end
