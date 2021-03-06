/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSSPropertyMap, TSSStyle;

@interface TSSStyleUpdatePropertyMapCommand : TSKCommand <TSDPropagatableCommand> {
    TSSPropertyMap *mNewPropertyMap;
    BOOL mNotifyForStyleClients;
    TSSPropertyMap *mOldPropertyMap;
    TSSStyle *mStyle;
}

@property(readonly) TSSPropertyMap * newPropertyMap;
@property BOOL notifyForStyleClients;
@property(readonly) TSSPropertyMap * oldPropertyMap;
@property(readonly) TSSStyle * style;

- (void)commit;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 style:(id)arg2 propertyMap:(id)arg3;
- (void)loadFromArchive:(const struct StyleUpdatePropertyMapCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; struct Reference {} *x6; boolx7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
- (BOOL)modifiesAnyObjectPassingTest:(id)arg1;
- (id)newPropertyMap;
- (BOOL)notifyForStyleClients;
- (id)objectsUsingStyle;
- (id)oldPropertyMap;
- (void)p_setPropertyMap:(id)arg1;
- (void)p_tssStyleUpdatePropertyMapCommandUnload;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)process;
- (void)redo;
- (void)saveToArchive:(struct StyleUpdatePropertyMapCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; struct Reference {} *x6; boolx7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setNotifyForStyleClients:(BOOL)arg1;
- (id)style;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (void)undo;

@end
