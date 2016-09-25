/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshot : NSObject {
    UIImage * _image;
    VKMapSnapshot * _snapshot;
}

@property (nonatomic, readonly) UIImage *image;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })_coordinateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_hasNoDataPlaceholders;
- (id)_initWithSnapshot:(id)arg1 desiredScale:(float)arg2;
- (id)image;
- (struct CGPoint { float x1; float x2; })pointForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (id)snapshotWithAnnotationView:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;

@end
