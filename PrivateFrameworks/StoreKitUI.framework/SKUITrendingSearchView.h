/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, UILabel;

@interface SKUITrendingSearchView : UIView  {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInset;
    NSArray *_resultButtons;
    UILabel *_titleLabel;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property(copy) NSArray * resultButtons;
@property(retain) UILabel * titleLabel;

+ (id)resultButtonWithTitle:(id)arg1;
+ (id)defaultTitleFont;
+ (id)defaultTitleColor;
+ (id)defaultButtonFont;

- (id)resultButtons;
- (void)setResultButtons:(id)arg1;
- (double)_contentHeightBySizingToFitWidth:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end