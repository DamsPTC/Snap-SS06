// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNSEIntentDonator
// Superclass: NSObject
// Address: 0x1000dc388

@interface SCNSEIntentDonator


// -[SCNSEIntentDonator initWithGrapheneLogger:notificationType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10005ba8c

// -[SCNSEIntentDonator initWithPhoneSupportsCommStyle:phoneSupportsLeftSideImageForCommStyle:intentBuilder:grapheneLogger:]
// Type encoding: @40@0:8B16B20@24@32
// Implementation: 0x10005bb78

// -[SCNSEIntentDonator donateIntentFor1on1WithConversationId:senderDisplayName:avatarImage:notificationContent:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10005bc34

// -[SCNSEIntentDonator donateIntentForGroupConversationId:senderDisplayName:groupDisplayName:avatarImage:notificationContent:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10005bde0

// -[SCNSEIntentDonator _donateIntent:notificationContent:intentType:startTime:]
// Type encoding: @48@0:8@16@24Q32d40
// Implementation: 0x10005bfa4

// -[SCNSEIntentDonator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10005c12c

@end
