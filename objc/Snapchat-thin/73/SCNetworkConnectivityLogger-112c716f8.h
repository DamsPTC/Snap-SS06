// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNetworkConnectivityLogger
// Superclass: NSObject
// Address: 0x112c716f8

@interface SCNetworkConnectivityLogger

// Property: lastNetworkStatusChangedTimeStamp; attributes: Td,R,V_lastNetworkStatusChangedTimeStamp
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNetworkConnectivityLogger initWithNetworkDeps:]
// Type encoding: @24@0:8@16
// Implementation: 0x10010a088

// -[SCNetworkConnectivityLogger dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b25f47c

// -[SCNetworkConnectivityLogger networkConnectivityStatusDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x10010fc94

// -[SCNetworkConnectivityLogger connectivityReportWithStartTime:endTime:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x10b25f4c0

// -[SCNetworkConnectivityLogger connectivityChangesWithStartTime:endTime:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x10b25f75c

// -[SCNetworkConnectivityLogger getCurrentWifiSSID]
// Type encoding: @16@0:8
// Implementation: 0x10b25f9ac

// -[SCNetworkConnectivityLogger _startScanWifiSSID]
// Type encoding: v16@0:8
// Implementation: 0x10010a508

// -[SCNetworkConnectivityLogger _createSessionTimerWithInterval:queue:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x10010b9dc

// -[SCNetworkConnectivityLogger _updateWifiSSID]
// Type encoding: v16@0:8
// Implementation: 0x10010babc

// -[SCNetworkConnectivityLogger _stopScanWifiSSID]
// Type encoding: v16@0:8
// Implementation: 0x10b25fb3c

// -[SCNetworkConnectivityLogger _queryWifiCheckEligibility:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10010bb0c

// -[SCNetworkConnectivityLogger lastNetworkStatusChangedTimeStamp]
// Type encoding: d16@0:8
// Implementation: 0x10b25fbd8

// -[SCNetworkConnectivityLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b25fbe0

@end
