// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCPlusProductImpl
// Superclass: NSObject
// Address: 0x112b26ac8

@interface SCCPlusProductImpl

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

// -[SCCPlusProductImpl initWithPlanRefId:productHandler:eligibleOfferInfo:promotionalOffer:requiresEmail:performer:delegate:]
// Type encoding: @68@0:8@16@24@32@40B48@52@60
// Implementation: 0x106c6cbf8

// -[SCCPlusProductImpl purchaseWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106c6d2e4

// -[SCCPlusProductImpl refId]
// Type encoding: @16@0:8
// Implementation: 0x106c6d488

// -[SCCPlusProductImpl setRefId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c6d490

// -[SCCPlusProductImpl period]
// Type encoding: @16@0:8
// Implementation: 0x106c6d498

// -[SCCPlusProductImpl setPeriod:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c6d4a0

// -[SCCPlusProductImpl price]
// Type encoding: @16@0:8
// Implementation: 0x106c6d4d0

// -[SCCPlusProductImpl setPrice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c6d4d8

// -[SCCPlusProductImpl discount]
// Type encoding: @16@0:8
// Implementation: 0x106c6d508

// -[SCCPlusProductImpl setDiscount:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c6d510

// -[SCCPlusProductImpl queueStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x106c6d540

// -[SCCPlusProductImpl setQueueStateObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c6d548

// -[SCCPlusProductImpl tier]
// Type encoding: i16@0:8
// Implementation: 0x106c6d578

// -[SCCPlusProductImpl setTier:]
// Type encoding: v20@0:8i16
// Implementation: 0x106c6d580

// -[SCCPlusProductImpl isConsumable]
// Type encoding: B16@0:8
// Implementation: 0x106c6d588

// -[SCCPlusProductImpl setIsConsumable:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c6d590

// -[SCCPlusProductImpl isFamilyPlan]
// Type encoding: B16@0:8
// Implementation: 0x106c6d598

// -[SCCPlusProductImpl setIsFamilyPlan:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c6d5a0

// -[SCCPlusProductImpl isStorage]
// Type encoding: B16@0:8
// Implementation: 0x106c6d5a8

// -[SCCPlusProductImpl setIsStorage:]
// Type encoding: v20@0:8B16
// Implementation: 0x106c6d5b0

// -[SCCPlusProductImpl allowedMemoriesStorageGb]
// Type encoding: @16@0:8
// Implementation: 0x106c6d5b8

// -[SCCPlusProductImpl setAllowedMemoriesStorageGb:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c6d5c0

// -[SCCPlusProductImpl familyPlanMaxParticipants]
// Type encoding: @16@0:8
// Implementation: 0x106c6d5f0

// -[SCCPlusProductImpl setFamilyPlanMaxParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c6d5f8

// -[SCCPlusProductImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c6d628

@end
