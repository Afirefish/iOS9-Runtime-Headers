/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICHTMLConverterClient : NSObject {
    NSXPCConnection * _connectionToService;
    BOOL  _isConnectionAlive;
}

@property (nonatomic) BOOL isConnectionAlive;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)attributedStringFromHTMLString:(id)arg1 timeoutDate:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)dealloc;
- (BOOL)isConnectionAlive;
- (void)resumeConnectionIfNeeded;
- (void)setIsConnectionAlive:(BOOL)arg1;

@end
