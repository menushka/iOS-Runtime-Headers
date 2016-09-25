/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRUnregisterGameControllerMessageProtobuf : PBCodable <NSCopying> {
    unsigned long long  _controllerID;
    struct { 
        unsigned int controllerID : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long controllerID;
@property (nonatomic) BOOL hasControllerID;

- (unsigned long long)controllerID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasControllerID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setControllerID:(unsigned long long)arg1;
- (void)setHasControllerID:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
