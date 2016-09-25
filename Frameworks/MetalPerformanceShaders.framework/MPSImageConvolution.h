/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImageConvolution : MPSUnaryImageKernel {
    float  _fBias;
    unsigned int  _fHeight;
    unsigned int  _fWidth;
    bool  separable;
    unsigned int  specialFilterType;
    float * wtArray;
    unsigned short * wtArrayh;
    <MTLBuffer> * wtBuffer;
    <MTLBuffer> * wtBufferh;
}

@property (nonatomic) float bias;
@property (nonatomic, readonly) unsigned int kernelHeight;
@property (nonatomic, readonly) unsigned int kernelWidth;

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSKernelInfo {} *x4; struct MPSKernelInfo {} *x5; struct MPSKernelInfo {} *x6; struct MPSKernelInfo {} *x7; struct MPSKernelInfo {} *x8; struct MPSKernelInfo {} *x9; struct MPSKernelInfo {} *x10; struct MPSKernelInfo {} *x11; struct MPSKernelInfo {} *x12; struct MPSKernelInfo {} *x13; struct MPSKernelInfo {} *x14; }*)libraryInfo;

- (float)bias;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned int)arg2 kernelHeight:(unsigned int)arg3 weights:(const float*)arg4;
- (id)initWithDevice_private:(id)arg1;
- (unsigned int)kernelHeight;
- (unsigned int)kernelWidth;
- (void)setBias:(float)arg1;
- (struct MPSRegion { struct MPSOrigin { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct MPSSize { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })sourceRegionForDestinationSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;

@end
