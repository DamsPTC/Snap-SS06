// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesPairingCoordinator
// Superclass: NSObject
// Address: 0x112a8a2b8

@interface SCSpectaclesPairingCoordinator

// Property: pairingDeviceInformation; attributes: T@"SCSpectaclesPairingDeviceInfo",R,N,V_pairingDeviceInformation
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesPairingCoordinator initWithSpectaclesManager:pairingDeviceInfo:pairingListeners:userEventListeners:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105ac0610

// -[SCSpectaclesPairingCoordinator startAnnouncingFromSource:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105ac088c

// -[SCSpectaclesPairingCoordinator restart]
// Type encoding: v16@0:8
// Implementation: 0x105ac08d0

// -[SCSpectaclesPairingCoordinator timeout]
// Type encoding: v16@0:8
// Implementation: 0x105ac08d8

// -[SCSpectaclesPairingCoordinator userNamedDevice:changedFromDefault:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105ac08e4

// -[SCSpectaclesPairingCoordinator userSetLocationPermissions:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ac094c

// -[SCSpectaclesPairingCoordinator userRequestsPairingRetry]
// Type encoding: v16@0:8
// Implementation: 0x105ac0954

// -[SCSpectaclesPairingCoordinator userOpenedTOS]
// Type encoding: v16@0:8
// Implementation: 0x105ac095c

// -[SCSpectaclesPairingCoordinator userClosedTOS]
// Type encoding: v16@0:8
// Implementation: 0x105ac0964

// -[SCSpectaclesPairingCoordinator userAcceptedTOSWithIsBIPA:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ac096c

// -[SCSpectaclesPairingCoordinator userTappedNeedHelp]
// Type encoding: v16@0:8
// Implementation: 0x105ac0974

// -[SCSpectaclesPairingCoordinator userViewedInactiveAlert]
// Type encoding: v16@0:8
// Implementation: 0x105ac097c

// -[SCSpectaclesPairingCoordinator userTappedSupportFromInactiveAlert]
// Type encoding: v16@0:8
// Implementation: 0x105ac0984

// -[SCSpectaclesPairingCoordinator userTappedKeepPairingFromInactiveAlert]
// Type encoding: v16@0:8
// Implementation: 0x105ac098c

// -[SCSpectaclesPairingCoordinator userCancelledPairing:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105ac0994

// -[SCSpectaclesPairingCoordinator spectaclesOnPairingStateUpdate:deviceInformation:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105ac099c

// -[SCSpectaclesPairingCoordinator spectaclesDeviceDidPair:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ac0b78

// -[SCSpectaclesPairingCoordinator spectaclesOnBluetoothStateUpdate:]
// Type encoding: v24@0:8q16
// Implementation: 0x105ac0b94

// -[SCSpectaclesPairingCoordinator pairingDeviceInformation]
// Type encoding: @16@0:8
// Implementation: 0x105ac0bb4

// -[SCSpectaclesPairingCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ac0bbc

@end
