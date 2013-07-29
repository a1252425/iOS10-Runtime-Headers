/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSMutableURLRequestProperties, NSMutableData, NSCountedSet, NSURLRequest, NSURLResponse, ISURLRequestPerformance, <ISURLOperationDelegate>, SSURLRequestProperties, NSURLConnection, ISDataProvider, SSAuthenticationContext;

@interface ISURLOperation : ISOperation  {
    NSURLRequest *_activeURLRequest;
    SSAuthenticationContext *_authenticationContext;
    NSURLConnection *_connection;
    NSMutableData *_dataBuffer;
    ISDataProvider *_dataProvider;
    int _networkRetryCount;
    NSCountedSet *_redirectURLs;
    SSMutableURLRequestProperties *_requestProperties;
    NSURLResponse *_response;
    BOOL _shouldSetCookies;
    BOOL _usesPrivateCookieStore;
    ISURLRequestPerformance *_performanceMetrics;
    BOOL _uploadProgressRequested;
}

@property <ISURLOperationDelegate> * delegate;
@property(retain) ISDataProvider * dataProvider;
@property(retain) SSAuthenticationContext * authenticationContext;
@property(copy) SSURLRequestProperties * requestProperties;
@property(retain) NSURLResponse * response;
@property(readonly) ISURLRequestPerformance * performanceMetrics;
@property BOOL tracksPerformanceMetrics;
@property(getter=isUploadProgressRequested) BOOL uploadProgressRequested;
@property(getter=_shouldSetCookies,setter=_setShouldSetCookies:) BOOL _shouldSetCookies;
@property(getter=_usesPrivateCookieStore,setter=_setUsesPrivateCookieStore:) BOOL _usesPrivateCookieStore;

+ (BOOL)isSharedCacheStorageSession:(struct __CFURLStorageSession { }*)arg1;
+ (struct _CFURLCache { }*)sharedCFURLCache;
+ (id)copyUserAgent;
+ (struct __CFURLStorageSession { }*)newSharedCacheStorageSession;

- (id)performanceMetrics;
- (void)setUploadProgressRequested:(BOOL)arg1;
- (void)_setUsesPrivateCookieStore:(BOOL)arg1;
- (void)_setShouldSetCookies:(BOOL)arg1;
- (BOOL)tracksPerformanceMetrics;
- (void)setTracksPerformanceMetrics:(BOOL)arg1;
- (void)setRequestProperties:(id)arg1;
- (id)_copyConnectionProperties;
- (BOOL)_runRequestWithURL:(id)arg1;
- (void)_logRequest:(id)arg1;
- (void)_sendRequestToDelegate:(id)arg1;
- (BOOL)_validateContentLength:(long long)arg1 error:(id*)arg2;
- (void)_sendContentLengthToDelegate:(long long)arg1;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)_retry;
- (BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2;
- (id)_errorWithDomain:(id)arg1 code:(int)arg2;
- (void)_sendOutputToDelegate:(id)arg1;
- (void)_logResponseBody:(id)arg1;
- (id)_decodedDataForData:(id)arg1;
- (void)_handleFinishedLoading;
- (BOOL)_isTrustExtendedValidation:(struct __SecTrust { }*)arg1;
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (BOOL)isUploadProgressRequested;
- (id)_handleRedirectRequest:(id)arg1 response:(id)arg2;
- (BOOL)_shouldSetCookies;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (id)_sanitizedStringForString:(id)arg1;
- (void)_handleReceivedResponse:(id)arg1;
- (void)_handleReceivedData:(id)arg1;
- (void)_stopConnection;
- (id)_errorWithDefaultStringsForError:(id)arg1;
- (id)_sanitizedDescriptionForObject:(id)arg1;
- (id)_copyAcceptLanguageString;
- (id)_accountIdentifier;
- (BOOL)_usesPrivateCookieStore;
- (void)_setActiveURLRequest:(id)arg1;
- (id)newRequestWithURL:(id)arg1;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg1;
- (id)_requestProperties;
- (id)_sanitizedURLForURL:(id)arg1;
- (id)_activeURL;
- (id)_copyAuthenticationContext;
- (id)requestProperties;
- (void)setRequest:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)_stopIfCancelled;
- (void)_updateProgress;
- (void)run;
- (id)init;
- (void)dealloc;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (void)_run;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)request;

@end