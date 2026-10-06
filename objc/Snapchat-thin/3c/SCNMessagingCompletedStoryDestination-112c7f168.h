// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingCompletedStoryDestination
// Superclass: NSObject
// Address: 0x112c7f168

@interface SCNMessagingCompletedStoryDestination

// Property: storyId; attributes: T@"SCNMessagingStoryId",&,N,V_storyId
// Property: result; attributes: Tq,N,V_result
// Property: successfulDestinationData; attributes: T@"SCNMessagingSuccessfulStoryDestinationData",&,N,V_successfulDestinationData
// Property: failedMedia; attributes: T@"NSArray",C,N,V_failedMedia

// -[SCNMessagingCompletedStoryDestination initWithStoryId:result:successfulDestinationData:failedMedia:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x10b635c84

// -[SCNMessagingCompletedStoryDestination initWithStoryId:result:failedMedia:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10b635d98

// -[SCNMessagingCompletedStoryDestination storyId]
// Type encoding: @16@0:8
// Implementation: 0x10b635da4

// -[SCNMessagingCompletedStoryDestination setStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b635dac

// -[SCNMessagingCompletedStoryDestination result]
// Type encoding: q16@0:8
// Implementation: 0x10b635dd0

// -[SCNMessagingCompletedStoryDestination setResult:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b635dd8

// -[SCNMessagingCompletedStoryDestination successfulDestinationData]
// Type encoding: @16@0:8
// Implementation: 0x10b635de0

// -[SCNMessagingCompletedStoryDestination setSuccessfulDestinationData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b635de8

// -[SCNMessagingCompletedStoryDestination failedMedia]
// Type encoding: @16@0:8
// Implementation: 0x10b635e0c

// -[SCNMessagingCompletedStoryDestination setFailedMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b635e14

// -[SCNMessagingCompletedStoryDestination .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b635e1c

@end
