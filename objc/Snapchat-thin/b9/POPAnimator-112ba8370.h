// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: POPAnimator
// Superclass: NSObject
// Address: 0x112ba8370

@interface POPAnimator

// Property: disableDisplayLink; attributes: TB,N,V_disableDisplayLink
// Property: beginTime; attributes: Td,N,V_beginTime
// Property: delegate; attributes: T@"<POPAnimatorDelegate>",W,N,V_delegate
// Property: refreshPeriod; attributes: Td,R,N

// -[POPAnimator init]
// Type encoding: @16@0:8
// Implementation: 0x108598eb8

// -[POPAnimator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108599028

// -[POPAnimator _processPendingList]
// Type encoding: v16@0:8
// Implementation: 0x1085990a4

// -[POPAnimator _clearPendingListObserver]
// Type encoding: v16@0:8
// Implementation: 0x108599138

// -[POPAnimator _scheduleProcessPendingList]
// Type encoding: v16@0:8
// Implementation: 0x108599180

// -[POPAnimator _renderTime:items:]
// Type encoding: v48@0:8d16{list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>>={__list_node_base<std::shared_ptr<POPAnimatorItem>, void *>=^v^v}{?=Q}}24
// Implementation: 0x1085992c4

// -[POPAnimator _renderTime:item:]
// Type encoding: v40@0:8d16{shared_ptr<POPAnimatorItem>=^{POPAnimatorItem}^{__shared_weak_count}}24
// Implementation: 0x1085996b8

// -[POPAnimator observers]
// Type encoding: @16@0:8
// Implementation: 0x108599fd8

// -[POPAnimator addAnimation:forObject:key:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10859a03c

// -[POPAnimator removeAllAnimationsForObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10859a3c0

// -[POPAnimator removeAnimationForObject:key:cleanupDict:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10859a7b4

// -[POPAnimator removeAnimationForObject:key:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10859aa94

// -[POPAnimator animationKeysForObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x10859aa9c

// -[POPAnimator animationForObject:key:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10859ab2c

// -[POPAnimator refreshPeriod]
// Type encoding: d16@0:8
// Implementation: 0x10859ac08

// -[POPAnimator _currentRenderTime]
// Type encoding: d16@0:8
// Implementation: 0x10859ac10

// -[POPAnimator render]
// Type encoding: v16@0:8
// Implementation: 0x10859ac14

// -[POPAnimator renderTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10859ac38

// -[POPAnimator addObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10859aca0

// -[POPAnimator removeObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10859ad34

// -[POPAnimator delegate]
// Type encoding: @16@0:8
// Implementation: 0x10859ad9c

// -[POPAnimator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10859adb4

// -[POPAnimator disableDisplayLink]
// Type encoding: B16@0:8
// Implementation: 0x10859adc0

// -[POPAnimator setDisableDisplayLink:]
// Type encoding: v20@0:8B16
// Implementation: 0x10859adc8

// -[POPAnimator beginTime]
// Type encoding: d16@0:8
// Implementation: 0x10859add0

// -[POPAnimator setBeginTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10859add8

// -[POPAnimator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10859ade0

// -[POPAnimator .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10859ae28

// +[POPAnimator sharedAnimator]
// Type encoding: @16@0:8
// Implementation: 0x108598e38

@end
