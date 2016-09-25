/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagRecordSource : FCRecordSource {
    unsigned int  _desiredFieldOptions;
    NSArray * _genericKeys;
}

@property (nonatomic) unsigned int desiredFieldOptions;

+ (unsigned int)defaultFetchOperationCachePolicy;
+ (double)defaultFetchOperationMaximumCachedAge;
+ (unsigned long long)highThresholdDataSizeLimit;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (id)recordType;
+ (id)storeFilename;
+ (unsigned int)storeVersion;

- (void).cxx_destruct;
- (unsigned int)desiredFieldOptions;
- (id)desiredKeys;
- (id)genericKeys;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredTagRecordFieldOptions:(unsigned int)arg3;
- (id)localizableKeys;
- (id)localizedKeysByOriginalKey;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)saveTagRecords:(id)arg1;
- (void)setDesiredFieldOptions:(unsigned int)arg1;

@end
