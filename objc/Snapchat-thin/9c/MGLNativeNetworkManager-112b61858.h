// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: MGLNativeNetworkManager
// Superclass: NSObject
// Address: 0x112b61858

@interface MGLNativeNetworkManager

// Property: delegate; attributes: T@"<MGLNativeNetworkDelegate>",W,N,V_delegate
// Property: skuToken; attributes: T@"NSString",R,N
// Property: sessionConfiguration; attributes: T@"NSURLSessionConfiguration",R,N

// -[MGLNativeNetworkManager skuToken]
// Type encoding: @16@0:8
// Implementation: 0x1078bb804

// -[MGLNativeNetworkManager sessionConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1078bb884

// -[MGLNativeNetworkManager startDownloadEvent:type:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1078bb8d8

// -[MGLNativeNetworkManager cancelDownloadEventForResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x1078bb940

// -[MGLNativeNetworkManager stopDownloadEventForResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x1078bb978

// -[MGLNativeNetworkManager debugLog:]
// Type encoding: v24@0:8@16
// Implementation: 0x1078bb9b0

// -[MGLNativeNetworkManager errorLog:]
// Type encoding: v24@0:8@16
// Implementation: 0x1078bb9e8

// -[MGLNativeNetworkManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x1078bba20

// -[MGLNativeNetworkManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1078bba38

// -[MGLNativeNetworkManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1078bba44

// +[MGLNativeNetworkManager sharedManager]
// Type encoding: @16@0:8
// Implementation: 0x1078bb72c

// +[MGLNativeNetworkManager testSessionConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1078bb7a8

@end
