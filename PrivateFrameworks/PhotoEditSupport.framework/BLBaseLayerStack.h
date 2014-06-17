/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class BLPixelImageBuffer, UIImage, NSDictionary, NSMutableArray;

@interface BLBaseLayerStack : NSObject  {
    NSMutableArray *_layers;
    double _brushSize;
    double _brushSoftness;
    struct CGImage { } *_brushImageRef;
    bool_shouldNotify;
    int _maskLongEdgeSize;
    struct CGSize { 
        double width; 
        double height; 
    } _maskSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _viewToMaskTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _inverseViewToMaskTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _flippedViewToMaskTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _inverseFlippedViewToMaskTransform;
}

@property(readonly) NSMutableArray * layers;
@property struct CGSize { double x1; double x2; } maskSize;
@property(retain) BLPixelImageBuffer * workingImageBuffer;
@property(retain) UIImage * workingImage;
@property double workingImageScaleFactor;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } viewToMaskTransform;
@property(readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } inverseViewToMaskTransform;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } flippedViewToMaskTransform;
@property(readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } inverseFlippedViewToMaskTransform;
@property int maskLongEdgeSize;
@property bool shouldNotify;
@property NSDictionary * strokesDataDictionary;


- (bool)shouldNotify;
- (void)setMaskLongEdgeSize:(int)arg1;
- (int)maskLongEdgeSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })inverseFlippedViewToMaskTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })flippedViewToMaskTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })inverseViewToMaskTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })viewToMaskTransform;
- (void)setMaskSize:(struct CGSize { double x1; double x2; })arg1;
- (double)maskArea;
- (bool)readyToDraw;
- (bool)haveLayerMask;
- (id)strokesDataDictionary;
- (void)setWorkingImageScaleFactor:(double)arg1;
- (double)workingImageScaleFactor;
- (id)workingImage;
- (id)workingImageBuffer;
- (struct CGImage { }*)brushImageRefWithSize:(float)arg1 softness:(float)arg2;
- (void)setShouldNotify:(bool)arg1;
- (id)imageLayer;
- (id)layers;
- (void)setWorkingImageBuffer:(id)arg1;
- (struct CGImage { }*)newImageForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (void)setFlippedViewToMaskTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewToMaskTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGSize { double x1; double x2; })maskSize;
- (void)setWorkingImage:(id)arg1;
- (void)setStrokesDataDictionary:(id)arg1;
- (double)timestamp;
- (void)dealloc;

@end