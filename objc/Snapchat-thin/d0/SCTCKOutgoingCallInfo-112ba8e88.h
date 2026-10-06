// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTCKOutgoingCallInfo
// Superclass: NSObject
// Address: 0x112ba8e88

@interface SCTCKOutgoingCallInfo

// Property: convoId; attributes: T@"NSString",R,N
// Property: talkContext; attributes: T@"<SCTalkContext>",R,N,V_talkContext
// Property: fromRecentList; attributes: TB,R,N,V_fromRecentList
// Property: videoRelated; attributes: TB,R,N,V_videoRelated
// Property: sourceType; attributes: Tq,R,N,V_sourceType
// Property: isHangout; attributes: TB,R,N,V_isHangout
// Property: completion; attributes: T@?,R,N,V_completion

// -[SCTCKOutgoingCallInfo initWithConvoId:fromRecentList:videoRelated:sourceType:isHangout:completion:]
// Type encoding: @52@0:8@16B24B28q32B40@?44
// Implementation: 0x1085b1f08

// -[SCTCKOutgoingCallInfo initWithTalkContext:fromRecentList:videoRelated:sourceType:isHangout:completion:]
// Type encoding: @52@0:8@16B24B28q32B40@?44
// Implementation: 0x1085b1fe0

// -[SCTCKOutgoingCallInfo convoId]
// Type encoding: @16@0:8
// Implementation: 0x1085b20b8

// -[SCTCKOutgoingCallInfo setTalkContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085b2118

// -[SCTCKOutgoingCallInfo talkContext]
// Type encoding: @16@0:8
// Implementation: 0x1085b2170

// -[SCTCKOutgoingCallInfo fromRecentList]
// Type encoding: B16@0:8
// Implementation: 0x1085b2178

// -[SCTCKOutgoingCallInfo videoRelated]
// Type encoding: B16@0:8
// Implementation: 0x1085b2180

// -[SCTCKOutgoingCallInfo sourceType]
// Type encoding: q16@0:8
// Implementation: 0x1085b2188

// -[SCTCKOutgoingCallInfo isHangout]
// Type encoding: B16@0:8
// Implementation: 0x1085b2190

// -[SCTCKOutgoingCallInfo completion]
// Type encoding: @?16@0:8
// Implementation: 0x1085b2198

// -[SCTCKOutgoingCallInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085b21a0

@end
