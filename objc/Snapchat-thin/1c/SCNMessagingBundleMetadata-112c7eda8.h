// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingBundleMetadata
// Superclass: NSObject
// Address: 0x112c7eda8

@interface SCNMessagingBundleMetadata

// Property: bundleId; attributes: T@"SCNMessagingUUID",&,N,V_bundleId
// Property: currentMessageIndex; attributes: Tq,N,V_currentMessageIndex
// Property: bundleSize; attributes: Tq,N,V_bundleSize

// -[SCNMessagingBundleMetadata initWithBundleId:currentMessageIndex:bundleSize:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10b635098

// -[SCNMessagingBundleMetadata bundleId]
// Type encoding: @16@0:8
// Implementation: 0x10b635134

// -[SCNMessagingBundleMetadata setBundleId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63513c

// -[SCNMessagingBundleMetadata currentMessageIndex]
// Type encoding: q16@0:8
// Implementation: 0x10b63516c

// -[SCNMessagingBundleMetadata setCurrentMessageIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b635174

// -[SCNMessagingBundleMetadata bundleSize]
// Type encoding: q16@0:8
// Implementation: 0x10b63517c

// -[SCNMessagingBundleMetadata setBundleSize:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b635184

// -[SCNMessagingBundleMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b63518c

@end
