// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryExporter
// Superclass: NSObject
// Address: 0x112b80118

@interface SCStoryExporter

// Property: backgroundTaskId; attributes: TQ,N,V_backgroundTaskId
// Property: stories; attributes: T@"NSArray",C,N,V_stories
// Property: urls; attributes: T@"NSMutableDictionary",&,N,V_urls
// Property: exportProgressTimer; attributes: T@"NSTimer",&,N,V_exportProgressTimer
// Property: exportSession; attributes: T@"AVAssetExportSession",&,N,V_exportSession
// Property: processingStarted; attributes: TB,N,V_processingStarted
// Property: delegate; attributes: T@"<SCStoryExporterDelegate>",W,N,V_delegate
// Property: exporterTag; attributes: T@"NSString",C,N,V_exporterTag

// -[SCStoryExporter initWithStories:snapVideoFilterAdaptor:lazyBackgroundTaskWrapper:lazyActiveVideoPaths:genAIDreamsService:]
// Type encoding: @56@0:8@16@?24@32@40@48
// Implementation: 0x107d9cb20

// -[SCStoryExporter initWithStories:aspectRatio:aspectFill:addVR180Metadata:snapVideoFilterAdaptor:lazyBackgroundTaskWrapper:lazyActiveVideoPaths:genAIDreamsService:]
// Type encoding: @72@0:8@16@24B32B36@?40@48@56@64
// Implementation: 0x107d9cb58

// -[SCStoryExporter init]
// Type encoding: @16@0:8
// Implementation: 0x107d9d328

// -[SCStoryExporter startExporting]
// Type encoding: v16@0:8
// Implementation: 0x107d9d37c

// -[SCStoryExporter generateOutputMovieURL]
// Type encoding: @16@0:8
// Implementation: 0x107d9d4d0

// -[SCStoryExporter exportStoryAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107d9d4e4

// -[SCStoryExporter _shouldAttachGenAIWatermark:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d9ddfc

// -[SCStoryExporter _hasGenAIWatermark]
// Type encoding: B16@0:8
// Implementation: 0x107d9de04

// -[SCStoryExporter compositeVideos]
// Type encoding: v16@0:8
// Implementation: 0x107d9df10

// -[SCStoryExporter didProceedToProgress:]
// Type encoding: v24@0:8d16
// Implementation: 0x107d9f128

// -[SCStoryExporter didFinishExportingToURL:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107d9f1e4

// -[SCStoryExporter pollExporterProgress:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d9f55c

// -[SCStoryExporter storyCount]
// Type encoding: q16@0:8
// Implementation: 0x107d9f5c4

// -[SCStoryExporter delegate]
// Type encoding: @16@0:8
// Implementation: 0x107d9f600

// -[SCStoryExporter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d9f618

// -[SCStoryExporter exporterTag]
// Type encoding: @16@0:8
// Implementation: 0x107d9f624

// -[SCStoryExporter setExporterTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d9f62c

// -[SCStoryExporter backgroundTaskId]
// Type encoding: Q16@0:8
// Implementation: 0x107d9f634

// -[SCStoryExporter setBackgroundTaskId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107d9f63c

// -[SCStoryExporter stories]
// Type encoding: @16@0:8
// Implementation: 0x107d9f644

// -[SCStoryExporter setStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d9f64c

// -[SCStoryExporter urls]
// Type encoding: @16@0:8
// Implementation: 0x107d9f654

// -[SCStoryExporter setUrls:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d9f65c

// -[SCStoryExporter exportProgressTimer]
// Type encoding: @16@0:8
// Implementation: 0x107d9f68c

// -[SCStoryExporter setExportProgressTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d9f694

// -[SCStoryExporter exportSession]
// Type encoding: @16@0:8
// Implementation: 0x107d9f6c4

// -[SCStoryExporter setExportSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d9f6cc

// -[SCStoryExporter processingStarted]
// Type encoding: B16@0:8
// Implementation: 0x107d9f6fc

// -[SCStoryExporter setProcessingStarted:]
// Type encoding: v20@0:8B16
// Implementation: 0x107d9f704

// -[SCStoryExporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d9f70c

@end
