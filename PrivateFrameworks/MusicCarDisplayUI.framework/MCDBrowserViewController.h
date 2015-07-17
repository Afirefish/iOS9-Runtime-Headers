/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDBrowserViewController : UINavigationController <UITabBarControllerDelegate> {
    AVExternalDevice *_externalDevice;
    UITabBarController *_hostTabBarController;
    BOOL _libraryHasSongs;
    NSMapTable *_noContentViews;
    UIButton *_nowPlayingButton;
    MPAVController *_player;
    MCDRadioViewController *_radioViewController;
    RadioRecentStationsController *_recentStationsController;
    <MCDCarDisplayServiceProvider> *_serviceProvider;
    UITabBarController *_tabBarController;
    BOOL _viewHasAppeared;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) UITabBarController *hostTabBarController;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic) RadioRecentStationsController *recentStationsController;
@property (nonatomic) <MCDCarDisplayServiceProvider> *serviceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)MCD_pushNowPlayingViewControllerAnimated:(BOOL)arg1;
- (void)_accountsDidChangeNotification:(id)arg1;
- (id)_createViewControllerForIdentifier:(id)arg1;
- (BOOL)_isNowPlayingAvailable;
- (void)_itemChanged:(id)arg1;
- (void)_limitedUIChanged:(id)arg1;
- (BOOL)_limitedUIEnabled;
- (void)_mediaLibraryDidChange:(id)arg1;
- (void)_nowPlayingButtonTouchUpInside:(id)arg1;
- (void)_reloadHostTabs;
- (void)_removeDetailViews;
- (void)_tabBarDidChangeViewControllers:(id)arg1;
- (void)_updateNowPlayingVisibility;
- (void)dealloc;
- (id)hostTabBarController;
- (id)initWithHostTabBarController:(id)arg1;
- (id)nowPlayingButton;
- (id)player;
- (void)pushNowPlaying:(BOOL)arg1;
- (id)recentStationsController;
- (void)refreshNavigationPath;
- (void)reloadWithTabs:(id)arg1 forceReload:(BOOL)arg2;
- (id)serviceProvider;
- (void)setHostTabBarController:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRecentStationsController:(id)arg1;
- (void)setServiceProvider:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;

@end