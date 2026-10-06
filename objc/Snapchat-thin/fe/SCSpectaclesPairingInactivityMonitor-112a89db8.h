// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesPairingInactivityMonitor
// Superclass: NSObject
// Address: 0x112a89db8

@interface SCSpectaclesPairingInactivityMonitor

// Property: delegate; attributes: T@"<SCSpectaclesPairingInactivityMonitorDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesPairingInactivityMonitor initWithScanningTimeout:connectingTimeout:btPickerTimeout:]
// Type encoding: @40@0:8d16d24d32
// Implementation: 0x105aaf400

// -[SCSpectaclesPairingInactivityMonitor pairingDidStart]
// Type encoding: v16@0:8
// Implementation: 0x105aaf45c

// -[SCSpectaclesPairingInactivityMonitor pairingBeganScanning]
// Type encoding: v16@0:8
// Implementation: 0x105aaf460

// -[SCSpectaclesPairingInactivityMonitor pairingBeganConnectingBLE]
// Type encoding: v16@0:8
// Implementation: 0x105aaf484

// -[SCSpectaclesPairingInactivityMonitor pairingDidConnectBLE]
// Type encoding: v16@0:8
// Implementation: 0x105aaf4a8

// -[SCSpectaclesPairingInactivityMonitor pairingDidSyncBLE]
// Type encoding: v16@0:8
// Implementation: 0x105aaf4ac

// -[SCSpectaclesPairingInactivityMonitor pairingRequestsUnpair]
// Type encoding: v16@0:8
// Implementation: 0x105aaf4b0

// -[SCSpectaclesPairingInactivityMonitor pairingBeganChoosingName]
// Type encoding: v16@0:8
// Implementation: 0x105aaf4b4

// -[SCSpectaclesPairingInactivityMonitor pairingBeganRequestingLocation]
// Type encoding: v16@0:8
// Implementation: 0x105aaf4b8

// -[SCSpectaclesPairingInactivityMonitor pairingBeganConnectingBTC]
// Type encoding: v16@0:8
// Implementation: 0x105aaf4bc

// -[SCSpectaclesPairingInactivityMonitor pairingBeganSettingUpBTC]
// Type encoding: v16@0:8
// Implementation: 0x105aaf4c0

// -[SCSpectaclesPairingInactivityMonitor pairingDidShowBTPicker]
// Type encoding: v16@0:8
// Implementation: 0x105aaf4c4

// -[SCSpectaclesPairingInactivityMonitor pairingDidFindBTPickerDevice]
// Type encoding: v16@0:8
// Implementation: 0x105aaf4e8

// -[SCSpectaclesPairingInactivityMonitor pairingDidCancelBTPicker]
// Type encoding: v16@0:8
// Implementation: 0x105aaf4ec

// -[SCSpectaclesPairingInactivityMonitor pairingDidSucceedWithDeviceInformation:alreadyPaired:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105aaf4f0

// -[SCSpectaclesPairingInactivityMonitor pairingDidFail:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105aaf4f4

// -[SCSpectaclesPairingInactivityMonitor pairingDidFindMismatchUserWithPreviousUserMediaCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aaf4f8

// -[SCSpectaclesPairingInactivityMonitor userNamedDevice:changedFromDefault:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105aaf4fc

// -[SCSpectaclesPairingInactivityMonitor userSetLocationPermissions:]
// Type encoding: v20@0:8B16
// Implementation: 0x105aaf500

// -[SCSpectaclesPairingInactivityMonitor userRequestsPairingRetry]
// Type encoding: v16@0:8
// Implementation: 0x105aaf504

// -[SCSpectaclesPairingInactivityMonitor userOpenedTOS]
// Type encoding: v16@0:8
// Implementation: 0x105aaf508

// -[SCSpectaclesPairingInactivityMonitor userClosedTOS]
// Type encoding: v16@0:8
// Implementation: 0x105aaf50c

// -[SCSpectaclesPairingInactivityMonitor userAcceptedTOSWithIsBIPA:]
// Type encoding: v20@0:8B16
// Implementation: 0x105aaf510

// -[SCSpectaclesPairingInactivityMonitor userTappedNeedHelp]
// Type encoding: v16@0:8
// Implementation: 0x105aaf514

// -[SCSpectaclesPairingInactivityMonitor userViewedInactiveAlert]
// Type encoding: v16@0:8
// Implementation: 0x105aaf518

// -[SCSpectaclesPairingInactivityMonitor userTappedKeepPairingFromInactiveAlert]
// Type encoding: v16@0:8
// Implementation: 0x105aaf524

// -[SCSpectaclesPairingInactivityMonitor userTappedSupportFromInactiveAlert]
// Type encoding: v16@0:8
// Implementation: 0x105aaf528

// -[SCSpectaclesPairingInactivityMonitor userCancelledPairing:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105aaf52c

// -[SCSpectaclesPairingInactivityMonitor _timeout:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aaf530

// -[SCSpectaclesPairingInactivityMonitor _startScanningTimeoutTimer]
// Type encoding: v16@0:8
// Implementation: 0x105aaf5c0

// -[SCSpectaclesPairingInactivityMonitor _cancelScanningTimeoutTimer]
// Type encoding: v16@0:8
// Implementation: 0x105aaf624

// -[SCSpectaclesPairingInactivityMonitor _startBTPickerTitleChangeTimer]
// Type encoding: v16@0:8
// Implementation: 0x105aaf650

// -[SCSpectaclesPairingInactivityMonitor _cancelBTPickerTitleChangeTimer]
// Type encoding: v16@0:8
// Implementation: 0x105aaf6a8

// -[SCSpectaclesPairingInactivityMonitor _startPairingTimeoutTimer]
// Type encoding: v16@0:8
// Implementation: 0x105aaf6d4

// -[SCSpectaclesPairingInactivityMonitor _cancelPairingTimeoutTimer]
// Type encoding: v16@0:8
// Implementation: 0x105aaf72c

// -[SCSpectaclesPairingInactivityMonitor _cleanUpTimers]
// Type encoding: v16@0:8
// Implementation: 0x105aaf758

// -[SCSpectaclesPairingInactivityMonitor delegate]
// Type encoding: @16@0:8
// Implementation: 0x105aaf784

// -[SCSpectaclesPairingInactivityMonitor setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aaf79c

// -[SCSpectaclesPairingInactivityMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105aaf7a8

@end
