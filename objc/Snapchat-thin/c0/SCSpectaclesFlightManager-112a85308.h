// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFlightManager
// Superclass: NSObject
// Address: 0x112a85308

@interface SCSpectaclesFlightManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: flightStatus; attributes: T@"SCObservable",R,N,V_flightStatus
// Property: flightMode; attributes: T@"SCObservable",R,N,V_flightMode
// Property: flightSettingsDict; attributes: T@"SCObservable",R,N,V_flightSettingsDictSubject
// Property: getSettingError; attributes: T@"SCObservable",R,N,V_getSettingError
// Property: setSettingError; attributes: T@"SCObservable",R,N,V_setSettingError

// -[SCSpectaclesFlightManager initWithConnectionHub:devicePreferences:flightSettingsLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105a56008

// -[SCSpectaclesFlightManager requestAbortFlight]
// Type encoding: v16@0:8
// Implementation: 0x105a56170

// -[SCSpectaclesFlightManager getFlightStatus]
// Type encoding: v16@0:8
// Implementation: 0x105a561b4

// -[SCSpectaclesFlightManager getFlightMode]
// Type encoding: v16@0:8
// Implementation: 0x105a561f8

// -[SCSpectaclesFlightManager customFlightMode]
// Type encoding: @16@0:8
// Implementation: 0x105a5623c

// -[SCSpectaclesFlightManager fetchAllFlightSettings]
// Type encoding: v16@0:8
// Implementation: 0x105a5630c

// -[SCSpectaclesFlightManager _flightPathforFlightModeFromSettings:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105a56350

// -[SCSpectaclesFlightManager _assertValidFlightPath:forFlightMode:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x105a563a8

// -[SCSpectaclesFlightManager _getFlightModeSettingsFromStorage]
// Type encoding: v16@0:8
// Implementation: 0x105a563ac

// -[SCSpectaclesFlightManager _persistFlightModeSettingsToStorage]
// Type encoding: v16@0:8
// Implementation: 0x105a5659c

// -[SCSpectaclesFlightManager _publishFlightModeSettings]
// Type encoding: v16@0:8
// Implementation: 0x105a565b8

// -[SCSpectaclesFlightManager setDuration:flightMode:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x105a565c8

// -[SCSpectaclesFlightManager setDistance:flightMode:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x105a56698

// -[SCSpectaclesFlightManager setCaptureMode:flightMode:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x105a56770

// -[SCSpectaclesFlightManager setTracking:flightMode:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x105a5683c

// -[SCSpectaclesFlightManager setCustomFlightMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a568e8

// -[SCSpectaclesFlightManager _mutateFlightSettings:setting:value:]
// Type encoding: v40@0:8Q16Q24@32
// Implementation: 0x105a56980

// -[SCSpectaclesFlightManager _setAdjustmentsForCaptureMode:flightMode:flightPath:]
// Type encoding: v40@0:8Q16Q24Q32
// Implementation: 0x105a56b80

// -[SCSpectaclesFlightManager _setDefaultAdjustmentsForCustomFlightMode]
// Type encoding: v16@0:8
// Implementation: 0x105a56c24

// -[SCSpectaclesFlightManager handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a56d04

// -[SCSpectaclesFlightManager responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a56d68

// -[SCSpectaclesFlightManager _errorForResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a56d70

// -[SCSpectaclesFlightManager _errorWithCode:message:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x105a56f20

// -[SCSpectaclesFlightManager _handlePushResponseMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a56ffc

// -[SCSpectaclesFlightManager _handleResponseMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a570b4

// -[SCSpectaclesFlightManager _setIsAbortingFlight:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a572a8

// -[SCSpectaclesFlightManager _broadcastStandbyFlightStatus]
// Type encoding: v16@0:8
// Implementation: 0x105a572b0

// -[SCSpectaclesFlightManager _startAbortingFlightTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a572c0

// -[SCSpectaclesFlightManager _cancelFlightTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a573ac

// -[SCSpectaclesFlightManager _handleAbortFlightStateIfNeeded:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a573e8

// -[SCSpectaclesFlightManager flightStatus]
// Type encoding: @16@0:8
// Implementation: 0x105a57440

// -[SCSpectaclesFlightManager flightMode]
// Type encoding: @16@0:8
// Implementation: 0x105a57448

// -[SCSpectaclesFlightManager flightSettingsDict]
// Type encoding: @16@0:8
// Implementation: 0x105a57450

// -[SCSpectaclesFlightManager setSettingError]
// Type encoding: @16@0:8
// Implementation: 0x105a57458

// -[SCSpectaclesFlightManager getSettingError]
// Type encoding: @16@0:8
// Implementation: 0x105a57460

// -[SCSpectaclesFlightManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a57468

@end
