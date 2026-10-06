// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeckContainerTransitioner
// Superclass: NSObject
// Address: 0x112c69f48

@interface SCDeckContainerTransitioner


// -[SCDeckContainerTransitioner initWithTransitionEventAnnouncer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1005936b4

// -[SCDeckContainerTransitioner performPresentingTransitionWithContainer:presenter:animated:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x10b098f9c

// -[SCDeckContainerTransitioner performPresentingTransitionInteractivelyWithContainer:presenter:customDismissalStyle:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10b099048

// -[SCDeckContainerTransitioner performCustomChildTransitionWithContainer:presenter:style:animated:completion:]
// Type encoding: v52@0:8@16@24@32B40@?44
// Implementation: 0x1008754dc

// -[SCDeckContainerTransitioner performCustomChildTransitionInteractivelyWithContainer:presenter:style:completion:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10b099138

// -[SCDeckContainerTransitioner _performTransitionWithProperties:container:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1008756b8

// -[SCDeckContainerTransitioner _startQueuedTransition]
// Type encoding: v16@0:8
// Implementation: 0x10087576c

// -[SCDeckContainerTransitioner _handleTransitionCompletion:completed:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x1008edeac

// -[SCDeckContainerTransitioner _handleInteractiveTransitionCompletion:completed:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x10b099274

// -[SCDeckContainerTransitioner _logMetricIfQueueHasMoreThanOneEntryWithContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0992a8

// -[SCDeckContainerTransitioner isTransitionInProgress]
// Type encoding: B16@0:8
// Implementation: 0x10b0992f0

// -[SCDeckContainerTransitioner clearInteractiveTransitionState]
// Type encoding: v16@0:8
// Implementation: 0x10b099328

// -[SCDeckContainerTransitioner .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b099330

@end
