// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCPlusGiftingProductImpl
// Superclass: NSObject
// Address: 0x112a0f2e8

@interface SCCPlusGiftingProductImpl

// Property: refId; attributes: T@"NSString",C,N,V_refId
// Property: tier; attributes: Ti,N,V_tier
// Property: isConsumable; attributes: TB,N,V_isConsumable
// Property: isStorage; attributes: TB,N,V_isStorage
// Property: allowedMemoriesStorageGb; attributes: T@"NSNumber",?,&,N,V_allowedMemoriesStorageGb
// Property: price; attributes: T@"SCCPlusIapProductPrice",&,N,V_price
// Property: period; attributes: T@"SCCPlusApiSubscriptionPeriod",?,&,N,V_period
// Property: isFamilyPlan; attributes: TB,N,V_isFamilyPlan
// Property: familyPlanMaxParticipants; attributes: T@"NSNumber",?,&,N,V_familyPlanMaxParticipants
// Property: discount; attributes: T@"SCCPlusProductDiscount",?,&,N,V_discount
// Property: queueStateObservable; attributes: T@"SCBridgeObservable",?,&,N,V_queueStateObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCPlusGiftingProductImpl initWithProduct:recipientUserId:externalId:subscriptionPeriod:storeKitService:performer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104fd503c

// -[SCCPlusGiftingProductImpl purchaseWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104fd5418

// -[SCCPlusGiftingProductImpl refId]
// Type encoding: @16@0:8
// Implementation: 0x104fd557c

// -[SCCPlusGiftingProductImpl setRefId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fd5584

// -[SCCPlusGiftingProductImpl period]
// Type encoding: @16@0:8
// Implementation: 0x104fd558c

// -[SCCPlusGiftingProductImpl setPeriod:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fd5594

// -[SCCPlusGiftingProductImpl price]
// Type encoding: @16@0:8
// Implementation: 0x104fd55c4

// -[SCCPlusGiftingProductImpl setPrice:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fd55cc

// -[SCCPlusGiftingProductImpl discount]
// Type encoding: @16@0:8
// Implementation: 0x104fd55fc

// -[SCCPlusGiftingProductImpl setDiscount:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fd5604

// -[SCCPlusGiftingProductImpl tier]
// Type encoding: i16@0:8
// Implementation: 0x104fd5634

// -[SCCPlusGiftingProductImpl setTier:]
// Type encoding: v20@0:8i16
// Implementation: 0x104fd563c

// -[SCCPlusGiftingProductImpl isConsumable]
// Type encoding: B16@0:8
// Implementation: 0x104fd5644

// -[SCCPlusGiftingProductImpl setIsConsumable:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fd564c

// -[SCCPlusGiftingProductImpl isFamilyPlan]
// Type encoding: B16@0:8
// Implementation: 0x104fd5654

// -[SCCPlusGiftingProductImpl setIsFamilyPlan:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fd565c

// -[SCCPlusGiftingProductImpl isStorage]
// Type encoding: B16@0:8
// Implementation: 0x104fd5664

// -[SCCPlusGiftingProductImpl setIsStorage:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fd566c

// -[SCCPlusGiftingProductImpl allowedMemoriesStorageGb]
// Type encoding: @16@0:8
// Implementation: 0x104fd5674

// -[SCCPlusGiftingProductImpl setAllowedMemoriesStorageGb:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fd567c

// -[SCCPlusGiftingProductImpl familyPlanMaxParticipants]
// Type encoding: @16@0:8
// Implementation: 0x104fd56ac

// -[SCCPlusGiftingProductImpl setFamilyPlanMaxParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fd56b4

// -[SCCPlusGiftingProductImpl queueStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x104fd56e4

// -[SCCPlusGiftingProductImpl setQueueStateObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fd56ec

// -[SCCPlusGiftingProductImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fd571c

@end
