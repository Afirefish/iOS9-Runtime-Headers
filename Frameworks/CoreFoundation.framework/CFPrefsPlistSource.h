/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsPlistSource : CFPrefsSource {
    struct { 
        unsigned int _isByHost : 1; 
        unsigned int _volatile : 1; 
        unsigned int _readonly : 1; 
        unsigned int _avoidsDaemonCache : 1; 
        unsigned int _restrictedAccess : 1; 
        unsigned int _checkedInvalidHome : 1; 
        unsigned int _lastWriteFailed : 1; 
    }  _flags;
    struct __CFDictionary { } * _locallySetDict;
    NSObject<OS_dispatch_group> * _synchGroup;
    const char * accessPath;
    struct __CFString { } * container;
    struct __CFString { } * domainIdentifier;
    struct __CFString { } * userIdentifier;
}

- (void)_goReadOnlyOrVolatileAfterTryingToWriteKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)_sharedCleanup;
- (void)addPIDImpersonationIfNecessary:(id)arg1;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (long)alreadylocked_generationCount;
- (BOOL)alreadylocked_requestNewData;
- (void)alreadylocked_setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (BOOL)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2;
- (struct __CFString { }*)container;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(BOOL)arg1;
- (id)createSynchronizeMessage;
- (void)dealloc;
- (id)description;
- (struct __CFString { }*)domainIdentifier;
- (void)finalize;
- (long)generationCount;
- (void)goReadOnlyAfterTryingToWriteKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)goVolatileAfterTryingToWriteKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (BOOL)handleErrorReply:(id)arg1 fromMessageSettingKey:(struct __CFString { }*)arg2 toValue:(void*)arg3 retryCount:(int)arg4 retryContinuation:(id /* block */)arg5;
- (BOOL)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(id /* block */)arg3;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5;
- (id)initWithDomain:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(BOOL)arg3 containerPath:(struct __CFString { }*)arg4;
- (BOOL)isByHost;
- (void)mergeIntoDictionary:(struct __CFDictionary { }*)arg1;
- (void)sendFullyPreparedMessage:(id)arg1 settingValue:(void*)arg2 forKey:(struct __CFString { }*)arg3 retryCount:(int)arg4;
- (long)sendMessageSettingValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(BOOL*)arg4;
- (void)setAccessRestricted:(BOOL)arg1;
- (void)setContainer:(struct __CFString { }*)arg1;
- (void)setDaemonCacheEnabled:(BOOL)arg1;
- (void)setDomainIdentifier:(struct __CFString { }*)arg1;
- (void)setUserIdentifier:(struct __CFString { }*)arg1;
- (BOOL)synchronize;
- (struct __CFString { }*)userIdentifier;
- (BOOL)volatilizeIfInvalidHomeDir;

@end
