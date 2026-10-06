// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTV3HeadlessSession
// Superclass: NSObject
// Address: 0x112ba9e28

@interface SCTV3HeadlessSession

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: talkContext; attributes: T@"<SCTalkContext>",R,N

// -[SCTV3HeadlessSession initWithSessionWrapper:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1085e6628

// -[SCTV3HeadlessSession talkContext]
// Type encoding: @16@0:8
// Implementation: 0x1085e66fc

// -[SCTV3HeadlessSession callingController]
// Type encoding: @16@0:8
// Implementation: 0x1085e6724

// -[SCTV3HeadlessSession reportNotificationDisplayType:deliveryMechanism:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1085e6728

// -[SCTV3HeadlessSession reportNotificationFailed:senderUserId:missedCallReason:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1085e676c

// -[SCTV3HeadlessSession sessionWrapper:updatedState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085e67dc

// -[SCTV3HeadlessSession updatePublishedMedia:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1085e6acc

// -[SCTV3HeadlessSession updatePublishedMedia:audioMuted:completion:]
// Type encoding: v36@0:8Q16B24@?28
// Implementation: 0x1085e6ad8

// -[SCTV3HeadlessSession dismissCall]
// Type encoding: v16@0:8
// Implementation: 0x1085e6b38

// -[SCTV3HeadlessSession isFullscreen]
// Type encoding: B16@0:8
// Implementation: 0x1085e6b64

// -[SCTV3HeadlessSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085e6b6c

@end
