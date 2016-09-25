/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSEngineContext : NSObject {
    CKDMMCS * _MMCS;
    struct _mmcs_engine { } * _MMCSEngine;
    NSString * _applicationBundleID;
    NSMutableIndexSet * _inMemoryItemsIDs;
    unsigned long  _maxChunkCountForSection;
    NSString * _path;
    NSString * _protocolVersion;
    long  _refCount;
    NSRunLoop * _runLoop;
    NSString * _runLoopMode;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    int  _state;
    BOOL  _stopMMCSThread;
}

@property (nonatomic) CKDMMCS *MMCS;
@property (nonatomic) struct _mmcs_engine { }*MMCSEngine;
@property (nonatomic, retain) NSString *applicationBundleID;
@property (nonatomic, retain) NSMutableIndexSet *inMemoryItemsIDs;
@property (nonatomic) unsigned long maxChunkCountForSection;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSString *protocolVersion;
@property (nonatomic) long refCount;
@property (nonatomic, retain) NSRunLoop *runLoop;
@property (nonatomic, retain) NSString *runLoopMode;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) int state;
@property (nonatomic) BOOL stopMMCSThread;

+ (id)_appID;
+ (BOOL)hasCachedCKDMMCSEngineContextForPath:(id)arg1;
+ (id)setupMMCSEngineWithApplicationBundleID:(id)arg1 path:(id)arg2 wasCached:(BOOL*)arg3 error:(id*)arg4;
+ (id)sharedContextsByPath;
+ (id)sharedContextsQueue;
+ (void)tearDownMMCSEngineWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCS;
- (struct _mmcs_engine { }*)MMCSEngine;
- (void)_MMCSThread;
- (void)_MMCSTreadAbort;
- (BOOL)_setupMMCSEngineWithError:(id*)arg1;
- (BOOL)_setupMMCSEngineWithRetryCount:(unsigned int)arg1 error:(id*)arg2;
- (void)_tearDownMMCSEngine;
- (id)applicationBundleID;
- (void)cancelRequestWithContext:(void*)arg1;
- (void)dealloc;
- (long)decRefCount;
- (id)description;
- (id)inMemoryItemsIDs;
- (long)incRefCount;
- (id)initWithApplicationBundleID:(id)arg1 path:(id)arg2;
- (unsigned long)maxChunkCountForSection;
- (unsigned long long)nextAvailableItemID;
- (id)path;
- (void)performOnRunLoop:(id /* block */)arg1;
- (id)protocolVersion;
- (long)refCount;
- (id)runLoop;
- (id)runLoopMode;
- (id)semaphore;
- (void)setApplicationBundleID:(id)arg1;
- (void)setInMemoryItemsIDs:(id)arg1;
- (void)setMMCS:(id)arg1;
- (void)setMMCSEngine:(struct _mmcs_engine { }*)arg1;
- (void)setMaxChunkCountForSection:(unsigned long)arg1;
- (void)setPath:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setRefCount:(long)arg1;
- (void)setRunLoop:(id)arg1;
- (void)setRunLoopMode:(id)arg1;
- (void)setSemaphore:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStopMMCSThread:(BOOL)arg1;
- (int)state;
- (BOOL)stopMMCSThread;
- (void)stopTrackingItemID:(unsigned long long)arg1;

@end
