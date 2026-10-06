// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPhoneServiceLoggerImpl
// Superclass: NSObject
// Address: 0x112a35038

@interface SCPhoneServiceLoggerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPhoneServiceLoggerImpl initWithSystemBlizzard:userId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105401154

// -[SCPhoneServiceLoggerImpl logSetCommunicationChannelAttempt:countryCode:isForResend:]
// Type encoding: v36@0:8Q16@24B32
// Implementation: 0x1054011f8

// -[SCPhoneServiceLoggerImpl logSetCommunicationChannelResult:resultType:countryCode:isForResend:latencyMS:]
// Type encoding: v52@0:8Q16q24@32B40d44
// Implementation: 0x105401318

// -[SCPhoneServiceLoggerImpl logVerifyCommunicationChannelAttempt:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105401414

// -[SCPhoneServiceLoggerImpl logVerifyCommunicationChannelResult:resultType:latencyMS:]
// Type encoding: v40@0:8Q16q24d32
// Implementation: 0x1054014ac

// -[SCPhoneServiceLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10540156c

@end
