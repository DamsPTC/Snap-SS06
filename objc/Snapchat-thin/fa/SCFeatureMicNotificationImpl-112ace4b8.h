// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureMicNotificationImpl
// Superclass: SCFeature
// Address: 0x112ace4b8

@interface SCFeatureMicNotificationImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureMicNotificationImpl initWithNotificationManager:applicationLifecycleEvents:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:audioSession:userSession:cameraViewType:callStateProvider:circumstanceEngine:]
// Type encoding: @88@0:8@16@24@32@40@48@56q64@72@80
// Implementation: 0x10617c10c

// -[SCFeatureMicNotificationImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10617c91c

// -[SCFeatureMicNotificationImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617c974

// -[SCFeatureMicNotificationImpl isPhoneCallActive]
// Type encoding: B16@0:8
// Implementation: 0x10617c978

// -[SCFeatureMicNotificationImpl hasShownMicInUseNotification]
// Type encoding: B16@0:8
// Implementation: 0x10617c988

// -[SCFeatureMicNotificationImpl isSnapchatCallActive]
// Type encoding: B16@0:8
// Implementation: 0x10617c998

// -[SCFeatureMicNotificationImpl _viewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x10617ca40

// -[SCFeatureMicNotificationImpl _viewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10617ca54

// -[SCFeatureMicNotificationImpl _hideMicInUseWarning]
// Type encoding: v16@0:8
// Implementation: 0x10617ca64

// -[SCFeatureMicNotificationImpl _shouldShowMicInUseWarning]
// Type encoding: B16@0:8
// Implementation: 0x10617caac

// -[SCFeatureMicNotificationImpl _showMicInUseWarningIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10617cb00

// -[SCFeatureMicNotificationImpl _setupCallObserver]
// Type encoding: v16@0:8
// Implementation: 0x10617ccd0

// -[SCFeatureMicNotificationImpl _updateCallStatus]
// Type encoding: v16@0:8
// Implementation: 0x10617cd6c

// -[SCFeatureMicNotificationImpl callObserver:callChanged:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10617cf84

// -[SCFeatureMicNotificationImpl showMicrophonePermissionNotification]
// Type encoding: v16@0:8
// Implementation: 0x10617cf88

// -[SCFeatureMicNotificationImpl delayDismissMicrophoneNotification]
// Type encoding: v16@0:8
// Implementation: 0x10617d1bc

// -[SCFeatureMicNotificationImpl _shouldShowMicNotification]
// Type encoding: B16@0:8
// Implementation: 0x10617d208

// -[SCFeatureMicNotificationImpl _dismissMicrophoneNotification]
// Type encoding: v16@0:8
// Implementation: 0x10617d238

// -[SCFeatureMicNotificationImpl _setupMicInUseWarningObserverIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10617d288

// -[SCFeatureMicNotificationImpl _updateCallStatusIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10617d468

// -[SCFeatureMicNotificationImpl _appDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617d650

// -[SCFeatureMicNotificationImpl _appDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10617d654

// -[SCFeatureMicNotificationImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10617d680

@end
