/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARLanguageModel : NSObject {
    struct vector<std::__1::pair<id<_EARLanguageModelDataSource>, float>, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float> > > { 
        struct pair<id<_EARLanguageModelDataSource>, float> {} *__begin_; 
        struct pair<id<_EARLanguageModelDataSource>, float> {} *__end_; 
        struct __compressed_pair<std::__1::pair<id<_EARLanguageModelDataSource>, float> *, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float> > > { 
            struct pair<id<_EARLanguageModelDataSource>, float> {} *__first_; 
        } __end_cap_; 
    }  _dataSources;
    float  _totalWeight;
}

@property (nonatomic, readonly) float totalWeight;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDataSource:(id)arg1 weight:(float)arg2;
- (void)enumerateDataSourcesAndWeightsUsingBlock:(id /* block */)arg1;
- (float)totalWeight;

@end
