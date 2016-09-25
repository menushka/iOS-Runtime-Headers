/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKKnowledgeStore : NSObject {
    void data;
    void delegate;
    void location;
    void name;
    void path;
}

@property (nonatomic, retain) <_TtP13CoreKnowledge24CKKnowledgeStoreDelegate_> *delegate;
@property (nonatomic, readonly) long hash;
@property (nonatomic, readonly) long hashValue;
@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *path;

+ (id)defaultKnowledgeStore;
+ (id)inMemoryKnowledgeStore;
+ (id)knowledgeStoreWithName:(id)arg1;
+ (id)userDefaultsKnowledgeStore;

- (id /* block */).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (BOOL)dropLinks:(id)arg1 error:(id*)arg2;
- (BOOL)dropLinksFrom:(id)arg1 to:(id)arg2 withPredicate:(id)arg3 ignoreWeights:(BOOL)arg4 error:(id*)arg5;
- (BOOL)dropLinksFrom:(id)arg1 withPredicate:(id)arg2 error:(id*)arg3;
- (id)entitiesAndReturnError:(id*)arg1;
- (id)entityWithIdentifier:(id)arg1;
- (BOOL)evaluateJSONLDEntryForEntity:(id)arg1 key:(id)arg2 value:(id)arg3 error:(id*)arg4;
- (long)hash;
- (long)hashValue;
- (BOOL)importJSONLDWithData:(id)arg1 error:(id*)arg2;
- (BOOL)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 error:(id*)arg4;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)keys;
- (id)linksWithBetween:(id)arg1 and:(id)arg2 error:(id*)arg3;
- (id)name;
- (void)objectForKeyedSubscript:;
- (id)path;
- (BOOL)removeEntity:(id)arg1 error:(id*)arg2;
- (/* Warning: Unrecognized filer type: 'G' using 'void*' */ void*)removeObjectForKey:(void *)arg1 error:(void *)arg2; // needs 2 arg types, found 1: /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*
- (void)setDelegate:(id)arg1;
- (void)setObject:forKeyedSubscript:;
- (id)subgraphWithEntities:(id)arg1;
- (id)triplesMatching:(id)arg1 error:(id*)arg2;
- (BOOL)wipeAndReturnError:(id*)arg1;
- (/* Warning: Unrecognized filer type: ' ' using 'void*' */ void*)writeBatch:(void *)arg1; // needs 1 arg types, found 107: long long, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: '?' using 'void*' */ void*, long long, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '`' using 'void*' */ void*, unsigned long long, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, SEL, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: '?' using 'void*' */ void*, long long, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: '&' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: '?' using 'void*' */ void*, long long, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, long double, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'z' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'Y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '`' using 'void*' */ void*, unsigned long long, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*

@end
