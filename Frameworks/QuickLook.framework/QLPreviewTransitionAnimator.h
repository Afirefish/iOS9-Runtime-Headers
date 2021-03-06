/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewTransitionAnimator : NSObject {
    <UIViewControllerContextTransitioning> * _transitionContext;
    BOOL  showing;
}

@property (readonly) QLPreviewController *previewController;
@property BOOL showing;
@property <UIViewControllerContextTransitioning> *transitionContext;

- (int)_transitionStateForAnimationEnding:(BOOL)arg1;
- (void)didTransitionWithAnimationEnding:(BOOL)arg1;
- (id)previewController;
- (void)setShowing:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 withDuration:(double)arg2;
- (void)setTransitionContext:(id)arg1;
- (BOOL)showing;
- (id)transitionContext;
- (void)updateStatusBarWithDuration:(double)arg1;
- (void)willTransitionWithAnimationEnding:(BOOL)arg1;

@end
