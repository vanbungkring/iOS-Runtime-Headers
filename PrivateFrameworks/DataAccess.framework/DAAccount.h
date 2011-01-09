/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary;



@interface DAAccount : NSObject 
{
    NSMutableDictionary *_configuration;
    NSInteger _accountTypes;
    BOOL _hasDirtyBits;
    BOOL _hasInitted;
    BOOL _shouldPromptForPassword;
    BOOL _shouldFailAllTasks;
    NSInteger _originalAccountTypes;
    NSInteger _contactsChangeType;
    NSInteger _calendarChangeType;
}

@property(copy) NSString *version;
@property(copy,readonly) NSString *tag;
@property(copy) NSString *accountDescription;
@property(copy) NSString *username;
@property(copy) NSString *host;
@property NSInteger port;
@property(copy) NSString *password;
@property BOOL useSSL;
@property BOOL allowAnyRootCert;
@property(copy) NSString *emailAddress;
@property BOOL shouldPromptForPassword;
@property BOOL shouldFailAllTasks;

+ (Class)accountClass;
+ (Class)accountClassWithConfiguration:(id)arg1;
+ (Class)clientClass;
+ (Class)daemonClass;
+ (void)vendDaemons;
+ (id)accountWithConfiguration:(id)arg1;
+ (id)newEASAccount;

- (void)dealloc;
- (id)_initWithConfiguration:(id)arg1;
- (id)init;
- (id)configuration;
- (void)resetAccountID;
- (id)accountID;
- (id)tag;
- (void)_setTag:(id)arg1;
- (id)accountDescription;
- (void)setAccountDescription:(id)arg1;
- (BOOL)supportsAccountType:(NSInteger)arg1;
- (BOOL)enabledForAccountType:(NSInteger)arg1;
- (void)setEnabled:(BOOL)arg1 forAccountType:(NSInteger)arg2 changeType:(NSInteger)arg3;
- (BOOL)originallyEnabledForAccountType:(NSInteger)arg1;
- (NSInteger)accountChangeTypeForAccountType:(NSInteger)arg1;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (void)cancelAutodiscovery;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (id)stateString;
- (void)takeValuesFromAccount:(id)arg1;
- (void)checkValidityWithConsumer:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (BOOL)useSSL;
- (void)setUseSSL:(BOOL)arg1;
- (BOOL)allowAnyRootCert;
- (void)setAllowAnyRootCert:(BOOL)arg1;
- (NSInteger)allowAnyRootCertFromHost:(id)arg1;
- (void)setAllowAnyRootCert:(BOOL)arg1 fromHost:(id)arg2;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (void)saveAccountSettings;
- (void)cleanupAccountFiles;
- (NSInteger)port;
- (void)setPort:(NSInteger)arg1;
- (BOOL)shouldPromptForPassword;
- (void)setShouldPromptForPassword:(BOOL)arg1;
- (BOOL)shouldFailAllTasks;
- (void)setShouldFailAllTasks:(BOOL)arg1;
- (BOOL)hasCredentials;
- (void)_setConfiguration:(id)arg1;
- (BOOL)hasDirtyBits;
- (void)tearDown;
- (BOOL)monitorFoldersWithIDs:(id)arg1;
- (BOOL)monitorFolderWithID:(id)arg1;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (void)stopMonitoringFolders;
- (BOOL)resetCertWarnings;
- (BOOL)isActiveSyncAccount;
- (id)defaultCalendarFolder;
- (id)calendarFolders;
- (void)synchronizeCalendarFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(struct { NSInteger x1; NSInteger x2; NSInteger x3; }*)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (void)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (id)defaultContactsFolder;
- (id)contactsFolders;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(struct { NSInteger x1; }*)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (id)inboxFolder;
- (id)sentItemsFolder;
- (id)deletedItemsFolder;
- (void)performSearchQuery:(id)arg1 consumer:(id)arg2;
- (void)cancelSearchQuery:(id)arg1;
- (void)cancelAllSearchQueries;
- (BOOL)searchQueriesRunning;

@end