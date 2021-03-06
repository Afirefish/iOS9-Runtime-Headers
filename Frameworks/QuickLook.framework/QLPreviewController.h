/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewController : UIViewController {
    QLPreviewControllerReserved * _reserved;
}

@property (readonly) <QLPreviewItem> *currentPreviewItem;
@property int currentPreviewItemIndex;
@property <QLPreviewControllerDataSource> *dataSource;
@property <QLPreviewControllerDelegate> *delegate;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

+ (id)_passThroughDocumentTypes;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)_shouldPassThroughDocumentType:(id)arg1;
+ (BOOL)canPreviewDocumentType:(id)arg1;
+ (BOOL)canPreviewItem:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;
+ (id)contentTypeForPreviewItem:(id)arg1;
+ (BOOL)copyPreviewItemToPasteboard:(id)arg1;
+ (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
+ (id)titleForPreviewItem:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_addPreviewContentController;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (unsigned int)_buttonForAction;
- (unsigned int)_buttonForArchive;
- (id)_buttonItemForArchive;
- (BOOL)_canShowStatusBar;
- (void)_commonInit;
- (void)_configurePreviewContentController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentFrameForRemoteView;
- (void)_contentWasTapped;
- (void)_createControls;
- (unsigned int)_currentAVButton;
- (id)_currentInteractionController;
- (id)_currentNavigationController;
- (unsigned int)_customButtons;
- (id)_displayedInteractionController;
- (id)_documentProxyForPreviewItem:(id)arg1;
- (id)_fixedSpaceItemWithWidth:(float)arg1;
- (id)_flexibleSpaceItem;
- (void)_hideOverlayAdjustingStatusBar:(BOOL)arg1 duration:(double)arg2;
- (id)_listDescriptionStringWithTitle:(id)arg1;
- (void)_loadInternalViews;
- (BOOL)_needsAVControls;
- (BOOL)_needsToolbar;
- (BOOL)_needsToolbarForTraitCollection:(id)arg1;
- (BOOL)_overlayVisible;
- (BOOL)_overlayVisibleBeforeDismissal;
- (int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2;
- (int)_preferredModeWithParentViewController:(id)arg1 presentingViewController:(id)arg2 traitCollection:(id)arg3;
- (void)_prepareDelayedAppearance;
- (void)_removeChildPreviewContentControllerIfNeeded;
- (void)_removeOverlayButtons;
- (void)_requestRemoteViewControllerIfNeeded;
- (void)_restoreOriginalNavigationBarItems;
- (void)_runDeferredAnimationBlock;
- (void)_saveBarsState;
- (void)_setControlsOverlayVisible:(BOOL)arg1 adjustingStatusBar:(BOOL)arg2 duration:(double)arg3;
- (void)_setCurrentPreviewItemIndex:(int)arg1 fromClient:(BOOL)arg2 showContentsIfPossible:(BOOL)arg3;
- (void)_setupPreferredModeWithParentViewController:(id)arg1;
- (void)_setupWithMode:(int)arg1 parentViewController:(id)arg2;
- (void)_showContentsIfPossibleAnimated:(BOOL)arg1;
- (void)_showGenericDisplayBundle;
- (void)_showOverlayAdjustingStatusBar:(BOOL)arg1 duration:(double)arg2;
- (void)_unloadInternalViews;
- (void)_updateNavigationBarAnimated:(BOOL)arg1;
- (void)_updateNavigationBarTitleWithTraitCollection:(id)arg1;
- (void)_updateNavigationBarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(BOOL)arg3;
- (void)_updateStatusBarVisibilityWithTraitCollection:(id)arg1 animated:(BOOL)arg2;
- (void)_updateToolbarAnimated:(BOOL)arg1;
- (void)_updateToolbarVisibilityAnimated:(BOOL)arg1;
- (void)_updateToolbarVisibilityWithTraitCollection:(id)arg1 animated:(BOOL)arg2;
- (void)_updateToolbarWithMode:(int)arg1 traitCollection:(id)arg2 animated:(BOOL)arg3;
- (void)actionButtonTapped:(id)arg1;
- (id)activityItemForDocumentInteractionController:(id)arg1;
- (id)additionalActivitiesForDocumentInteractionController:(id)arg1;
- (id)additionalLeftBarButtonItems;
- (id)additionalRightBarButtonItems;
- (void)animateWhenReadyWithBlock:(id /* block */)arg1;
- (void)arrowsAction:(id)arg1;
- (BOOL)blockRemoteImages;
- (BOOL)canPrint;
- (void)contentWasTappedInPreviewContentController:(id)arg1;
- (id)currentPreviewItem;
- (int)currentPreviewItemIndex;
- (int)currentSourceUUIDForPreviewContentController:(id)arg1;
- (void)customActionButtonTapped:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)dismissDisplayedInteractionControllerAnimated:(BOOL)arg1;
- (void)dismissTransitionIsReadyToFinishSynchronizedWithBlock:(id /* block */)arg1;
- (void)dismissalGestureDidUpdateInPreviewContentController:(id)arg1 state:(int)arg2 trackingInformation:(id)arg3;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (id)imageWithImage:(id)arg1 drawnOnTopOf:(id)arg2 stretchedToSize:(struct CGSize { float x1; float x2; })arg3 scale:(float)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)itemsSource;
- (void)leftArrowAction:(id)arg1;
- (void)loadView;
- (int)mode;
- (unsigned int)navigationBarButtonsForMode:(int)arg1 traitCollection:(id)arg2;
- (void)navigationGoBackAction:(id)arg1;
- (int)numberOfPreviewItems;
- (int)numberOfPreviewItemsInPreviewContentController:(id)arg1;
- (void)overlayWasTappedInPreviewContentController:(id)arg1;
- (id)passThroughViewsForIndexSheet;
- (void)playButtonAction:(id)arg1;
- (int)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)prepareForPrinting;
- (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
- (id)previewContentController;
- (void)previewContentController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(int)arg3 withError:(id)arg4;
- (void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(int)arg3;
- (id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2;
- (void)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 completionBlock:(id /* block */)arg3;
- (void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;
- (void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewContentController:(id)arg1 willMoveToItemAtIndex:(int)arg2;
- (void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (id)previewItemAtIndex:(int)arg1;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (void)rightArrowAction:(id)arg1;
- (void)setAdditionalLeftBarButtonItems:(id)arg1;
- (void)setAdditionalRightBarButtonItems:(id)arg1;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setShowActionAsDefaultButton:(BOOL)arg1;
- (void)setSourceIsManaged:(BOOL)arg1;
- (void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(id /* block */)arg2;
- (void)setUseCustomActionButton:(BOOL)arg1;
- (BOOL)showActionAsDefaultButton;
- (void)showArchiveContent:(id)arg1;
- (void)showContentsWasTappedInPreviewContentController:(id)arg1;
- (BOOL)sourceIsManaged;
- (id)swipeToDismissGestureRecognizer;
- (unsigned int)toolBarButtonsForMode:(int)arg1 traitCollection:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)useCustomActionButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (BOOL)ckCanDismissWhenSuspending;

@end
