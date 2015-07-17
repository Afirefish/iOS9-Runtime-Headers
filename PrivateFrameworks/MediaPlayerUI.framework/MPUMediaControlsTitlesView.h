/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUMediaControlsTitlesView : MPUNowPlayingTitlesView <MPUContentSizeCategoryChanging, SBUIControlCenterControlObserver> {
    NSString *_appDisplayName;
    <MPUMediaControlsTitlesViewDelegate> *_delegate;
    CALayer *_detailEdgesLayerMask;
    BOOL _displayingAppName;
    BOOL _highlighted;
    int _mediaControlsStyle;
    CALayer *_titleEdgesLayerMask;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPUMediaControlsTitlesViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic, readonly) int mediaControlsStyle;
@property (readonly) Class superclass;

+ (id)detailTextColorForMediaControlsStyle:(int)arg1 highlighted:(BOOL)arg2;

- (void).cxx_destruct;
- (id)_createEdgesLayerMask;
- (id)_detailTextAttributes;
- (void)_setGlowEnabled:(BOOL)arg1 forLabel:(id)arg2;
- (id)_titleTextAttributes;
- (void)_touchControlActivate:(id)arg1;
- (void)_touchControlDeactivate:(id)arg1;
- (void)_touchControlTapped:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithMediaControlsStyle:(int)arg1;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (int)mediaControlsStyle;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateNowPlayingAppDisplayName:(id)arg1;
- (void)updateTextForContentSizeCategory:(id)arg1;
- (void)updateTrackInformationWithNowPlayingInfo:(id)arg1;

@end