/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFConnection : NSObject {
    unsigned int  _allowFallbacks;
    char * _buffer;
    unsigned int  _bufferLength;
    int  _bufferRemainingBytes;
    unsigned int  _bufferStart;
    unsigned int  _compressionEnabled;
    struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; } * _deflater;
    unsigned long  _desiredBufferLength;
    unsigned int  _dontLogReads;
    struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; } * _inflater;
    unsigned int  _isFetching;
    double  _lastUsedTime;
    NSData * _logData;
    unsigned int  _readBytesNotLogged;
    NSMutableString * _readBytesToLog;
    <MFSASLSecurityLayer> * _securityLayer;
    _MFSocket * _socket;
    char * _zbuffer;
}

@property (nonatomic, readonly) NSArray *authenticationMechanisms;
@property (nonatomic, readonly) NSArray *capabilities;
@property (nonatomic, readonly) BOOL hasBytesAvailable;
@property (nonatomic, readonly) BOOL isCellularConnection;
@property (nonatomic) BOOL isFetching;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly) double lastUsedTime;
@property (nonatomic, readonly) BOOL loginDisabled;
@property (nonatomic, readonly) NSString *securityProtocol;
@property (nonatomic, readonly) BOOL usesOpportunisticSockets;

+ (void)flushLog;
+ (void)initialize;
+ (id)logActivityOnHosts;
+ (id)logActivityOnPorts;
+ (BOOL)logAllSocketActivity;
+ (void)logBytes:(const char *)arg1 length:(int)arg2;
+ (id)logClasses;
+ (void)readLoggingDefaults;
+ (void)setLogActivityOnHosts:(id)arg1;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (void)setLogAllSocketActivity:(BOOL)arg1;
+ (void)setLogClasses:(id)arg1;
+ (BOOL)shouldTryFallbacksAfterError:(id)arg1;

- (void)_setupNetworkLogging;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (id)authenticationMechanisms;
- (id)capabilities;
- (BOOL)connectUsingAccount:(id)arg1;
- (BOOL)connectUsingFallbacksForAccount:(id)arg1;
- (BOOL)connectUsingSettings:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)disconnect;
- (void)enableReadLogging:(BOOL)arg1;
- (void)enableThroughputMonitoring:(BOOL)arg1;
- (BOOL)hasBytesAvailable;
- (BOOL)isCellularConnection;
- (BOOL)isFetching;
- (BOOL)isValid;
- (double)lastUsedTime;
- (void)logReadChars:(const char *)arg1 length:(unsigned long)arg2;
- (BOOL)loginDisabled;
- (BOOL)readBytesIntoData:(id)arg1 desiredLength:(unsigned long)arg2;
- (BOOL)readLineIntoData:(id)arg1;
- (id)securityProtocol;
- (void)setAllowsFallbacks:(BOOL)arg1;
- (void)setDesiredReadBufferLength:(unsigned long)arg1;
- (void)setIsFetching:(BOOL)arg1;
- (BOOL)startCompression;
- (BOOL)startTLSForAccount:(id)arg1;
- (BOOL)usesOpportunisticSockets;
- (BOOL)writeBytes:(const char *)arg1 length:(unsigned long)arg2 dontLogBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (BOOL)writeData:(id)arg1;
- (BOOL)writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

@end
