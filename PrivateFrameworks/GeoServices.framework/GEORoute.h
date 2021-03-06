/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoute : PBCodable <NSCopying> {
    NSMutableArray * _advisoryNotices;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _advisorys;
    NSData * _arrivalRouteID;
    unsigned int  _arrivalStepID;
    NSData * _basicPoints;
    NSData * _departureRouteID;
    unsigned int  _departureStepID;
    unsigned int  _distance;
    int  _drivingSide;
    unsigned int  _expectedTime;
    struct { 
        unsigned int arrivalStepID : 1; 
        unsigned int departureStepID : 1; 
        unsigned int distance : 1; 
        unsigned int drivingSide : 1; 
        unsigned int expectedTime : 1; 
        unsigned int historicTravelTime : 1; 
        unsigned int routeType : 1; 
        unsigned int transportType : 1; 
        unsigned int travelTimeAggressiveEstimate : 1; 
        unsigned int travelTimeConservativeEstimate : 1; 
    }  _has;
    unsigned int  _historicTravelTime;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _incidentEndOffsetsInRoutes;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _incidentIndices;
    NSString * _name;
    NSString * _phoneticName;
    NSData * _routeID;
    NSMutableArray * _routeNames;
    int  _routeType;
    NSMutableArray * _steps;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _trafficColorOffsets;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _trafficColors;
    int  _transportType;
    unsigned int  _travelTimeAggressiveEstimate;
    unsigned int  _travelTimeConservativeEstimate;
    NSData * _unpackedLatLngVertices;
    NSData * _zilchPoints;
}

