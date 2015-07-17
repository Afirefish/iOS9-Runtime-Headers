/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTouchIconCache : WBSSiteMetadataImageCache {
    NSMutableSet * _pendingTouchIconRequestHosts;
    NSMutableDictionary * _touchIconsDataForHosts;
}

+ (const char *)diskAccessQueueName;

- (void).cxx_destruct;
- (void)_removeTouchIconsDataForHost:(id)arg1;
- (void)_updateTouchIconsDataForHost:(id)arg1 image:(id)arg2 requestDidSucceed:(BOOL)arg3 isUserLoadedWebpageRequest:(BOOL)arg4;
- (void)_upgradeCacheVersionIfNeeded;
- (void)cacheFirstAvailableTouchIcon:(id)arg1 forURL:(id)arg2;
- (void)didFinishLoadingSettings;
- (void)didLoadTouchIcon:(id)arg1 withData:(id)arg2;
- (void)didRemoveImageForKeyString:(id)arg1 type:(int)arg2;
- (BOOL)hasDeterminedIconAvailabilityForURL:(id)arg1;
- (id)initWithImageDirectoryURL:(id)arg1;
- (void)notifyImageWasLoaded:(id)arg1 forKeyString:(id)arg2 type:(int)arg3;
- (void)releaseTouchIconForHost:(id)arg1;
- (void)releaseTouchIconsForHosts:(id)arg1;
- (void)retainTouchIconForHost:(id)arg1;
- (void)retainTouchIconsForHosts:(id)arg1;
- (void)saveTouchIconToDisk:(id)arg1 forHost:(id)arg2 requestDidSucceed:(BOOL)arg3 isUserLoadedWebpageRequest:(BOOL)arg4;
- (BOOL)shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2;
- (id)touchIconForURL:(id)arg1;
- (void)willSaveTouchIcon:(id)arg1 withData:(id)arg2;

@end