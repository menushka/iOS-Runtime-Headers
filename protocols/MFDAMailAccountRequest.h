/* Generated by RuntimeBrowser.
 */

@protocol MFDAMailAccountRequest

@required

- (MFOfflineCacheOperation<MFDAOfflineCacheOperation> *)deferredOperation;
- (unsigned long long)generationNumber;
- (BOOL)isUserRequested;
- (BOOL)shouldSend;

@end
