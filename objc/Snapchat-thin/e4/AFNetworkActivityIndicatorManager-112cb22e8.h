// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AFNetworkActivityIndicatorManager
// Superclass: NSObject
// Address: 0x112cb22e8

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
// Implementation: 0x100a03e40

// -[AFNetworkActivityIndicatorManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b718e54

// -[AFNetworkActivityIndicatorManager setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x100a04068

// -[AFNetworkActivityIndicatorManager setNetworkingActivityActionWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b718ecc

// -[AFNetworkActivityIndicatorManager isNetworkActivityOccurring]
// Type encoding: B16@0:8
// Implementation: 0x10b718ed0

// -[AFNetworkActivityIndicatorManager setNetworkActivityIndicatorVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b718f30

// -[AFNetworkActivityIndicatorManager setActivityCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b71900c

// -[AFNetworkActivityIndicatorManager incrementActivityCount]
// Type encoding: v16@0:8
// Implementation: 0x10b71909c

// -[AFNetworkActivityIndicatorManager decrementActivityCount]
// Type encoding: v16@0:8
// Implementation: 0x10b719150

// -[AFNetworkActivityIndicatorManager networkRequestDidStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b71920c

// -[AFNetworkActivityIndicatorManager networkRequestDidFinish:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b719310

// -[AFNetworkActivityIndicatorManager setCurrentState:]
// Type encoding: v24@0:8q16
// Implementation: 0x100a03f74

// -[AFNetworkActivityIndicatorManager updateCurrentStateForNetworkActivityChange]
// Type encoding: v16@0:8
// Implementation: 0x10b71937c

// -[AFNetworkActivityIndicatorManager startActivationDelayTimer]
// Type encoding: v16@0:8
// Implementation: 0x10b719404

// -[AFNetworkActivityIndicatorManager activationDelayTimerFired]
// Type encoding: v16@0:8
// Implementation: 0x10b7194b8

// -[AFNetworkActivityIndicatorManager startCompletionDelayTimer]
// Type encoding: v16@0:8
// Implementation: 0x10b7194e8

// -[AFNetworkActivityIndicatorManager completionDelayTimerFired]
// Type encoding: v16@0:8
// Implementation: 0x10b7195bc

// -[AFNetworkActivityIndicatorManager cancelActivationDelayTimer]
// Type encoding: v16@0:8
// Implementation: 0x10b7195c4

// -[AFNetworkActivityIndicatorManager cancelCompletionDelayTimer]
// Type encoding: v16@0:8
// Implementation: 0x10b7195f4

// -[AFNetworkActivityIndicatorManager isEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b719624

// -[AFNetworkActivityIndicatorManager isNetworkActivityIndicatorVisible]
// Type encoding: B16@0:8
// Implementation: 0x10b71962c

// -[AFNetworkActivityIndicatorManager activationDelay]
// Type encoding: d16@0:8
// Implementation: 0x10b719634

// -[AFNetworkActivityIndicatorManager setActivationDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x100a04058

// -[AFNetworkActivityIndicatorManager completionDelay]
// Type encoding: d16@0:8
// Implementation: 0x10b71963c

// -[AFNetworkActivityIndicatorManager setCompletionDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x100a04060

// -[AFNetworkActivityIndicatorManager activityCount]
// Type encoding: q16@0:8
// Implementation: 0x10b719644

// -[AFNetworkActivityIndicatorManager activationDelayTimer]
// Type encoding: @16@0:8
// Implementation: 0x10b71964c

// -[AFNetworkActivityIndicatorManager setActivationDelayTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b719654

// -[AFNetworkActivityIndicatorManager completionDelayTimer]
// Type encoding: @16@0:8
// Implementation: 0x10b719684

// -[AFNetworkActivityIndicatorManager setCompletionDelayTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b71968c

// -[AFNetworkActivityIndicatorManager networkActivityActionBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7196bc

// -[AFNetworkActivityIndicatorManager setNetworkActivityActionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7196c4

// -[AFNetworkActivityIndicatorManager currentState]
// Type encoding: q16@0:8
// Implementation: 0x10b7196cc

// -[AFNetworkActivityIndicatorManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7196d4

// +[AFNetworkActivityIndicatorManager sharedManager]
// Type encoding: @16@0:8
// Implementation: 0x100a03d90

@end
