// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatThreatsScannerImpl
// Superclass: NSObject
// Address: 0x112a80a38

@interface SCChatThreatsScannerImpl


// -[SCChatThreatsScannerImpl initWithPasswordHashRepository:userId:graphene:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1059b9020

// -[SCChatThreatsScannerImpl initWithPasswordHashRepository:userId:graphene:overrideIsEnabled:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1059b9028

// -[SCChatThreatsScannerImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1059b9298

// -[SCChatThreatsScannerImpl detectPassword:]
// Type encoding: {_NSRange=QQ}24@0:8@16
// Implementation: 0x1059b92e0

// -[SCChatThreatsScannerImpl _skipDetection:hash:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1059b957c

// -[SCChatThreatsScannerImpl _isEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1059b9600

// -[SCChatThreatsScannerImpl _logDetectLatency:messageLength:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1059b9608

// -[SCChatThreatsScannerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059b965c

@end
