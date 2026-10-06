// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapVideoFilterScope
// Superclass: NSObject
// Address: 0x112b84ad8

@interface SCMemoriesSnapVideoFilterScope

// Property: mediaSource; attributes: TQ,R,N,V_mediaSource
// Property: destinationInfo; attributes: T@"SCMediaTranscodingDestinationInfo",R,N,V_destinationInfo
// Property: captureSessionId; attributes: T@"NSString",R,N,V_captureSessionId
// Property: snapVideoFilter; attributes: T@"SnapVideoFilter",R,N,V_snapVideoFilter
// Property: respectSnapOrientation; attributes: TB,R,N,V_respectSnapOrientation
// Property: isExporting; attributes: TB,R,N,V_isExporting
// Property: videoTargetSize; attributes: T{CGSize=dd},R,N,V_videoTargetSize
// Property: spectaclesExportFormat; attributes: Tq,R,N,V_spectaclesExportFormat
// Property: primaryCamera; attributes: TQ,R,N,V_primaryCamera
// Property: snap; attributes: T@"<SCGallerySnap>",R,N,V_snap
// Property: cloudFile; attributes: T@"<SCMemoriesCloudFSFile>",R,N,V_cloudFile
// Property: snapDoc; attributes: T@"SDMSnapDoc",R,N,V_snapDoc
// Property: transcodeSnapInfo; attributes: T@"SCMemoriesTranscodeSnapInfo",R,N,V_transcodeSnapInfo
// Property: completionQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_completionQueue
// Property: completion; attributes: T@?,C,N,V_completion
// Property: watermarkProfile; attributes: T@"SCLensWatermarkProfile",&,N,V_watermarkProfile

// -[SCMemoriesSnapVideoFilterScope initWithMediaSource:destinationInfo:snapDoc:transcodeSnapInfo:respectSnapOrientation:isExporting:completionQueue:completion:]
// Type encoding: @72@0:8Q16@24@32@40B48B52@56@?64
// Implementation: 0x107e31ccc

// -[SCMemoriesSnapVideoFilterScope initWithSnapVideoFilter:snapDoc:transcodeSnapInfo:watermarkProfile:respectSnapOrientation:isExporting:completionQueue:completion:]
// Type encoding: @72@0:8@16@24@32@40B48B52@56@?64
// Implementation: 0x107e31e18

// -[SCMemoriesSnapVideoFilterScope initWithMediaSource:destinationInfo:snap:cloudFile:respectSnapOrientation:isExporting:captureSessionId:completionQueue:completion:]
// Type encoding: @80@0:8Q16@24@32@40B48B52@56@64@?72
// Implementation: 0x107e31f84

// -[SCMemoriesSnapVideoFilterScope initWithSnapVideoFilter:snap:cloudFile:respectSnapOrientation:isExporting:completionQueue:completion:]
// Type encoding: @64@0:8@16@24@32B40B44@48@?56
// Implementation: 0x107e3211c

// -[SCMemoriesSnapVideoFilterScope initWithMediaSource:destinationInfo:snap:cloudFile:respectSnapOrientation:isExporting:videoTargetSize:spectaclesExportFormat:primaryCamera:completionQueue:completion:]
// Type encoding: @104@0:8Q16@24@32@40B48B52{CGSize=dd}56q72Q80@88@?96
// Implementation: 0x107e32280

// -[SCMemoriesSnapVideoFilterScope initWithSnapVideoFilter:snap:cloudFile:respectSnapOrientation:isExporting:videoTargetSize:spectaclesExportFormat:primaryCamera:completionQueue:completion:]
// Type encoding: @96@0:8@16@24@32B40B44{CGSize=dd}48q64Q72@80@?88
// Implementation: 0x107e323f4

// -[SCMemoriesSnapVideoFilterScope setCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107e32558

// -[SCMemoriesSnapVideoFilterScope getType]
// Type encoding: Q16@0:8
// Implementation: 0x107e32588

// -[SCMemoriesSnapVideoFilterScope mediaSource]
// Type encoding: Q16@0:8
// Implementation: 0x107e325ac

// -[SCMemoriesSnapVideoFilterScope destinationInfo]
// Type encoding: @16@0:8
// Implementation: 0x107e325b4

// -[SCMemoriesSnapVideoFilterScope captureSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107e325bc

// -[SCMemoriesSnapVideoFilterScope snapVideoFilter]
// Type encoding: @16@0:8
// Implementation: 0x107e325c4

// -[SCMemoriesSnapVideoFilterScope respectSnapOrientation]
// Type encoding: B16@0:8
// Implementation: 0x107e325cc

// -[SCMemoriesSnapVideoFilterScope isExporting]
// Type encoding: B16@0:8
// Implementation: 0x107e325d4

// -[SCMemoriesSnapVideoFilterScope videoTargetSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x107e325dc

// -[SCMemoriesSnapVideoFilterScope spectaclesExportFormat]
// Type encoding: q16@0:8
// Implementation: 0x107e325e4

// -[SCMemoriesSnapVideoFilterScope primaryCamera]
// Type encoding: Q16@0:8
// Implementation: 0x107e325ec

// -[SCMemoriesSnapVideoFilterScope snap]
// Type encoding: @16@0:8
// Implementation: 0x107e325f4

// -[SCMemoriesSnapVideoFilterScope cloudFile]
// Type encoding: @16@0:8
// Implementation: 0x107e325fc

// -[SCMemoriesSnapVideoFilterScope snapDoc]
// Type encoding: @16@0:8
// Implementation: 0x107e32604

// -[SCMemoriesSnapVideoFilterScope transcodeSnapInfo]
// Type encoding: @16@0:8
// Implementation: 0x107e3260c

// -[SCMemoriesSnapVideoFilterScope completionQueue]
// Type encoding: @16@0:8
// Implementation: 0x107e32614

// -[SCMemoriesSnapVideoFilterScope setCompletionQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3261c

// -[SCMemoriesSnapVideoFilterScope completion]
// Type encoding: @?16@0:8
// Implementation: 0x107e3264c

// -[SCMemoriesSnapVideoFilterScope watermarkProfile]
// Type encoding: @16@0:8
// Implementation: 0x107e32654

// -[SCMemoriesSnapVideoFilterScope setWatermarkProfile:]
// Type encoding: v24@0:8@16
// Implementation: 0x107e3265c

// -[SCMemoriesSnapVideoFilterScope .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107e3268c

@end
