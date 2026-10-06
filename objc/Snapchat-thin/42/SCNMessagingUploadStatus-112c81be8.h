// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingUploadStatus
// Superclass: NSObject
// Address: 0x112c81be8

@interface SCNMessagingUploadStatus

// Property: localMediaReference; attributes: T@"SCNMessagingLocalMediaReference",&,N,V_localMediaReference
// Property: state; attributes: Tq,N,V_state
// Property: lastKnownStep; attributes: T@"NSNumber",&,N,V_lastKnownStep
// Property: sendStatus; attributes: T@"NSNumber",&,N,V_sendStatus
// Property: failureReason; attributes: T@"NSNumber",&,N,V_failureReason
// Property: failureDescription; attributes: T@"NSString",C,N,V_failureDescription
// Property: clientError; attributes: T@"NSData",C,N,V_clientError
// Property: uploadMode; attributes: Tq,N,V_uploadMode
// Property: bytesUploaded; attributes: T@"NSNumber",&,N,V_bytesUploaded
// Property: totalBytes; attributes: T@"NSNumber",&,N,V_totalBytes
// Property: lastUpdateTimestampMs; attributes: T@"NSNumber",&,N,V_lastUpdateTimestampMs
// Property: mediaOrchestrationAttemptId; attributes: T@"SCNMessagingUUID",&,N,V_mediaOrchestrationAttemptId
// Property: transcodeStatus; attributes: T@"SCNMessagingTranscodeStatus",&,N,V_transcodeStatus

// -[SCNMessagingUploadStatus initWithLocalMediaReference:state:lastKnownStep:sendStatus:failureReason:failureDescription:clientError:uploadMode:bytesUploaded:totalBytes:lastUpdateTimestampMs:mediaOrchestrationAttemptId:transcodeStatus:]
// Type encoding: @120@0:8@16q24@32@40@48@56@64q72@80@88@96@104@112
// Implementation: 0x10b643274

// -[SCNMessagingUploadStatus initWithLocalMediaReference:state:uploadMode:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10b643538

// -[SCNMessagingUploadStatus localMediaReference]
// Type encoding: @16@0:8
// Implementation: 0x10b643574

// -[SCNMessagingUploadStatus setLocalMediaReference:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b64357c

// -[SCNMessagingUploadStatus state]
// Type encoding: q16@0:8
// Implementation: 0x10b64359c

// -[SCNMessagingUploadStatus setState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6435a4

// -[SCNMessagingUploadStatus lastKnownStep]
// Type encoding: @16@0:8
// Implementation: 0x10b6435ac

// -[SCNMessagingUploadStatus setLastKnownStep:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6435b4

// -[SCNMessagingUploadStatus sendStatus]
// Type encoding: @16@0:8
// Implementation: 0x10b6435d4

// -[SCNMessagingUploadStatus setSendStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6435dc

// -[SCNMessagingUploadStatus failureReason]
// Type encoding: @16@0:8
// Implementation: 0x10b6435fc

// -[SCNMessagingUploadStatus setFailureReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b643604

// -[SCNMessagingUploadStatus failureDescription]
// Type encoding: @16@0:8
// Implementation: 0x10b643624

// -[SCNMessagingUploadStatus setFailureDescription:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b64362c

// -[SCNMessagingUploadStatus clientError]
// Type encoding: @16@0:8
// Implementation: 0x10b643634

// -[SCNMessagingUploadStatus setClientError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b64363c

// -[SCNMessagingUploadStatus uploadMode]
// Type encoding: q16@0:8
// Implementation: 0x10b643644

// -[SCNMessagingUploadStatus setUploadMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b64364c

// -[SCNMessagingUploadStatus bytesUploaded]
// Type encoding: @16@0:8
// Implementation: 0x10b643654

// -[SCNMessagingUploadStatus setBytesUploaded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b64365c

// -[SCNMessagingUploadStatus totalBytes]
// Type encoding: @16@0:8
// Implementation: 0x10b64367c

// -[SCNMessagingUploadStatus setTotalBytes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b643684

// -[SCNMessagingUploadStatus lastUpdateTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x10b6436a4

// -[SCNMessagingUploadStatus setLastUpdateTimestampMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6436ac

// -[SCNMessagingUploadStatus mediaOrchestrationAttemptId]
// Type encoding: @16@0:8
// Implementation: 0x10b6436cc

// -[SCNMessagingUploadStatus setMediaOrchestrationAttemptId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6436d4

// -[SCNMessagingUploadStatus transcodeStatus]
// Type encoding: @16@0:8
// Implementation: 0x10b6436f4

// -[SCNMessagingUploadStatus setTranscodeStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6436fc

// -[SCNMessagingUploadStatus .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b64371c

@end
