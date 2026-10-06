// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNetworkApiRouter
// Superclass: NSObject
// Address: 0x112c710b8

@interface SCNetworkApiRouter

// Property: nativeNetworkApi; attributes: T@"SCNNetworkApiNetworkApi",&,N,V_nativeNetworkApi

// -[SCNetworkApiRouter initWithNetworkApi:networkDeps:networkCallbackDelegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100676bec

// -[SCNetworkApiRouter uploadInMemoryDataProviderFromRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x10067810c

// -[SCNetworkApiRouter uploadFilePathFromRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x1006783a0

// -[SCNetworkApiRouter submitNativeHttpRequest:withRequestTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100677c58

// -[SCNetworkApiRouter cancelRequestTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b25b858

// -[SCNetworkApiRouter updateRankingSignalWithRequestTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b25b884

// -[SCNetworkApiRouter generateRetryConfig:isProgressiveRequest:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1006799f4

// -[SCNetworkApiRouter nativeNetworkApi]
// Type encoding: @16@0:8
// Implementation: 0x10b25b91c

// -[SCNetworkApiRouter setNativeNetworkApi:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b25b924

// -[SCNetworkApiRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b25b954

@end
