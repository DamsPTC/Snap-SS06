// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMetadataRetrievalLogger
// Superclass: NSObject
// Address: 0x112bfa7d8

@interface SCLensMetadataRetrievalLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensMetadataRetrievalLogger initWithGraphene:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae95364

// -[SCLensMetadataRetrievalLogger logLensMetadataRetrievedFromAllSourcesWithMethod:fromCache:retrievedCount:missedCount:]
// Type encoding: v44@0:8Q16B24Q28Q36
// Implementation: 0x10ae953d8

// -[SCLensMetadataRetrievalLogger logLensMetadataRetrievedFromAllSourcesLatency:method:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x10ae95454

// -[SCLensMetadataRetrievalLogger logLensMetadataRetrievedFromSource:namespaceName:retrievedCount:missedCount:]
// Type encoding: v48@0:8Q16@24Q32Q40
// Implementation: 0x10ae95500

// -[SCLensMetadataRetrievalLogger logLensMetadataRetrievalLatency:source:namespaceName:]
// Type encoding: v40@0:8d16Q24@32
// Implementation: 0x10ae95588

// -[SCLensMetadataRetrievalLogger logLensMetadataCacheCount:namespaceName:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10ae9562c

// -[SCLensMetadataRetrievalLogger logLensMetadataExpiredCount:namespaceName:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10ae956c4

// -[SCLensMetadataRetrievalLogger _logLensMetadataRetrievedAllWithMethod:isFromCache:event:count:]
// Type encoding: v44@0:8Q16B24@28Q36
// Implementation: 0x10ae9575c

// -[SCLensMetadataRetrievalLogger _logLensMetadataRetrievedFromSource:namespaceName:count:event:]
// Type encoding: v48@0:8Q16@24Q32@40
// Implementation: 0x10ae958a0

// -[SCLensMetadataRetrievalLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ae95aa0

// +[SCLensMetadataRetrievalLogger _metric:source:namespaceName:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x10ae95994

// +[SCLensMetadataRetrievalLogger _sourceStringFromSource:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10ae95a54

// +[SCLensMetadataRetrievalLogger _methodStringFromMethod:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10ae95a74

@end
