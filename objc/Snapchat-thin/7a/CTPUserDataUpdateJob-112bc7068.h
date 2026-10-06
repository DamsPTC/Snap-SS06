// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPUserDataUpdateJob
// Superclass: NSObject
// Address: 0x112bc7068

@interface CTPUserDataUpdateJob

// Property: externalId; attributes: T@"CTPExternalItemId",R,C,N,V_externalId
// Property: jobType; attributes: Tq,R,N,V_jobType
// Property: category; attributes: TQ,R,N,V_category
// Property: state; attributes: Tq,R,N,V_state
// Property: favoritedState; attributes: T@"NSNumber",R,C,N,V_favoritedState
// Property: error; attributes: T@"NSError",R,C,N,V_error
// Property: startTime; attributes: T@"NSDate",R,C,N,V_startTime
// Property: completionTime; attributes: T@"NSDate",R,C,N,V_completionTime

// -[CTPUserDataUpdateJob initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e9aaa4

// -[CTPUserDataUpdateJob initWithExternalId:jobType:category:state:favoritedState:error:startTime:completionTime:]
// Type encoding: @80@0:8@16q24Q32q40@48@56@64@72
// Implementation: 0x108e9ac08

// -[CTPUserDataUpdateJob copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108e9ad60

// -[CTPUserDataUpdateJob encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e9ad84

// -[CTPUserDataUpdateJob hash]
// Type encoding: Q16@0:8
// Implementation: 0x108e9ae5c

// -[CTPUserDataUpdateJob isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e9af00

// -[CTPUserDataUpdateJob externalId]
// Type encoding: @16@0:8
// Implementation: 0x108e9b020

// -[CTPUserDataUpdateJob jobType]
// Type encoding: q16@0:8
// Implementation: 0x108e9b028

// -[CTPUserDataUpdateJob category]
// Type encoding: Q16@0:8
// Implementation: 0x108e9b030

// -[CTPUserDataUpdateJob state]
// Type encoding: q16@0:8
// Implementation: 0x108e9b038

// -[CTPUserDataUpdateJob favoritedState]
// Type encoding: @16@0:8
// Implementation: 0x108e9b040

// -[CTPUserDataUpdateJob error]
// Type encoding: @16@0:8
// Implementation: 0x108e9b048

// -[CTPUserDataUpdateJob startTime]
// Type encoding: @16@0:8
// Implementation: 0x108e9b050

// -[CTPUserDataUpdateJob completionTime]
// Type encoding: @16@0:8
// Implementation: 0x108e9b058

// -[CTPUserDataUpdateJob .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e9b060

@end
