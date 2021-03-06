/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMockDaemon : NSObject <HDHealthDaemon> {
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    HDContentProtectionManager *_contentProtectionManager;
    <HDHealthDataCollectionManager> *_healthDataCollectionManager;
    <HDHealthDataManager> *_healthDataManager;
    <HDHealthDatabase> *_healthDatabase;
    <HDDaemonDeviceManager> *_healthDeviceManager;
    <HDHealthMetadataManager> *_healthMetadataManager;
    HDDeviceManager *_healthSourceDeviceManager;
    HDSourceManager *_healthSourceManager;
    HDPluginManager *_pluginManager;
    <HDSyncEngine> *_syncEngine;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    HDAuthorizationManager *authorizationManager;
    HDDataProvenanceManager *dataProvenanceManager;
    HDDatabasePruningManager *databasePruningManager;
    HDNanoSyncManager *nanoSyncManager;
    HDProcessStateManager *processStateManager;
    HDUnitPreferencesManager *unitPreferencesManager;
    <HDViewOnWakeService> *viewOnWakeService;
    HDWorkoutManager *workoutManager;
}

@property (nonatomic, readonly) HDAuthorizationManager *authorizationManager;
@property (retain) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (retain) HDContentProtectionManager *contentProtectionManager;
@property (readonly) HDDataProvenanceManager *dataProvenanceManager;
@property (nonatomic, readonly) HDDatabasePruningManager *databasePruningManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) <HDHealthDataCollectionManager> *healthDataCollectionManager;
@property (retain) <HDHealthDataManager> *healthDataManager;
@property (retain) <HDHealthDatabase> *healthDatabase;
@property (retain) <HDDaemonDeviceManager> *healthDeviceManager;
@property (retain) <HDHealthMetadataManager> *healthMetadataManager;
@property (retain) HDDeviceManager *healthSourceDeviceManager;
@property (retain) HDSourceManager *healthSourceManager;
@property (readonly) NSString *homeDirectoryPath;
@property (readonly) BOOL isAppleWatch;
@property (nonatomic, readonly) HDNanoSyncManager *nanoSyncManager;
@property (retain) HDPluginManager *pluginManager;
@property (readonly) HDProcessStateManager *processStateManager;
@property (readonly) Class superclass;
@property (retain) <HDSyncEngine> *syncEngine;
@property (nonatomic, readonly) HDUnitPreferencesManager *unitPreferencesManager;
@property (retain) HDUserCharacteristicsManager *userCharacteristicsManager;
@property (nonatomic, retain) <HDViewOnWakeService> *viewOnWakeService;
@property (nonatomic, retain) HDWorkoutManager *workoutManager;

- (void).cxx_destruct;
- (id)authorizationManager;
- (id)backgroundTaskScheduler;
- (void)beginTransaction:(id)arg1;
- (id)contentProtectionManager;
- (id)dataProvenanceManager;
- (id)databasePruningManager;
- (void)didUpdateActiveWorkoutServers;
- (void)endTransaction:(id)arg1;
- (BOOL)hasAnyActiveWorkouts;
- (id)healthDataCollectionManager;
- (id)healthDataManager;
- (id)healthDatabase;
- (id)healthDeviceManager;
- (id)healthMetadataManager;
- (id)healthSourceDeviceManager;
- (id)healthSourceManager;
- (id)homeDirectoryPath;
- (void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1;
- (BOOL)isAppleWatch;
- (id)nanoSyncManager;
- (void)pauseAllActiveWorkoutsWithCompletion:(id /* block */)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(id /* block */)arg4;
- (BOOL)persistAndNotifyDataObject:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (BOOL)persistAndNotifyDataObjects:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)pluginManager;
- (id)processStateManager;
- (void)registerForDaemonReady:(id)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)setBackgroundTaskScheduler:(id)arg1;
- (void)setContentProtectionManager:(id)arg1;
- (void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4;
- (void)setHealthDataCollectionManager:(id)arg1;
- (void)setHealthDataManager:(id)arg1;
- (void)setHealthDatabase:(id)arg1;
- (void)setHealthDeviceManager:(id)arg1;
- (void)setHealthMetadataManager:(id)arg1;
- (void)setHealthSourceDeviceManager:(id)arg1;
- (void)setHealthSourceManager:(id)arg1;
- (void)setPairedWatchBundleIdentifierProvider:(id)arg1;
- (void)setPluginManager:(id)arg1;
- (void)setSyncEngine:(id)arg1;
- (void)setUserCharacteristicsManager:(id)arg1;
- (void)setViewOnWakeService:(id)arg1;
- (void)setWorkoutManager:(id)arg1;
- (void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(int)arg2 timeoutUntilDate:(id)arg3;
- (id)syncEngine;
- (void)syncImmediatelyWithReason:(id)arg1;
- (void)terminate;
- (id)unitPreferencesManager;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)updateActivityCacheForNewWorkoutSamples;
- (id)userCharacteristicsManager;
- (id)viewOnWakeService;
- (id)workoutManager;

@end
