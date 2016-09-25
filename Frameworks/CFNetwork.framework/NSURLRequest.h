/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLRequest : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSURLRequestInternal * _internal;
}

@property (readonly, copy) NSData *HTTPBody;
@property (readonly, retain) NSInputStream *HTTPBodyStream;
@property (readonly, copy) NSString *HTTPMethod;
@property (readonly) BOOL HTTPShouldHandleCookies;
@property (readonly) BOOL HTTPShouldUsePipelining;
@property (readonly, copy) NSURL *URL;
@property (getter=_gkSAPSession, setter=_gkSetSAPSession:, nonatomic, retain) GKFairPlaySAPSession *_gkSAPSession;
@property (readonly, copy) NSDictionary *allHTTPHeaderFields;
@property (readonly) BOOL allowsCellularAccess;
@property (readonly) unsigned int cachePolicy;
@property (readonly, copy) NSURL *mainDocumentURL;
@property (readonly) unsigned int networkServiceType;
@property (readonly) double timeoutInterval;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (double)defaultTimeoutInterval;
+ (id)frRequestWithURL:(id)arg1;
+ (id)frRequestWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
+ (id)getObjectKeyWithIndex:(long)arg1;
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (BOOL)supportsSecureCoding;

- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPMethod;
- (id)HTTPReferrer;
- (BOOL)HTTPShouldHandleCookies;
- (BOOL)HTTPShouldUsePipelining;
- (id)HTTPUserAgent;
- (id)URL;
- (struct _CFURLRequest { }*)_CFURLRequest;
- (BOOL)_URLHasScheme:(id)arg1;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (BOOL)_isSafeRequestForBackgroundDownload;
- (double)_payloadTransmissionTimeout;
- (id)_propertyForKey:(id)arg1;
- (void)_removePropertyForKey:(id)arg1;
- (BOOL)_requiresShortConnectionTimeout;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_startTimeoutDate;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (id)allHTTPHeaderFields;
- (BOOL)allowsCellularAccess;
- (id)boundInterfaceIdentifier;
- (unsigned int)cachePolicy;
- (id)contentDispositionEncodingFallbackArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expectedWorkload;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)mainDocumentURL;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)networkServiceType;
- (double)timeoutInterval;
- (id)valueForHTTPHeaderField:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (BOOL)ak_usesHTTPSScheme;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DARequestByApplyingStorageSession:(struct __CFURLStorageSession { }*)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkDictionaryKey;
- (id)_gkSAPSession;
- (void)_gkSetSAPSession:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (void)load;
+ (id)overrideUserAgent;
+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned int)arg2 timeoutInterval:(double)arg3;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

- (id)HTTPBodyString;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end
