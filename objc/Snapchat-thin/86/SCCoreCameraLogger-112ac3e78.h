// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCoreCameraLogger
// Superclass: NSObject
// Address: 0x112ac3e78

@interface SCCoreCameraLogger

// Property: ccdStartDate; attributes: T@"NSDate",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCoreCameraLogger initWithCameraLoggingServices:lazyLensLogger:cameraUserLoggingServices:startupInfoService:userLocationServices:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1060866b8

// -[SCCoreCameraLogger ccdStartDate]
// Type encoding: @16@0:8
// Implementation: 0x106086984

// -[SCCoreCameraLogger logCameraCreationDelayEventStartWithCaptureSessionId:filterLensId:underLowLightCondition:lightingCondition:isNightModeActive:isBackCamera:isMainCamera:isFlashEnabled:exposureBias:deviceType:activeCameraModes:captureRingStyle:cameraType:flashMode:]
// Type encoding: v108@0:8@16@24B32q36B44B48B52B56@60@68@76q84q92q100
// Implementation: 0x106086994

// -[SCCoreCameraLogger _logCameraCreationDelayEventStartWithCaptureSessionId:filterLensId:underLowLightCondition:lightingCondition:isNightModeActive:isBackCamera:isMainCamera:isFlashEnabled:exposureBias:deviceType:startTime:startDate:activeCameraModes:captureRingStyle:cameraType:flashMode:]
// Type encoding: v124@0:8@16@24B32q36B44B48B52B56@60@68d76@84@92q100q108q116
// Implementation: 0x106086c7c

// -[SCCoreCameraLogger logCameraCreationDelayNormalizedMotionValue:isConsideredInMotion:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x106087120

// -[SCCoreCameraLogger _logCameraCreationDelayNormalizedMotionValue:isConsideredInMotion:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x106087220

// -[SCCoreCameraLogger logCameraModeUsageOnCameraRecordingDelayEventWithTimerModeActive:batchCaptureModeActive:timelineModeActive:musicModeActive:speedModeActive:speedModeRecordingSpeed:directorModeActive:]
// Type encoding: v48@0:8B16B20B24B28B32d36B44
// Implementation: 0x1060872b4

// -[SCCoreCameraLogger _logCameraModeUsageOnCameraRecordingDelayEventWithTimerModeActive:batchCaptureModeActive:timelineModeActive:musicModeActive:speedModeActive:speedModeRecordingSpeed:directorModeActive:]
// Type encoding: v48@0:8B16B20B24B28B32d36B44
// Implementation: 0x106087400

// -[SCCoreCameraLogger logCameraCreationDelaySplitPointRecordingGestureFinished]
// Type encoding: v16@0:8
// Implementation: 0x1060875f8

// -[SCCoreCameraLogger _logCameraCreationDelaySplitPointRecordingGestureFinishedAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1060876e8

// -[SCCoreCameraLogger updatedCameraCreationDelayWithContentDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x1060877dc

// -[SCCoreCameraLogger _updatedCameraCreationDelayWithContentDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x1060878c8

// -[SCCoreCameraLogger updatedCameraCreationDelayWithBufferedFrameCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x106087928

// -[SCCoreCameraLogger _updatedCameraCreationDelayWithBufferedFrameCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x106087a34

// -[SCCoreCameraLogger logCameraCreationDelayBracketCaptureSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x106087a48

// -[SCCoreCameraLogger _logCameraCreationDelayBracketCaptureSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x106087b54

// -[SCCoreCameraLogger logCameraCreationDelaySplitPointStartImageCaptureWithSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x106087c30

// -[SCCoreCameraLogger _logCameraCreationDelaySplitPointStartImageCaptureWithSettings:time:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106087d54

// -[SCCoreCameraLogger logCameraCreationDelaySplitPointDidCapturePhotoWithResolvedSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x106087e40

// -[SCCoreCameraLogger logCaptureResultResolution:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x106087f64

// -[SCCoreCameraLogger _logCaptureResultResolution:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x106088054

// -[SCCoreCameraLogger logCameraCreationDelayFingerDownCapture]
// Type encoding: v16@0:8
// Implementation: 0x1060880f0

// -[SCCoreCameraLogger _logCameraCreationDelayFingerDownCapture]
// Type encoding: v16@0:8
// Implementation: 0x1060881c4

// -[SCCoreCameraLogger _logCameraCreationDelaySplitPointDidCapturePhotoWithResolvedSettings:time:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1060881e0

// -[SCCoreCameraLogger logCameraCreationDelaySplitPointPreviewPresentationComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x10608861c

// -[SCCoreCameraLogger _logCameraCreationDelaySplitPointPreviewPresentationComplete:time:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x106088720

// -[SCCoreCameraLogger logCameraCreationDelaySplitPointPreviewFirstFramePlayed:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060887ac

// -[SCCoreCameraLogger _logCameraCreationDelaySplitPointPreviewFirstFramePlayed:time:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x1060888b0

// -[SCCoreCameraLogger logCameraCreationDelaySplitPoint:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608893c

// -[SCCoreCameraLogger logCameraCreationDelaySplitPoint:atTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106088a60

// -[SCCoreCameraLogger startSegmentation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106088b80

// -[SCCoreCameraLogger _startSegmentation:time:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106088ca4

// -[SCCoreCameraLogger endSegmentation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106088d5c

