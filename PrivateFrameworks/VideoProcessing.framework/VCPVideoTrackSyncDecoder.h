/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoTrackSyncDecoder : VCPVideoTrackDecoder {
    AVAssetReader * _assetReader;
    BOOL  _cancelDecode;
    long  _decodeError;
    BOOL  _decodeFinished;
    int  _decodedFrames;
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_semaphore> * _inputSemaphore;
    long  _launchOnce;
    int  _outputFrameIdx;
    NSObject<OS_dispatch_semaphore> * _outputSemaphore;
    struct opaqueCMSampleBuffer {} * _sampleBuffer;
    AVAssetReaderSampleReferenceOutput * _trackReader;
}

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (void)dealloc;
- (long)decodeSample:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 sample:(struct opaqueCMSampleBuffer {}**)arg2;
- (void)decodeTask;
- (long)findNextSample:(BOOL)arg1 timerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2;
- (id)initWithTrack:(id)arg1;
- (int)status;

@end