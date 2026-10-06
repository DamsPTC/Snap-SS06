// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerSpectaclesHomeDeviceControlManager
// Superclass: NSObject
// Address: 0x112a247d8

@interface SCComposerSpectaclesHomeDeviceControlManager

// Property: audioLevel; attributes: T@"SCBridgeObservable",&,N,V_audioLevel
// Property: brightnessLevel; attributes: T@"SCBridgeObservable",&,N,V_brightnessLevel
// Property: muted; attributes: T@"SCBridgeObservable",&,N,V_muted
// Property: autoBrightnessEnabled; attributes: T@"SCBridgeObservable",&,N,V_autoBrightnessEnabled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerSpectaclesHomeDeviceControlManager initWithPerformer:device:brightnessSettingsManager:audioSettingsManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1052401b0

// -[SCComposerSpectaclesHomeDeviceControlManager pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105240860

// -[SCComposerSpectaclesHomeDeviceControlManager setAudioLevelAsyncWithLevel:lastUpdate:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x10524086c

// -[SCComposerSpectaclesHomeDeviceControlManager muteSystemSoundAsyncWithFlag:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052409d4

// -[SCComposerSpectaclesHomeDeviceControlManager setBrightnessLevelAsyncWithLevel:lastUpdate:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105240a70

// -[SCComposerSpectaclesHomeDeviceControlManager setAutoBrightnessAsyncWithEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105240bd8

// -[SCComposerSpectaclesHomeDeviceControlManager statusCoordinator:needsToUpdateStateForDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105240c74

// -[SCComposerSpectaclesHomeDeviceControlManager _fetchAllData]
// Type encoding: v16@0:8
// Implementation: 0x105240c88

// -[SCComposerSpectaclesHomeDeviceControlManager _cancelThrottleSetDeviceValueBlock]
// Type encoding: v16@0:8
// Implementation: 0x105240da8

// -[SCComposerSpectaclesHomeDeviceControlManager _cancelThrottleUpdateAudioUIBlock]
// Type encoding: v16@0:8
// Implementation: 0x105240de4

// -[SCComposerSpectaclesHomeDeviceControlManager _cancelThrottleUpdateBrightnessUIBlock]
// Type encoding: v16@0:8
// Implementation: 0x105240e20

// -[SCComposerSpectaclesHomeDeviceControlManager _updateBrightnessLevel:]
// Type encoding: v24@0:8d16
// Implementation: 0x105240e5c

// -[SCComposerSpectaclesHomeDeviceControlManager _updateAudioLevel:]
// Type encoding: v24@0:8d16
// Implementation: 0x105240ed0

// -[SCComposerSpectaclesHomeDeviceControlManager _handleBrightnessData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105240f44

// -[SCComposerSpectaclesHomeDeviceControlManager _handleAudioLevelData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052410e4

// -[SCComposerSpectaclesHomeDeviceControlManager _updateAudioFromDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052412b4

// -[SCComposerSpectaclesHomeDeviceControlManager _updateBrightnessFromDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052412f0

// -[SCComposerSpectaclesHomeDeviceControlManager _handleAutoBrightnessEnabledData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10524132c

// -[SCComposerSpectaclesHomeDeviceControlManager _handleAudioMutedData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052413bc

// -[SCComposerSpectaclesHomeDeviceControlManager brightnessLevel]
// Type encoding: @16@0:8
// Implementation: 0x105241430

// -[SCComposerSpectaclesHomeDeviceControlManager setBrightnessLevel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105241438

// -[SCComposerSpectaclesHomeDeviceControlManager audioLevel]
// Type encoding: @16@0:8
// Implementation: 0x105241468

// -[SCComposerSpectaclesHomeDeviceControlManager setAudioLevel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105241470

// -[SCComposerSpectaclesHomeDeviceControlManager muted]
// Type encoding: @16@0:8
// Implementation: 0x1052414a0

// -[SCComposerSpectaclesHomeDeviceControlManager setMuted:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052414a8

// -[SCComposerSpectaclesHomeDeviceControlManager autoBrightnessEnabled]
// Type encoding: @16@0:8
// Implementation: 0x1052414d8

// -[SCComposerSpectaclesHomeDeviceControlManager setAutoBrightnessEnabled:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052414e0

// -[SCComposerSpectaclesHomeDeviceControlManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105241510

@end
