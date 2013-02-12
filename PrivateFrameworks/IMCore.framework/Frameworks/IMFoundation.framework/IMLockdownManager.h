/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMLockdownManager : NSObject {
    BOOL _hasShownMismatchedSIM;
    BOOL _hasShownWaitingAlertThisSession;
    NSString *_inverseDeviceIdentifier;
    BOOL _isBricked;
    BOOL _isCarrierInstall;
    BOOL _isInternalInstall;
    BOOL _settingUpActivationState;
    int _state;
    NSString *_unqiueDeviceIdentifier;
}

@property BOOL _hasShownMismatchedSIM;
@property BOOL _hasShownWaitingAlertThisSession;
@property(retain) NSString * _inverseDeviceIdentifier;
@property BOOL _isBricked;
@property BOOL _isCarrierInstall;
@property BOOL _isInternalInstall;
@property BOOL _settingUpActivationState;
@property int _state;
@property(retain) NSString * _unqiueDeviceIdentifier;
@property(readonly) BOOL brickedDevice;
@property(readonly) NSString * inverseDeviceIdentifier;
@property(readonly) BOOL isCarrierInstall;
@property(readonly) BOOL isInternalInstall;
@property(readonly) int lockdownState;
@property(readonly) NSString * uniqueDeviceIdentifier;

+ (id)sharedInstance;

- (void)_activationFailed;
- (BOOL)_hasEverRegistered;
- (BOOL)_hasShownMismatchedSIM;
- (BOOL)_hasShownWaitingAlertThisSession;
- (id)_inverseDeviceIdentifier;
- (BOOL)_isBricked;
- (BOOL)_isCarrierInstall;
- (BOOL)_isInternalInstall;
- (void)_resetActivationState;
- (void)_setHasEverRegistered:(BOOL)arg1;
- (BOOL)_settingUpActivationState;
- (void)_setupActivationState;
- (int)_state;
- (id)_unqiueDeviceIdentifier;
- (BOOL)allowsWeakReference;
- (BOOL)brickedDevice;
- (BOOL)clientCanAcccessPath:(id)arg1;
- (BOOL)clientCanAcccessPreferenceDomain:(id)arg1;
- (struct __SecIdentity { }*)copyIdentity;
- (void)dealloc;
- (id)init;
- (id)inverseDeviceIdentifier;
- (BOOL)isCarrierInstall;
- (BOOL)isInternalInstall;
- (int)lockdownState;
- (BOOL)retainWeakReference;
- (void)set_hasShownMismatchedSIM:(BOOL)arg1;
- (void)set_hasShownWaitingAlertThisSession:(BOOL)arg1;
- (void)set_inverseDeviceIdentifier:(id)arg1;
- (void)set_isBricked:(BOOL)arg1;
- (void)set_isCarrierInstall:(BOOL)arg1;
- (void)set_isInternalInstall:(BOOL)arg1;
- (void)set_settingUpActivationState:(BOOL)arg1;
- (void)set_state:(int)arg1;
- (void)set_unqiueDeviceIdentifier:(id)arg1;
- (id)uniqueDeviceIdentifier;
- (id)valueForDomain:(id)arg1 key:(id)arg2;

@end