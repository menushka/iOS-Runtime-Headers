/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKIconManager : NSObject

+ (id)_iconManager;
+ (id)imageForMapItem:(id)arg1 forScale:(float)arg2;
+ (id)imageForMapItem:(id)arg1 forScale:(float)arg2 fallbackToBundleIcon:(BOOL)arg3;
+ (id)imageForMapItem:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4;
+ (id)imageForMapItem:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4 fallbackToBundleIcon:(BOOL)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4;
+ (id)imageForStyle:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6;
+ (id)imageForStyle:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8;
+ (id)imageForStyle:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 interactive:(BOOL)arg9;
+ (id)imageForStyle:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 interactive:(BOOL)arg9 isCarplay:(BOOL)arg10;
+ (id)imageForStyle:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4 transparent:(BOOL)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6;
+ (id)imageForStyle:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 interactive:(BOOL)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned int)arg2 forScale:(float)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 isCarplay:(BOOL)arg7;
+ (id)imageForTrafficIncidentType:(int)arg1 size:(unsigned int)arg2 forScale:(float)arg3;
+ (struct CGColor { }*)newFillColorForStyleAttributes:(id)arg1 forScale:(float)arg2;
+ (struct CGColor { }*)newGlyphColorForStyleAttributes:(id)arg1 forScale:(float)arg2;
+ (struct CGColor { }*)newHaloColorForStyleAttributes:(id)arg1 forScale:(float)arg2;
+ (void)requestImageForStyleAttributes:(id)arg1 size:(unsigned int)arg2 scale:(float)arg3 completionHandler:(id /* block */)arg4;
+ (void)setDiskCacheURL:(id)arg1;
+ (void)setUseSharedCaches;

@end
