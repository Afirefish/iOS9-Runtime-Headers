/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKUIAnimationDelegate : NSObject {
    id /* block */  _completionHandler;
    id /* block */  _didStartHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ didStartHandler;

- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id /* block */)didStartHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDidStartHandler:(id /* block */)arg1;

@end
