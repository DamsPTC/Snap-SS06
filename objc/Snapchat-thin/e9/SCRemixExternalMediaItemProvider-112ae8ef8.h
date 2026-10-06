// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRemixExternalMediaItemProvider
// Superclass: NSObject
// Address: 0x112ae8ef8

@interface SCRemixExternalMediaItemProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRemixExternalMediaItemProvider initWithIsVideo:shouldMuteVideo:contentModel:performer:contentDelivery:bufferedContentFetcher:snapVideoFilterFactory:previewURLVideoProvider:shareableMediaItemsProviding:]
// Type encoding: @80@0:8B16B20@24@32@40@48@56@64@72
// Implementation: 0x1065e6afc

// -[SCRemixExternalMediaItemProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1065e6c84

// -[SCRemixExternalMediaItemProvider getExternalMediaItem]
// Type encoding: @16@0:8
// Implementation: 0x1065e6cc8

// -[SCRemixExternalMediaItemProvider _downloadStreamingVideoWithContentResult:fallbackVideoURL:fileURLPromise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065e7c30

// -[SCRemixExternalMediaItemProvider _cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x1065e7de4

// -[SCRemixExternalMediaItemProvider _removeFileAtTempFileURL]
// Type encoding: v16@0:8
// Implementation: 0x1065e7de8

// -[SCRemixExternalMediaItemProvider _mirrorLocalVideoURL:fileURLPromise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065e7ec4

// -[SCRemixExternalMediaItemProvider _saveVideoData:fallbackVideoURL:fileURLPromise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065e8054

// -[SCRemixExternalMediaItemProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065e81d8

@end
