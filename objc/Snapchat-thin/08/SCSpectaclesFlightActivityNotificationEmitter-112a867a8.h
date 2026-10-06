// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFlightActivityNotificationEmitter
// Superclass: NSObject
// Address: 0x112a867a8

@interface SCSpectaclesFlightActivityNotificationEmitter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: flightErrorDescription; attributes: T@"SCObservable",R,N

// -[SCSpectaclesFlightActivityNotificationEmitter initWithNotificationManager:contentStatusServices:device:iconProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105a6d9d8

// -[SCSpectaclesFlightActivityNotificationEmitter responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a6dae4

// -[SCSpectaclesFlightActivityNotificationEmitter handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6daec

// -[SCSpectaclesFlightActivityNotificationEmitter _handleFlightInfoResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6db38

// -[SCSpectaclesFlightActivityNotificationEmitter _pushFlightRemainInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6dd14

// -[SCSpectaclesFlightActivityNotificationEmitter _pushStandbyModeNotificationIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6dd58

// -[SCSpectaclesFlightActivityNotificationEmitter _pushFlightModeNofiticationIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6df00

// -[SCSpectaclesFlightActivityNotificationEmitter _pushFlightStateErrors:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6e098

// -[SCSpectaclesFlightActivityNotificationEmitter _fetchDeviceIcon]
// Type encoding: v16@0:8
// Implementation: 0x105a6e25c

// -[SCSpectaclesFlightActivityNotificationEmitter flightErrorDescription]
// Type encoding: @16@0:8
// Implementation: 0x105a6e39c

// -[SCSpectaclesFlightActivityNotificationEmitter _reportLastFlightErrorObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6e3c4

// -[SCSpectaclesFlightActivityNotificationEmitter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a6e4ec

@end
