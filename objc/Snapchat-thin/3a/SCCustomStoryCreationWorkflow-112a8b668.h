// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCustomStoryCreationWorkflow
// Superclass: NSObject
// Address: 0x112a8b668

@interface SCCustomStoryCreationWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCustomStoryCreationWorkflow initWithRouter:delegate:customStoriesDataMutator:storiesBlizzardLogger:storiesGrapheneMetricsEmitter:currentUserId:sourcePageType:sourcePageSessionId:]
// Type encoding: @80@0:8@16@24@32@40@48@56q64@72
// Implementation: 0x105b121e0

// -[SCCustomStoryCreationWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x105b12368

// -[SCCustomStoryCreationWorkflow startCreatePrivateStoryWithCreationStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b12374

// -[SCCustomStoryCreationWorkflow startCreateSharedStoryWithCreationStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b123a4

// -[SCCustomStoryCreationWorkflow didSelectCreatePrivateStory]
// Type encoding: v16@0:8
// Implementation: 0x105b123d4

// -[SCCustomStoryCreationWorkflow didSelectCreateCustomStory]
// Type encoding: v16@0:8
// Implementation: 0x105b12430

// -[SCCustomStoryCreationWorkflow didSelectCreateSharedStory]
// Type encoding: v16@0:8
// Implementation: 0x105b12488

// -[SCCustomStoryCreationWorkflow didSelectCancel]
// Type encoding: v16@0:8
// Implementation: 0x105b124e4

// -[SCCustomStoryCreationWorkflow didDismissFromSwipeOrTap]
// Type encoding: v16@0:8
// Implementation: 0x105b12528

// -[SCCustomStoryCreationWorkflow didConfirmWithSelectedItems:title:uiContainer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b12560

// -[SCCustomStoryCreationWorkflow createCustomStoryWithSelectedItems:title:uiContainer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b126f0

// -[SCCustomStoryCreationWorkflow _createCustomStoryAfterMemeberSelectionWithSelectedItems:title:uiContainer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b12860

// -[SCCustomStoryCreationWorkflow didDismissWithSelectedItems:title:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b12aa4

// -[SCCustomStoryCreationWorkflow didSubmitCustomStoryName:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b12bc8

// -[SCCustomStoryCreationWorkflow _createCustomStory]
// Type encoding: v16@0:8
// Implementation: 0x105b12c00

// -[SCCustomStoryCreationWorkflow _handleCustomStoryCreationSuccessWithPublicationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b12fb8

// -[SCCustomStoryCreationWorkflow _handleCustomStoryCreationFailureWithResponseCode:]
// Type encoding: v24@0:8q16
// Implementation: 0x105b13028

// -[SCCustomStoryCreationWorkflow didCancelCustomStoryName]
// Type encoding: v16@0:8
// Implementation: 0x105b13064

// -[SCCustomStoryCreationWorkflow didDismissCustomStoryErrorWithAllowRetryNaming:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b13098

// -[SCCustomStoryCreationWorkflow _logIncompleteCreationSession]
// Type encoding: v16@0:8
// Implementation: 0x105b130ec

// -[SCCustomStoryCreationWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b131e8

@end
