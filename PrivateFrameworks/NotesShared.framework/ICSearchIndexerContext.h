/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICSearchIndexerContext : NSObject {
    <ICSearchIndexerContextDelegate> * _delegate;
    NSMutableSet * _didChangeAddedIdentifiers;
    NSMutableSet * _didChangeDeletedIdentifiers;
    NSMutableSet * _didChangeUpdatedIdentifiers;
    NSArray * _managedObjectContexts;
    ICNoteContext * _noteContext;
    int  _pauseLevel;
    <ICSearchLegacyContext> * _searchLegacyContext;
    BOOL  _wasEverPaused;
}

@property (nonatomic) <ICSearchIndexerContextDelegate> *delegate;
@property (nonatomic, retain) NSMutableSet *didChangeAddedIdentifiers;
@property (nonatomic, retain) NSMutableSet *didChangeDeletedIdentifiers;
@property (nonatomic, retain) NSMutableSet *didChangeUpdatedIdentifiers;
@property (nonatomic, copy) NSArray *managedObjectContexts;
@property (nonatomic) ICNoteContext *noteContext;
@property (nonatomic) int pauseLevel;
@property (nonatomic, retain) <ICSearchLegacyContext> *searchLegacyContext;
@property (nonatomic) BOOL wasEverPaused;

+ (id)searchIndexableIdentifiersForManagedObjects:(id)arg1 checkUpdatedValues:(BOOL)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)didChangeAddedIdentifiers;
- (id)didChangeDeletedIdentifiers;
- (id)didChangeUpdatedIdentifiers;
- (void)enumerateAllObjectsWithType:(int)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithNoteContext:(id)arg1;
- (id)integerIDForNote:(id)arg1;
- (id)managedObjectContexts;
- (id)noteContext;
- (id)noteForIntegerID:(id)arg1;
- (void)notifyDelegateAboutIdentifiersUpdates;
- (id)objectForIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3;
- (void)objectsDidChange:(id)arg1;
- (void)pauseIndexing;
- (int)pauseLevel;
- (void)performBlockAndWaitWithManagedObjectContext:(id)arg1 block:(id /* block */)arg2;
- (void)resetChangedIdentifiers;
- (void)resetPauseLevel;
- (id)searchLegacyContext;
- (void)setDelegate:(id)arg1;
- (void)setDidChangeAddedIdentifiers:(id)arg1;
- (void)setDidChangeDeletedIdentifiers:(id)arg1;
- (void)setDidChangeUpdatedIdentifiers:(id)arg1;
- (void)setManagedObjectContexts:(id)arg1;
- (void)setNoteContext:(id)arg1;
- (void)setPauseLevel:(int)arg1;
- (void)setSearchLegacyContext:(id)arg1;
- (void)setWasEverPaused:(BOOL)arg1;
- (void)unpauseIndexing;
- (void)updateIdentifiersWithDeletedObjects:(id)arg1 addedObjects:(id)arg2 updatedObjects:(id)arg3;
- (void)updateManagedObjectContexts;
- (BOOL)wasEverPaused;

@end
