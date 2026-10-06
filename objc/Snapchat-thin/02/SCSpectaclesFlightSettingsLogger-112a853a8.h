// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFlightSettingsLogger
// Superclass: NSObject
// Address: 0x112a853a8

@interface SCSpectaclesFlightSettingsLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesFlightSettingsLogger initWithBlizzardLogger:deviceSerialNumber:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105a57910

// -[SCSpectaclesFlightSettingsLogger _logEventWithSettingsName:settingsValue:settingsUnit:flightPath:]
// Type encoding: v48@0:8q16d24@32q40
// Implementation: 0x105a579b4

// -[SCSpectaclesFlightSettingsLogger setDistance:flightMode:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a57a64

// -[SCSpectaclesFlightSettingsLogger setDuration:flightMode:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a57abc

// -[SCSpectaclesFlightSettingsLogger setCaptureMode:flightMode:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x105a57b14

// -[SCSpectaclesFlightSettingsLogger setTracking:flightMode:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x105a57b64

// -[SCSpectaclesFlightSettingsLogger setCustomFlightPath:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a57ba4

// -[SCSpectaclesFlightSettingsLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a57c00

@end
