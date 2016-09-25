/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFColorPaletteColor : NSObject <NAEquatable, NSCopying> {
    float  _blue;
    unsigned int  _colorType;
    float  _green;
    float  _red;
    NSNumber * _temperature;
}

@property (nonatomic, readonly) UIColor *UIColor;
@property (nonatomic, readonly) float blue;
@property (nonatomic) unsigned int colorType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float green;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float red;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *temperature;

- (void).cxx_destruct;
- (id)UIColor;
- (float)blue;
- (unsigned int)colorType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)green;
- (unsigned int)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 temperature:(id)arg4;
- (id)initWithUIColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSimilarToColor:(id)arg1 ignoreTemperature:(BOOL)arg2;
- (float)red;
- (void)setColorType:(unsigned int)arg1;
- (id)temperature;

@end
