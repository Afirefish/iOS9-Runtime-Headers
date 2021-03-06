/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface _HKDotSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    NSArray * _indices;
    id  _userInfo;
    float  _xValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float endXValue;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *indices;
@property (nonatomic, readonly) float startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id userInfo;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 roundToViewScale:(BOOL)arg2;
- (float)distanceFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)endXValue;
- (void)enumeratePointsWithStepSize:(float)arg1 block:(id /* block */)arg2;
- (id)indices;
- (id)initWithXValue:(float)arg1 indices:(id)arg2 userInfo:(id)arg3;
- (float)startXValue;
- (id)userInfo;
- (float)xAxisDistanceFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)yAxisDistanceFromPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
