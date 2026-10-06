// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNetworkConnectivityMonitor
// Superclass: NSObject
// Address: 0x112c751b8

@interface SCNetworkConnectivityMonitor

// Property: networkConnectivityBehaviorSubject; attributes: T@"SCBehaviorSubject",R,N,V_networkConnectivityBehaviorSubject
// Property: networkReconnectPublishSubject; attributes: T@"SCPublishSubject",R,N,V_networkReconnectPublishSubject
// Property: connectivityStatus; attributes: Tq,R,N
// Property: isConnected; attributes: TB,R,N
// Property: networkConnectivityObservable; attributes: T@"SCObservable",R,N
// Property: networkReconnectObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNetworkConnectivityMonitor initWithDefaultHostName:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c5c0d8

// -[SCNetworkConnectivityMonitor initWithDefaultHost]
// Type encoding: @16@0:8
// Implementation: 0x10b2d15e8

// -[SCNetworkConnectivityMonitor dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b2d15f4

// -[SCNetworkConnectivityMonitor networkConnectivityObservable]
// Type encoding: @16@0:8
// Implementation: 0x100c5c2cc

// -[SCNetworkConnectivityMonitor networkReconnectObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b2d1638

// -[SCNetworkConnectivityMonitor connectivityStatus]
// Type encoding: q16@0:8
// Implementation: 0x100c618c4

// -[SCNetworkConnectivityMonitor setConnectivityStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x100c61a30

// -[SCNetworkConnectivityMonitor networkReachability]
// Type encoding: ^{__SCNetworkReachability=}16@0:8
// Implementation: 0x100c5ca8c

// -[SCNetworkConnectivityMonitor setNetworkReachability:]
// Type encoding: v24@0:8^{__SCNetworkReachability=}16
// Implementation: 0x100c5d064

// -[SCNetworkConnectivityMonitor isConnected]
// Type encoding: B16@0:8
// Implementation: 0x10b2d1660

// -[SCNetworkConnectivityMonitor onConnectivityChangeBasedOnNQE:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2d168c

// -[SCNetworkConnectivityMonitor _startMonitoringNetworkReachability]
// Type encoding: v16@0:8
// Implementation: 0x100c5c8d8

// -[SCNetworkConnectivityMonitor _resetNetworkReachability]
// Type encoding: v16@0:8
// Implementation: 0x100c5ca2c

// -[SCNetworkConnectivityMonitor _setConnectivityStatus:prevConnectivityStatus:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x100c61908

// -[SCNetworkConnectivityMonitor networkConnectivityBehaviorSubject]
// Type encoding: @16@0:8
// Implementation: 0x10b2d17e4

// -[SCNetworkConnectivityMonitor networkReconnectPublishSubject]
// Type encoding: @16@0:8
// Implementation: 0x10b2d17ec

// -[SCNetworkConnectivityMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2d17f4

@end
