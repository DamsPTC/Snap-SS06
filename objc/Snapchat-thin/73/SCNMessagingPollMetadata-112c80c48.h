// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingPollMetadata
// Superclass: NSObject
// Address: 0x112c80c48

@interface SCNMessagingPollMetadata

// Property: pollType; attributes: Tq,N,V_pollType
// Property: numOptions; attributes: Ti,N,V_numOptions
// Property: timeRemainingMs; attributes: T@"NSNumber",&,N,V_timeRemainingMs
// Property: typeMetadata; attributes: T@"SCNMessagingPollTypeMetadata",&,N,V_typeMetadata

// -[SCNMessagingPollMetadata initWithPollType:numOptions:timeRemainingMs:typeMetadata:]
// Type encoding: @44@0:8q16i24@28@36
// Implementation: 0x10b63d43c

// -[SCNMessagingPollMetadata initWithPollType:numOptions:typeMetadata:]
// Type encoding: @36@0:8q16i24@28
// Implementation: 0x10b63d514

// -[SCNMessagingPollMetadata pollType]
// Type encoding: q16@0:8
// Implementation: 0x10b63d520

// -[SCNMessagingPollMetadata setPollType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63d528

// -[SCNMessagingPollMetadata numOptions]
// Type encoding: i16@0:8
// Implementation: 0x10b63d530

// -[SCNMessagingPollMetadata setNumOptions:]
// Type encoding: v20@0:8i16
// Implementation: 0x10b63d538

// -[SCNMessagingPollMetadata timeRemainingMs]
// Type encoding: @16@0:8
// Implementation: 0x10b63d540

// -[SCNMessagingPollMetadata setTimeRemainingMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63d548

// -[SCNMessagingPollMetadata typeMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b63d56c

// -[SCNMessagingPollMetadata setTypeMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63d574

// -[SCNMessagingPollMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b63d598

@end
