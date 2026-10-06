// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCHapticsManager
// Superclass: NSObject
// Address: 0x10005ee98

@interface SCHapticsManager

// Property: generatorImpactLight; attributes: T@"UIImpactFeedbackGenerator",&,N,V_generatorImpactLight
// Property: generatorImpactMedium; attributes: T@"UIImpactFeedbackGenerator",&,N,V_generatorImpactMedium
// Property: generatorImpactHeavy; attributes: T@"UIImpactFeedbackGenerator",&,N,V_generatorImpactHeavy
// Property: generatorImpactSoft; attributes: T@"UIImpactFeedbackGenerator",&,N,V_generatorImpactSoft
// Property: generatorSelection; attributes: T@"UISelectionFeedbackGenerator",&,N,V_generatorSelection
// Property: generatorNotification; attributes: T@"UINotificationFeedbackGenerator",&,N,V_generatorNotification
// Property: feedbackEnabled; attributes: TB,N,GisFeedbackEnabled,V_feedbackEnabled

// -[SCHapticsManager init]
// Type encoding: @16@0:8
// Implementation: 0x1000399b8

// -[SCHapticsManager generatorImpactLight]
// Type encoding: @16@0:8
// Implementation: 0x1000399f8

// -[SCHapticsManager generatorImpactMedium]
// Type encoding: @16@0:8
// Implementation: 0x100039a48

// -[SCHapticsManager generatorImpactHeavy]
// Type encoding: @16@0:8
// Implementation: 0x100039a98

// -[SCHapticsManager generatorImpactSoft]
// Type encoding: @16@0:8
// Implementation: 0x100039ae8

// -[SCHapticsManager generatorSelection]
// Type encoding: @16@0:8
// Implementation: 0x100039b38

// -[SCHapticsManager generatorNotification]
// Type encoding: @16@0:8
// Implementation: 0x100039b80

// -[SCHapticsManager prepare]
// Type encoding: v16@0:8
// Implementation: 0x100039bc8

// -[SCHapticsManager performFeedback:]
// Type encoding: v24@0:8q16
// Implementation: 0x100039c20

// -[SCHapticsManager performFeedback:withIntensity:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x100039cc0

// -[SCHapticsManager _performFeedback:]
// Type encoding: v24@0:8q16
// Implementation: 0x100039d58

// -[SCHapticsManager _performFeedback:withIntensity:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x100039f60

// -[SCHapticsManager hapticUserInteractionStarted]
// Type encoding: v16@0:8
// Implementation: 0x10003a0b8

// -[SCHapticsManager hapticUserInteractionEnded]
// Type encoding: v16@0:8
// Implementation: 0x10003a1c8

// -[SCHapticsManager isFeedbackEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10003a2d8

// -[SCHapticsManager setFeedbackEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10003a2e0

// -[SCHapticsManager setGeneratorImpactLight:]
// Type encoding: v24@0:8@16
// Implementation: 0x10003a2e8

// -[SCHapticsManager setGeneratorImpactMedium:]
// Type encoding: v24@0:8@16
// Implementation: 0x10003a314

// -[SCHapticsManager setGeneratorImpactHeavy:]
// Type encoding: v24@0:8@16
// Implementation: 0x10003a340

// -[SCHapticsManager setGeneratorImpactSoft:]
// Type encoding: v24@0:8@16
// Implementation: 0x10003a36c

// -[SCHapticsManager setGeneratorSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x10003a398

// -[SCHapticsManager setGeneratorNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10003a3c4

// -[SCHapticsManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10003a3f0

// +[SCHapticsManager sharedManager]
// Type encoding: @16@0:8
// Implementation: 0x100039940

@end
