/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAAggregatedInstruction : PACountedFrame {
    NSUUID * _binaryUuid;
    NSMutableSet * _children;
    unsigned long long  _offsetInBinary;
}

@property (readonly) NSUUID *binaryUuid;
@property (retain) NSMutableSet *children;
@property (readonly) BOOL isKernel;
@property (readonly) unsigned long long offsetInBinary;

- (void).cxx_destruct;
- (id)binaryUuid;
- (id)children;
- (int)compare:(id)arg1;
- (unsigned int)hash;
- (id)initWithUUID:(id)arg1 andOffset:(unsigned long long)arg2 isKernel:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKernel;
- (unsigned long long)offsetInBinary;
- (void)setChildren:(id)arg1;

@end
