// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStreakRestorePaidProduct
// Superclass: NSObject
// Address: 0x112abe388

@interface SCPlusStreakRestorePaidProduct

// Property: productId; attributes: T@"NSString",?,C,N
// Property: localizedPrice; attributes: T@"NSString",C,N,V_localizedPrice
// Property: price; attributes: T@"SCCPlusIapProductPrice",&,N,V_price
// Property: queueStateObservable; attributes: T@"SCBridgeObservable",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusStreakRestorePaidProduct initWithConversationId:traceId:externalId:product:storeKitServices:circumstanceEngine:delegate:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106018318

// -[SCPlusStreakRestorePaidProduct purchaseWithPurchaseId:domainInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106018580

// -[SCPlusStreakRestorePaidProduct price]
// Type encoding: @16@0:8
// Implementation: 0x106018808

// -[SCPlusStreakRestorePaidProduct setPrice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106018810

// -[SCPlusStreakRestorePaidProduct localizedPrice]
// Type encoding: @16@0:8
// Implementation: 0x106018840

// -[SCPlusStreakRestorePaidProduct setLocalizedPrice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106018848

// -[SCPlusStreakRestorePaidProduct .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106018850

@end
