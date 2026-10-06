// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiAnimator
// Superclass: NSObject
// Address: 0x112b97b38

@interface SCValdiAnimator

// Property: crossfade; attributes: TB,R,N,V_crossfade
// Property: wasCancelled; attributes: TB,R,N,V_wasCancelled
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiAnimator initWithCurve:controlPoints:duration:beginFromCurrentState:crossfade:stiffness:damping:]
// Type encoding: @64@0:8q16@24d32B40B44d48d56
// Implementation: 0x108091468

// -[SCValdiAnimator _populateCAAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080915b0

// -[SCValdiAnimator addTransitionOnLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080917ec

// -[SCValdiAnimator _isSpringAnimation]
// Type encoding: B16@0:8
// Implementation: 0x1080918c4

// -[SCValdiAnimator _setValue:forKeyPath:inLayer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1080918d4

// -[SCValdiAnimator _removeConflictingAnimationOnLayer:forKeyPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108091c2c

// -[SCValdiAnimator addAnimationOnLayer:forKeyPath:value:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108091d68

// -[SCValdiAnimator addCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108091f2c

// -[SCValdiAnimator _pendingAnimationsForLayer:]
// Type encoding: @24@0:8@16
// Implementation: 0x108091f60

// -[SCValdiAnimator _appendLayerAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x108091fb4

// -[SCValdiAnimator _removeAnimationsFromChildrenIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108092080

// -[SCValdiAnimator flushAnimations:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080922fc

// -[SCValdiAnimator _removeCompletedAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080926c4

// -[SCValdiAnimator _removeAllRunningAnimations]
// Type encoding: v16@0:8
// Implementation: 0x1080926cc

// -[SCValdiAnimator cancel]
// Type encoding: v16@0:8
// Implementation: 0x1080926d4

// -[SCValdiAnimator setDisableRemoveOnComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x108092784

// -[SCValdiAnimator crossfade]
// Type encoding: B16@0:8
// Implementation: 0x10809278c

// -[SCValdiAnimator wasCancelled]
// Type encoding: B16@0:8
// Implementation: 0x108092794

// -[SCValdiAnimator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10809279c

@end
