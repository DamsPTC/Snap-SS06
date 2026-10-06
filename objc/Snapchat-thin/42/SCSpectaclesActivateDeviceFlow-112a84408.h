// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesActivateDeviceFlow
// Superclass: NSObject
// Address: 0x112a84408

@interface SCSpectaclesActivateDeviceFlow

// Property: spectaclesManager; attributes: T@"<SCSpectaclesManaging>",&,N,V_spectaclesManager
// Property: state; attributes: TQ,N,V_state
// Property: stateTransitionTimer; attributes: T@"NSTimer",&,N,V_stateTransitionTimer
// Property: activeDevice; attributes: T@"<SCSpectaclesDevice>",&,N,V_activeDevice
// Property: activatingDevice; attributes: T@"<SCSpectaclesDevice>",&,N,V_activatingDevice
// Property: completion; attributes: T@?,C,N,V_completion
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesActivateDeviceFlow initWithSpectaclesManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c5a978

// -[SCSpectaclesActivateDeviceFlow activateLastConnectedDevice]
// Type encoding: v16@0:8
// Implementation: 0x105a2fb84

// -[SCSpectaclesActivateDeviceFlow activateDevice:withCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105a2fd38

// -[SCSpectaclesActivateDeviceFlow waitForDeviceActivationWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105a2fed4

// -[SCSpectaclesActivateDeviceFlow cancel]
// Type encoding: v16@0:8
// Implementation: 0x105a3001c

// -[SCSpectaclesActivateDeviceFlow deactivateAllDevicesForPairing]
// Type encoding: v16@0:8
// Implementation: 0x105a30024

// -[SCSpectaclesActivateDeviceFlow reactivateAllDevicesForPairingFailed]
// Type encoding: v16@0:8
// Implementation: 0x105a3002c

// -[SCSpectaclesActivateDeviceFlow activateDeviceForPairingSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a30068

// -[SCSpectaclesActivateDeviceFlow freezeActiveDeviceForFirmwareUpdateStarted]
// Type encoding: v16@0:8
// Implementation: 0x105a300c8

// -[SCSpectaclesActivateDeviceFlow unfreezeActiveDeviceForFirmwareUpdateFinished]
// Type encoding: v16@0:8
// Implementation: 0x105a300d0

// -[SCSpectaclesActivateDeviceFlow _failActivationWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a3015c

// -[SCSpectaclesActivateDeviceFlow _deactivateDevicesExcept:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a30258

// -[SCSpectaclesActivateDeviceFlow _reactivateAllDevices]
// Type encoding: v16@0:8
// Implementation: 0x105a303b8

// -[SCSpectaclesActivateDeviceFlow _transitionToState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a304f0

// -[SCSpectaclesActivateDeviceFlow handleUpdatedState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a30a14

// -[SCSpectaclesActivateDeviceFlow spectaclesDeviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a30c30

// -[SCSpectaclesActivateDeviceFlow spectaclesManager]
// Type encoding: @16@0:8
// Implementation: 0x105a30c34

// -[SCSpectaclesActivateDeviceFlow setSpectaclesManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a30c3c

// -[SCSpectaclesActivateDeviceFlow state]
// Type encoding: Q16@0:8
// Implementation: 0x105a30c6c

// -[SCSpectaclesActivateDeviceFlow setState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a30c74

// -[SCSpectaclesActivateDeviceFlow stateTransitionTimer]
// Type encoding: @16@0:8
// Implementation: 0x105a30c7c

// -[SCSpectaclesActivateDeviceFlow setStateTransitionTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a30c84

// -[SCSpectaclesActivateDeviceFlow activeDevice]
// Type encoding: @16@0:8
// Implementation: 0x105a30cb4

// -[SCSpectaclesActivateDeviceFlow setActiveDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a30cbc

// -[SCSpectaclesActivateDeviceFlow activatingDevice]
// Type encoding: @16@0:8
// Implementation: 0x105a30cec

// -[SCSpectaclesActivateDeviceFlow setActivatingDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a30cf4

// -[SCSpectaclesActivateDeviceFlow completion]
// Type encoding: @?16@0:8
// Implementation: 0x105a30d24

// -[SCSpectaclesActivateDeviceFlow setCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105a30d2c

// -[SCSpectaclesActivateDeviceFlow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a30d34

@end
