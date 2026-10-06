// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeepLinkHandlingUnauthenticatedImpl
// Superclass: NSObject
// Address: 0x112b03988

@interface SCDeepLinkHandlingUnauthenticatedImpl

// Property: latestHandlingId; attributes: Tq,R,N,V_latestHandlingId
// Property: latestURL; attributes: T@"NSURL",R,N,V_latestURL
// Property: latestSourceApplication; attributes: T@"NSString",R,N,V_latestSourceApplication
// Property: deepLinkHandlingCommonImpl; attributes: T@"SCDeepLinkHandlingCommonImpl",R,N,V_deepLinkHandlingCommonImpl
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDeepLinkHandlingUnauthenticatedImpl initWithDeepLinkHandlingScopeExposer:deferredDeepLinkStore:tivNonceServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106896a08

// -[SCDeepLinkHandlingUnauthenticatedImpl isValidInternalDeepLinkURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x106896af0

// -[SCDeepLinkHandlingUnauthenticatedImpl handleOpenURL:additionalInfo:source:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x106896af8

// -[SCDeepLinkHandlingUnauthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:completion:]
// Type encoding: v60@0:8@16@24@32B40q44@?52
// Implementation: 0x106896b10

// -[SCDeepLinkHandlingUnauthenticatedImpl handleOpenURL:additionalInfo:source:onDestinationReached:completion:]
// Type encoding: v56@0:8@16@24q32@?40@?48
// Implementation: 0x106896b34

// -[SCDeepLinkHandlingUnauthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:onDestinationReached:completion:]
// Type encoding: v68@0:8@16@24@32B40q44@?52@?60
// Implementation: 0x106896b6c

// -[SCDeepLinkHandlingUnauthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:handlingId:completion:]
// Type encoding: v68@0:8@16@24@32B40q44q52@?60
// Implementation: 0x106896c7c

// -[SCDeepLinkHandlingUnauthenticatedImpl didHandleOpenURLWithResult:handlingId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106896d18

// -[SCDeepLinkHandlingUnauthenticatedImpl didReachDeepLinkDestinationWithError:handlingId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106896e30

// -[SCDeepLinkHandlingUnauthenticatedImpl didValidateDeepLinkWithResult:handlingId:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x106896f48

// -[SCDeepLinkHandlingUnauthenticatedImpl createScopeWithRequest:handlingProcedureDelegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106896f50

// -[SCDeepLinkHandlingUnauthenticatedImpl _storeDeferredDeepLinkWithURL:sourceApplication:handlingId:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106896fe0

// -[SCDeepLinkHandlingUnauthenticatedImpl _didHandleOpenURLWithResult:handlingId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10689706c

// -[SCDeepLinkHandlingUnauthenticatedImpl _didReachDeepLinkDestinationWithError:handlingId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10689718c

// -[SCDeepLinkHandlingUnauthenticatedImpl _handleURLWithTIVNonceWithURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x106897194

// -[SCDeepLinkHandlingUnauthenticatedImpl latestHandlingId]
// Type encoding: q16@0:8
// Implementation: 0x1068971f0

// -[SCDeepLinkHandlingUnauthenticatedImpl latestURL]
// Type encoding: @16@0:8
// Implementation: 0x1068971f8

// -[SCDeepLinkHandlingUnauthenticatedImpl latestSourceApplication]
// Type encoding: @16@0:8
// Implementation: 0x106897200

// -[SCDeepLinkHandlingUnauthenticatedImpl deepLinkHandlingCommonImpl]
// Type encoding: @16@0:8
// Implementation: 0x106897208

// -[SCDeepLinkHandlingUnauthenticatedImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106897210

@end
