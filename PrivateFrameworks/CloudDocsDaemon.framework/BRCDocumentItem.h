/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDocumentItem : BRCLocalItem {
    BRCLocalVersion *_currentVersion;
    BRCDesiredVersion *_desiredVersion;
    NSMutableSet *_liveConflictLoserEtags;
    NSMutableSet *_resolvedConflictLoserEtags;
}

@property (nonatomic, readonly) NSString *UTI;
@property (nonatomic, readonly) BRCItemID *aliasItemID;
@property (nonatomic, readonly) BRCAliasItem *asAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic, readonly) NSString *bookmarkData;
@property (nonatomic, readonly) NSDictionary *conflictLoserState;
@property (nonatomic, readonly) BRCLocalVersion *currentVersion;
@property (nonatomic, readonly) BRCDesiredVersion *desiredVersion;
@property (nonatomic, readonly) unsigned int downloadStatus;
@property (nonatomic, readonly) BOOL hasLocalContent;
@property (nonatomic, readonly) BOOL isAutomaticallyEvictable;
@property (nonatomic, readonly) BOOL isDownloadRequested;
@property (nonatomic, readonly) BOOL isEvictable;
@property (nonatomic, readonly) BOOL isInTransfer;
@property (nonatomic, readonly) BOOL isVisibleIniCloudDrive;
@property (nonatomic, retain) NSSet *liveConflictLoserEtags;
@property (nonatomic, readonly) unsigned int queryItemStatus;
@property (nonatomic, readonly) NSSet *resolvedConflictLoserEtags;
@property (nonatomic, readonly) BOOL shouldBeGreedy;
@property (nonatomic, readonly) BOOL shouldHaveThumbnail;
@property (nonatomic, readonly) BOOL shouldTransferThumbnail;
@property (nonatomic, readonly) NSString *unsaltedBookmarkData;
@property (nonatomic, readonly) unsigned int uploadStatus;

+ (id)bookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2;
+ (id)bookmarkDataWithRelativePath:(id)arg1;
+ (id)itemResolutionStringWithRelativePath:(id)arg1;
+ (BOOL)parseBookmarkData:(id)arg1 inAccountSession:(id)arg2 docID:(id*)arg3 itemID:(id*)arg4 mangledID:(id*)arg5 unsaltedBookmarkData:(id*)arg6 error:(id*)arg7;
+ (struct PQLResultSet { Class x1; }*)reverseAliasEnumeratorWithRelativePath:(id)arg1;
+ (struct PQLResultSet { Class x1; }*)reverseAliasEnumeratorWithUnsaltedBookmarkData:(id)arg1 session:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)unsaltedBookmarkDataWithItemResolutionString:(id)arg1 serverZone:(id)arg2;
+ (id)unsaltedBookmarkDataWithRelativePath:(id)arg1;

- (void).cxx_destruct;
- (id)UTI;
- (BOOL)_deleteFromDB:(id)arg1 diffs:(unsigned long long)arg2 keepAliases:(BOOL)arg3;
- (id)_initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initWithRelativePath:(id)arg1 parentID:(id)arg2;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (BOOL)_isInterestingUpdateForNotifs;
- (BOOL)_isSmallAndMostRecentClientsGenerateThumbnails;
- (BOOL)_nukeVersionsFromDB:(id)arg1;
- (BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (void)_updateLiveConflictLoserFromFSAtPath:(id)arg1;
- (void)_updateReadThrottleIfNeededForRowID:(unsigned long long)arg1 forCreation:(BOOL)arg2;
- (void)_updateUploadThrottleIfNeededWithDiffs:(unsigned long long)arg1;
- (void)addResolvedConflictLoserEtag:(id)arg1;
- (id)aliasItemID;
- (void)appDidResolveConflictLoserWithEtag:(id)arg1;
- (id)asDocument;
- (id)bookmarkData;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (void)clearDesiredVersion;
- (void)clearFromStage;
- (void)clearVersionSignatures:(unsigned int)arg1 isPackage:(BOOL)arg2;
- (id)conflictLoserState;
- (id)contentsRecordID;
- (id)currentVersion;
- (id)descriptionWithContext:(id)arg1;
- (id)desiredVersion;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (unsigned int)downloadStatus;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evictWithGroup:(id)arg1 error:(id*)arg2;
- (void)forceVersionConflictByClearkingCKInfo;
- (void)forceiWorkConflictEtag:(id)arg1;
- (void)handleUnknownItemError;
- (BOOL)hasLocalContent;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAutomaticallyEvictable;
- (BOOL)isDocument;
- (BOOL)isDownloadRequested;
- (BOOL)isEvictable;
- (BOOL)isFault;
- (BOOL)isInTransfer;
- (BOOL)isPackage;
- (BOOL)isSharedByMe;
- (BOOL)isSharedByMeWithAShareID;
- (BOOL)isVisibleIniCloudDrive;
- (id)itemResolutionString;
- (void)learnItemID:(id)arg1 ownerKey:(id)arg2 path:(id)arg3 markLost:(BOOL)arg4;
- (void)learnThumbnailSignatureFromVersion:(id)arg1;
- (id)liveConflictLoserEtags;
- (void)markDead;
- (void)markForceNeedsSyncUp;
- (void)markForceUpload;
- (void)markLatestRequestAcknowledged;
- (void)markLatestSyncRequestRejected;
- (void)markLiveFromStage;
- (void)markNeedsReading;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;
- (void)markOverQuotaWithError:(id)arg1;
- (void)markUploadedWithRecord:(id)arg1;
- (float)prepareDeletionSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2;
- (unsigned int)queryItemStatus;
- (void)refreshLosersListIfNeededAtPath:(id)arg1;
- (void)removeLiveConflictLoserEtag:(id)arg1;
- (id)resolvedConflictLoserEtags;
- (struct PQLResultSet { Class x1; }*)reverseAliasEnumerator;
- (void)setLiveConflictLoserEtags:(id)arg1;
- (id)setOfContainersIDsWithReverseAliases;
- (int)setVersionToStage:(id)arg1 diffsWithServerItem:(unsigned long long)arg2 options:(unsigned int)arg3 needsSave:(BOOL*)arg4;
- (BOOL)shouldBeGreedy;
- (BOOL)shouldHaveThumbnail;
- (BOOL)shouldTransferThumbnail;
- (void)stageFaultForCreation:(BOOL)arg1 serverItem:(id)arg2;
- (void)startDownloadWithOptions:(unsigned int)arg1 group:(id)arg2;
- (id)unsaltedBookmarkData;
- (void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)arg1;
- (BOOL)updateFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (void)updateVersionMetadataFromServerItem:(id)arg1 preventVersionDiffs:(BOOL)arg2;
- (BOOL)updateXattrInfoFromPathPath:(id)arg1 error:(id*)arg2;
- (unsigned int)uploadStatus;
- (BOOL)validateLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

@end
