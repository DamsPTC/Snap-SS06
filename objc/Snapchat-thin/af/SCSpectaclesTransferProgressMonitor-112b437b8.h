// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesTransferProgressMonitor
// Superclass: NSObject
// Address: 0x112b437b8

@interface SCSpectaclesTransferProgressMonitor

// Property: uptimeTimer; attributes: T@"SCWeakTimer",&,N,V_uptimeTimer
// Property: timerStartDate; attributes: T@"NSDate",&,N,V_timerStartDate
// Property: cumulativeWatchdogUptime; attributes: Td,N,V_cumulativeWatchdogUptime
// Property: failureCount; attributes: Tq,N,V_failureCount
// Property: device; attributes: T@"SCSpectaclesDevice",W,N,V_device
// Property: analyticsLogger; attributes: T@"<SCSpectaclesLibraryLogger>",W,N,V_analyticsLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesTransferProgressMonitor initWithDevice:announcer:analyticsLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106eb33c4

// -[SCSpectaclesTransferProgressMonitor _kickUptimeWatchdog]
// Type encoding: v16@0:8
// Implementation: 0x106eb347c

// -[SCSpectaclesTransferProgressMonitor _startUptimeWatchdog]
// Type encoding: v16@0:8
// Implementation: 0x106eb3504

// -[SCSpectaclesTransferProgressMonitor _stopUptimeWatchdog]
// Type encoding: v16@0:8
// Implementation: 0x106eb35bc

// -[SCSpectaclesTransferProgressMonitor _uptimeWatchdogTimedOut]
// Type encoding: v16@0:8
// Implementation: 0x106eb3668

// -[SCSpectaclesTransferProgressMonitor spectaclesDevice:onFirmwareUpdate:progress:]
// Type encoding: v36@0:8@16Q24f32
// Implementation: 0x106eb37f4

// -[SCSpectaclesTransferProgressMonitor spectaclesTransferSession:onTransferUpdate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106eb3870

// -[SCSpectaclesTransferProgressMonitor spectaclesDeviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb38f0

// -[SCSpectaclesTransferProgressMonitor uptimeTimer]
// Type encoding: @16@0:8
// Implementation: 0x106eb39b8

// -[SCSpectaclesTransferProgressMonitor setUptimeTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb39c0

// -[SCSpectaclesTransferProgressMonitor timerStartDate]
// Type encoding: @16@0:8
// Implementation: 0x106eb39f0

// -[SCSpectaclesTransferProgressMonitor setTimerStartDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb39f8

// -[SCSpectaclesTransferProgressMonitor cumulativeWatchdogUptime]
// Type encoding: d16@0:8
// Implementation: 0x106eb3a28

// -[SCSpectaclesTransferProgressMonitor setCumulativeWatchdogUptime:]
// Type encoding: v24@0:8d16
// Implementation: 0x106eb3a30

// -[SCSpectaclesTransferProgressMonitor failureCount]
// Type encoding: q16@0:8
// Implementation: 0x106eb3a38

// -[SCSpectaclesTransferProgressMonitor setFailureCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106eb3a40

// -[SCSpectaclesTransferProgressMonitor device]
// Type encoding: @16@0:8
// Implementation: 0x106eb3a48

// -[SCSpectaclesTransferProgressMonitor setDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb3a60

// -[SCSpectaclesTransferProgressMonitor analyticsLogger]
// Type encoding: @16@0:8
// Implementation: 0x106eb3a6c

// -[SCSpectaclesTransferProgressMonitor setAnalyticsLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb3a84

// -[SCSpectaclesTransferProgressMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106eb3a90

@end
