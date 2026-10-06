// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaOrchestrationSessionInfo
// Superclass: NSObject
// Address: 0x112a52b38

@interface SCMediaOrchestrationSessionInfo

// Property: sessionStatus; attributes: TQ,R,N,V_sessionStatus
// Property: encryptionKey; attributes: T@"NSString",R,C,N,V_encryptionKey
// Property: encryptionIv; attributes: T@"NSString",R,C,N,V_encryptionIv
// Property: contentURL; attributes: T@"NSURL",R,C,N,V_contentURL
// Property: serializedContentObject; attributes: T@"NSData",R,C,N,V_serializedContentObject
// Property: lastUpdateInitIndex; attributes: Tq,R,N,V_lastUpdateInitIndex
// Property: lastUpdateTimestamp; attributes: T@"NSDate",R,C,N,V_lastUpdateTimestamp
// Property: stepMetrics; attributes: T@"SCMediaUploadStepMetrics",R,C,N,V_stepMetrics
// Property: appSource; attributes: Tq,R,N,V_appSource
// Property: isMediaZipped; attributes: TB,R,N,V_isMediaZipped
// Property: latestUpdateOnSession; attributes: T@"NSString",R,C,N,V_latestUpdateOnSession
// Property: mediaType; attributes: Tq,R,N,V_mediaType
// Property: mediaOrchestrationAttemptId; attributes: T@"NSString",R,C,N,V_mediaOrchestrationAttemptId
// Property: captureSessionId; attributes: T@"NSString",R,C,N,V_captureSessionId
// Property: appSourceIsAuthoritative; attributes: TB,R,N,V_appSourceIsAuthoritative

// -[SCMediaOrchestrationSessionInfo initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056128b8

// -[SCMediaOrchestrationSessionInfo initWithSessionStatus:encryptionKey:encryptionIv:contentURL:serializedContentObject:lastUpdateInitIndex:lastUpdateTimestamp:stepMetrics:appSource:isMediaZipped:latestUpdateOnSession:mediaType:mediaOrchestrationAttemptId:captureSessionId:appSourceIsAuthoritative:]
// Type encoding: @128@0:8Q16@24@32@40@48q56@64@72q80B88@92q100@108@116B124
// Implementation: 0x105612af8

// -[SCMediaOrchestrationSessionInfo copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x105612d3c

// -[SCMediaOrchestrationSessionInfo encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105612d60

// -[SCMediaOrchestrationSessionInfo hash]
// Type encoding: Q16@0:8
// Implementation: 0x105612ec4

// -[SCMediaOrchestrationSessionInfo isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x105612fc0

// -[SCMediaOrchestrationSessionInfo sessionStatus]
// Type encoding: Q16@0:8
// Implementation: 0x105613170

// -[SCMediaOrchestrationSessionInfo encryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x105613178

// -[SCMediaOrchestrationSessionInfo encryptionIv]
// Type encoding: @16@0:8
// Implementation: 0x105613180

// -[SCMediaOrchestrationSessionInfo contentURL]
// Type encoding: @16@0:8
// Implementation: 0x105613188

// -[SCMediaOrchestrationSessionInfo serializedContentObject]
// Type encoding: @16@0:8
// Implementation: 0x105613190

// -[SCMediaOrchestrationSessionInfo lastUpdateInitIndex]
// Type encoding: q16@0:8
// Implementation: 0x105613198

// -[SCMediaOrchestrationSessionInfo lastUpdateTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1056131a0

// -[SCMediaOrchestrationSessionInfo stepMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1056131a8

// -[SCMediaOrchestrationSessionInfo appSource]
// Type encoding: q16@0:8
// Implementation: 0x1056131b0

// -[SCMediaOrchestrationSessionInfo isMediaZipped]
// Type encoding: B16@0:8
// Implementation: 0x1056131b8

// -[SCMediaOrchestrationSessionInfo latestUpdateOnSession]
// Type encoding: @16@0:8
// Implementation: 0x1056131c0

// -[SCMediaOrchestrationSessionInfo mediaType]
// Type encoding: q16@0:8
// Implementation: 0x1056131c8

// -[SCMediaOrchestrationSessionInfo mediaOrchestrationAttemptId]
// Type encoding: @16@0:8
// Implementation: 0x1056131d0

// -[SCMediaOrchestrationSessionInfo captureSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1056131d8

// -[SCMediaOrchestrationSessionInfo appSourceIsAuthoritative]
// Type encoding: B16@0:8
// Implementation: 0x1056131e0

// -[SCMediaOrchestrationSessionInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056131e8

@end
