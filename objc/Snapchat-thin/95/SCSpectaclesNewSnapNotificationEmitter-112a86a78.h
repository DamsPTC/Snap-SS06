// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesNewSnapNotificationEmitter
// Superclass: NSObject
// Address: 0x112a86a78

@interface SCSpectaclesNewSnapNotificationEmitter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesNewSnapNotificationEmitter initWithNotificationSource:onboardingMonitor:onMemoriesMonitor:devicePreferences:device:iconProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105a721e4

// -[SCSpectaclesNewSnapNotificationEmitter spectaclesDeviceDidUpdateContentList:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a72330

// -[SCSpectaclesNewSnapNotificationEmitter spectaclesTransferSession:onTransferUpdate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a72600

// -[SCSpectaclesNewSnapNotificationEmitter _delayPushNotification:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105a72700

// -[SCSpectaclesNewSnapNotificationEmitter _pushPostPairingNewSnapNotification]
// Type encoding: v16@0:8
// Implementation: 0x105a727cc

// -[SCSpectaclesNewSnapNotificationEmitter _pushCaptureCompleteNotification]
// Type encoding: v16@0:8
// Implementation: 0x105a7280c

// -[SCSpectaclesNewSnapNotificationEmitter _pushContentAvailableNotificationForSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a72814

// -[SCSpectaclesNewSnapNotificationEmitter _pushTransferInterruptedNotificationForSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a7281c

// -[SCSpectaclesNewSnapNotificationEmitter _pushImportCompleteNotificationForSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a72824

// -[SCSpectaclesNewSnapNotificationEmitter _setHasEmitPostPairingNotification:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a72874

// -[SCSpectaclesNewSnapNotificationEmitter _hasEmitPostPairingNotification]
// Type encoding: B16@0:8
// Implementation: 0x105a728c4

// -[SCSpectaclesNewSnapNotificationEmitter _fetchDeviceIconIfNeed]
// Type encoding: v16@0:8
// Implementation: 0x105a7290c

// -[SCSpectaclesNewSnapNotificationEmitter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a72a64

@end
