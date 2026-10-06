// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingUploadMediaReferenceResult
// Superclass: NSObject
// Address: 0x112c81af8

@interface SCNMessagingUploadMediaReferenceResult

// Property: status; attributes: Tq,N,V_status
// Property: contentObject; attributes: T@"NSData",C,N,V_contentObject
// Property: encryptionInfo; attributes: T@"SCNMessagingMediaEncryptionInfo",&,N,V_encryptionInfo
// Property: failedStep; attributes: T@"NSNumber",&,N,V_failedStep
// Property: timers; attributes: T@"NSDictionary",C,N,V_timers

// -[SCNMessagingUploadMediaReferenceResult initWithStatus:contentObject:encryptionInfo:failedStep:timers:]
// Type encoding: @56@0:8q16@24@32@40@48
// Implementation: 0x10b6429ac

// -[SCNMessagingUploadMediaReferenceResult initWithStatus:timers:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10b642b00

// -[SCNMessagingUploadMediaReferenceResult status]
// Type encoding: q16@0:8
// Implementation: 0x10b642b14

// -[SCNMessagingUploadMediaReferenceResult setStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b642b1c

// -[SCNMessagingUploadMediaReferenceResult contentObject]
// Type encoding: @16@0:8
// Implementation: 0x10b642b24

// -[SCNMessagingUploadMediaReferenceResult setContentObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b642b2c

// -[SCNMessagingUploadMediaReferenceResult encryptionInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b642b34

// -[SCNMessagingUploadMediaReferenceResult setEncryptionInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b642b3c

// -[SCNMessagingUploadMediaReferenceResult failedStep]
// Type encoding: @16@0:8
// Implementation: 0x10b642b60

// -[SCNMessagingUploadMediaReferenceResult setFailedStep:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b642b68

// -[SCNMessagingUploadMediaReferenceResult timers]
// Type encoding: @16@0:8
// Implementation: 0x10b642b8c

// -[SCNMessagingUploadMediaReferenceResult setTimers:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b642b94

// -[SCNMessagingUploadMediaReferenceResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b642b9c

@end
