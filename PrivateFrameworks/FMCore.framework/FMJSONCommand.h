/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMJSONCommand : FMCommandBase {
    BOOL  __hasParsedResponseBody;
    NSDictionary * __requestBodyDict;
    NSDictionary * __responseBodyDict;
    NSError * _jsonResponseParseError;
}

@property (nonatomic) BOOL _hasParsedResponseBody;
@property (nonatomic, retain) NSDictionary *_requestBodyDict;
@property (nonatomic, retain) NSDictionary *_responseBodyDict;
@property (nonatomic, readonly) NSDictionary *jsonResponseDictionary;
@property (nonatomic, retain) NSError *jsonResponseParseError;
@property (nonatomic, readonly) NSDictionary *serverAlertInfo;

- (void).cxx_destruct;
- (BOOL)_hasParsedResponseBody;
- (id)_requestBodyDict;
- (id)_responseBodyDict;
- (id)body;
- (id)headers;
- (id)jsonBodyDictionary;
- (id)jsonResponseDictionary;
- (id)jsonResponseParseError;
- (void)sendRequest;
- (id)serverAlertInfo;
- (void)setJsonResponseParseError:(id)arg1;
- (void)set_hasParsedResponseBody:(BOOL)arg1;
- (void)set_requestBodyDict:(id)arg1;
- (void)set_responseBodyDict:(id)arg1;

@end
