/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRQueryItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appLibraryID;
    NSMutableDictionary * _attrs;
    NSNumber * _btime;
    unsigned short  _diffs;
    BRFileObjectID * _fileObjectID;
    union { 
        struct { 
            unsigned int downloadStatus : 2; 
            unsigned int uploadStatus : 2; 
            unsigned int itemStatus : 2; 
            unsigned int conflicted : 1; 
            unsigned int preCrashMarker : 1; 
            unsigned int isUploadActive : 1; 
            unsigned int isDownloadActive : 1; 
            unsigned int isDownloadRequested : 1; 
            unsigned int shareOptions : 3; 
            unsigned int isHiddenExt : 1; 
            unsigned int isBRAlias : 1; 
            unsigned char BRQueryItemKind; 
            unsigned char kind; 
        } ; 
        unsigned long long value; 
    }  _flags;
    BOOL  _isNetworkOffline;
    NSURL * _localRepresentationURL;
    long long  _logicalHandle;
    NSString * _logicalName;
    NSNumber * _mtime;
    unsigned long long  _parentFileID;
    NSString * _parentPath;
    long long  _physicalHandle;
    NSString * _physicalName;
    id  _replacement;
    NSNumber * _size;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *appLibraryID;
@property (nonatomic, readonly) NSDate *birthDate;
@property (nonatomic, readonly) NSNumber *btime;
@property (nonatomic, readonly) unsigned short diffs;
@property (nonatomic, readonly) unsigned int downloadStatus;
@property (nonatomic, readonly) BRFileObjectID *fileObjectID;
@property (nonatomic, readonly) BOOL isBRAlias;
@property (nonatomic, readonly) BOOL isConflicted;
@property (nonatomic, readonly) BOOL isDead;
@property (nonatomic, readonly) BOOL isDirectory;
@property (nonatomic, readonly) BOOL isDocument;
@property (nonatomic, readonly) BOOL isDownloadActive;
@property (nonatomic, readonly) BOOL isDownloadRequested;
@property (nonatomic, readonly) BOOL isFinderBookmark;
@property (nonatomic, readonly) BOOL isInTransfer;
@property (nonatomic, readonly) BOOL isLive;
@property (nonatomic) BOOL isNetworkOffline;
@property (nonatomic) BOOL isPreCrash;
@property (nonatomic, readonly) BOOL isSymlink;
@property (nonatomic, readonly) BOOL isUploadActive;
@property (nonatomic, readonly) NSURL *localRepresentationURL;
@property (nonatomic, readonly) NSString *logicalName;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSNumber *mtime;
@property (nonatomic, readonly) NSString *parentPath;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *physicalName;
@property (nonatomic) id replacement;
@property (nonatomic, readonly) unsigned int shareOptions;
@property (nonatomic, readonly) NSNumber *size;
@property (nonatomic, readonly) unsigned int uploadStatus;
@property (nonatomic, readonly) NSURL *url;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)askDaemonQueryItemForURL:(id)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_mergeAttrs:(id)arg1;
- (void)_mergeURL:(id)arg1;
- (id)appLibraryID;
- (void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)attributeNames;
- (id)attributesForNames:(id)arg1;
- (id)birthDate;
- (id)btime;
- (BOOL)canMerge:(id)arg1;
- (void)clearDiffs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned short)diffs;
- (unsigned int)downloadStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)fileObjectID;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryItem:(id)arg1;
- (BOOL)isBRAlias;
- (BOOL)isConflicted;
- (BOOL)isDead;
- (BOOL)isDirectory;
- (BOOL)isDocument;
- (BOOL)isDownloadActive;
- (BOOL)isDownloadRequested;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToQueryItem:(id)arg1;
- (BOOL)isFinderBookmark;
- (BOOL)isHiddenExt;
- (BOOL)isInTransfer;
- (BOOL)isLive;
- (BOOL)isNetworkOffline;
- (BOOL)isPreCrash;
- (BOOL)isShared;
- (BOOL)isSymlink;
- (BOOL)isUploadActive;
- (id)localRepresentationURL;
- (id)logicalName;
- (void)markDead;
- (void)merge:(id)arg1;
- (void)mergeProgressUpdate:(id)arg1;
- (id)modificationDate;
- (id)mtime;
- (id)parentFileID;
- (id)parentPath;
- (id)path;
- (id)physicalName;
- (id)replacement;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setIsNetworkOffline:(BOOL)arg1;
- (void)setIsPreCrash:(BOOL)arg1;
- (void)setReplacement:(id)arg1;
- (unsigned int)shareOptions;
- (id)sharedItemRole;
- (id)size;
- (id)subclassDescription;
- (unsigned int)uploadStatus;
- (id)url;
- (id)valueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)initWithRelPath:(id)arg1 error:(id*)arg2;

@end
