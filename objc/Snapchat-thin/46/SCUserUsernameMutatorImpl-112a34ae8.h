// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserUsernameMutatorImpl
// Superclass: NSObject
// Address: 0x112a34ae8

@interface SCUserUsernameMutatorImpl

// Property: usernameMutationInfo; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserUsernameMutatorImpl initWithUpdatesPublisher:changeUsernameService:supportedLanguagesFetchBlock:allowRecycledUsernameFetchBlock:]
// Type encoding: @48@0:8@16@24@?32@?40
// Implementation: 0x1053fc020

// -[SCUserUsernameMutatorImpl usernameMutationInfo]
// Type encoding: @16@0:8
// Implementation: 0x1053fc140

// -[SCUserUsernameMutatorImpl updateUsername:onComplete:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1053fc164

// -[SCUserUsernameMutatorImpl _fetchLatestUsernameMutationInfo]
// Type encoding: v16@0:8
// Implementation: 0x1053fc56c

// -[SCUserUsernameMutatorImpl _updateUsernameSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053fc6f8

// -[SCUserUsernameMutatorImpl _updatedUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053fc738

// -[SCUserUsernameMutatorImpl _updateMutationInfo:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053fc740

// -[SCUserUsernameMutatorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053fc890

@end
