// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingUploadResult
// Superclass: NSObject
// Address: 0x112c81b98

@interface SCNMessagingUploadResult

// Property: status; attributes: Tq,N,V_status
// Property: failureReason; attributes: T@"NSNumber",&,N,V_failureReason
// Property: failureDescription; attributes: T@"NSString",C,N,V_failureDescription
// Property: clientError; attributes: T@"NSData",C,N,V_clientError
// Property: failedStep; attributes: T@"NSNumber",&,N,V_failedStep
// Property: timers; attributes: T@"NSDictionary",C,N,V_timers
// Property: remoteMediaInfo; attributes: T@"SCNMessagingRemoteMediaInfo",&,N,V_remoteMediaInfo
// Property: remoteMediaReferences; attributes: T@"SCNMessagingMediaReferenceList",&,N,V_remoteMediaReferences
// Property: mediaOrchestrationAttemptId; attributes: T@"SCNMessagingUUID",&,N,V_mediaOrchestrationAttemptId
// Property: mediaRole; attributes: T@"NSNumber",&,N,V_mediaRole

// -[SCNMessagingUploadResult copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10afce4c4

// -[SCNMessagingUploadResult initWithStatus:failureReason:failureDescription:clientError:failedStep:timers:remoteMediaInfo:remoteMediaReferences:mediaOrchestrationAttemptId:mediaRole:]
// Type encoding: @96@0:8q16@24@32@40@48@56@64@72@80@88
// Implementation: 0x10b642e30

// -[SCNMessagingUploadResult initWithStatus:timers:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10b643080

// -[SCNMessagingUploadResult status]
// Type encoding: q16@0:8
// Implementation: 0x10b6430b8

// -[SCNMessagingUploadResult setStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6430c0

// -[SCNMessagingUploadResult failureReason]
// Type encoding: @16@0:8
// Implementation: 0x10b6430c8

// -[SCNMessagingUploadResult setFailureReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6430d0

// -[SCNMessagingUploadResult failureDescription]
// Type encoding: @16@0:8
// Implementation: 0x10b6430f0

// -[SCNMessagingUploadResult setFailureDescription:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6430f8

// -[SCNMessagingUploadResult clientError]
// Type encoding: @16@0:8
// Implementation: 0x10b643100

// -[SCNMessagingUploadResult setClientError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b643108

// -[SCNMessagingUploadResult failedStep]
// Type encoding: @16@0:8
// Implementation: 0x10b643110

// -[SCNMessagingUploadResult setFailedStep:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b643118

// -[SCNMessagingUploadResult timers]
// Type encoding: @16@0:8
// Implementation: 0x10b643138

// -[SCNMessagingUploadResult setTimers:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b643140

// -[SCNMessagingUploadResult remoteMediaInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b643148

// -[SCNMessagingUploadResult setRemoteMediaInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b643150

// -[SCNMessagingUploadResult remoteMediaReferences]
// Type encoding: @16@0:8
// Implementation: 0x10b643170

// -[SCNMessagingUploadResult setRemoteMediaReferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b643178

// -[SCNMessagingUploadResult mediaOrchestrationAttemptId]
// Type encoding: @16@0:8
// Implementation: 0x10b643198

// -[SCNMessagingUploadResult setMediaOrchestrationAttemptId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6431a0

// -[SCNMessagingUploadResult mediaRole]
// Type encoding: @16@0:8
// Implementation: 0x10b6431c0

// -[SCNMessagingUploadResult setMediaRole:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6431c8

// -[SCNMessagingUploadResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6431e8

@end
