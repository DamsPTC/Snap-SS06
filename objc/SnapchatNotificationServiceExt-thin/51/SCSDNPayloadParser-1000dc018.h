// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSDNPayloadParser
// Superclass: NSObject
// Address: 0x1000dc018

@interface SCSDNPayloadParser

// Property: title; attributes: T@"NSString",R,N,V_title
// Property: body; attributes: T@"NSString",R,N,V_body
// Property: subtitle; attributes: T@"NSString",R,N,V_subtitle
// Property: attachmentImage; attributes: T@"SCPBNIcon",R,N,V_attachmentImage
// Property: communicationStyleAvatar; attributes: T@"SCPBNIcon",R,N,V_communicationStyleAvatar
// Property: shouldDonateIntent; attributes: TB,R,N,V_shouldDonateIntent
// Property: soundPolicy; attributes: T@"SCPBNSoundPolicy",R,N,V_soundPolicy
// Property: senderUserId; attributes: T@"NSString",R,N,V_senderUserId
// Property: timeSensitivePolicy; attributes: Ti,R,N,V_timeSensitivePolicy
// Property: shouldSuppress; attributes: TB,R,N,V_shouldSuppress

// -[SCSDNPayloadParser initWithClientPayload:intentDonationEnabled:showBitmojiEnabled:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x1000581f8

// -[SCSDNPayloadParser initWithClientPayload:commStyleEnabled:phoneSupportsLeftSideCommStyleImage:showBitmojiEnabled:]
// Type encoding: @36@0:8@16B24B28B32
// Implementation: 0x10005826c

// -[SCSDNPayloadParser _parse]
// Type encoding: v16@0:8
// Implementation: 0x100058310

// -[SCSDNPayloadParser title]
// Type encoding: @16@0:8
// Implementation: 0x100058878

// -[SCSDNPayloadParser body]
// Type encoding: @16@0:8
// Implementation: 0x100058880

// -[SCSDNPayloadParser subtitle]
// Type encoding: @16@0:8
// Implementation: 0x100058888

// -[SCSDNPayloadParser attachmentImage]
// Type encoding: @16@0:8
// Implementation: 0x100058890

// -[SCSDNPayloadParser communicationStyleAvatar]
// Type encoding: @16@0:8
// Implementation: 0x100058898

// -[SCSDNPayloadParser shouldDonateIntent]
// Type encoding: B16@0:8
// Implementation: 0x1000588a0

// -[SCSDNPayloadParser soundPolicy]
// Type encoding: @16@0:8
// Implementation: 0x1000588a8

// -[SCSDNPayloadParser senderUserId]
// Type encoding: @16@0:8
// Implementation: 0x1000588b0

// -[SCSDNPayloadParser timeSensitivePolicy]
// Type encoding: i16@0:8
// Implementation: 0x1000588b8

// -[SCSDNPayloadParser shouldSuppress]
// Type encoding: B16@0:8
// Implementation: 0x1000588c0

// -[SCSDNPayloadParser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1000588c8

@end
