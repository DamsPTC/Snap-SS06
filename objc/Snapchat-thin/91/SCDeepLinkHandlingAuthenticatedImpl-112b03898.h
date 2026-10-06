// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeepLinkHandlingAuthenticatedImpl
// Superclass: NSObject
// Address: 0x112b03898

@interface SCDeepLinkHandlingAuthenticatedImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDeepLinkHandlingAuthenticatedImpl initWithDeepLinkHandlingScopeExposer:snapRecoveryServices:deepLinkHandlingProcedureScopeServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106895538

// -[SCDeepLinkHandlingAuthenticatedImpl isValidInternalDeepLinkURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x106895620

// -[SCDeepLinkHandlingAuthenticatedImpl handleOpenURL:additionalInfo:source:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x106895628

// -[SCDeepLinkHandlingAuthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:completion:]
// Type encoding: v60@0:8@16@24@32B40q44@?52
// Implementation: 0x106895640

// -[SCDeepLinkHandlingAuthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:handlingId:completion:]
// Type encoding: v68@0:8@16@24@32B40q44q52@?60
// Implementation: 0x106895700

// -[SCDeepLinkHandlingAuthenticatedImpl handleOpenURL:additionalInfo:source:onDestinationReached:completion:]
// Type encoding: v56@0:8@16@24q32@?40@?48
// Implementation: 0x106895724

// -[SCDeepLinkHandlingAuthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:handlingId:onDestinationReached:completion:]
// Type encoding: v76@0:8@16@24@32B40q44q52@?60@?68
// Implementation: 0x1068957d8

// -[SCDeepLinkHandlingAuthenticatedImpl didHandleOpenURLWithResult:handlingId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106895a48

// -[SCDeepLinkHandlingAuthenticatedImpl didValidateDeepLinkWithResult:handlingId:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x106895b60

// -[SCDeepLinkHandlingAuthenticatedImpl didReachDeepLinkDestinationWithError:handlingId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106895b68

// -[SCDeepLinkHandlingAuthenticatedImpl createScopeWithRequest:handlingProcedureDelegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106895c80

// -[SCDeepLinkHandlingAuthenticatedImpl _didHandleOpenURLWithResult:handlingId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106895d08

// -[SCDeepLinkHandlingAuthenticatedImpl _didReachDeepLinkDestinationWithError:handlingId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106895d10

// -[SCDeepLinkHandlingAuthenticatedImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106895d18

@end
