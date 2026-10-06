// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTCallOpsDataProviderImpl
// Superclass: NSObject
// Address: 0x112bac308

@interface SCTCallOpsDataProviderImpl

// Property: batteryLevel; attributes: Tf,V_batteryLevel
// Property: isPowered; attributes: TB,V_isPowered
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTCallOpsDataProviderImpl init]
// Type encoding: @16@0:8
// Implementation: 0x108934c44

// -[SCTCallOpsDataProviderImpl getBatteryLevel]
// Type encoding: f16@0:8
// Implementation: 0x108934cbc

// -[SCTCallOpsDataProviderImpl getTemperature]
// Type encoding: i16@0:8
// Implementation: 0x108934cc0

// -[SCTCallOpsDataProviderImpl _batteryStateDidChange]
// Type encoding: v16@0:8
// Implementation: 0x108934cc8

// -[SCTCallOpsDataProviderImpl _batteryLevelDidChange]
// Type encoding: v16@0:8
// Implementation: 0x108934e18

// -[SCTCallOpsDataProviderImpl start]
// Type encoding: v16@0:8
// Implementation: 0x108934e5c

// -[SCTCallOpsDataProviderImpl stop]
// Type encoding: v16@0:8
// Implementation: 0x108934f68

// -[SCTCallOpsDataProviderImpl addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108935030

// -[SCTCallOpsDataProviderImpl removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108935088

// -[SCTCallOpsDataProviderImpl batteryLevel]
// Type encoding: f16@0:8
// Implementation: 0x108935090

// -[SCTCallOpsDataProviderImpl setBatteryLevel:]
// Type encoding: v20@0:8f16
// Implementation: 0x108935098

// -[SCTCallOpsDataProviderImpl isPowered]
// Type encoding: B16@0:8
// Implementation: 0x1089350a0

// -[SCTCallOpsDataProviderImpl setIsPowered:]
// Type encoding: v20@0:8B16
// Implementation: 0x1089350ac

// -[SCTCallOpsDataProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1089350b4

@end
