// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextContextHint
// Superclass: GPBMessage
// Address: 0x112caa570

@interface SCContextContextHint

// Property: contextClientInfo; attributes: T@"SCCTXContextClientInfo",&,D,N
// Property: hasContextClientInfo; attributes: TB,D,N
// Property: clientInfoOneOfCase; attributes: Ti,R,D,N
// Property: unencryptedClientInfo; attributes: T@"SCCTXContextClientInfo",&,D,N
// Property: encryptedClientInfo; attributes: T@"NSData",C,D,N
// Property: hint; attributes: Ti,D,N
// Property: timestamp; attributes: Tq,D,N
// Property: affordance; attributes: T@"SCContextAffordance",&,D,N
// Property: hasAffordance; attributes: TB,D,N
// Property: contentMetadata; attributes: T@"SCContextContentMetadata",&,D,N
// Property: hasContentMetadata; attributes: TB,D,N
// Property: moreContextArray; attributes: T@"NSMutableArray",&,D,N
// Property: moreContextArray_Count; attributes: TQ,R,D,N

// -[SCContextContextHint hasPostCaptureLyricsSticker]
// Type encoding: B16@0:8
// Implementation: 0x107d85318

// -[SCContextContextHint containsMusicTrackId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d853ac

// -[SCContextContextHint compat_getClientInfo]
// Type encoding: @16@0:8
// Implementation: 0x107d84d5c

// -[SCContextContextHint compat_getClientInfoWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d84d64

// -[SCContextContextHint compat_encryptContextClientInfoWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d8502c

// -[SCContextContextHint canRepostSnapForUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x103b14284

// +[SCContextContextHint hintFromEncodedString:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d85274

// +[SCContextContextHint descriptor]
// Type encoding: @16@0:8
// Implementation: 0x10b70b18c

@end
