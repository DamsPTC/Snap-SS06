// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCPlusCampaignProduct
// Superclass: SCValdiMarshallableObject
// Address: 0x112c1c108

@interface SCCPlusCampaignProduct

// Property: refId; attributes: T@"NSString",C,D,N
// Property: price; attributes: T@"SCCPlusIapProductPrice",&,D,N
// Property: period; attributes: T@"SCCPlusApiSubscriptionPeriod",&,D,N
// Property: tier; attributes: Ti,D,N
// Property: isFamilyPlan; attributes: TB,D,N
// Property: isConsumable; attributes: TB,D,N
// Property: isStorage; attributes: TB,D,N
// Property: discount; attributes: T@"SCCPlusProductDiscount",&,D,N

// -[SCCPlusCampaignProduct initWithRefId:price:tier:isFamilyPlan:isConsumable:isStorage:]
// Type encoding: @48@0:8@16@24i32B36B40B44
// Implementation: 0x10af36180

// +[SCCPlusCampaignProduct valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10af361b0

@end
