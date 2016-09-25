/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNetworkSessionDelegate : NSObject <NSURLSessionDataDelegate> {
    struct RefPtr<WebKit::NetworkSession> { 
        struct NetworkSession {} *m_ptr; 
    }  _session;
    bool  _withCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithNetworkSession:(struct NetworkSession { unsigned int x1; struct SessionID { unsigned long long x_2_1_1; } x2; struct unique_ptr<WebCore::NetworkStorageSession, std::__1::default_delete<WebCore::NetworkStorageSession> > { struct __compressed_pair<WebCore::NetworkStorageSession *, std::__1::default_delete<WebCore::NetworkStorageSession> > { struct NetworkStorageSession {} *x_1_2_1; } x_3_1_1; } x3; struct HashMap<unsigned long long, WebKit::NetworkDataTask *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebKit::NetworkDataTask *> > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WebKit::NetworkDataTask *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WebKit::NetworkDataTask *> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WebKit::NetworkDataTask *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebKit::NetworkDataTask *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WebKit::NetworkDataTask *> {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_4_1_1; } x4; }*)arg1 withCredentials:(bool)arg2;

@end
