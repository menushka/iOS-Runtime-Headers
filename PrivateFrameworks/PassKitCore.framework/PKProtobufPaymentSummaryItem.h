/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentSummaryItem : PBCodable <NSCopying> {
    long long  _amount;
    struct { 
        unsigned int amount : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _label;
    unsigned int  _type;
}

@property (nonatomic) long long amount;
@property (nonatomic) BOOL hasAmount;
@property (nonatomic, readonly) BOOL hasLabel;
@property (nonatomic) BOOL hasType;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned int type;

- (void).cxx_destruct;
- (long long)amount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAmount;
- (BOOL)hasLabel;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAmount:(long long)arg1;
- (void)setHasAmount:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
