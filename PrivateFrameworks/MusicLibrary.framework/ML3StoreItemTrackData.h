/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3StoreItemTrackData : NSObject {
    NSArray * _lookupItems;
    NSArray * _parsedStoreItemsImportProperties;
    NSArray * _storeItems;
    NSDateFormatter * _storePlatformDateFormatter;
    NSData * _trackData;
}

@property (nonatomic, readonly) NSArray *parsedStoreItemsImportProperties;
@property (nonatomic, readonly) unsigned int trackCount;
@property (nonatomic, readonly) NSData *trackData;

+ (id)_allSongItemsFromCollectionLookupItem:(id)arg1;
+ (id)_allSongItemsFromLookupItems:(id)arg1;
+ (id)_artworkTokenForItemWithCollectionID:(unsigned long long)arg1 itemID:(unsigned long long)arg2;
+ (id)_artworkTokenFromLookupItem:(id)arg1;
+ (id)_artworkTokenFromStoreItem:(id)arg1;
+ (unsigned long)_mediaTypeForStoreItemKind:(id)arg1;
+ (double)_songDurationFromOffersArray:(id)arg1;

- (void).cxx_destruct;
- (id)_importDictionaryForLookupItem:(id)arg1 parentCollectionCache:(id)arg2;
- (id)_importDictionaryForStoreItem:(id)arg1;
- (id)_parentDictForItemAlbumId:(id)arg1;
- (id)_storeItemsImportPropertiesFromLookupItems:(id)arg1;
- (id)_storeItemsImportPropertiesFromStoreItems:(id)arg1;
- (id)_storeItemsImportPropertiesFromTrackData:(id)arg1;
- (id)_storePlatformDateFormatter;
- (id)initWithLookupItems:(id)arg1;
- (id)initWithStoreItems:(id)arg1;
- (id)initWithTrackData:(id)arg1;
- (id)parsedStoreItemsImportProperties;
- (unsigned int)trackCount;
- (id)trackData;

@end
