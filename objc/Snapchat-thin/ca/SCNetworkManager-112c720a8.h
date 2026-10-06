// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNetworkManager
// Superclass: NSObject
// Address: 0x112c720a8

@interface SCNetworkManager

// Property: networkManagerLogger; attributes: T@"SCRequestManagerLogger",&,N,V_networkManagerLogger
// Property: queuePerformer; attributes: T@"<SCPerforming>",&,N,V_queuePerformer
// Property: delegate; attributes: T@"<SCNetworkManagerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNetworkManager init]
// Type encoding: @16@0:8
// Implementation: 0x1000e04a8

// -[SCNetworkManager _addObservers]
// Type encoding: v16@0:8
// Implementation: 0x1000e2ad0

// -[SCNetworkManager submitRequest:authenticator:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x100b43348

// -[SCNetworkManager submitRequest:authenticator:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x10059e7dc

// -[SCNetworkManager submitRequest:authenticator:progressiveUpdateQueue:progressiveUpdateBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10b26fe18

// -[SCNetworkManager cancelRequestWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26fe20

// -[SCNetworkManager cancelRequestWithKey:cancelReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b26fe28

// -[SCNetworkManager cancelQueuedRequestWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26fe30

// -[SCNetworkManager cancelRequestsWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26fe38

// -[SCNetworkManager cancelRequestsWithContext:cancelReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b26fe40

// -[SCNetworkManager boostRequestWithKey:toHigherPriority:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b26fe48

// -[SCNetworkManager boostRequestWithKey:toHigherConnectivity:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b26fe5c

// -[SCNetworkManager updateRequestWithKey:toPriority:importance:connectivity:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x10b26fe70

// -[SCNetworkManager updateRequestWithKey:toPriority:importance:connectivity:pageId:]
// Type encoding: v52@0:8@16q24q32q40i48
// Implementation: 0x10b26fe78

// -[SCNetworkManager contextsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b26ff10

// -[SCNetworkManager setContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008541c8

// -[SCNetworkManager setContexts:withRequestManagerMode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b26ff18

// -[SCNetworkManager addContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26ff20

// -[SCNetworkManager removeContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26ff28

// -[SCNetworkManager removeContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26ff30

// -[SCNetworkManager removeContext:disableContextOnlyModeIfRemoved:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b26ff38

// -[SCNetworkManager removeWithChildsParentContext:disableContextOnlyModeIfRemoved:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b26ff40

// -[SCNetworkManager addContext:toRequestWithKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b26ff48

// -[SCNetworkManager pauseBackgroundDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b26ff50

// -[SCNetworkManager resumeBackgroundDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b26ff58

// -[SCNetworkManager startToMonitorProgressWithRequestKey:queue:progressHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b26ff60

// -[SCNetworkManager stopToMonitorProgressWithRequestKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26ff68

// -[SCNetworkManager startToMonitorUploadProgressWithRequestKey:progressHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b26ff70

// -[SCNetworkManager enableCriticalMode]
// Type encoding: v16@0:8
// Implementation: 0x10b26ff78

// -[SCNetworkManager disableCriticalMode]
// Type encoding: v16@0:8
// Implementation: 0x10b26ff80

// -[SCNetworkManager downloadStateForRequestWithKey:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b26ff88

// -[SCNetworkManager resetWithAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26ff90

// -[SCNetworkManager _networkReachabilityStatusDidChangeWithNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003db824

// -[SCNetworkManager criticalModeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b26ff98

// -[SCNetworkManager numOfLargeDLTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b26ffa0

// -[SCNetworkManager numOfUploadTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b26ffa8

// -[SCNetworkManager totalRequestConcurrencyReceivingData]
// Type encoding: Q16@0:8
// Implementation: 0x10b26ffb0

// -[SCNetworkManager downloadRequestConcurrency]
// Type encoding: Q16@0:8
// Implementation: 0x10b26ffb8

// -[SCNetworkManager metadataRequestConcurrency]
// Type encoding: Q16@0:8
// Implementation: 0x10b26ffc0

// -[SCNetworkManager consumeContentWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26ffc8

// -[SCNetworkManager networkInterceptors]
// Type encoding: @16@0:8
// Implementation: 0x10b26ffcc

// -[SCNetworkManager setNetworkInterceptors:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e2b44

// -[SCNetworkManager setNetworkDeps:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e2b8c

// -[SCNetworkManager contextsDidChangeForRequestScheduler:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008543b8

// -[SCNetworkManager nnmNetworkApi]
// Type encoding: @16@0:8
// Implementation: 0x10b26ffd4

// -[SCNetworkManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x100854408

// -[SCNetworkManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e2b28

// -[SCNetworkManager networkManagerLogger]
// Type encoding: @16@0:8
// Implementation: 0x10b27003c

// -[SCNetworkManager setNetworkManagerLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b270044

// -[SCNetworkManager queuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1000e2b34

// -[SCNetworkManager setQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b270074

// -[SCNetworkManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2700a4

@end
