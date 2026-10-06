// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContactPermissionRequestWorkflow
// Superclass: NSObject
// Address: 0x112a038a8

@interface SCContactPermissionRequestWorkflow


// -[SCContactPermissionRequestWorkflow initWithRouter:delegate:isExplicitUserLevelPermissionDialogNeeded:isConfirmSkipDialogNeeded:isGoToSystemSettingsDialogNeeded:shouldDisplayInterstitialPage:]
// Type encoding: @48@0:8@16@24B32B36B40B44
// Implementation: 0x104e8e720

// -[SCContactPermissionRequestWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104e8e7ec

// -[SCContactPermissionRequestWorkflow contactPermissionPageSkipped]
// Type encoding: v16@0:8
// Implementation: 0x104e8e890

// -[SCContactPermissionRequestWorkflow contactPermissionPageCompletedWithPermissionGranted:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e8e8bc

// -[SCContactPermissionRequestWorkflow contactPermissionPageCompletedWithGoToSettings:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e8e8f0

// -[SCContactPermissionRequestWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e8e924

@end
