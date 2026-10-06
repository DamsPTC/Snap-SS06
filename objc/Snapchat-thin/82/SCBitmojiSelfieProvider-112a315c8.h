// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiSelfieProvider
// Superclass: NSObject
// Address: 0x112a315c8

@interface SCBitmojiSelfieProvider

// Property: selfieId; attributes: T@"NSString",C,V_selfieId
// Property: selfieIdObserver; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiSelfieProvider initWithUserInfoProvider:bitmojiSelfieIdMutator:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100811440

// -[SCBitmojiSelfieProvider _publishSelfieId:]
// Type encoding: v24@0:8@16
// Implementation: 0x100811648

// -[SCBitmojiSelfieProvider selfieIdObserver]
// Type encoding: @16@0:8
// Implementation: 0x100811784

// -[SCBitmojiSelfieProvider updateSelfieId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053ca548

// -[SCBitmojiSelfieProvider selfieId]
// Type encoding: @16@0:8
// Implementation: 0x100811778

// -[SCBitmojiSelfieProvider setSelfieId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053ca550

// -[SCBitmojiSelfieProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053ca558

@end
