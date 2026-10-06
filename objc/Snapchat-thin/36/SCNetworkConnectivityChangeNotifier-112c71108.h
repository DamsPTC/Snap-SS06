// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNetworkConnectivityChangeNotifier
// Superclass: NSObject
// Address: 0x112c71108

@interface SCNetworkConnectivityChangeNotifier

// Property: currentConnectivity; attributes: Tq,V_currentConnectivity
// Property: currentRadioAccessType; attributes: Tq,V_currentRadioAccessType
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNetworkConnectivityChangeNotifier initWithDefaultNetworkReachability:queuePerformer:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x1005aea80

// -[SCNetworkConnectivityChangeNotifier _handleServiceRadioAccessTechnologyDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b25b9b0

// -[SCNetworkConnectivityChangeNotifier registerListener:]
// Type encoding: q24@0:8@16
// Implementation: 0x100610414

// -[SCNetworkConnectivityChangeNotifier notifyListener:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b25bbc8

// -[SCNetworkConnectivityChangeNotifier registerRadioAccessTypeListener:]
// Type encoding: q24@0:8@16
// Implementation: 0x100628e20

// -[SCNetworkConnectivityChangeNotifier notifyRadioAccessType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b25bd1c

// -[SCNetworkConnectivityChangeNotifier _publishRadioAccessType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b25be78

// -[SCNetworkConnectivityChangeNotifier updateCurrentReachability:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b25bf10

// -[SCNetworkConnectivityChangeNotifier updateCurrentReachability]
// Type encoding: v16@0:8
// Implementation: 0x10b25bfb8

// -[SCNetworkConnectivityChangeNotifier currentConnectivity]
// Type encoding: q16@0:8
// Implementation: 0x1006104dc

// -[SCNetworkConnectivityChangeNotifier setCurrentConnectivity:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b25bff4

// -[SCNetworkConnectivityChangeNotifier currentRadioAccessType]
// Type encoding: q16@0:8
// Implementation: 0x100628ed4

// -[SCNetworkConnectivityChangeNotifier setCurrentRadioAccessType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1005c9184

// -[SCNetworkConnectivityChangeNotifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b25bffc

@end
