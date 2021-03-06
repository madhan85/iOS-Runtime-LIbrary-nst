/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitExtensions.framework/HealthKitExtensions
 */

@interface HKCurrentActivityCacheQuery : HKQuery {
    HKActivityCache *_lastActivityCache;
    id /* block */ _updateHandler;
}

@property (nonatomic, retain) HKActivityCache *lastActivityCache;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (id /* block */)_queue_errorHandler;
- (BOOL)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)deliverSample:(id)arg1 forQuery:(id)arg2;
- (id)initWithUpdateHandler:(id /* block */)arg1;
- (id)lastActivityCache;
- (void)setLastActivityCache:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

@end
