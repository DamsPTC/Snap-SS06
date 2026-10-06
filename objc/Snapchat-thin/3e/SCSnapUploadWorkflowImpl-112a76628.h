// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapUploadWorkflowImpl
// Superclass: NSObject
// Address: 0x112a76628

@interface SCSnapUploadWorkflowImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapUploadWorkflowImpl initSnapDocManager:boltDataUploader:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1058dd674

// -[SCSnapUploadWorkflowImpl uploadForKey:snapDoc:config:encryptionInfo:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1058dd7c0

// -[SCSnapUploadWorkflowImpl uploadForKey:snapDoc:config:encryptionInfo:mediaValidator:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1058dd7c8

// -[SCSnapUploadWorkflowImpl _uploadMediaResult:snapDoc:snapDocKey:config:encryptionInfo:mediaValidator:promise:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1058ddaac

// -[SCSnapUploadWorkflowImpl _onUploadCompletionWithError:snapDoc:encryptionInfo:snapDocKey:updatedContentRefs:uploadedByteCount:baseMediaByteCount:overlayByteCount:promise:contentResultsToCleanup:]
// Type encoding: v96@0:8@16@24@32@40@48Q56Q64Q72@80@88
// Implementation: 0x1058deb6c

// -[SCSnapUploadWorkflowImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058df4d0

// +[SCSnapUploadWorkflowImpl _findMediaReferenceForMediaId:snapDoc:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058def48

// +[SCSnapUploadWorkflowImpl _videoDurationMsForMediaId:snapDoc:]
// Type encoding: I32@0:8@16@24
// Implementation: 0x1058df088

// +[SCSnapUploadWorkflowImpl _snapDocHasUnresolvedLocalMediaReferences:mediaIds:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1058df248

// +[SCSnapUploadWorkflowImpl _errorWithCode:description:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x1058df448

@end
