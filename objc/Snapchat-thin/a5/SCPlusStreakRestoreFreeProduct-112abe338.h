// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStreakRestoreFreeProduct
// Superclass: NSObject
// Address: 0x112abe338

@interface SCPlusStreakRestoreFreeProduct

// Property: productId; attributes: T@"NSString",?,C,N
// Property: localizedPrice; attributes: T@"NSString",C,N,V_localizedPrice
// Property: price; attributes: T@"SCCPlusIapProductPrice",&,N,V_price
// Property: queueStateObservable; attributes: T@"SCBridgeObservable",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusStreakRestoreFreeProduct initWithConversationId:traceId:nativeMessagingServices:grpcClient:delegate:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106017e50

// -[SCPlusStreakRestoreFreeProduct purchaseWithPurchaseId:domainInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060180c8

// -[SCPlusStreakRestoreFreeProduct price]
// Type encoding: @16@0:8
// Implementation: 0x106018268

// -[SCPlusStreakRestoreFreeProduct setPrice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106018270

// -[SCPlusStreakRestoreFreeProduct localizedPrice]
// Type encoding: @16@0:8
// Implementation: 0x1060182a0

// -[SCPlusStreakRestoreFreeProduct setLocalizedPrice:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060182a8

// -[SCPlusStreakRestoreFreeProduct .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060182b0

@end
