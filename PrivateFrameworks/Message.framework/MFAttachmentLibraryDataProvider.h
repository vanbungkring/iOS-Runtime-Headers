/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMailMessageLibrary;

@interface MFAttachmentLibraryDataProvider : NSObject <MFAttachmentDataProvider> {
    MFMailMessageLibrary *_messageLibrary;
}

@property(retain) MFMailMessageLibrary * messageLibrary;

- (void)dealloc;
- (BOOL)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3;
- (id)initWithLibrary:(id)arg1;
- (id)messageForAttachment:(id)arg1;
- (id)messageLibrary;
- (void)setMessageLibrary:(id)arg1;

@end