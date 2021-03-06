/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCTSMEndEvent : PBCodable <NSCopying> {
    NSData * _aid;
    BOOL  _authEnable;
    NSData * _discretionaryData;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int lcState : 1; 
        unsigned int status : 1; 
        unsigned int authEnable : 1; 
        unsigned int mfdEnable : 1; 
        unsigned int restricted : 1; 
    }  _has;
    unsigned int  _lcState;
    BOOL  _mfdEnable;
    BOOL  _restricted;
    unsigned int  _status;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
}

@property (nonatomic, retain) NSData *aid;
@property (nonatomic) BOOL authEnable;
@property (nonatomic, retain) NSData *discretionaryData;
@property (nonatomic, readonly) BOOL hasAid;
@property (nonatomic) BOOL hasAuthEnable;
@property (nonatomic, readonly) BOOL hasDiscretionaryData;
@property (nonatomic) BOOL hasLcState;
@property (nonatomic) BOOL hasMfdEnable;
@property (nonatomic) BOOL hasRestricted;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimeDeltaFromReference;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasUuidReference;
@property (nonatomic) unsigned int lcState;
@property (nonatomic) BOOL mfdEnable;
@property (nonatomic) BOOL restricted;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;

- (id)aid;
- (BOOL)authEnable;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)discretionaryData;
- (BOOL)hasAid;
- (BOOL)hasAuthEnable;
- (BOOL)hasDiscretionaryData;
- (BOOL)hasLcState;
- (BOOL)hasMfdEnable;
- (BOOL)hasRestricted;
- (BOOL)hasStatus;
- (BOOL)hasTimeDeltaFromReference;
- (BOOL)hasTimestamp;
- (BOOL)hasUuidReference;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)lcState;
- (void)mergeFrom:(id)arg1;
- (BOOL)mfdEnable;
- (BOOL)readFrom:(id)arg1;
- (BOOL)restricted;
- (void)setAid:(id)arg1;
- (void)setAuthEnable:(BOOL)arg1;
- (void)setDiscretionaryData:(id)arg1;
- (void)setHasAuthEnable:(BOOL)arg1;
- (void)setHasLcState:(BOOL)arg1;
- (void)setHasMfdEnable:(BOOL)arg1;
- (void)setHasRestricted:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimeDeltaFromReference:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLcState:(unsigned int)arg1;
- (void)setMfdEnable:(BOOL)arg1;
- (void)setRestricted:(BOOL)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned int)status;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end
