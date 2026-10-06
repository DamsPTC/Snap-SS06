// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDeviceJSON
// Superclass: NSObject
// Address: 0x112a81ed8

@interface SCSpectaclesDeviceJSON

// Property: serialNumber; attributes: T@"NSString",R,N,V_serialNumber
// Property: color; attributes: Tq,R,N,V_color
// Property: displayName; attributes: T@"NSString",R,N,V_displayName
// Property: pairStatus; attributes: T@"NSString",R,N,V_pairStatus
// Property: firstPairedTimestamp; attributes: Tq,R,N,V_firstPairedTimestamp
// Property: lastPairedStatusUpdatedTimestamp; attributes: Tq,R,N,V_lastPairedStatusUpdatedTimestamp
// Property: lastNameUpdatedTimestamp; attributes: Tq,R,N,V_lastNameUpdatedTimestamp
// Property: deviceNumber; attributes: Tq,R,N,V_deviceNumber
// Property: firmwareVersion; attributes: T@"<SCSpectaclesFirmwareVersion>",R,N,V_firmwareVersion
// Property: hardwareVersion; attributes: T@"<SCSpectaclesHardwareVersion>",R,N,V_hardwareVersion

// -[SCSpectaclesDeviceJSON initWithSerialNumber:displayName:color:pairStatus:firstPairedTimestamp:lastNameUpdatedTimestamp:lastPairedStatusUpdatedTimestamp:deviceNumber:firmwareVersion:hardwareVersion:]
// Type encoding: @96@0:8@16@24q32@40q48q56q64q72@80@88
// Implementation: 0x1059e0260

// -[SCSpectaclesDeviceJSON initWithDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059e03c0

// -[SCSpectaclesDeviceJSON toDictionary]
// Type encoding: @16@0:8
// Implementation: 0x1059e0658

// -[SCSpectaclesDeviceJSON toServerLagunaDevice]
// Type encoding: @16@0:8
// Implementation: 0x1059e0838

// -[SCSpectaclesDeviceJSON serialNumber]
// Type encoding: @16@0:8
// Implementation: 0x1059e0970

// -[SCSpectaclesDeviceJSON color]
// Type encoding: q16@0:8
// Implementation: 0x1059e0978

// -[SCSpectaclesDeviceJSON displayName]
// Type encoding: @16@0:8
// Implementation: 0x1059e0980

// -[SCSpectaclesDeviceJSON pairStatus]
// Type encoding: @16@0:8
// Implementation: 0x1059e0988

// -[SCSpectaclesDeviceJSON firstPairedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1059e0990

// -[SCSpectaclesDeviceJSON lastPairedStatusUpdatedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1059e0998

// -[SCSpectaclesDeviceJSON lastNameUpdatedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1059e09a0

// -[SCSpectaclesDeviceJSON deviceNumber]
// Type encoding: q16@0:8
// Implementation: 0x1059e09a8

// -[SCSpectaclesDeviceJSON firmwareVersion]
// Type encoding: @16@0:8
// Implementation: 0x1059e09b0

// -[SCSpectaclesDeviceJSON hardwareVersion]
// Type encoding: @16@0:8
// Implementation: 0x1059e09b8

// -[SCSpectaclesDeviceJSON .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059e09c0

@end
