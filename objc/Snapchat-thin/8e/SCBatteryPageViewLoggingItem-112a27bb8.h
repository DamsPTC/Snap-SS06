// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatteryPageViewLoggingItem
// Superclass: NSObject
// Address: 0x112a27bb8

@interface SCBatteryPageViewLoggingItem

// Property: pageStartTime; attributes: Td,N,V_pageStartTime
// Property: pageEndTime; attributes: Td,N,V_pageEndTime
// Property: previousPageName; attributes: T@"NSString",C,N,V_previousPageName
// Property: startBatteryLevel; attributes: Tf,N,V_startBatteryLevel
// Property: endBatteryLevel; attributes: Tf,N,V_endBatteryLevel
// Property: pageStartThermalState; attributes: T@"NSNumber",C,N,V_pageStartThermalState
// Property: pageMaxThermalState; attributes: T@"NSNumber",C,N,V_pageMaxThermalState
// Property: batteryChargedDuringPageView; attributes: TB,N,V_batteryChargedDuringPageView
// Property: previousPulledCpuTime; attributes: Td,N,V_previousPulledCpuTime
// Property: previousCpuPullTimestamp; attributes: Td,N,V_previousCpuPullTimestamp
// Property: totalCpuTimeMs; attributes: Td,N,V_totalCpuTimeMs
// Property: cpuUsageDict; attributes: T@"NSMutableDictionary",C,N,V_cpuUsageDict
// Property: camerasOpenStatusChangeActivitiesRecordsDict; attributes: T@"NSMutableDictionary",C,N,V_camerasOpenStatusChangeActivitiesRecordsDict

// -[SCBatteryPageViewLoggingItem initWithPageStartTime:previousPageName:isFrontCameraOn:isBackCameraOn:startBatteryLevel:startThermalState:isBatteryCharging:pageStartCpuTime:]
// Type encoding: @64@0:8d16@24B32B36f40@44B52d56
// Implementation: 0x100a18700

// -[SCBatteryPageViewLoggingItem didPageViewEndAtTime:isFrontCameraOn:isBackCameraOn:endBatteryLevel:isBatteryCharging:pageViewEndCpuTime:]
// Type encoding: v48@0:8d16B24B28f32B36d40
// Implementation: 0x1052e75d0

// -[SCBatteryPageViewLoggingItem didBatteryChargingStart]
// Type encoding: v16@0:8
// Implementation: 0x1052e76f4

// -[SCBatteryPageViewLoggingItem didThermalStateChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e7700

// -[SCBatteryPageViewLoggingItem didCameraStartRunningAtTime:cameraPosition:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x1052e7764

// -[SCBatteryPageViewLoggingItem didCameraStopRunningAtTime:cameraPosition:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x1052e7888

// -[SCBatteryPageViewLoggingItem calculateCameraUsage]
// Type encoding: @16@0:8
// Implementation: 0x1052e7938

// -[SCBatteryPageViewLoggingItem didPullCpuTime:atTimestamp:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x1052e79b0

// -[SCBatteryPageViewLoggingItem pageStartTime]
// Type encoding: d16@0:8
// Implementation: 0x1052e7b30

// -[SCBatteryPageViewLoggingItem setPageStartTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e7b38

// -[SCBatteryPageViewLoggingItem pageEndTime]
// Type encoding: d16@0:8
// Implementation: 0x1052e7b40

// -[SCBatteryPageViewLoggingItem setPageEndTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e7b48

// -[SCBatteryPageViewLoggingItem previousPageName]
// Type encoding: @16@0:8
// Implementation: 0x1052e7b50

// -[SCBatteryPageViewLoggingItem setPreviousPageName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e7b58

// -[SCBatteryPageViewLoggingItem startBatteryLevel]
// Type encoding: f16@0:8
// Implementation: 0x1052e7b60

// -[SCBatteryPageViewLoggingItem setStartBatteryLevel:]
// Type encoding: v20@0:8f16
// Implementation: 0x1052e7b68

// -[SCBatteryPageViewLoggingItem endBatteryLevel]
// Type encoding: f16@0:8
// Implementation: 0x1052e7b70

// -[SCBatteryPageViewLoggingItem setEndBatteryLevel:]
// Type encoding: v20@0:8f16
// Implementation: 0x1052e7b78

// -[SCBatteryPageViewLoggingItem pageStartThermalState]
// Type encoding: @16@0:8
// Implementation: 0x1052e7b80

// -[SCBatteryPageViewLoggingItem setPageStartThermalState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e7b88

// -[SCBatteryPageViewLoggingItem pageMaxThermalState]
// Type encoding: @16@0:8
// Implementation: 0x1052e7b90

// -[SCBatteryPageViewLoggingItem setPageMaxThermalState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e7b98

// -[SCBatteryPageViewLoggingItem batteryChargedDuringPageView]
// Type encoding: B16@0:8
// Implementation: 0x1052e7ba0

// -[SCBatteryPageViewLoggingItem setBatteryChargedDuringPageView:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052e7ba8

// -[SCBatteryPageViewLoggingItem previousPulledCpuTime]
// Type encoding: d16@0:8
// Implementation: 0x1052e7bb0

// -[SCBatteryPageViewLoggingItem setPreviousPulledCpuTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e7bb8

// -[SCBatteryPageViewLoggingItem previousCpuPullTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x1052e7bc0

// -[SCBatteryPageViewLoggingItem setPreviousCpuPullTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e7bc8

// -[SCBatteryPageViewLoggingItem totalCpuTimeMs]
// Type encoding: d16@0:8
// Implementation: 0x1052e7bd0

// -[SCBatteryPageViewLoggingItem setTotalCpuTimeMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x1052e7bd8

// -[SCBatteryPageViewLoggingItem cpuUsageDict]
// Type encoding: @16@0:8
// Implementation: 0x1052e7be0

// -[SCBatteryPageViewLoggingItem setCpuUsageDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e7be8

// -[SCBatteryPageViewLoggingItem camerasOpenStatusChangeActivitiesRecordsDict]
// Type encoding: @16@0:8
// Implementation: 0x1052e7bf0

// -[SCBatteryPageViewLoggingItem setCamerasOpenStatusChangeActivitiesRecordsDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e7bf8

// -[SCBatteryPageViewLoggingItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052e7c00

@end
