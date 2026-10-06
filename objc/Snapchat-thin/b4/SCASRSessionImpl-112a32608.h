// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCASRSessionImpl
// Superclass: NSObject
// Address: 0x112a32608

@interface SCASRSessionImpl

// Property: sessionId; attributes: T@"NSString",R,N,V_sessionId
// Property: outputObservable; attributes: T@"SCObservable",R,N

// -[SCASRSessionImpl initWithASRGRPCService:configuration:inputObservable:performerProvider:delegate:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1053d6f98

// -[SCASRSessionImpl outputObservable]
// Type encoding: @16@0:8
// Implementation: 0x1053d71f4

// -[SCASRSessionImpl _beginSession]
// Type encoding: v16@0:8
// Implementation: 0x1053d721c

// -[SCASRSessionImpl _sendConfigStreamMessage]
// Type encoding: v16@0:8
// Implementation: 0x1053d74c8

// -[SCASRSessionImpl _sendStreamMessageWithInput:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053d7600

// -[SCASRSessionImpl _beginEndingStream]
// Type encoding: v16@0:8
// Implementation: 0x1053d76a4

// -[SCASRSessionImpl _endStream]
// Type encoding: v16@0:8
// Implementation: 0x1053d7798

// -[SCASRSessionImpl _handleObserverInput:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053d77a0

// -[SCASRSessionImpl _handleObserverComplete]
// Type encoding: v16@0:8
// Implementation: 0x1053d78ac

// -[SCASRSessionImpl _handleStreamEventWithIsDone:response:error:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x1053d7980

// -[SCASRSessionImpl _sessionDidEndWithFinalOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053d7d64

// -[SCASRSessionImpl _createCallbackHandler]
// Type encoding: @16@0:8
// Implementation: 0x1053d7dd8

// -[SCASRSessionImpl _leaveSendCallbackGroup]
// Type encoding: v16@0:8
// Implementation: 0x1053d7ed0

// -[SCASRSessionImpl sessionId]
// Type encoding: @16@0:8
// Implementation: 0x1053d7ed8

// -[SCASRSessionImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053d7ee0

@end
