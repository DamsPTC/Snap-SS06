// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingStoryPostDestinationStatus
// Superclass: NSObject
// Address: 0x112c815f8

@interface SCNMessagingStoryPostDestinationStatus

// Property: key; attributes: T@"SCNMessagingStoryId",&,N,V_key
// Property: state; attributes: Tq,N,V_state
// Property: inFlightState; attributes: T@"NSNumber",&,N,V_inFlightState
// Property: completed; attributes: T@"SCNMessagingCompletedStoryDestination",&,N,V_completed
// Property: taskQueueId; attributes: T@"SCNMessagingUUID",&,N,V_taskQueueId
// Property: content; attributes: T@"SCNMessagingLocalMessageContent",&,N,V_content

// -[SCNMessagingStoryPostDestinationStatus initWithKey:state:inFlightState:completed:taskQueueId:content:]
// Type encoding: @64@0:8@16q24@32@40@48@56
// Implementation: 0x10b641a24

// -[SCNMessagingStoryPostDestinationStatus initWithKey:state:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b641b8c

// -[SCNMessagingStoryPostDestinationStatus key]
// Type encoding: @16@0:8
// Implementation: 0x10b641ba0

// -[SCNMessagingStoryPostDestinationStatus setKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641ba8

// -[SCNMessagingStoryPostDestinationStatus state]
// Type encoding: q16@0:8
// Implementation: 0x10b641bc8

// -[SCNMessagingStoryPostDestinationStatus setState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b641bd0

// -[SCNMessagingStoryPostDestinationStatus inFlightState]
// Type encoding: @16@0:8
// Implementation: 0x10b641bd8

// -[SCNMessagingStoryPostDestinationStatus setInFlightState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641be0

// -[SCNMessagingStoryPostDestinationStatus completed]
// Type encoding: @16@0:8
// Implementation: 0x10b641c00

// -[SCNMessagingStoryPostDestinationStatus setCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641c08

// -[SCNMessagingStoryPostDestinationStatus taskQueueId]
// Type encoding: @16@0:8
// Implementation: 0x10b641c28

// -[SCNMessagingStoryPostDestinationStatus setTaskQueueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641c30

// -[SCNMessagingStoryPostDestinationStatus content]
// Type encoding: @16@0:8
// Implementation: 0x10b641c50

// -[SCNMessagingStoryPostDestinationStatus setContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641c58

// -[SCNMessagingStoryPostDestinationStatus .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b641c78

@end
