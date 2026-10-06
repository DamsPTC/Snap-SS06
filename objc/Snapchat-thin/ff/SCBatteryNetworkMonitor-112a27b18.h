// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatteryNetworkMonitor
// Superclass: NSObject
// Address: 0x112a27b18

@interface SCBatteryNetworkMonitor

// Property: hasOngoingNetworkActivity; attributes: TB,V_hasOngoingNetworkActivity

// -[SCBatteryNetworkMonitor initWithNetworkMonitor:]
// Type encoding: @24@0:8@16
// Implementation: 0x10011bad8

// -[SCBatteryNetworkMonitor _initWithQueuePerformer:networkMonitor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10011bb5c

// -[SCBatteryNetworkMonitor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1052e2be0

// -[SCBatteryNetworkMonitor _resetNetworkTrafficStatisticsData]
// Type encoding: v16@0:8
// Implementation: 0x10011bde8

// -[SCBatteryNetworkMonitor _shouldEnableNetworkRadioStatusEstimator]
// Type encoding: B16@0:8
// Implementation: 0x10068d758

// -[SCBatteryNetworkMonitor networkConnectivityStatusDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x1052e2c28

// -[SCBatteryNetworkMonitor _networkConnectivityStatusDidChange:atTime:inBackground:]
// Type encoding: v36@0:8q16@24B32
// Implementation: 0x1052e2dc4

// -[SCBatteryNetworkMonitor logStartedNetworkActivity:startTime:activityAttributionKey:activityAttributionInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10068d5ec

// -[SCBatteryNetworkMonitor _logStartedNetworkActivity:startTime:activityAttributionKey:activityAttributionInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1052e2ea0

// -[SCBatteryNetworkMonitor logFinishedNetworkActivity:endTime:activityAttributionKey:activityAttributionInfo:succeeded:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x10089fd4c

// -[SCBatteryNetworkMonitor _logFinishedNetworkActivity:endTime:activityAttributionKey:activityAttributionInfo:succeeded:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x1052e2fac

// -[SCBatteryNetworkMonitor _didStartNetworkActivity:timestamp:activityAttributionKey:networkActivityAttributionIdentifier:inBackground:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x1052e3084

// -[SCBatteryNetworkMonitor _didFinishNetworkActivity:timestamp:activityAttributionKey:networkActivityAttributionIdentifier:succeeded:inBackground:]
// Type encoding: v56@0:8@16@24@32@40B48B52
// Implementation: 0x1052e321c

// -[SCBatteryNetworkMonitor resetNetworkUsageRecordWhenAppOpen]
// Type encoding: v16@0:8
// Implementation: 0x1052e33b4

// -[SCBatteryNetworkMonitor _resetNetworkUsageRecordWhenAppOpenWithTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e34d4

// -[SCBatteryNetworkMonitor _didEnterBackgroundWithTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e354c

// -[SCBatteryNetworkMonitor networkUsageFromAppOpenUntilTimestamp:onAppBackground:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1052e35b4

// -[SCBatteryNetworkMonitor _networkUsageFromAppOpenUntilTimestamp:onAppBackground:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1052e3788

// -[SCBatteryNetworkMonitor _networkUsageFromAppOpenUntilTimestamp:withConnectivityStatus:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1052e37f4

// -[SCBatteryNetworkMonitor backgroundAppSessionNetworkUsageWithStartTime:endTime:startNetworkConnectivity:endNetworkConnectivity:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x1052e5938

// -[SCBatteryNetworkMonitor _backgroundAppSessionNetworkUsageWithStartTime:endTime:startNetworkConnectivity:endNetworkConnectivity:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x1052e5b2c

// -[SCBatteryNetworkMonitor hasOngoingNetworkActivity]
// Type encoding: B16@0:8
// Implementation: 0x1052e6068

// -[SCBatteryNetworkMonitor setHasOngoingNetworkActivity:]
// Type encoding: v20@0:8B16
// Implementation: 0x1052e6074

// -[SCBatteryNetworkMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052e607c

@end
