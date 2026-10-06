// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryVisualSearchIndexer
// Superclass: NSObject
// Address: 0x112b8b6a8

@interface SCGalleryVisualSearchIndexer

// Property: visualTagModelVersion; attributes: Ti,R,N
// Property: tinyClipModelVersion; attributes: Ti,R,N
// Property: ready; attributes: TB,R,N,GisReady
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryVisualSearchIndexer initWithEncryptedContentManager:percMLModelProvider:applicationLifecycleEvents:coreConfigProvider:cachingMediaManager:memoriesVisualTagAnalyzer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107f2c544

// -[SCGalleryVisualSearchIndexer isReady]
// Type encoding: B16@0:8
// Implementation: 0x107f2c684

// -[SCGalleryVisualSearchIndexer visualTagModelVersion]
// Type encoding: i16@0:8
// Implementation: 0x107f2c68c

// -[SCGalleryVisualSearchIndexer tinyClipModelVersion]
// Type encoding: i16@0:8
// Implementation: 0x107f2c69c

// -[SCGalleryVisualSearchIndexer resultsForSnap:cloudFile:analyzeType:queue:resultHandler:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x107f2c6ac

// -[SCGalleryVisualSearchIndexer _analyzeSnap:cloudFile:analyzerType:queue:resultHandler:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x107f2c76c

// -[SCGalleryVisualSearchIndexer _getVisualIndexingResultFromImage:snap:analyzerType:resultHandler:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x107f2d02c

// -[SCGalleryVisualSearchIndexer _setupTinyClipAnalyzerWithModelProvider:applicationLifecycleEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f2d224

// -[SCGalleryVisualSearchIndexer shouldBlockUpload]
// Type encoding: B16@0:8
// Implementation: 0x107f2d2a4

// -[SCGalleryVisualSearchIndexer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f2d2ac

@end
