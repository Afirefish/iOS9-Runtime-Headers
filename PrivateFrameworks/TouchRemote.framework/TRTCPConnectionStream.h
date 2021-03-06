/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRTCPConnectionStream : NSObject {
    BOOL  _closed;
    NSObject<OS_dispatch_queue> * _connectionAccessQueue;
    <TRTCPConnectionStreamDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _readQueue;
    NSInputStream * _readStream;
    NSObject<OS_dispatch_queue> * _writeQueue;
    NSOutputStream * _writeStream;
}

@property (getter=isClosed, nonatomic) BOOL closed;
@property (nonatomic) <TRTCPConnectionStreamDelegate> *delegate;

- (void).cxx_destruct;
- (id)_initWithNetService:(id)arg1;
- (id)_initWithReadStream:(id)arg1 writeStream:(id)arg2 options:(int)arg3;
- (id)_initWithReadStream:(id)arg1 writeStream:(id)arg2 peerPublicKey:(id)arg3 options:(int)arg4;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (BOOL)isClosed;
- (void)readDataOfLength:(unsigned long)arg1 completionHandler:(id /* block */)arg2;
- (void)setClosed:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)writeData:(id)arg1 completionHandler:(id /* block */)arg2;

@end
