// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewContentRecognitionProviderImpl
// Superclass: NSObject
// Address: 0x112a9b888

@interface SCPreviewContentRecognitionProviderImpl

// Property: recognitionMediaSizeFuture; attributes: T@"SCFuture",R,N
// Property: foregroundInstancesFuture; attributes: T@"SCFuture",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewContentRecognitionProviderImpl initWithPreviewConfiguration:previewVideoProviderService:contentRecognitionProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105d16da8

// -[SCPreviewContentRecognitionProviderImpl snapEditor:didTriggerLifecycle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105d16e90

// -[SCPreviewContentRecognitionProviderImpl _setupMediaReadyListener]
// Type encoding: v16@0:8
// Implementation: 0x105d16eec

// -[SCPreviewContentRecognitionProviderImpl futureForFaceObjectFromPreviewInputMedia]
// Type encoding: @16@0:8
// Implementation: 0x105d17018

// -[SCPreviewContentRecognitionProviderImpl recognitionMediaSizeFuture]
// Type encoding: @16@0:8
// Implementation: 0x105d1708c

// -[SCPreviewContentRecognitionProviderImpl foregroundInstancesFuture]
// Type encoding: @16@0:8
// Implementation: 0x105d17094

// -[SCPreviewContentRecognitionProviderImpl _processingPreviewContent]
// Type encoding: v16@0:8
// Implementation: 0x105d17310

// -[SCPreviewContentRecognitionProviderImpl _processImageContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d17428

// -[SCPreviewContentRecognitionProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d177d8

// +[SCPreviewContentRecognitionProviderImpl sharedCIDetector]
// Type encoding: @16@0:8
// Implementation: 0x105d16c6c

@end
