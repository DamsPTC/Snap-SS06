// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesLegacyOTAManager
// Superclass: NSObject
// Address: 0x112a859e8

@interface SCSpectaclesLegacyOTAManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: stateObservable; attributes: T@"SCObservable",R,N,V_stateObservable

// -[SCSpectaclesLegacyOTAManager initWithDevice:firmwareManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105a6505c

// -[SCSpectaclesLegacyOTAManager syncOTAUpdateState]
// Type encoding: v16@0:8
// Implementation: 0x105a65120

// -[SCSpectaclesLegacyOTAManager updateOTA]
// Type encoding: v16@0:8
// Implementation: 0x105a65158

// -[SCSpectaclesLegacyOTAManager currentVersionString]
// Type encoding: @16@0:8
// Implementation: 0x105a65190

// -[SCSpectaclesLegacyOTAManager updateAvailableVersionString]
// Type encoding: @16@0:8
// Implementation: 0x105a651d0

// -[SCSpectaclesLegacyOTAManager updatingOTA]
// Type encoding: B16@0:8
// Implementation: 0x105a65274

// -[SCSpectaclesLegacyOTAManager hasRequiredUpdate]
// Type encoding: B16@0:8
// Implementation: 0x105a652c0

// -[SCSpectaclesLegacyOTAManager autoUpdateManager]
// Type encoding: @16@0:8
// Implementation: 0x105a65304

// -[SCSpectaclesLegacyOTAManager _statusFromUpdateState:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105a6530c

// -[SCSpectaclesLegacyOTAManager _errorFromUpdateEvent:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105a65330

// -[SCSpectaclesLegacyOTAManager _errorFromFailFromState:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105a65354

// -[SCSpectaclesLegacyOTAManager _setStateFromStatus:info:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105a65374

// -[SCSpectaclesLegacyOTAManager spectaclesOnFirmwareUpdateForDevice:changedState:progress:]
// Type encoding: v36@0:8@16Q24f32
// Implementation: 0x105a653e0

// -[SCSpectaclesLegacyOTAManager spectaclesOnFirmwareUpdateForDevice:failedFromState:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a65484

// -[SCSpectaclesLegacyOTAManager spectaclesOnFirmwareUpdateEvent:device:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105a65528

// -[SCSpectaclesLegacyOTAManager stateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a65654

// -[SCSpectaclesLegacyOTAManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a6565c

@end
