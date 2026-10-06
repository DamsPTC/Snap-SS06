// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextReplyParams
// Superclass: NSObject
// Address: 0x112c795d8

@interface SCContextReplyParams

// Property: user; attributes: T@"SCContextUserParams",R,C,N,V_user
// Property: conversationId; attributes: T@"NSString",R,C,N,V_conversationId
// Property: isGroup; attributes: TB,R,N,V_isGroup
// Property: isDirectSnap; attributes: TB,R,N,V_isDirectSnap
// Property: isSpotlightRecommendReply; attributes: TB,R,N,V_isSpotlightRecommendReply

// -[SCContextReplyParams initWithContextData:groupConversationIdOverride:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1065ee820

// -[SCContextReplyParams initWithContextData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065eeac0

// -[SCContextReplyParams initWithUser:conversationId:isGroup:isDirectSnap:isSpotlightRecommendReply:]
// Type encoding: @44@0:8@16@24B32B36B40
// Implementation: 0x10b604518

// -[SCContextReplyParams copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6045e4

// -[SCContextReplyParams hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b604608

// -[SCContextReplyParams isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b60468c

// -[SCContextReplyParams user]
// Type encoding: @16@0:8
// Implementation: 0x10b604764

// -[SCContextReplyParams conversationId]
// Type encoding: @16@0:8
// Implementation: 0x10b60476c

// -[SCContextReplyParams isGroup]
// Type encoding: B16@0:8
// Implementation: 0x10b604774

// -[SCContextReplyParams isDirectSnap]
// Type encoding: B16@0:8
// Implementation: 0x10b60477c

// -[SCContextReplyParams isSpotlightRecommendReply]
// Type encoding: B16@0:8
// Implementation: 0x10b604784

// -[SCContextReplyParams .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b60478c

@end
