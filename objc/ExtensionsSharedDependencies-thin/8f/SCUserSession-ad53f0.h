// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserSession
// Superclass: NSObject
// Address: 0xad53f0

@interface SCUserSession

// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: username; attributes: T@"NSString",R,C,N,V_username
// Property: authToken; attributes: T@"NSString",R,C,N,V_authToken
// Property: lagunaId; attributes: T@"NSString",R,C,N,V_lagunaId

// -[SCUserSession _associated_storage]
// Type encoding: @16@0:8
// Implementation: 0x444f04

// -[SCUserSession objectForKey:initializer:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x444fd0

// -[SCUserSession invalidate]
// Type encoding: v16@0:8
// Implementation: 0x445144

// -[SCUserSession isInvalidated]
// Type encoding: B16@0:8
// Implementation: 0x4453a8

// -[SCUserSession cacheDirectory:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x442558

// -[SCUserSession documentDirectory:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x44255c

// -[SCUserSession unmanaged_cacheDirectory:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x442560

// -[SCUserSession unmanaged_documentDirectory:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x4428ac

// -[SCUserSession initWithUserId:username:authToken:lagunaId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x445f40

// -[SCUserSession copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x44604c

// -[SCUserSession hash]
// Type encoding: Q16@0:8
// Implementation: 0x446070

// -[SCUserSession isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x4460fc

// -[SCUserSession userId]
// Type encoding: @16@0:8
// Implementation: 0x4461d4

// -[SCUserSession username]
// Type encoding: @16@0:8
// Implementation: 0x4461dc

// -[SCUserSession authToken]
// Type encoding: @16@0:8
// Implementation: 0x4461e4

// -[SCUserSession lagunaId]
// Type encoding: @16@0:8
// Implementation: 0x4461ec

// -[SCUserSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x4461f4

// +[SCUserSession cleanUpOutOfScopeDocumentFilesExceptForUser:]
// Type encoding: v24@0:8@16
// Implementation: 0x442d24

// +[SCUserSession _cleanUpOutOfScopeDirectoriesIn:forUserIdHash:trash:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x442e28

// +[SCUserSession userScopedCachePathRootForUser:]
// Type encoding: @24@0:8@16
// Implementation: 0x443070

// +[SCUserSession userScopedDocumentPathRootForUser:]
// Type encoding: @24@0:8@16
// Implementation: 0x443154

// +[SCUserSession userScopedApplicationSupportPathRootForUser:]
// Type encoding: @24@0:8@16
// Implementation: 0x443238

@end
