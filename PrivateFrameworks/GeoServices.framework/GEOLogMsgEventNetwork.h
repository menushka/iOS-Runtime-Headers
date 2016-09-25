/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventNetwork : PBCodable <NSCopying> {
    struct { 
        unsigned int requestErrorCode : 1; 
        unsigned int networkService : 1; 
        unsigned int requestDataSize : 1; 
        unsigned int responseDataSize : 1; 
        unsigned int responseTime : 1; 
    }  _has;
    int  _networkService;
    int  _requestDataSize;
    long long  _requestErrorCode;
    NSString * _requestErrorDescription;
    NSString * _requestErrorDomain;
    int  _responseDataSize;
    int  _responseTime;
}

@property (nonatomic) BOOL hasNetworkService;
@property (nonatomic) BOOL hasRequestDataSize;
@property (nonatomic) BOOL hasRequestErrorCode;
@property (nonatomic, readonly) BOOL hasRequestErrorDescription;
@property (nonatomic, readonly) BOOL hasRequestErrorDomain;
@property (nonatomic) BOOL hasResponseDataSize;
@property (nonatomic) BOOL hasResponseTime;
@property (nonatomic) int networkService;
@property (nonatomic) int requestDataSize;
@property (nonatomic) long long requestErrorCode;
@property (nonatomic, retain) NSString *requestErrorDescription;
@property (nonatomic, retain) NSString *requestErrorDomain;
@property (nonatomic) int responseDataSize;
@property (nonatomic) int responseTime;

- (int)StringAsNetworkService:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasNetworkService;
- (BOOL)hasRequestDataSize;
- (BOOL)hasRequestErrorCode;
- (BOOL)hasRequestErrorDescription;
- (BOOL)hasRequestErrorDomain;
- (BOOL)hasResponseDataSize;
- (BOOL)hasResponseTime;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)networkService;
- (id)networkServiceAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)requestDataSize;
- (long long)requestErrorCode;
- (id)requestErrorDescription;
- (id)requestErrorDomain;
- (int)responseDataSize;
- (int)responseTime;
- (void)setHasNetworkService:(BOOL)arg1;
- (void)setHasRequestDataSize:(BOOL)arg1;
- (void)setHasRequestErrorCode:(BOOL)arg1;
- (void)setHasResponseDataSize:(BOOL)arg1;
- (void)setHasResponseTime:(BOOL)arg1;
- (void)setNetworkService:(int)arg1;
- (void)setRequestDataSize:(int)arg1;
- (void)setRequestErrorCode:(long long)arg1;
- (void)setRequestErrorDescription:(id)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setResponseDataSize:(int)arg1;
- (void)setResponseTime:(int)arg1;
- (void)writeTo:(id)arg1;

@end
