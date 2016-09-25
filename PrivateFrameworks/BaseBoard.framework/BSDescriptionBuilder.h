/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSDescriptionBuilder : NSObject {
    int  _activeComponent;
    NSString * _activePrefix;
    NSMutableString * _description;
    <NSObject> * _object;
    NSMutableString * _proem;
    BOOL  _useDebugDescription;
}

@property (nonatomic) int activeComponent;
@property (nonatomic, retain) NSString *activeMultilinePrefix;
@property (nonatomic) BOOL useDebugDescription;

+ (id)builderWithObject:(id)arg1;
+ (id)componentSeparator;
+ (id)descriptionForObject:(id)arg1;
+ (id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2;
+ (id)nameObjectSeparator;
+ (id)succinctDescriptionForObject:(id)arg1;

- (id)_activeComponentString;
- (int)activeComponent;
- (id)activeMultilinePrefix;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(id /* block */)arg5;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 objectTransformer:(id /* block */)arg4;
- (void)appendBodySectionWithName:(id)arg1 multilinePrefix:(id)arg2 block:(id /* block */)arg3;
- (id)appendBool:(BOOL)arg1 withName:(id)arg2;
- (id)appendBool:(BOOL)arg1 withName:(id)arg2 ifEqualTo:(BOOL)arg3;
- (id)appendCString:(const char *)arg1 withName:(id)arg2;
- (id)appendClass:(Class)arg1 withName:(id)arg2;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(id /* block */)arg5;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3;
- (id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned int)arg3;
- (id)appendFlag:(int)arg1 withName:(id)arg2;
- (id)appendFlag:(int)arg1 withName:(id)arg2 skipIfNotSet:(BOOL)arg3;
- (id)appendFloat:(float)arg1 withName:(id)arg2;
- (id)appendFloat:(float)arg1 withName:(id)arg2 decimalPrecision:(unsigned int)arg3;
- (id)appendFormat:(id)arg1;
- (id)appendInt64:(long long)arg1 withName:(id)arg2;
- (id)appendInt:(int)arg1 withName:(id)arg2;
- (id)appendInteger:(int)arg1 withName:(id)arg2;
- (id)appendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(BOOL)arg3;
- (id)appendObjectsAndNames:(id)arg1;
- (id)appendObjectsAndNames:(id)arg1 args:(void*)arg2;
- (id)appendPoint:(struct CGPoint { float x1; float x2; })arg1 withName:(id)arg2;
- (id)appendPointer:(void*)arg1 withName:(id)arg2;
- (id)appendQueue:(id)arg1 withName:(id)arg2;
- (id)appendRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withName:(id)arg2;
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;
- (id)appendSize:(struct CGSize { float x1; float x2; })arg1 withName:(id)arg2;
- (id)appendString:(id)arg1;
- (void)appendString:(id)arg1 withName:(id)arg2;
- (void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3;
- (id)appendSuper;
- (id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(BOOL)arg3;
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2;
- (id)appendUnsignedInt:(unsigned int)arg1 withName:(id)arg2;
- (id)appendUnsignedInteger:(unsigned int)arg1 withName:(id)arg2;
- (id)build;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)modifyBody:(id /* block */)arg1;
- (id)modifyProem:(id /* block */)arg1;
- (void)setActiveComponent:(int)arg1;
- (void)setActiveMultilinePrefix:(id)arg1;
- (void)setUseDebugDescription:(BOOL)arg1;
- (void)tryAppendKey:(id)arg1;
- (BOOL)useDebugDescription;

@end
