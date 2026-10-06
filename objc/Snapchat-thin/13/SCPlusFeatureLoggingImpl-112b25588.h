// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusFeatureLoggingImpl
// Superclass: NSObject
// Address: 0x112b25588

@interface SCPlusFeatureLoggingImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusFeatureLoggingImpl initWithSubscriptionInfoProvider:userBlizzardServices:grapheneServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c4d5e0

// -[SCPlusFeatureLoggingImpl logUpsellImpressionForFeatureType:pageType:sourceType:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x106c4d6ac

// -[SCPlusFeatureLoggingImpl logUpsellImpressionForFeatureType:pageType:sourceType:sourceId:]
// Type encoding: v48@0:8q16q24q32@40
// Implementation: 0x106c4d6b4

// -[SCPlusFeatureLoggingImpl logInteraction:forFeatureType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x106c4d7d8

// -[SCPlusFeatureLoggingImpl logInteraction:forFeatureType:pageType:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x106c4d7e0

// -[SCPlusFeatureLoggingImpl logInteraction:forFeatureType:friendUserId:itemId:]
// Type encoding: v48@0:8q16q24@32@40
// Implementation: 0x106c4d80c

// -[SCPlusFeatureLoggingImpl logInteraction:forFeatureType:pageType:itemType:itemTypeSpecific:itemId:itemIndex:]
// Type encoding: v72@0:8q16q24q32@40@48@56@64
// Implementation: 0x106c4d840

// -[SCPlusFeatureLoggingImpl logInteraction:forFeatureType:pageType:friendUserId:itemType:itemTypeSpecific:itemId:itemIndex:]
// Type encoding: v80@0:8q16q24q32@40@48@56@64@72
// Implementation: 0x106c4d874

// -[SCPlusFeatureLoggingImpl logInteraction:forFeatureType:pageType:sourceType:friendUserId:itemType:itemTypeSpecific:itemId:itemIndex:]
// Type encoding: v88@0:8q16q24q32q40@48@56@64@72@80
// Implementation: 0x106c4d8ac

// -[SCPlusFeatureLoggingImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c4daf8

@end
