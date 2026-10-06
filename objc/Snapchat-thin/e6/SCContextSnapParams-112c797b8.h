// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextSnapParams
// Superclass: NSObject
// Address: 0x112c797b8

@interface SCContextSnapParams

// Property: snapIdentity; attributes: T@"SCContextSnapIdentity",R,C,N,V_snapIdentity
// Property: replyParams; attributes: T@"SCContextReplyParams",R,C,N,V_replyParams
// Property: unlockableSnapInfo; attributes: T@"NSString",R,C,N,V_unlockableSnapInfo
// Property: creatorEligibility; attributes: T@"SCStoriesCreatorEligibility",R,C,N,V_creatorEligibility

// -[SCContextSnapParams initWithContextData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065ee3d4

// -[SCContextSnapParams initWithContextData:groupConversationIdOverride:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1065ee524

// -[SCContextSnapParams initWithContextData:groupConversationIdOverride:replyParamsOverride:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1065ee68c

// -[SCContextSnapParams initWithSnapIdentity:replyParams:unlockableSnapInfo:creatorEligibility:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b6068f8

// -[SCContextSnapParams copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b606a04

// -[SCContextSnapParams hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b606a28

// -[SCContextSnapParams isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b606ab4

// -[SCContextSnapParams snapIdentity]
// Type encoding: @16@0:8
// Implementation: 0x10b606b8c

// -[SCContextSnapParams replyParams]
// Type encoding: @16@0:8
// Implementation: 0x10b606b94

// -[SCContextSnapParams unlockableSnapInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b606b9c

// -[SCContextSnapParams creatorEligibility]
// Type encoding: @16@0:8
// Implementation: 0x10b606ba4

// -[SCContextSnapParams .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b606bac

@end
