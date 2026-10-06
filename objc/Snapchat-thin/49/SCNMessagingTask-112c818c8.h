// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingTask
// Superclass: NSObject
// Address: 0x112c818c8

@interface SCNMessagingTask

// Property: requestId; attributes: T@"SCNMessagingUUID",&,N,V_requestId
// Property: type; attributes: Tq,N,V_type
// Property: content; attributes: T@"SCNMessagingLocalMessageContent",&,N,V_content

// -[SCNMessagingTask initWithRequestId:type:content:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10b6423ec

// -[SCNMessagingTask initWithRequestId:type:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b6424b4

// -[SCNMessagingTask requestId]
// Type encoding: @16@0:8
// Implementation: 0x10b6424bc

// -[SCNMessagingTask setRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6424c4

// -[SCNMessagingTask type]
// Type encoding: q16@0:8
// Implementation: 0x10b6424e8

// -[SCNMessagingTask setType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6424f0

// -[SCNMessagingTask content]
// Type encoding: @16@0:8
// Implementation: 0x10b6424f8

// -[SCNMessagingTask setContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b642500

// -[SCNMessagingTask .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b642524

@end
