// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesContentStatusProvider
// Superclass: NSObject
// Address: 0x112a820b8

@interface SCSpectaclesContentStatusProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: statusObservable; attributes: T@"SCObservable",R,N,V_statusObservable

// -[SCSpectaclesContentStatusProvider initWithSpectaclesServices:spectaclesAppStatusServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059e3fdc

// -[SCSpectaclesContentStatusProvider currentContentStatus]
// Type encoding: @16@0:8
// Implementation: 0x1059e40fc

// -[SCSpectaclesContentStatusProvider _contentStatusNoneForDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059e42c8

// -[SCSpectaclesContentStatusProvider syncCurrentStatus]
// Type encoding: v16@0:8
// Implementation: 0x1059e432c

// -[SCSpectaclesContentStatusProvider _updateContentStatus]
// Type encoding: v16@0:8
// Implementation: 0x1059e4330

// -[SCSpectaclesContentStatusProvider _notifyStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e4388

// -[SCSpectaclesContentStatusProvider _notifyStatusAfterDelay:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e43f4

// -[SCSpectaclesContentStatusProvider _cancelStatusNotifyBlock]
// Type encoding: v16@0:8
// Implementation: 0x1059e450c

// -[SCSpectaclesContentStatusProvider _notifyNoNewSnapStatusResetBlockAfterDelayIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1059e4548

// -[SCSpectaclesContentStatusProvider _cancelNoNewSnapStatusResetBlock]
// Type encoding: v16@0:8
// Implementation: 0x1059e4634

// -[SCSpectaclesContentStatusProvider _resetFoundNoNewSnaps]
// Type encoding: v16@0:8
// Implementation: 0x1059e4670

// -[SCSpectaclesContentStatusProvider statusCoordinatorBluetoothTurnedOff:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e46b8

// -[SCSpectaclesContentStatusProvider statusCoordinatorBluetoothTurnedOn:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e46bc

// -[SCSpectaclesContentStatusProvider statusCoordinatorNumberOfDevicesUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e46c0

// -[SCSpectaclesContentStatusProvider statusCoordinator:needsToUpdateStateForDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059e46c4

// -[SCSpectaclesContentStatusProvider statusCoordinatorPressedLearnMoreForBluetoothOverloadError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e46d0

// -[SCSpectaclesContentStatusProvider statusCoordinatorNeedsToPair:deviceProductType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059e46d4

// -[SCSpectaclesContentStatusProvider spectaclesDeviceDidUpdateContentList:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e46d8

// -[SCSpectaclesContentStatusProvider spectaclesDeviceDidUpdateBackupStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e46dc

// -[SCSpectaclesContentStatusProvider spectaclesTransferSession:onTransferUpdate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1059e46e0

// -[SCSpectaclesContentStatusProvider spectaclesDeviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059e46e4

// -[SCSpectaclesContentStatusProvider statusObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059e471c

// -[SCSpectaclesContentStatusProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059e4724

@end
