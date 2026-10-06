// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLoadMessageTimestamp
// Superclass: NSObject
// Address: 0x1000d53a8

@interface SCLoadMessageTimestamp

// Property: mediaId; attributes: T@"NSString",R,C,N,V_mediaId
// Property: step; attributes: Tq,R,N,V_step
// Property: startTimestampSeconds; attributes: Td,R,N,V_startTimestampSeconds
// Property: endTimestampSeconds; attributes: Td,R,N,V_endTimestampSeconds
// Property: timestampType; attributes: Tq,R,N,V_timestampType
// Property: result; attributes: Tq,R,N,V_result

// -[SCLoadMessageTimestamp initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x100040570

// -[SCLoadMessageTimestamp initWithMediaId:step:startTimestampSeconds:endTimestampSeconds:timestampType:result:]
// Type encoding: @64@0:8@16q24d32d40q48q56
// Implementation: 0x10004065c

// -[SCLoadMessageTimestamp copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10004070c

// -[SCLoadMessageTimestamp encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x100040730

// -[SCLoadMessageTimestamp hash]
// Type encoding: Q16@0:8
// Implementation: 0x1000407e0

// -[SCLoadMessageTimestamp isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10004087c

// -[SCLoadMessageTimestamp mediaId]
// Type encoding: @16@0:8
// Implementation: 0x1000409a4

// -[SCLoadMessageTimestamp step]
// Type encoding: q16@0:8
// Implementation: 0x1000409ac

// -[SCLoadMessageTimestamp startTimestampSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1000409b4

// -[SCLoadMessageTimestamp endTimestampSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1000409bc

// -[SCLoadMessageTimestamp timestampType]
// Type encoding: q16@0:8
// Implementation: 0x1000409c4

// -[SCLoadMessageTimestamp result]
// Type encoding: q16@0:8
// Implementation: 0x1000409cc

// -[SCLoadMessageTimestamp .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1000409d4

@end
