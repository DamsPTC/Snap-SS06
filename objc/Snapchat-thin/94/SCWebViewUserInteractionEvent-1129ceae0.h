// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebViewUserInteractionEvent
// Superclass: NSObject
// Address: 0x1129ceae0

@interface SCWebViewUserInteractionEvent

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCWebViewUserInteractionEvent description]
// Type encoding: @16@0:8
// Implementation: 0x10465c4c0

// -[SCWebViewUserInteractionEvent init]
// Type encoding: @16@0:8
// Implementation: 0x10465c538

// -[SCWebViewUserInteractionEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x10465c580

// -[SCWebViewUserInteractionEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10465cb74

// -[SCWebViewUserInteractionEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10465cbf4

// -[SCWebViewUserInteractionEvent encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10465cf7c

// -[SCWebViewUserInteractionEvent initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10465d67c

// -[SCWebViewUserInteractionEvent matchContentAreaTap:contentAreaScroll:featureInteraction:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x10465d834

// -[SCWebViewUserInteractionEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10465d8cc

// +[SCWebViewUserInteractionEvent contentAreaTapWithTimestampMillis:position:]
// Type encoding: @40@0:8d16{CGPoint=dd}24
// Implementation: 0x10465d6a4

// +[SCWebViewUserInteractionEvent contentAreaScrollWithStartTimestampMillis:startPosition:endTimestampMillis:endPosition:]
// Type encoding: @64@0:8d16{CGPoint=dd}24d40{CGPoint=dd}48
// Implementation: 0x10465d6b8

// +[SCWebViewUserInteractionEvent featureInteractionWithFeature:timestampMillis:]
// Type encoding: @32@0:8q16d24
// Implementation: 0x10465d6cc

@end
