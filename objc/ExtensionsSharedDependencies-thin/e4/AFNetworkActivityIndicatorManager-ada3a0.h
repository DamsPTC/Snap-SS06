// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AFNetworkActivityIndicatorManager
// Superclass: NSObject
// Address: 0xada3a0

@interface AFNetworkActivityIndicatorManager

// Property: activityCount; attributes: Tq,N,V_activityCount
// Property: activationDelayTimer; attributes: T@"NSTimer",&,N,V_activationDelayTimer
// Property: completionDelayTimer; attributes: T@"NSTimer",&,N,V_completionDelayTimer
// Property: networkActivityOccurring; attributes: TB,R,N,GisNetworkActivityOccurring
// Property: networkActivityActionBlock; attributes: T@?,C,N,V_networkActivityActionBlock
// Property: currentState; attributes: Tq,N,V_currentState
// Property: networkActivityIndicatorVisible; attributes: TB,N,GisNetworkActivityIndicatorVisible,V_networkActivityIndicatorVisible
// Property: enabled; attributes: TB,N,GisEnabled,V_enabled
// Property: activationDelay; attributes: Td,N,V_activationDelay
// Property: completionDelay; attributes: Td,N,V_completionDelay

// -[AFNetworkActivityIndicatorManager init]
// Type encoding: @16@0:8
// Implementation: 0x5902fc

// -[AFNetworkActivityIndicatorManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x590430

// -[AFNetworkActivityIndicatorManager setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x5904a8

// -[AFNetworkActivityIndicatorManager setNetworkingActivityActionWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x5904bc

// -[AFNetworkActivityIndicatorManager isNetworkActivityOccurring]
// Type encoding: B16@0:8
// Implementation: 0x5904c0

// -[AFNetworkActivityIndicatorManager setNetworkActivityIndicatorVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x590520

// -[AFNetworkActivityIndicatorManager setActivityCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x5905fc

// -[AFNetworkActivityIndicatorManager incrementActivityCount]
// Type encoding: v16@0:8
// Implementation: 0x59068c

// -[AFNetworkActivityIndicatorManager decrementActivityCount]
// Type encoding: v16@0:8
// Implementation: 0x590740

// -[AFNetworkActivityIndicatorManager networkRequestDidStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x5907fc

// -[AFNetworkActivityIndicatorManager networkRequestDidFinish:]
// Type encoding: v24@0:8@16
// Implementation: 0x590900

// -[AFNetworkActivityIndicatorManager setCurrentState:]
// Type encoding: v24@0:8q16
// Implementation: 0x59096c

// -[AFNetworkActivityIndicatorManager updateCurrentStateForNetworkActivityChange]
// Type encoding: v16@0:8
// Implementation: 0x590a50

// -[AFNetworkActivityIndicatorManager startActivationDelayTimer]
// Type encoding: v16@0:8
// Implementation: 0x590ad8

// -[AFNetworkActivityIndicatorManager activationDelayTimerFired]
// Type encoding: v16@0:8
// Implementation: 0x590b8c

// -[AFNetworkActivityIndicatorManager startCompletionDelayTimer]
// Type encoding: v16@0:8
// Implementation: 0x590bbc

// -[AFNetworkActivityIndicatorManager completionDelayTimerFired]
// Type encoding: v16@0:8
// Implementation: 0x590c90

// -[AFNetworkActivityIndicatorManager cancelActivationDelayTimer]
// Type encoding: v16@0:8
// Implementation: 0x590c98

// -[AFNetworkActivityIndicatorManager cancelCompletionDelayTimer]
// Type encoding: v16@0:8
// Implementation: 0x590cc8

// -[AFNetworkActivityIndicatorManager isEnabled]
// Type encoding: B16@0:8
// Implementation: 0x590cf8

// -[AFNetworkActivityIndicatorManager isNetworkActivityIndicatorVisible]
// Type encoding: B16@0:8
// Implementation: 0x590d00

// -[AFNetworkActivityIndicatorManager activationDelay]
// Type encoding: d16@0:8
// Implementation: 0x590d08

// -[AFNetworkActivityIndicatorManager setActivationDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x590d10

// -[AFNetworkActivityIndicatorManager completionDelay]
// Type encoding: d16@0:8
// Implementation: 0x590d18

// -[AFNetworkActivityIndicatorManager setCompletionDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x590d20

// -[AFNetworkActivityIndicatorManager activityCount]
// Type encoding: q16@0:8
// Implementation: 0x590d28

// -[AFNetworkActivityIndicatorManager activationDelayTimer]
// Type encoding: @16@0:8
// Implementation: 0x590d30

// -[AFNetworkActivityIndicatorManager setActivationDelayTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x590d38

// -[AFNetworkActivityIndicatorManager completionDelayTimer]
// Type encoding: @16@0:8
// Implementation: 0x590d68

// -[AFNetworkActivityIndicatorManager setCompletionDelayTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x590d70

// -[AFNetworkActivityIndicatorManager networkActivityActionBlock]
// Type encoding: @?16@0:8
// Implementation: 0x590da0

// -[AFNetworkActivityIndicatorManager setNetworkActivityActionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x590da8

// -[AFNetworkActivityIndicatorManager currentState]
// Type encoding: q16@0:8
// Implementation: 0x590db0

// -[AFNetworkActivityIndicatorManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x590db8

// +[AFNetworkActivityIndicatorManager sharedManager]
// Type encoding: @16@0:8
// Implementation: 0x59024c

@end
