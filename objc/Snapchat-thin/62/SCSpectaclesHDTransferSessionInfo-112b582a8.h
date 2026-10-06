// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesHDTransferSessionInfo
// Superclass: NSObject
// Address: 0x112b582a8

@interface SCSpectaclesHDTransferSessionInfo

// Property: deviceId; attributes: T@"NSString",R,C,N,V_deviceId
// Property: firmwareVersion; attributes: T@"<SCSpectaclesFirmwareVersion>",R,N,V_firmwareVersion
// Property: hardwareVersion; attributes: T@"<SCSpectaclesHardwareVersion>",R,N,V_hardwareVersion
// Property: deviceColor; attributes: Tq,R,N,V_deviceColor
// Property: transferSessionId; attributes: T@"NSString",R,C,N,V_transferSessionId
// Property: numHdVideos; attributes: Tq,R,N,V_numHdVideos
// Property: durationSec; attributes: Td,R,N,V_durationSec
// Property: deviceStatusState; attributes: Tq,N,V_deviceStatusState
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesHDTransferSessionInfo initWithTransferSession:numHdVideos:sessionStartTime:device:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x106fcd788

// -[SCSpectaclesHDTransferSessionInfo deviceId]
// Type encoding: @16@0:8
// Implementation: 0x106fcd8e0

// -[SCSpectaclesHDTransferSessionInfo firmwareVersion]
// Type encoding: @16@0:8
// Implementation: 0x106fcd8e8

// -[SCSpectaclesHDTransferSessionInfo hardwareVersion]
// Type encoding: @16@0:8
// Implementation: 0x106fcd8f0

// -[SCSpectaclesHDTransferSessionInfo deviceColor]
// Type encoding: q16@0:8
// Implementation: 0x106fcd8f8

// -[SCSpectaclesHDTransferSessionInfo transferSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106fcd900

// -[SCSpectaclesHDTransferSessionInfo numHdVideos]
// Type encoding: q16@0:8
// Implementation: 0x106fcd908

// -[SCSpectaclesHDTransferSessionInfo durationSec]
// Type encoding: d16@0:8
// Implementation: 0x106fcd910

// -[SCSpectaclesHDTransferSessionInfo deviceStatusState]
// Type encoding: q16@0:8
// Implementation: 0x106fcd918

// -[SCSpectaclesHDTransferSessionInfo setDeviceStatusState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106fcd920

// -[SCSpectaclesHDTransferSessionInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fcd928

@end
