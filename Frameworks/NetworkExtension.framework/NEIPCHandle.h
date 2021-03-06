/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPCHandle : NSObject {
    NSUUID * _config_id;
    struct __CFArray { } * _configurations;
    NEIPC * _primary_ipc;
    NEIPC * _secondary_ipc;
    struct ipc_queue { struct IPCMessage {} *x1; struct IPCMessage {} **x2; } * _send_queue;
}

@property NSUUID *config_id;
@property struct __CFArray { }*configurations;
@property NEIPC *primary_ipc;
@property NEIPC *secondary_ipc;
@property struct ipc_queue { struct IPCMessage {} *x1; struct IPCMessage {} **x2; }*send_queue;

+ (void)deregisterConfiguration:(struct _VPNConfigurationPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; unsigned char x3; struct __CFRunLoopSource {} *x4; struct __CFRunLoopSource {} *x5; struct __CFRunLoopSource {} *x6; struct __CFArray {} *x7; int (*x8)(); struct { int x_9_1_1; void *x_9_1_2; int (*x_9_1_3)(); int (*x_9_1_4)(); int (*x_9_1_5)(); } x9; int (*x10)(); struct { int x_11_1_1; void *x_11_1_2; int (*x_11_1_3)(); int (*x_11_1_4)(); int (*x_11_1_5)(); } x11; id x12; void x13; struct ipc_queue { struct IPCMessage {} *x_14_1_1; struct IPCMessage {} **x_14_1_2; } x14; id x15; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x16; void*x17; struct _VPNConfigurationPrivate {} *x18; }*)arg1;
+ (BOOL)sendMessageWithType:(unsigned int)arg1 data:(struct __CFData { }*)arg2 forConfiguration:(struct _VPNConfigurationPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; unsigned char x3; struct __CFRunLoopSource {} *x4; struct __CFRunLoopSource {} *x5; struct __CFRunLoopSource {} *x6; struct __CFArray {} *x7; int (*x8)(); struct { int x_9_1_1; void *x_9_1_2; int (*x_9_1_3)(); int (*x_9_1_4)(); int (*x_9_1_5)(); } x9; int (*x10)(); struct { int x_11_1_1; void *x_11_1_2; int (*x_11_1_3)(); int (*x_11_1_4)(); int (*x_11_1_5)(); } x11; id x12; void x13; struct ipc_queue { struct IPCMessage {} *x_14_1_1; struct IPCMessage {} **x_14_1_2; } x14; id x15; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x16; void*x17; struct _VPNConfigurationPrivate {} *x18; }*)arg3;

- (void)addConfiguration:(struct _VPNConfigurationPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; unsigned char x3; struct __CFRunLoopSource {} *x4; struct __CFRunLoopSource {} *x5; struct __CFRunLoopSource {} *x6; struct __CFArray {} *x7; int (*x8)(); struct { int x_9_1_1; void *x_9_1_2; int (*x_9_1_3)(); int (*x_9_1_4)(); int (*x_9_1_5)(); } x9; int (*x10)(); struct { int x_11_1_1; void *x_11_1_2; int (*x_11_1_3)(); int (*x_11_1_4)(); int (*x_11_1_5)(); } x11; id x12; void x13; struct ipc_queue { struct IPCMessage {} *x_14_1_1; struct IPCMessage {} **x_14_1_2; } x14; id x15; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x16; void*x17; struct _VPNConfigurationPrivate {} *x18; }*)arg1;
- (id)config_id;
- (struct __CFArray { }*)configurations;
- (id)createIPCFromEndpoint:(id)arg1;
- (void)dealloc;
- (long)getIndexOfConfiguration:(struct _VPNConfigurationPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; unsigned char x3; struct __CFRunLoopSource {} *x4; struct __CFRunLoopSource {} *x5; struct __CFRunLoopSource {} *x6; struct __CFArray {} *x7; int (*x8)(); struct { int x_9_1_1; void *x_9_1_2; int (*x_9_1_3)(); int (*x_9_1_4)(); int (*x_9_1_5)(); } x9; int (*x10)(); struct { int x_11_1_1; void *x_11_1_2; int (*x_11_1_3)(); int (*x_11_1_4)(); int (*x_11_1_5)(); } x11; id x12; void x13; struct ipc_queue { struct IPCMessage {} *x_14_1_1; struct IPCMessage {} **x_14_1_2; } x14; id x15; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x16; void*x17; struct _VPNConfigurationPrivate {} *x18; }*)arg1;
- (id)initWithConfiguration:(struct _VPNConfigurationPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; unsigned char x3; struct __CFRunLoopSource {} *x4; struct __CFRunLoopSource {} *x5; struct __CFRunLoopSource {} *x6; struct __CFArray {} *x7; int (*x8)(); struct { int x_9_1_1; void *x_9_1_2; int (*x_9_1_3)(); int (*x_9_1_4)(); int (*x_9_1_5)(); } x9; int (*x10)(); struct { int x_11_1_1; void *x_11_1_2; int (*x_11_1_3)(); int (*x_11_1_4)(); int (*x_11_1_5)(); } x11; id x12; void x13; struct ipc_queue { struct IPCMessage {} *x_14_1_1; struct IPCMessage {} **x_14_1_2; } x14; id x15; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x16; void*x17; struct _VPNConfigurationPrivate {} *x18; }*)arg1;
- (id)primary_ipc;
- (void)removeConfiguration:(struct _VPNConfigurationPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; unsigned char x3; struct __CFRunLoopSource {} *x4; struct __CFRunLoopSource {} *x5; struct __CFRunLoopSource {} *x6; struct __CFArray {} *x7; int (*x8)(); struct { int x_9_1_1; void *x_9_1_2; int (*x_9_1_3)(); int (*x_9_1_4)(); int (*x_9_1_5)(); } x9; int (*x10)(); struct { int x_11_1_1; void *x_11_1_2; int (*x_11_1_3)(); int (*x_11_1_4)(); int (*x_11_1_5)(); } x11; id x12; void x13; struct ipc_queue { struct IPCMessage {} *x_14_1_1; struct IPCMessage {} **x_14_1_2; } x14; id x15; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x16; void*x17; struct _VPNConfigurationPrivate {} *x18; }*)arg1;
- (id)secondary_ipc;
- (BOOL)sendMessage:(struct __CFData { }*)arg1 withType:(unsigned int)arg2;
- (struct ipc_queue { struct IPCMessage {} *x1; struct IPCMessage {} **x2; }*)send_queue;
- (void)setConfig_id:(id)arg1;
- (void)setConfigurations:(struct __CFArray { }*)arg1;
- (void)setPrimary_ipc:(id)arg1;
- (void)setSecondary_ipc:(id)arg1;
- (void)setSend_queue:(struct ipc_queue { struct IPCMessage {} *x1; struct IPCMessage {} **x2; }*)arg1;

@end
