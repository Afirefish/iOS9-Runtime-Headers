/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBScalablePipe : NSObject {
    CBCentral * _central;
    NSInputStream * _input;
    NSString * _name;
    NSOutputStream * _output;
    CBPeer * _peer;
    CBScalablePipeManager * _pipeManager;
    int  _priority;
    int  _socket;
    int  _type;
}

@property (nonatomic, readonly) CBCentral *central;
@property (nonatomic, readonly) NSInputStream *input;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSOutputStream *output;
@property (nonatomic, readonly) CBPeer *peer;
@property (nonatomic, readonly) int priority;
@property (nonatomic, readonly) int type;

- (id)central;
- (void)dealloc;
- (id)description;
- (id)initWithPipeManager:(id)arg1 info:(id)arg2;
- (id)input;
- (id)name;
- (id)output;
- (id)peer;
- (int)priority;
- (void)setOrphan;
- (int)type;

@end
