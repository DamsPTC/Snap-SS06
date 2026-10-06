// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: MGLReachability
// Superclass: NSObject
// Address: 0x112b61498

@interface MGLReachability

// Property: reachabilityRef; attributes: T^{__SCNetworkReachability=},N,V_reachabilityRef
// Property: reachabilitySerialQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_reachabilitySerialQueue
// Property: reachabilityObject; attributes: T@,&,N,V_reachabilityObject
// Property: reachableBlock; attributes: T@?,C,N,V_reachableBlock
// Property: unreachableBlock; attributes: T@?,C,N,V_unreachableBlock
// Property: reachableOnWWAN; attributes: TB,N,V_reachableOnWWAN

// -[MGLReachability initWithReachabilityRef:]
// Type encoding: @24@0:8^{__SCNetworkReachability=}16
// Implementation: 0x107247e08

// -[MGLReachability dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107247ea8

// -[MGLReachability startNotifier]
// Type encoding: B16@0:8
// Implementation: 0x107247f48

// -[MGLReachability stopNotifier]
// Type encoding: v16@0:8
// Implementation: 0x1072480a0

// -[MGLReachability isReachableWithFlags:]
// Type encoding: B20@0:8I16
// Implementation: 0x1072480d8

// -[MGLReachability isReachable]
// Type encoding: B16@0:8
// Implementation: 0x107248110

// -[MGLReachability isReachableViaWWAN]
// Type encoding: B16@0:8
// Implementation: 0x107248150

// -[MGLReachability isReachableViaWiFi]
// Type encoding: B16@0:8
// Implementation: 0x107248190

// -[MGLReachability isConnectionRequired]
// Type encoding: B16@0:8
// Implementation: 0x1072481c4

// -[MGLReachability connectionRequired]
// Type encoding: B16@0:8
// Implementation: 0x1072481c8

// -[MGLReachability isConnectionOnDemand]
// Type encoding: B16@0:8
// Implementation: 0x1072481f4

// -[MGLReachability isInterventionRequired]
// Type encoding: B16@0:8
// Implementation: 0x107248228

// -[MGLReachability currentReachabilityStatus]
// Type encoding: q16@0:8
// Implementation: 0x107248258

// -[MGLReachability reachabilityFlags]
// Type encoding: I16@0:8
// Implementation: 0x107248298

// -[MGLReachability currentReachabilityString]
// Type encoding: @16@0:8
// Implementation: 0x1072482c0

// -[MGLReachability currentReachabilityFlags]
// Type encoding: @16@0:8
// Implementation: 0x107248370

// -[MGLReachability reachabilityChanged:]
// Type encoding: v20@0:8I16
// Implementation: 0x107248428

// -[MGLReachability description]
// Type encoding: @16@0:8
// Implementation: 0x107248570

// -[MGLReachability reachableBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10724860c

// -[MGLReachability setReachableBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107248614

// -[MGLReachability unreachableBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10724861c

// -[MGLReachability setUnreachableBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107248624

// -[MGLReachability reachableOnWWAN]
// Type encoding: B16@0:8
// Implementation: 0x10724862c

// -[MGLReachability setReachableOnWWAN:]
// Type encoding: v20@0:8B16
// Implementation: 0x107248634

// -[MGLReachability reachabilityRef]
// Type encoding: ^{__SCNetworkReachability=}16@0:8
// Implementation: 0x10724863c

// -[MGLReachability setReachabilityRef:]
// Type encoding: v24@0:8^{__SCNetworkReachability=}16
// Implementation: 0x107248644

// -[MGLReachability reachabilitySerialQueue]
// Type encoding: @16@0:8
// Implementation: 0x10724864c

// -[MGLReachability setReachabilitySerialQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x107248654

// -[MGLReachability reachabilityObject]
// Type encoding: @16@0:8
// Implementation: 0x107248674

// -[MGLReachability setReachabilityObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10724867c

// -[MGLReachability .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10724869c

// +[MGLReachability reachabilityWithHostName:]
// Type encoding: @24@0:8@16
// Implementation: 0x107247c5c

// +[MGLReachability reachabilityWithHostname:]
// Type encoding: @24@0:8@16
// Implementation: 0x107247c80

// +[MGLReachability reachabilityWithAddress:]
// Type encoding: @24@0:8^v16
// Implementation: 0x107247d10

// +[MGLReachability reachabilityForInternetConnection]
// Type encoding: @16@0:8
// Implementation: 0x107247d78

// +[MGLReachability reachabilityForLocalWiFi]
// Type encoding: @16@0:8
// Implementation: 0x107247dbc

@end
