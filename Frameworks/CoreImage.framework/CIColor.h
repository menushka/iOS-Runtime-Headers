/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColor : NSObject <NSCopying, NSSecureCoding> {
    void * _pad;
    void * _priv;
}

@property (readonly) float alpha;
@property (readonly) float blue;
@property (readonly) struct CGColorSpace { }*colorSpace;
@property (readonly) const float*components;
@property (readonly) float green;
@property (readonly) unsigned long numberOfComponents;
@property (readonly) float red;
@property (readonly) NSString *stringRepresentation;

// Image: /System/Library/Frameworks/CoreImage.framework/CoreImage

+ (id)blackColor;
+ (id)blueColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
+ (id)colorWithString:(id)arg1;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)magentaColor;
+ (id)redColor;
+ (BOOL)supportsSecureCoding;
+ (id)whiteColor;
+ (id)yellowColor;

- (float)alpha;
- (float)blue;
- (struct CGColor { }*)cgColor;
- (struct CGColorSpace { }*)colorSpace;
- (const float*)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (float)green;
- (unsigned int)hash;
- (id)init;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long)numberOfComponents;
- (float)red;
- (id)stringRepresentation;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)initWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI

+ (id)colorWithSRGBRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)colorWithSRGBRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

@end
