/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPathEventObserver : NSObject {
    struct network_config_cellular_blocked_observer_s { } * _observer;
}

@property struct network_config_cellular_blocked_observer_s { }*observer;

- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1 eventHandler:(id /* block */)arg2;
- (struct network_config_cellular_blocked_observer_s { }*)observer;
- (void)setObserver:(struct network_config_cellular_blocked_observer_s { }*)arg1;

@end
