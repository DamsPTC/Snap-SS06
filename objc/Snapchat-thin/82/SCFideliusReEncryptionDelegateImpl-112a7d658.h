// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusReEncryptionDelegateImpl
// Superclass: NSObject
// Address: 0x112a7d658

@interface SCFideliusReEncryptionDelegateImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFideliusReEncryptionDelegateImpl initWithDatabaseFetcher:retryService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1003f6b84

// -[SCFideliusReEncryptionDelegateImpl persistKeyForMessage:messageId:key:]
// Type encoding: B40@0:8@16q24@32
// Implementation: 0x1059458ac

// -[SCFideliusReEncryptionDelegateImpl removeKeyForMessage:messageId:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x105945ac8

// -[SCFideliusReEncryptionDelegateImpl requestReEncryptionForMessage:messageId:reset:]
// Type encoding: B36@0:8@16q24B32
// Implementation: 0x105945be4

// -[SCFideliusReEncryptionDelegateImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105945cd8

@end
