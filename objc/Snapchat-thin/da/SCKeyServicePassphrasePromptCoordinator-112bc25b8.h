// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCKeyServicePassphrasePromptCoordinator
// Superclass: NSObject
// Address: 0x112bc25b8

@interface SCKeyServicePassphrasePromptCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCKeyServicePassphrasePromptCoordinator initWithKeyService:featureSettingsService:performer:effects:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108de49fc

// -[SCKeyServicePassphrasePromptCoordinator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108de4b14

// -[SCKeyServicePassphrasePromptCoordinator showPromptWithRequestUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x108de4b5c

// -[SCKeyServicePassphrasePromptCoordinator cancelPromptWithRequestUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x108de4b98

// -[SCKeyServicePassphrasePromptCoordinator dismissPromptWhenMasterKeyIsAvailable:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108de4c04

// -[SCKeyServicePassphrasePromptCoordinator allowedFutureAuthorizationDate]
// Type encoding: @16@0:8
// Implementation: 0x108de4c64

// -[SCKeyServicePassphrasePromptCoordinator requestAuthorizationWithPassphrase:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108de4ca4

// -[SCKeyServicePassphrasePromptCoordinator enterPasscodeViewControllerDidPressBack:]
// Type encoding: v24@0:8@16
// Implementation: 0x108de4d34

// -[SCKeyServicePassphrasePromptCoordinator enterPassphraseViewControllerDidPressBack:]
// Type encoding: v24@0:8@16
// Implementation: 0x108de4d38

// -[SCKeyServicePassphrasePromptCoordinator _cancelPendingRequestsOnMainThread]
// Type encoding: v16@0:8
// Implementation: 0x108de4d3c

// -[SCKeyServicePassphrasePromptCoordinator _dismissPassphrasePromptOnMainThread:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108de4e18

// -[SCKeyServicePassphrasePromptCoordinator _dismissPassphrasePrompt:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108de5070

// -[SCKeyServicePassphrasePromptCoordinator _showPassphrasePrompt]
// Type encoding: v16@0:8
// Implementation: 0x108de5138

// -[SCKeyServicePassphrasePromptCoordinator _deepestViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x108de547c

// -[SCKeyServicePassphrasePromptCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108de5574

@end
