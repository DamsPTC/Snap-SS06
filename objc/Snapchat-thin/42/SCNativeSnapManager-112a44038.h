// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeSnapManager
// Superclass: NSObject
// Address: 0x112a44038

@interface SCNativeSnapManager


// -[SCNativeSnapManager initWithNativeSession:nativePostSnapInteractionEvents:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100607d3c

// -[SCNativeSnapManager nativeSnapManager]
// Type encoding: @16@0:8
// Implementation: 0x105527ec4

// -[SCNativeSnapManager updateSnapInteractionWithType:conversationId:messageId:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x105527f04

// -[SCNativeSnapManager updateSnapDownloadStatus:conversationId:messageId:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x105528254

// -[SCNativeSnapManager requestSnapReplayForConversationId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1055283e8

// -[SCNativeSnapManager saveSnapsForConversationId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105528588

// -[SCNativeSnapManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105528728

@end
