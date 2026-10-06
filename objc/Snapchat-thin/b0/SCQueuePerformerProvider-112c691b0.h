// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCQueuePerformerProvider
// Superclass: NSObject
// Address: 0x112c691b0

@interface SCQueuePerformerProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCQueuePerformerProvider globalPerformerWithQoS:]
// Type encoding: @24@0:8Q16
// Implementation: 0x100262200

// -[SCQueuePerformerProvider performerWithLabel:qualityOfService:type:context:]
// Type encoding: @48@0:8@16Q24Q32Q40
// Implementation: 0x1000b5548

// -[SCQueuePerformerProvider fixedQoSPerformerWithLabel:qualityOfService:type:context:reason:]
// Type encoding: @56@0:8@16Q24Q32Q40@48
// Implementation: 0x1003c2b20

@end
