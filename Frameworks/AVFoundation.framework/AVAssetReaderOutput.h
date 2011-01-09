/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetReaderOutputInternal;



@interface AVAssetReaderOutput : NSObject 
{
    AVAssetReaderOutputInternal *_internal;
}

@property(readonly) NSString *mediaType;


- (id)mediaType;
- (void)finalize;
- (id)init;
- (id)retain;
- (void)release;
- (void)dealloc;
- (NSInteger)_status;
- (struct OpaqueFigAssetReader { }*)_figAssetReader;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader { }*)arg1;
- (NSInteger)_extractionID;
- (void)_setExtractionID:(NSInteger)arg1;
- (id)_figAssetReaderExtractionOptions;
- (BOOL)_prepareForReadingReturningError:(id*)arg1;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(NSInteger)arg1;
- (void)_figAssetReaderDecodeError;
- (BOOL)_trimsSampleDurations;
- (BOOL)_enableTrackExtractionReturningError:(id*)arg1;
- (void)_cancelReading;
- (id)_asset;
- (void)_setStatus:(NSInteger)arg1;

@end