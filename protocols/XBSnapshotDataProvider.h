/* Generated by RuntimeBrowser.
 */

@protocol XBSnapshotDataProvider <NSObject>

@required

- (XBSnapshotDataProviderContext *)context;

@optional

- (UIImage *)fetchImage;
- (NSData *)fetchImageData:(out struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1;

@end