// -[SCCoreCameraLogger _endSegmentation:time:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106088e80

// -[SCCoreCameraLogger cancelCameraCreationDelayEvent]
// Type encoding: v16@0:8
// Implementation: 0x106088f74

// -[SCCoreCameraLogger _cancelCameraCreationDelayEvent]
// Type encoding: v16@0:8
// Implementation: 0x106089048

// -[SCCoreCameraLogger cameraCreationDelayCompletionTimeObservable]
// Type encoding: @16@0:8
// Implementation: 0x106089094

// -[SCCoreCameraLogger logCameraRecordingDelay]
// Type encoding: v16@0:8
// Implementation: 0x1060890bc

// -[SCCoreCameraLogger _logCameraRecordingDelay]
// Type encoding: v16@0:8
// Implementation: 0x106089190

// -[SCCoreCameraLogger logCameraMLProcessingInfoWithFeatureIdentifier:info:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106089290

// -[SCCoreCameraLogger _logCameraMLProcessingInfoWithFeatureIdentifier:info:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060893c4

// -[SCCoreCameraLogger cameraShortcutStartWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106089420

// -[SCCoreCameraLogger cameraShortcutEnd]
// Type encoding: v16@0:8
// Implementation: 0x106089450

// -[SCCoreCameraLogger logBatchCaptureCreationEventStartWithSnapSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106089460

// -[SCCoreCameraLogger _logBatchCaptureCreationEventStartWithSnapSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608956c

// -[SCCoreCameraLogger logBatchCaptureCreationEventImageContentReady]
// Type encoding: v16@0:8
// Implementation: 0x106089580

// -[SCCoreCameraLogger _logBatchCaptureCreationEventImageContentReadyAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x106089670

// -[SCCoreCameraLogger logBatchCaptureCreationEventVideoContentReady]
// Type encoding: v16@0:8
// Implementation: 0x106089834

// -[SCCoreCameraLogger _logBatchCaptureCreationEventVideoContentReadyAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x106089924

// -[SCCoreCameraLogger logBatchCaptureCreationEventStartPreview]
// Type encoding: v16@0:8
// Implementation: 0x106089ae8

// -[SCCoreCameraLogger _logBatchCaptureCreationEventStartPreviewAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x106089bd8

// -[SCCoreCameraLogger logBatchCaptureCreationEventIsFromSnapRecovery:]
// Type encoding: v20@0:8B16
// Implementation: 0x106089c28

// -[SCCoreCameraLogger _logBatchCaptureCreationEventIsFromSnapRecovery:]
// Type encoding: v20@0:8B16
// Implementation: 0x106089d14

// -[SCCoreCameraLogger logBatchCaptureCreationEventPreviewFirstFrameRendered]
// Type encoding: v16@0:8
// Implementation: 0x106089d64

// -[SCCoreCameraLogger _logBatchCaptureCreationEventPreviewFirstFrameRenderedAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x106089e54

// -[SCCoreCameraLogger cancelBatchCaptureCreationEvent]
// Type encoding: v16@0:8
// Implementation: 0x10608a17c

// -[SCCoreCameraLogger _cancelBatchCaptureCreationEvent]
// Type encoding: v16@0:8
// Implementation: 0x10608a250

// -[SCCoreCameraLogger _completeLogCameraCreationDelayEventWithIsImage:atTime:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x10608a278

// -[SCCoreCameraLogger _latencyMillisWithStartTime:endTime:timeAdjustment:]
// Type encoding: q40@0:8d16d24d32
// Implementation: 0x10608a568

// -[SCCoreCameraLogger _addSplitPointForKey:atTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10608a584

// -[SCCoreCameraLogger _updateCameraCreationDelayTraceForSplitKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608a6ac

// -[SCCoreCameraLogger _buildSharedCameraMetricsParams]
// Type encoding: @16@0:8
// Implementation: 0x10608a848

// -[SCCoreCameraLogger _buildCapturePhotoSettings]
// Type encoding: @16@0:8
// Implementation: 0x10608ae0c

// -[SCCoreCameraLogger _logCameraCreationDelayBlizzardEventWithLatencyMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x10608b2a0

// -[SCCoreCameraLogger _logCameraCreationDelayGrapheneEventWithLatencyMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x10608b5e4

// -[SCCoreCameraLogger _logCameraCreationDelayPerformanceEventWithLatencyMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x10608b748

// -[SCCoreCameraLogger mediaTypeWithString:]
// Type encoding: q24@0:8@16
// Implementation: 0x10608b74c

// -[SCCoreCameraLogger _photoQualityPrioritizationWithValue:]
// Type encoding: q24@0:8q16
// Implementation: 0x10608b7b4

// -[SCCoreCameraLogger logDirectSnapCreate:creationTime:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10608b7c8

// -[SCCoreCameraLogger logDirectSegmentCreate:segmentSource:creationTime:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10608bae0

// -[SCCoreCameraLogger _updateDirectSnapCreate:withLocationEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10608bc9c

// -[SCCoreCameraLogger logCameraNotFoundAlertShownWithDevicePosition:discoverySessionId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10608bd34

// -[SCCoreCameraLogger _logCameraNotFoundAlertShownWithDevicePosition:discoverySessionId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10608be4c

// -[SCCoreCameraLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10608bf00

@end
