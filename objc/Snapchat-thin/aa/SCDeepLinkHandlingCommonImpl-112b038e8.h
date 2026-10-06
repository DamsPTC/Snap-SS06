// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeepLinkHandlingCommonImpl
// Superclass: NSObject
// Address: 0x112b038e8

@interface SCDeepLinkHandlingCommonImpl

// Property: handlingIdToCompletionBlock; attributes: T@"NSMutableDictionary",R,N,V_handlingIdToCompletionBlock
// Property: handlingIdToDestinationBlock; attributes: T@"NSMutableDictionary",R,N,V_handlingIdToDestinationBlock
// Property: handlingIdToScopes; attributes: T@"NSMutableDictionary",R,N,V_handlingIdToScopes
// Property: handlingIdToHandlingProcedureDelegates; attributes: T@"NSMutableDictionary",R,N,V_handlingIdToHandlingProcedureDelegates

// -[SCDeepLinkHandlingCommonImpl initWithDeepLinkHandlingScopeExposer:scopeCreationDelegate:handlingProcedureWithHandlingIdDelegate:isLoggedIn:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x106895d54

// -[SCDeepLinkHandlingCommonImpl isValidInternalDeepLinkURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x106895e84

// -[SCDeepLinkHandlingCommonImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:handlingId:completion:]
// Type encoding: v68@0:8@16@24@32B40q44q52@?60
// Implementation: 0x106895f24

// -[SCDeepLinkHandlingCommonImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:handlingId:onDestinationReached:completion:]
// Type encoding: v76@0:8@16@24@32B40q44q52@?60@?68
// Implementation: 0x106896054

// -[SCDeepLinkHandlingCommonImpl handleHandlingResult:handlingId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106896194

// -[SCDeepLinkHandlingCommonImpl handleDestinationOutcomeWithError:handlingId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106896278

// -[SCDeepLinkHandlingCommonImpl handleValidationResult:handlingId:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x106896344

// -[SCDeepLinkHandlingCommonImpl _triggerProcedureWithRequest:handlingId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106896390

// -[SCDeepLinkHandlingCommonImpl _cleanUpScopeWithHandlingId:]
// Type encoding: v24@0:8q16
// Implementation: 0x1068964c8

// -[SCDeepLinkHandlingCommonImpl handlingIdToCompletionBlock]
// Type encoding: @16@0:8
// Implementation: 0x106896668

// -[SCDeepLinkHandlingCommonImpl handlingIdToDestinationBlock]
// Type encoding: @16@0:8
// Implementation: 0x106896670

// -[SCDeepLinkHandlingCommonImpl handlingIdToScopes]
// Type encoding: @16@0:8
// Implementation: 0x106896678

// -[SCDeepLinkHandlingCommonImpl handlingIdToHandlingProcedureDelegates]
// Type encoding: @16@0:8
// Implementation: 0x106896680

// -[SCDeepLinkHandlingCommonImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106896688

@end
