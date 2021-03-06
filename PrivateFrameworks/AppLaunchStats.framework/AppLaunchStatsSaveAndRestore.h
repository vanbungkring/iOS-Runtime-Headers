/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSUserDefaults;

@interface AppLaunchStatsSaveAndRestore : NSObject {
    NSObject<OS_dispatch_queue> *aplsSaveAndRestoreQueue;
    boolallowSave;
    boolhasSavedData;
    NSUserDefaults *saveRestoreDefaults;
    NSMutableArray *saveRestoreObjects;
}

@property bool allowSave;
@property(readonly) bool hasSavedData;

- (void).cxx_destruct;
- (void)addDataSource:(id)arg1;
- (bool)allowSave;
- (void)createBasicStoreStructure;
- (id)getDict:(id)arg1;
- (id)getList:(id)arg1;
- (id)getString:(id)arg1;
- (bool)hasSavedData;
- (id)init;
- (void)quickSave:(id)arg1 forKey:(id)arg2;
- (void)restoreAll;
- (void)saveAll;
- (void)saveState:(id)arg1 withKey:(id)arg2;
- (void)setAllowSave:(bool)arg1;

@end
