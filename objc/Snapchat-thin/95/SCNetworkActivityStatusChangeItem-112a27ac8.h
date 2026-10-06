// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNetworkActivityStatusChangeItem
// Superclass: NSObject
// Address: 0x112a27ac8

@interface SCNetworkActivityStatusChangeItem

// Property: timestamp; attributes: T@"NSDate",&,N,V_timestamp
// Property: type; attributes: TQ,N,V_type
// Property: networkActivityIdentifier; attributes: T@"NSString",C,N,V_networkActivityIdentifier
// Property: networkActivityAttributionKey; attributes: T@"NSString",C,N,V_networkActivityAttributionKey
// Property: networkActivityAttributionIdentifier; attributes: T@"SCNetworkActivityAttributionIdentifier",&,N,V_networkActivityAttributionIdentifier
// Property: connectivityStatus; attributes: Tq,N,V_connectivityStatus

// -[SCNetworkActivityStatusChangeItem initWithTimestamp:type:networkActivityIdentifier:networkActivityAttributionKey:networkActivityAttributionIdentifier:connectivityStatus:]
// Type encoding: @64@0:8@16Q24@32@40@48q56
// Implementation: 0x1052e2974

// -[SCNetworkActivityStatusChangeItem timestamp]
// Type encoding: @16@0:8
// Implementation: 0x1052e2a90

// -[SCNetworkActivityStatusChangeItem setTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e2a98

// -[SCNetworkActivityStatusChangeItem type]
// Type encoding: Q16@0:8
// Implementation: 0x1052e2ac8

// -[SCNetworkActivityStatusChangeItem setType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1052e2ad0

// -[SCNetworkActivityStatusChangeItem networkActivityIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1052e2ad8

// -[SCNetworkActivityStatusChangeItem setNetworkActivityIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e2ae0

// -[SCNetworkActivityStatusChangeItem networkActivityAttributionKey]
// Type encoding: @16@0:8
// Implementation: 0x1052e2ae8

// -[SCNetworkActivityStatusChangeItem setNetworkActivityAttributionKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e2af0

// -[SCNetworkActivityStatusChangeItem networkActivityAttributionIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1052e2af8

// -[SCNetworkActivityStatusChangeItem setNetworkActivityAttributionIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052e2b00

// -[SCNetworkActivityStatusChangeItem connectivityStatus]
// Type encoding: q16@0:8
// Implementation: 0x1052e2b30

// -[SCNetworkActivityStatusChangeItem setConnectivityStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x1052e2b38

// -[SCNetworkActivityStatusChangeItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052e2b40

@end
