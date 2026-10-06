// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLoadMessageTimestamp
// Superclass: NSObject
// Address: 0x112bb3fb8

@interface SCLoadMessageTimestamp

// Property: mediaId; attributes: T@"NSString",R,C,N,V_mediaId
// Property: step; attributes: Tq,R,N,V_step
// Property: startTimestampSeconds; attributes: Td,R,N,V_startTimestampSeconds
// Property: endTimestampSeconds; attributes: Td,R,N,V_endTimestampSeconds
// Property: timestampType; attributes: Tq,R,N,V_timestampType
// Property: result; attributes: Tq,R,N,V_result

// -[SCLoadMessageTimestamp initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bc0dd0

// -[SCLoadMessageTimestamp initWithMediaId:step:startTimestampSeconds:endTimestampSeconds:timestampType:result:]
// Type encoding: @64@0:8@16q24d32d40q48q56
// Implementation: 0x108bc0ebc

// -[SCLoadMessageTimestamp copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108bc0f6c

// -[SCLoadMessageTimestamp encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bc0f90

// -[SCLoadMessageTimestamp hash]
// Type encoding: Q16@0:8
// Implementation: 0x108bc1040

// -[SCLoadMessageTimestamp isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108bc1108

// -[SCLoadMessageTimestamp mediaId]
// Type encoding: @16@0:8
// Implementation: 0x108bc1230

// -[SCLoadMessageTimestamp step]
// Type encoding: q16@0:8
// Implementation: 0x108bc1238

// -[SCLoadMessageTimestamp startTimestampSeconds]
// Type encoding: d16@0:8
// Implementation: 0x108bc1240

// -[SCLoadMessageTimestamp endTimestampSeconds]
// Type encoding: d16@0:8
// Implementation: 0x108bc1248

// -[SCLoadMessageTimestamp timestampType]
// Type encoding: q16@0:8
// Implementation: 0x108bc1250

// -[SCLoadMessageTimestamp result]
// Type encoding: q16@0:8
// Implementation: 0x108bc1258

// -[SCLoadMessageTimestamp .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bc1260

@end
