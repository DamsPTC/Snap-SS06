// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDeviceCellViewModel
// Superclass: NSObject
// Address: 0x112ac0c28

@interface SCSpectaclesDeviceCellViewModel

// Property: serialNumber; attributes: T@"NSString",R,N,V_serialNumber
// Property: deviceIconFuture; attributes: T@"SCFuture",R,N,V_deviceIconFuture
// Property: name; attributes: T@"NSString",R,N,V_name
// Property: status; attributes: T@"NSString",R,N,V_status
// Property: statusTextColor; attributes: T@"UIColor",R,N,V_statusTextColor
// Property: batteryLevel; attributes: Td,R,N,V_batteryLevel
// Property: isLowBattery; attributes: TB,R,N,V_isLowBattery
// Property: isCharging; attributes: TB,R,N,V_isCharging
// Property: batteryLevelText; attributes: T@"NSString",R,N,V_batteryLevelText
// Property: statusDescription; attributes: T@"NSString",R,N,V_statusDescription
// Property: showConnectionButton; attributes: TB,R,N,V_showConnectionButton
// Property: showLoadingIndicator; attributes: TB,R,N,V_showLoadingIndicator
// Property: flightStatus; attributes: TQ,R,N,V_flightStatus

// -[SCSpectaclesDeviceCellViewModel initWithSerialNumber:deviceIconFuture:name:status:statusTextColor:batteryLevel:isLowBattery:isCharging:batteryLevelText:statusDescription:showConnectionButton:showLoadingIndicator:flightStatus:]
// Type encoding: @104@0:8@16@24@32@40@48d56B64B68@72@80B88B92Q96
// Implementation: 0x106050de0

// -[SCSpectaclesDeviceCellViewModel copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106050fac

// -[SCSpectaclesDeviceCellViewModel hash]
// Type encoding: Q16@0:8
// Implementation: 0x106050fd0

// -[SCSpectaclesDeviceCellViewModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060510c0

// -[SCSpectaclesDeviceCellViewModel serialNumber]
// Type encoding: @16@0:8
// Implementation: 0x106051264

// -[SCSpectaclesDeviceCellViewModel deviceIconFuture]
// Type encoding: @16@0:8
// Implementation: 0x10605126c

// -[SCSpectaclesDeviceCellViewModel name]
// Type encoding: @16@0:8
// Implementation: 0x106051274

// -[SCSpectaclesDeviceCellViewModel status]
// Type encoding: @16@0:8
// Implementation: 0x10605127c

// -[SCSpectaclesDeviceCellViewModel statusTextColor]
// Type encoding: @16@0:8
// Implementation: 0x106051284

// -[SCSpectaclesDeviceCellViewModel batteryLevel]
// Type encoding: d16@0:8
// Implementation: 0x10605128c

// -[SCSpectaclesDeviceCellViewModel isLowBattery]
// Type encoding: B16@0:8
// Implementation: 0x106051294

// -[SCSpectaclesDeviceCellViewModel isCharging]
// Type encoding: B16@0:8
// Implementation: 0x10605129c

// -[SCSpectaclesDeviceCellViewModel batteryLevelText]
// Type encoding: @16@0:8
// Implementation: 0x1060512a4

// -[SCSpectaclesDeviceCellViewModel statusDescription]
// Type encoding: @16@0:8
// Implementation: 0x1060512ac

// -[SCSpectaclesDeviceCellViewModel showConnectionButton]
// Type encoding: B16@0:8
// Implementation: 0x1060512b4

// -[SCSpectaclesDeviceCellViewModel showLoadingIndicator]
// Type encoding: B16@0:8
// Implementation: 0x1060512bc

// -[SCSpectaclesDeviceCellViewModel flightStatus]
// Type encoding: Q16@0:8
// Implementation: 0x1060512c4

// -[SCSpectaclesDeviceCellViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060512cc

// +[SCSpectaclesDeviceCellViewModel makeForSettingsWithDevices:appStatusProvider:assetResources:activatingDevice:flightStatusMap:flightModeMap:flightErrorMap:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10298cb38

// +[SCSpectaclesDeviceCellViewModel makeForStatusBarWithDevice:appStatusProvider:assetResources:flightStatus:flightMode:]
// Type encoding: @56@0:8@16@24@32Q40Q48
// Implementation: 0x10298cc78

// +[SCSpectaclesDeviceCellViewModel shouldShowStatusBarForDevice:]
// Type encoding: B24@0:8@16
// Implementation: 0x10298cd08

@end
