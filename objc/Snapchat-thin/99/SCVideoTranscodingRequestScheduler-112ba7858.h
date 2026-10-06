// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingRequestScheduler
// Superclass: NSObject
// Address: 0x112ba7858

@interface SCVideoTranscodingRequestScheduler

// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: videoTranscodingProcessors; attributes: T@"NSMutableDictionary",&,N,V_videoTranscodingProcessors
// Property: pendingTranscodingRequests; attributes: T@"NSMutableDictionary",&,N,V_pendingTranscodingRequests
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoTranscodingRequestScheduler initWithPerformer:lensProcessingTranscodingProvider:transcodingProcessorFactory:inProgressTracker:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1085770ec

// -[SCVideoTranscodingRequestScheduler submitVideoTranscodingRequestWithInput:output:outputHandler:progressHandler:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x108577224

// -[SCVideoTranscodingRequestScheduler submitVideoTranscodingRequestWithInput:output:outputHandler:progressHandler:statusHandler:]
// Type encoding: v56@0:8@16@24@?32@?40@?48
// Implementation: 0x10857722c

// -[SCVideoTranscodingRequestScheduler cancelRequestWithInput:]
// Type encoding: v24@0:8@16
// Implementation: 0x108577aa8

// -[SCVideoTranscodingRequestScheduler _executeWithInput:processor:outputHandler:progressHandler:statusHandler:]
// Type encoding: v56@0:8@16@24@?32@?40@?48
// Implementation: 0x108577c8c

// -[SCVideoTranscodingRequestScheduler _lensIdsFromInput:]
// Type encoding: @24@0:8@16
// Implementation: 0x108578274

// -[SCVideoTranscodingRequestScheduler performer]
// Type encoding: @16@0:8
// Implementation: 0x1085784e0

// -[SCVideoTranscodingRequestScheduler setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085784e8

// -[SCVideoTranscodingRequestScheduler videoTranscodingProcessors]
// Type encoding: @16@0:8
// Implementation: 0x108578518

// -[SCVideoTranscodingRequestScheduler setVideoTranscodingProcessors:]
// Type encoding: v24@0:8@16
// Implementation: 0x108578520

// -[SCVideoTranscodingRequestScheduler pendingTranscodingRequests]
// Type encoding: @16@0:8
// Implementation: 0x108578550

// -[SCVideoTranscodingRequestScheduler setPendingTranscodingRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x108578558

// -[SCVideoTranscodingRequestScheduler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108578588

@end
