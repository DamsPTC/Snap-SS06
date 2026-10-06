// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesBrightnessSettingsManager
// Superclass: NSObject
// Address: 0x112a85038

@interface SCSpectaclesBrightnessSettingsManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: brightnessLevelObservable; attributes: T@"SCObservable",R,N,V_brightnessLevelObservable
// Property: autoBrightnessEnabledObservable; attributes: T@"SCObservable",R,N,V_autoBrightnessEnabledObservable

// -[SCSpectaclesBrightnessSettingsManager initWithConnectionHub:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a52e88

// -[SCSpectaclesBrightnessSettingsManager requestBrightnessLevelAsyncWithForceBoot:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a52f50

// -[SCSpectaclesBrightnessSettingsManager setBrightnessLevelAsync:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a52f94

// -[SCSpectaclesBrightnessSettingsManager requestAutoBrightnessAsync]
// Type encoding: v16@0:8
// Implementation: 0x105a52f98

// -[SCSpectaclesBrightnessSettingsManager setAutoBrightnessAsync:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a52fdc

// -[SCSpectaclesBrightnessSettingsManager _updateBrightnessLevel:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a53020

// -[SCSpectaclesBrightnessSettingsManager _delayAndUpdateBrightnessLevel:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a53090

// -[SCSpectaclesBrightnessSettingsManager _cancelBrightnessLevelUpdateBlock]
// Type encoding: v16@0:8
// Implementation: 0x105a531b0

// -[SCSpectaclesBrightnessSettingsManager _handleNewBrightnessLevel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a531ec

// -[SCSpectaclesBrightnessSettingsManager _handleAutoBrightnessSettings:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a53288

// -[SCSpectaclesBrightnessSettingsManager _handleBrightnessLevelError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a53320

// -[SCSpectaclesBrightnessSettingsManager _handleAutoBrightnessSettingsError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5338c

// -[SCSpectaclesBrightnessSettingsManager handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a53400

// -[SCSpectaclesBrightnessSettingsManager responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a53738

// -[SCSpectaclesBrightnessSettingsManager _errorFromResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a53740

// -[SCSpectaclesBrightnessSettingsManager brightnessLevelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a537c0

// -[SCSpectaclesBrightnessSettingsManager autoBrightnessEnabledObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a537c8

// -[SCSpectaclesBrightnessSettingsManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a537d0

@end
