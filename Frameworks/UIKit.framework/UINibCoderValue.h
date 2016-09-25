/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibCoderValue : NSObject {
    NSString * key;
    unsigned long  length;
    unsigned int  scope;
    BOOL  type;
    union { 
        float floatValue; 
        double doubleValue; 
        unsigned long long integerValue; 
        void *bytesValue; 
    }  value;
}

+ (id)nibValueForBoolean:(BOOL)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForBytes:(const void*)arg1 length:(unsigned long)arg2 key:(id)arg3 scope:(unsigned int)arg4;
+ (id)nibValueForDouble:(double)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForFloat:(float)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForInt16:(unsigned short)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForInt32:(unsigned int)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForInt64:(unsigned long long)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForInt8:(unsigned char)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForInteger:(unsigned long long)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueForObjectReference:(long long)arg1 key:(id)arg2 scope:(unsigned int)arg3;
+ (id)nibValueRepresentingNilReferenceForKey:(id)arg1 scope:(unsigned int)arg2;

- (unsigned long)byteLength;
- (void)dealloc;

@end
