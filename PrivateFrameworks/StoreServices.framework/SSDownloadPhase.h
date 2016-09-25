/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadPhase : NSObject <NSCopying, SSXPCCoding> {
    SSOperationProgress * _operationProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double estimatedSecondsRemaining;
@property (readonly) unsigned int hash;
@property (readonly) SSOperationProgress *operationProgress;
@property (readonly) int phaseType;
@property (readonly) float progressChangeRate;
@property (readonly) int progressUnits;
@property (readonly) long long progressValue;
@property (readonly) Class superclass;
@property (readonly) long long totalProgressValue;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (double)estimatedSecondsRemaining;
- (id)init;
- (id)initWithOperationProgress:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)operationProgress;
- (int)phaseType;
- (float)progressChangeRate;
- (int)progressUnits;
- (long long)progressValue;
- (long long)totalProgressValue;

@end
