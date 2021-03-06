/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUpNextNowPlayingDataSource : MusicUpNextCompositeDataSource {
    <MusicUpNextCompositeDataSourceDelegate> * _delegate;
    BOOL  _hidesViews;
    MusicEntityViewHorizontalLockupContentDescriptor * _horizontalLockupContentDescriptor;
    MPUAVPlayer * _player;
}

@property (nonatomic) BOOL hidesViews;

- (void).cxx_destruct;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned int)arg2;
- (id)delegate;
- (BOOL)hidesViews;
- (id)horizontalLockupContentDescriptor;
- (id)indexPathForEntityValueContext:(id)arg1;
- (void)invalidateSizes;
- (BOOL)isNowPlayingDataSource;
- (unsigned int)numberOfEntitiesInSection:(unsigned int)arg1;
- (unsigned int)numberOfSections;
- (id)player;
- (void)setDelegate:(id)arg1;
- (void)setHidesViews:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (Class)tableViewCellClass;
- (id)tableViewCellReuseIdentifier;
- (id)tableViewHeaderReusueIdentifier;
- (id)updatesForPlayerChangedFromItem:(id)arg1 toItem:(id)arg2;

@end
