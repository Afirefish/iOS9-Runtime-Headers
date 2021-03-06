/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle

- (float)_systemFontSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })actionImageMarginForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 isInteractive:(BOOL)arg4 inContainerView:(id)arg5 descendantOfContainerView:(id)arg6 duration:(double)arg7 completionBlock:(id /* block */)arg8;
- (float)backgroundCornerRadius;
- (id)backgroundViewForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)defaultActionBackgroundColorWhenSeparate;
- (BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (float)marginAboveMessageLabelFirstBaseline;
- (float)marginAboveTitleLabelFirstBaseline;
- (float)marginBelowLastLabelLastBaseline;
- (float)marginBelowMessageLabelLastBaseline;
- (float)marginBelowTitleLabelLastBaseline;
- (float)maximumWidth;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (float)minimumActionHeight;
- (int)permittedActionLayoutDirection;
- (void)positionAlertControllerView:(id)arg1 ofAlertController:(id)arg2 inAvailableSpaceView:(id)arg3;
- (id)preferredActionFont;
- (id)regularActionFont;
- (float)sectionDelimitingSeparatorDimension;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2;

@end
