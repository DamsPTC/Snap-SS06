// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCallIntent
// Superclass: NSObject
// Address: 0x1129b9c28

@interface SCCallIntent

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCCallIntent description]
// Type encoding: @16@0:8
// Implementation: 0x104466a5c

// -[SCCallIntent init]
// Type encoding: @16@0:8
// Implementation: 0x104466b3c

// -[SCCallIntent hash]
// Type encoding: q16@0:8
// Implementation: 0x104466b84

// -[SCCallIntent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104466f80

// -[SCCallIntent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104467000

// -[SCCallIntent matchOutgoing:incoming:join:resume:]
// Type encoding: v48@0:8@?16@?24@?32@?40
// Implementation: 0x10446723c

// -[SCCallIntent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1044672e4

// +[SCCallIntent outgoingWithVideo:isHangout:]
// Type encoding: @24@0:8B16B20
// Implementation: 0x104467004

// +[SCCallIntent incomingWithPayload:senderUserId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104467020

// +[SCCallIntent joinWithVideo:]
// Type encoding: @20@0:8B16
// Implementation: 0x10446708c

// +[SCCallIntent resume]
// Type encoding: @16@0:8
// Implementation: 0x1044670a4

@end
