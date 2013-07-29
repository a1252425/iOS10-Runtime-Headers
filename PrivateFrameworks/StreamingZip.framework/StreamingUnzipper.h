/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

@class StreamingUnzipState, NSXPCConnection;

@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol> {
    void *_decompressionOutputBuffer;
    NSXPCConnection *_xpcConnection;
    StreamingUnzipState *_currentState;
}

@property NSXPCConnection * xpcConnection;


- (void)_supplyBytes:(const char *)arg1 length:(unsigned int)arg2 withReply:(id)arg3;
- (id)_beginNonStreamablePassthroughWithRemainingBytes:(const void*)arg1 length:(unsigned int)arg2;
- (void)_setErrorState;
- (void)finishStreamWithReply:(id)arg1;
- (void)suspendStreamWithReply:(id)arg1;
- (void)supplyXPCData:(id)arg1 withReply:(id)arg2;
- (void)supplyDispatchData:(id)arg1 withReply:(id)arg2;
- (void)supplyRemappableData:(id)arg1 withReply:(id)arg2;
- (void)supplyBytes:(id)arg1 withReply:(id)arg2;
- (void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char *)arg2 md5Hashes:(id)arg3 hashedChunkSize:(unsigned long long)arg4 withReply:(id)arg5;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end