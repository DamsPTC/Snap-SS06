// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPostRegistrationWorkflow
// Superclass: NSObject
// Address: 0x1129f5a78

@interface SCPostRegistrationWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPostRegistrationWorkflow initWithRouter:delegate:stateTransition:postRegistrationLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104d11a30

// -[SCPostRegistrationWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104d11b24

// -[SCPostRegistrationWorkflow postRegAgeVerificationCompleted]
// Type encoding: v16@0:8
// Implementation: 0x104d11bb8

// -[SCPostRegistrationWorkflow contactPermissionWorkflowSkipped]
// Type encoding: v16@0:8
// Implementation: 0x104d11c54

// -[SCPostRegistrationWorkflow contactPermissionWorkflowCompletedWithPermissionGranted:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d11cf0

// -[SCPostRegistrationWorkflow contactPermissionWorkflowCompletedWithGoToSettings:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d11d9c

// -[SCPostRegistrationWorkflow addFriendsWorkflowSkipped:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d11da0

// -[SCPostRegistrationWorkflow addFriendsWorkflowCompleted:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d11e40

// -[SCPostRegistrationWorkflow inviteContactsCompleted]
// Type encoding: v16@0:8
// Implementation: 0x104d11ee0

// -[SCPostRegistrationWorkflow inviteContactsAutoSkip]
// Type encoding: v16@0:8
// Implementation: 0x104d11f7c

// -[SCPostRegistrationWorkflow bitmojiCameraPrePromptPermissionAccepted]
// Type encoding: v16@0:8
// Implementation: 0x104d12018

// -[SCPostRegistrationWorkflow bitmojiCameraPrePromptPermissionDenied]
// Type encoding: v16@0:8
// Implementation: 0x104d1201c

// -[SCPostRegistrationWorkflow bitmojiCameraPermissionGranted]
// Type encoding: v16@0:8
// Implementation: 0x104d12024

// -[SCPostRegistrationWorkflow bitmojiCameraPermissionDenied]
// Type encoding: v16@0:8
// Implementation: 0x104d1202c

// -[SCPostRegistrationWorkflow bitmojiCameraPermissionSkipped]
// Type encoding: v16@0:8
// Implementation: 0x104d12034

// -[SCPostRegistrationWorkflow bitmojiCameraPermissionLinkExisting]
// Type encoding: v16@0:8
// Implementation: 0x104d1203c

// -[SCPostRegistrationWorkflow _bitmojiCameraPermissionWorkflowCompletedWithAction:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104d12044

// -[SCPostRegistrationWorkflow bitmojiCreateFlowDidCompleteWithAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d120dc

// -[SCPostRegistrationWorkflow _bitmojiAvatarBuilderFlowCompletedWithAction:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104d120e8

// -[SCPostRegistrationWorkflow _enterNextStateWithAction:routeActions:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104d12180

// -[SCPostRegistrationWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d12448

@end
