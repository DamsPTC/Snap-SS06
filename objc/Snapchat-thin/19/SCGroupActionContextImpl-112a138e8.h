// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupActionContextImpl
// Superclass: NSObject
// Address: 0x112a138e8

@interface SCGroupActionContextImpl

// Property: modalUIContainer; attributes: T@"<SCUIContainer>",R,N
// Property: presentingViewController_LEGACY_DO_NOT_USE; attributes: T@"UIViewController",R,W,N,V_presentingViewController
// Property: delegate; attributes: T@"<SCGroupActionDelegate>",W,N,V_delegate
// Property: sourcePageType; attributes: Tq,R,N,V_sourcePageType
// Property: sessionId; attributes: T@"NSString",R,N,V_sessionId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGroupActionContextImpl initWithLoggingService:sourcePageType:sessionId:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10506a318

// -[SCGroupActionContextImpl setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10506a3c4

// -[SCGroupActionContextImpl modalUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x10506a3d0

// -[SCGroupActionContextImpl logActionWithName:]
// Type encoding: v24@0:8q16
// Implementation: 0x10506a428

// -[SCGroupActionContextImpl presentingViewController_LEGACY_DO_NOT_USE]
// Type encoding: @16@0:8
// Implementation: 0x10506a438

// -[SCGroupActionContextImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x10506a450

// -[SCGroupActionContextImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10506a468

// -[SCGroupActionContextImpl sourcePageType]
// Type encoding: q16@0:8
// Implementation: 0x10506a474

// -[SCGroupActionContextImpl sessionId]
// Type encoding: @16@0:8
// Implementation: 0x10506a47c

// -[SCGroupActionContextImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10506a484

@end
