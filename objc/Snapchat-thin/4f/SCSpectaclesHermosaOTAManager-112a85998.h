// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesHermosaOTAManager
// Superclass: NSObject
// Address: 0x112a85998

@interface SCSpectaclesHermosaOTAManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: autoUpdateSettingsObservable; attributes: T@"SCObservable",R,N,V_autoUpdateSettingsObservable
// Property: stateObservable; attributes: T@"SCObservable",R,N,V_stateObservable

// -[SCSpectaclesHermosaOTAManager initWithCurrentDevice:connectionHub:deviceActivationService:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105a62ac4

// -[SCSpectaclesHermosaOTAManager _customOTATag]
// Type encoding: @16@0:8
// Implementation: 0x105a630dc

// -[SCSpectaclesHermosaOTAManager _handlePowerState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a63138

// -[SCSpectaclesHermosaOTAManager _isOTARebooting]
// Type encoding: B16@0:8
// Implementation: 0x105a631c4

// -[SCSpectaclesHermosaOTAManager _handleBootComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a63208

// -[SCSpectaclesHermosaOTAManager _delayAndRequestUserDeviceSecurityData]
// Type encoding: v16@0:8
// Implementation: 0x105a63284

// -[SCSpectaclesHermosaOTAManager _cancelDeviceSecurityRequestBlock]
// Type encoding: v16@0:8
// Implementation: 0x105a63360

// -[SCSpectaclesHermosaOTAManager _requestCurrentPowerState]
// Type encoding: v16@0:8
// Implementation: 0x105a6339c

// -[SCSpectaclesHermosaOTAManager _handleUserDeviceSecurityDataResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a633a4

// -[SCSpectaclesHermosaOTAManager _requestUserDeviceSecurityData]
// Type encoding: v16@0:8
// Implementation: 0x105a635cc

// -[SCSpectaclesHermosaOTAManager _isDeviceLockedAfterBooted]
// Type encoding: B16@0:8
// Implementation: 0x105a63674

// -[SCSpectaclesHermosaOTAManager _shouldForceBootForAvailabilityCheck]
// Type encoding: B16@0:8
// Implementation: 0x105a636f4

// -[SCSpectaclesHermosaOTAManager syncOTAUpdateState]
// Type encoding: v16@0:8
// Implementation: 0x105a63714

// -[SCSpectaclesHermosaOTAManager updateOTA]
// Type encoding: v16@0:8
// Implementation: 0x105a63894

// -[SCSpectaclesHermosaOTAManager forceUpdateOTAWithTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a638dc

// -[SCSpectaclesHermosaOTAManager _setOTAUpdateAppState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a63938

// -[SCSpectaclesHermosaOTAManager _shouldAutomaticallyResetWhenFailed]
// Type encoding: B16@0:8
// Implementation: 0x105a639dc

// -[SCSpectaclesHermosaOTAManager _canRequestOTAUpdateFromCurrentOTAUpdateStatus]
// Type encoding: B16@0:8
// Implementation: 0x105a63af4

// -[SCSpectaclesHermosaOTAManager _didChangeOtaTag]
// Type encoding: B16@0:8
// Implementation: 0x105a63b48

// -[SCSpectaclesHermosaOTAManager _canRequestAvailabilityCheck]
// Type encoding: B16@0:8
// Implementation: 0x105a63bb4

// -[SCSpectaclesHermosaOTAManager updatingOTA]
// Type encoding: B16@0:8
// Implementation: 0x105a63c84

// -[SCSpectaclesHermosaOTAManager currentVersionString]
// Type encoding: @16@0:8
// Implementation: 0x105a63cbc

// -[SCSpectaclesHermosaOTAManager updateAvailableVersionString]
// Type encoding: @16@0:8
// Implementation: 0x105a63e14

// -[SCSpectaclesHermosaOTAManager hasRequiredUpdate]
// Type encoding: B16@0:8
// Implementation: 0x105a63f6c

// -[SCSpectaclesHermosaOTAManager cancelUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a6404c

// -[SCSpectaclesHermosaOTAManager _checkOTAUpdateAvailability]
// Type encoding: v16@0:8
// Implementation: 0x105a64090

// -[SCSpectaclesHermosaOTAManager _installOTAUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6414c

// -[SCSpectaclesHermosaOTAManager autoUpdateManager]
// Type encoding: @16@0:8
// Implementation: 0x105a641d8

// -[SCSpectaclesHermosaOTAManager syncOTAAutoUpdateEnabledSettings]
// Type encoding: v16@0:8
// Implementation: 0x105a641e0

// -[SCSpectaclesHermosaOTAManager setOTAAutoUpdateEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a64224

// -[SCSpectaclesHermosaOTAManager handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a642c8

// -[SCSpectaclesHermosaOTAManager _handlePushMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a644c4

// -[SCSpectaclesHermosaOTAManager responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a64578

// -[SCSpectaclesHermosaOTAManager _didReceiveCheckOTAUpdateAvailabilityRequest:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105a64580

// -[SCSpectaclesHermosaOTAManager _didReceiveOTAUpdateRequest:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105a645ec

// -[SCSpectaclesHermosaOTAManager _didReceiveOTAUpdateEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a64658

// -[SCSpectaclesHermosaOTAManager _didReceiveOTAAutoUpdateEnabledSettings:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105a646f8

// -[SCSpectaclesHermosaOTAManager _didFailToUpdateOTAAutoUpdateEnabledSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a64770

// -[SCSpectaclesHermosaOTAManager _didCancelOTAUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a647f0

// -[SCSpectaclesHermosaOTAManager _handleConnectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a647fc

// -[SCSpectaclesHermosaOTAManager _restartOTASync]
// Type encoding: v16@0:8
// Implementation: 0x105a64a10

// -[SCSpectaclesHermosaOTAManager _startRestartTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a64a44

// -[SCSpectaclesHermosaOTAManager _cancelRestartTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a64b58

// -[SCSpectaclesHermosaOTAManager tweakDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a64b94

// -[SCSpectaclesHermosaOTAManager _freezeActivateDeviceForFirmwareUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a64b98

// -[SCSpectaclesHermosaOTAManager _unfreezeActivateDevice]
// Type encoding: v16@0:8
// Implementation: 0x105a64cb4

// -[SCSpectaclesHermosaOTAManager stateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a64d80

// -[SCSpectaclesHermosaOTAManager autoUpdateSettingsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a64d88

// -[SCSpectaclesHermosaOTAManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a64d90

@end
