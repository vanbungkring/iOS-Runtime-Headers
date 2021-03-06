/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVPlayerItemErrorLog, NSArray, NSData;

@interface MPMovieErrorLog : NSObject <NSCopying> {
    AVPlayerItemErrorLog *_errorLog;
}

@property(readonly) NSArray * events;
@property(readonly) NSData * extendedLogData;
@property(readonly) unsigned int extendedLogDataStringEncoding;

- (void).cxx_destruct;
- (id)_initWithAVItemErrorLog:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)events;
- (id)extendedLogData;
- (unsigned int)extendedLogDataStringEncoding;

@end
