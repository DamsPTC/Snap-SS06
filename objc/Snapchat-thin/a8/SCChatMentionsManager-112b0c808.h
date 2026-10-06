// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMentionsManager
// Superclass: NSObject
// Address: 0x112b0c808

@interface SCChatMentionsManager

// Property: mentions; attributes: T@"NSArray",R,N
// Property: mentionsStream; attributes: T@"SCObservable",R,N
// Property: mentionSearchMetrics; attributes: T@"SCMentionSearchMetrics",R,N,V_mentionSearchMetrics

// -[SCChatMentionsManager initWithInputViewController:textInputObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a382c4

// -[SCChatMentionsManager mentionsStream]
// Type encoding: @16@0:8
// Implementation: 0x106a383b4

// -[SCChatMentionsManager startObservingTextInput]
// Type encoding: v16@0:8
// Implementation: 0x106a38404

// -[SCChatMentionsManager stopObservingTextInput]
// Type encoding: v16@0:8
// Implementation: 0x106a38518

// -[SCChatMentionsManager mentions]
// Type encoding: @16@0:8
// Implementation: 0x106a38520

// -[SCChatMentionsManager addMentionForUserId:username:userColor:replacementRange:searchMode:isNonParticipant:]
// Type encoding: v68@0:8@16@24@32{_NSRange=QQ}40q56B64
// Implementation: 0x106a38538

// -[SCChatMentionsManager restoreAllMentions:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a38778

// -[SCChatMentionsManager removeAllMentions]
// Type encoding: v16@0:8
// Implementation: 0x106a387c8

// -[SCChatMentionsManager _deleteMentionsInRange:state:textToAdd:]
// Type encoding: v48@0:8{_NSRange=QQ}16q32@40
// Implementation: 0x106a38800

// -[SCChatMentionsManager _offsetMentionsGivenInputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a38a80

// -[SCChatMentionsManager _processTextInputChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a38c58

// -[SCChatMentionsManager observeSearchMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a38d20

// -[SCChatMentionsManager _updateMentionSearchMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a38e44

// -[SCChatMentionsManager mentionSearchMetrics]
// Type encoding: @16@0:8
// Implementation: 0x106a38e74

// -[SCChatMentionsManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a38e7c

@end