@property (nonatomic, retain) NSMutableArray *advisoryNotices;
@property (nonatomic, readonly) int*advisorys;
@property (nonatomic, readonly) unsigned int advisorysCount;
@property (nonatomic, retain) NSData *arrivalRouteID;
@property (nonatomic) unsigned int arrivalStepID;
@property (nonatomic, retain) NSData *basicPoints;
@property (nonatomic, retain) NSData *departureRouteID;
@property (nonatomic) unsigned int departureStepID;
@property (nonatomic) unsigned int distance;
@property (nonatomic) int drivingSide;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic, readonly) BOOL hasArrivalRouteID;
@property (nonatomic) BOOL hasArrivalStepID;
@property (nonatomic, readonly) BOOL hasBasicPoints;
@property (nonatomic, readonly) BOOL hasDepartureRouteID;
@property (nonatomic) BOOL hasDepartureStepID;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasDrivingSide;
@property (nonatomic) BOOL hasExpectedTime;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic, readonly) BOOL hasPhoneticName;
@property (nonatomic, readonly) BOOL hasRouteID;
@property (nonatomic) BOOL hasRouteType;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property (nonatomic, readonly) BOOL hasUnpackedLatLngVertices;
@property (nonatomic, readonly) BOOL hasZilchPoints;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic, readonly) unsigned int*incidentEndOffsetsInRoutes;
@property (nonatomic, readonly) unsigned int incidentEndOffsetsInRoutesCount;
@property (nonatomic, readonly) unsigned int*incidentIndices;
@property (nonatomic, readonly) unsigned int incidentIndicesCount;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *phoneticName;
@property (readonly) unsigned int pointCount;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic, retain) NSMutableArray *routeNames;
@property (nonatomic) int routeType;
@property (nonatomic, retain) NSMutableArray *steps;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned int trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int*trafficColors;
@property (nonatomic, readonly) unsigned int trafficColorsCount;
@property (nonatomic) int transportType;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (nonatomic, retain) NSData *unpackedLatLngVertices;
@property (nonatomic, retain) NSData *zilchPoints;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)addAdvisory:(int)arg1;
- (void)addAdvisoryNotice:(id)arg1;
- (void)addIncidentEndOffsetsInRoute:(unsigned int)arg1;
- (void)addIncidentIndices:(unsigned int)arg1;
- (void)addRouteName:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (int)advisoryAtIndex:(unsigned int)arg1;
- (id)advisoryNoticeAtIndex:(unsigned int)arg1;
- (id)advisoryNotices;
- (unsigned int)advisoryNoticesCount;
- (int*)advisorys;
- (unsigned int)advisorysCount;
- (id)arrivalRouteID;
- (unsigned int)arrivalStepID;
- (id)basicPoints;
- (void)clearAdvisoryNotices;
- (void)clearAdvisorys;
- (void)clearIncidentEndOffsetsInRoutes;
- (void)clearIncidentIndices;
- (void)clearRouteNames;
- (void)clearSteps;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (void*)controlPoints;
- (id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(BOOL)arg2 uniquePointRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)departureRouteID;
- (unsigned int)departureStepID;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (unsigned int)distanceFromStepIndex:(unsigned int)arg1 toStepIndex:(unsigned int)arg2;
- (int)drivingSide;
- (unsigned int)expectedTime;
- (BOOL)hasArrivalRouteID;
- (BOOL)hasArrivalStepID;
- (BOOL)hasBasicPoints;
- (BOOL)hasDepartureRouteID;
- (BOOL)hasDepartureStepID;
- (BOOL)hasDistance;
- (BOOL)hasDrivingSide;
- (BOOL)hasExpectedTime;
- (BOOL)hasHistoricTravelTime;
- (BOOL)hasName;
- (BOOL)hasPhoneticName;
- (BOOL)hasRouteID;
- (BOOL)hasRouteType;
- (BOOL)hasTransportType;
- (BOOL)hasTravelTimeAggressiveEstimate;
- (BOOL)hasTravelTimeConservativeEstimate;
- (BOOL)hasUnpackedLatLngVertices;
- (BOOL)hasZilchPoints;
- (unsigned int)hash;
- (unsigned int)historicTravelTime;
- (unsigned int)incidentEndOffsetsInRouteAtIndex:(unsigned int)arg1;
- (unsigned int*)incidentEndOffsetsInRoutes;
- (unsigned int)incidentEndOffsetsInRoutesCount;
- (unsigned int*)incidentIndices;
- (unsigned int)incidentIndicesAtIndex:(unsigned int)arg1;
- (unsigned int)incidentIndicesCount;
- (unsigned int)indexForStepID:(unsigned int)arg1;
- (BOOL)isContingentRouteFor:(id)arg1 afterPoint:(unsigned int)arg2 mainRoutes:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)newETARoute;
- (id)newETARouteFromStepIndex:(unsigned int)arg1 stepPercentRemaining:(double)arg2;
- (id)phoneticName;
- (struct { double x1; double x2; })pointAt:(unsigned int)arg1;
- (unsigned int)pointCount;
- (BOOL)readFrom:(id)arg1;
- (id)routeID;
- (id)routeNameAtIndex:(unsigned int)arg1;
- (id)routeNames;
- (unsigned int)routeNamesCount;
- (int)routeType;
- (void)setAdvisoryNotices:(id)arg1;
- (void)setAdvisorys:(int*)arg1 count:(unsigned int)arg2;
- (void)setArrivalRouteID:(id)arg1;
- (void)setArrivalStepID:(unsigned int)arg1;
- (void)setBasicPoints:(id)arg1;
- (void)setDepartureRouteID:(id)arg1;
- (void)setDepartureStepID:(unsigned int)arg1;
- (void)setDistance:(unsigned int)arg1;
- (void)setDrivingSide:(int)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setHasArrivalStepID:(BOOL)arg1;
- (void)setHasDepartureStepID:(BOOL)arg1;
- (void)setHasDistance:(BOOL)arg1;
- (void)setHasDrivingSide:(BOOL)arg1;
- (void)setHasExpectedTime:(BOOL)arg1;
- (void)setHasHistoricTravelTime:(BOOL)arg1;
- (void)setHasRouteType:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1;
- (void)setHasTravelTimeConservativeEstimate:(BOOL)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setIncidentEndOffsetsInRoutes:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setIncidentIndices:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setName:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteNames:(id)arg1;
- (void)setRouteType:(int)arg1;
- (void)setSteps:(id)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setTransportType:(int)arg1;
- (void)setTravelTimeAggressiveEstimate:(unsigned int)arg1;
- (void)setTravelTimeConservativeEstimate:(unsigned int)arg1;
- (void)setUnpackedLatLngVertices:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (id)simplifiedDescription;
- (id)stepAtIndex:(unsigned int)arg1;
- (unsigned int)stepIndexForPointIndex:(unsigned int)arg1;
- (id)steps;
- (unsigned int)stepsCount;
- (unsigned int)trafficColorAtIndex:(unsigned int)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned int)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned int)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned int)trafficColorsCount;
- (int)transportType;
- (int)transportTypeForStep:(id)arg1;
- (unsigned int)travelTimeAggressiveEstimate;
- (unsigned int)travelTimeConservativeEstimate;
- (BOOL)unpackBasicPoints;
- (BOOL)unpackLatLngVertices;
- (BOOL)unpackZilchPoints;
- (id)unpackedLatLngVertices;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)instructionsForStep:(id)arg1;
- (id)maneuverImageForStep:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 scale:(float)arg3;

@end
