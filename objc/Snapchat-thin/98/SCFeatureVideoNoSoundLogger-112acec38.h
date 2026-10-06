// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureVideoNoSoundLogger
// Superclass: SCFeature
// Address: 0x112acec38

@interface SCFeatureVideoNoSoundLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureVideoNoSoundLogger initWithMicNotification:cameraHardwareServicesAPIImpl:videoNoSoundLogger:cameraHardwareResource:notificationManager:audioSession:audioCaptureConfiguration:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106196fe4

// -[SCFeatureVideoNoSoundLogger dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106197298

// -[SCFeatureVideoNoSoundLogger beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061972dc

// -[SCFeatureVideoNoSoundLogger startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106197550

// -[SCFeatureVideoNoSoundLogger stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1061979b8

// -[SCFeatureVideoNoSoundLogger _didScheduleRecordRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061979ec

// -[SCFeatureVideoNoSoundLogger _willFinishRecording]
// Type encoding: v16@0:8
// Implementation: 0x106197aac

// -[SCFeatureVideoNoSoundLogger _didGetError:forType:session:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106197b64

// -[SCFeatureVideoNoSoundLogger _didCallLenseResume:]
// Type encoding: v24@0:8@16
// Implementation: 0x106197d5c

// -[SCFeatureVideoNoSoundLogger _hasAudioPermission]
// Type encoding: B16@0:8
// Implementation: 0x106197d6c

// -[SCFeatureVideoNoSoundLogger _isAudioLossNotificationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106197dc0

// -[SCFeatureVideoNoSoundLogger _isPhoneCallActive]
// Type encoding: B16@0:8
// Implementation: 0x106197e08

// -[SCFeatureVideoNoSoundLogger _logAudioLossNotificationEnqueuedWithCopyType:queueErrorCode:reason:]
// Type encoding: v36@0:8@16i24@28
// Implementation: 0x106197f30

// -[SCFeatureVideoNoSoundLogger _showMicErrorNotification]
// Type encoding: v16@0:8
// Implementation: 0x106198000

// -[SCFeatureVideoNoSoundLogger _showMicErrorNotificationForQueueErrorCode:reason:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x106198144

// -[SCFeatureVideoNoSoundLogger didRenderFirstFrameForVideoURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x106198374

// -[SCFeatureVideoNoSoundLogger didExposeSnapEditorPreviewForVideoURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x106198378

// -[SCFeatureVideoNoSoundLogger _checkVideoFileAndNotifyIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10619837c

// -[SCFeatureVideoNoSoundLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061985e0

@end
