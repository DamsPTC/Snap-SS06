// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesSsidScanner
// Superclass: NSObject
// Address: 0x112b57ee8

@interface SCSpectaclesSsidScanner

// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: updateTimer; attributes: T@"SCWeakTimer",&,N,V_updateTimer
// Property: networkConnectivityMonitor; attributes: T@"<SCNetworkConnectivityMonitoring>",&,N,V_networkConnectivityMonitor
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: systemScope; attributes: T@"_TtC13SCSystemScope13SCSystemScope",&,N,V_systemScope
// Property: disposable; attributes: T@"SCDisposableObserverLifecycle",&,N,V_disposable
// Property: currentSsid; attributes: T@"NSString",R,C,N,V_currentSsid
// Property: currentSsidObservable; attributes: T@"SCObservable",R,C,N
// Property: pollingInterval; attributes: TQ,N,V_pollingInterval
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesSsidScanner initWithNetworkConnectivityMonitorServices:circumstanceEngine:systemScope:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100c5bc60

// -[SCSpectaclesSsidScanner setPollingInterval:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106fcc064

// -[SCSpectaclesSsidScanner forceUpdate]
// Type encoding: v16@0:8
// Implementation: 0x100c5c320

// -[SCSpectaclesSsidScanner wifiConnectionStatusForDisplayName:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106fcc17c

// -[SCSpectaclesSsidScanner currentSsidObservable]
// Type encoding: @16@0:8
// Implementation: 0x100c5c4f8

// -[SCSpectaclesSsidScanner _updateWifiSsid]
// Type encoding: v16@0:8
// Implementation: 0x100c5d444

// -[SCSpectaclesSsidScanner currentSsid]
// Type encoding: @16@0:8
// Implementation: 0x100c65b0c

// -[SCSpectaclesSsidScanner pollingInterval]
// Type encoding: Q16@0:8
// Implementation: 0x106fcc208

// -[SCSpectaclesSsidScanner performer]
// Type encoding: @16@0:8
// Implementation: 0x100c5c4c4

// -[SCSpectaclesSsidScanner setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcc210

// -[SCSpectaclesSsidScanner updateTimer]
// Type encoding: @16@0:8
// Implementation: 0x106fcc240

// -[SCSpectaclesSsidScanner setUpdateTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcc248

// -[SCSpectaclesSsidScanner networkConnectivityMonitor]
// Type encoding: @16@0:8
// Implementation: 0x106fcc278

// -[SCSpectaclesSsidScanner setNetworkConnectivityMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcc280

// -[SCSpectaclesSsidScanner circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x106fcc2b0

// -[SCSpectaclesSsidScanner setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcc2b8

// -[SCSpectaclesSsidScanner systemScope]
// Type encoding: @16@0:8
// Implementation: 0x106fcc2e8

// -[SCSpectaclesSsidScanner setSystemScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcc2f0

// -[SCSpectaclesSsidScanner disposable]
// Type encoding: @16@0:8
// Implementation: 0x106fcc320

// -[SCSpectaclesSsidScanner setDisposable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcc328

// -[SCSpectaclesSsidScanner .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fcc358

@end
