// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCacheRequestOptions
// Superclass: NSObject
// Address: 0x112ca22d0

@interface SCCacheRequestOptions

// Property: deliveryMode; attributes: TQ,N,V_deliveryMode
// Property: imageVersion; attributes: TQ,N,V_imageVersion
// Property: requestTargetSize; attributes: T{CGSize=dd},N,V_requestTargetSize
// Property: networkDownloadDelayEnabled; attributes: TB,N,V_networkDownloadDelayEnabled
// Property: shouldCacheMediaInMemory; attributes: TB,N,V_shouldCacheMediaInMemory

// -[SCCacheRequestOptions deliveryMode]
// Type encoding: Q16@0:8
// Implementation: 0x10b686d90

// -[SCCacheRequestOptions setDeliveryMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b686d98

// -[SCCacheRequestOptions imageVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10b686da0

// -[SCCacheRequestOptions setImageVersion:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b686da8

// -[SCCacheRequestOptions requestTargetSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b686db0

// -[SCCacheRequestOptions setRequestTargetSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10b686db8

// -[SCCacheRequestOptions networkDownloadDelayEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b686dc0

// -[SCCacheRequestOptions setNetworkDownloadDelayEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b686dc8

// -[SCCacheRequestOptions shouldCacheMediaInMemory]
// Type encoding: B16@0:8
// Implementation: 0x10b686dd0

// -[SCCacheRequestOptions setShouldCacheMediaInMemory:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b686dd8

// +[SCCacheRequestOptions createRequestWithOptions:imageVersion:shouldCacheMediaInMemory:]
// Type encoding: @36@0:8Q16Q24B32
// Implementation: 0x10b686d38

@end
