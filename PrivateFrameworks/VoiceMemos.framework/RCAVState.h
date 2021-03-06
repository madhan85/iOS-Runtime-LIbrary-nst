/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAVState : NSObject <NSCopying, NSSecureCoding> {
    int _AVCaptureState;
    int _AVPreviewState;
}

@property (nonatomic) int AVCaptureState;
@property (nonatomic) int AVPreviewState;
@property (nonatomic, readonly) BOOL isCaptureActive;
@property (nonatomic, readonly) BOOL isCaptureActiveOrPreparing;
@property (nonatomic, readonly) BOOL isCaptureActiveOrPreparingOrResumable;
@property (nonatomic, readonly) BOOL isCaptureInactive;
@property (nonatomic, readonly) BOOL isCapturePaused;
@property (nonatomic, readonly) BOOL isCapturePreparing;
@property (nonatomic, readonly) BOOL isPreviewActive;
@property (nonatomic, readonly) BOOL isPreviewActiveOrPreparing;
@property (nonatomic, readonly) BOOL isPreviewInactive;
@property (nonatomic, readonly) BOOL isPreviewPreparing;

+ (id)inactiveState;
+ (BOOL)supportsSecureCoding;

- (int)AVCaptureState;
- (int)AVPreviewState;
- (id)_assetStateByChangingToCaptureState:(int)arg1 previewState:(int)arg2;
- (id)_assetStateByTransitioningItermediateStatesToGoalStates;
- (id)assetStateByCaptureState;
- (id)assetStateByChangingToCaptureState:(int)arg1;
- (id)assetStateByChangingToPreviewRate:(float)arg1;
- (id)assetStateByChangingToPreviewState:(int)arg1;
- (id)assetStateByTogglingPreview;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCaptureActive;
- (BOOL)isCaptureActiveOrPreparing;
- (BOOL)isCaptureActiveOrPreparingOrResumable;
- (BOOL)isCaptureInactive;
- (BOOL)isCapturePaused;
- (BOOL)isCapturePreparing;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPreviewActive;
- (BOOL)isPreviewActiveOrPreparing;
- (BOOL)isPreviewInactive;
- (BOOL)isPreviewPreparing;
- (void)setAVCaptureState:(int)arg1;
- (void)setAVPreviewState:(int)arg1;

@end
