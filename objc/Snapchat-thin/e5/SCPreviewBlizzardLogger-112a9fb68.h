// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewBlizzardLogger
// Superclass: NSObject
// Address: 0x112a9fb68

@interface SCPreviewBlizzardLogger

// Property: previewActionObservable; attributes: T@"SCObservable",R,N,V_previewActionObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewBlizzardLogger initWithBlizzardUserServices:grapheneServices:userLocationServices:audioSessionServices:lensPlusTierService:lensPlusCofService:imagineLensService:editContentDivergenceServices:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105de3740

// -[SCPreviewBlizzardLogger logPreviewActionWithActionIntent:interactionType:commonLoggingParams:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x105de391c

// -[SCPreviewBlizzardLogger logDirectSnapEditWithCaptureSessionId:source:snapSource:snapSessionID:withDirectorModeDraft:]
// Type encoding: v52@0:8@16q24q32@40B48
// Implementation: 0x105de3ae0

// -[SCPreviewBlizzardLogger logPreviewPerformanceMetricEndWithSessionId:snapSource:performanceLogging:captionSessions:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x105de3bd4

// -[SCPreviewBlizzardLogger _logGraphenePreviewPerformanceMetricWithLayoutFinishedMillis:playerReadyMillis:snapSource:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x105de3edc

// -[SCPreviewBlizzardLogger logSnapPreviewAction:geofilterLogger:destinationInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105de407c

// -[SCPreviewBlizzardLogger logSnapPreviewActionForBatchCapture:geofilterLogger:uniqueSnapCreationCount:deletedSegmentCaptureSessionIDs:destinationInfo:]
// Type encoding: v56@0:8@16@24Q32@40@48
// Implementation: 0x105de4e30

// -[SCPreviewBlizzardLogger logPreviewPageViewFromPreviousPage:commonLoggingParams:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105de4ecc

// -[SCPreviewBlizzardLogger logDirectSegmentReorderWithCaptureSessionId:snapSessionId:snapSource:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105de4f8c

// -[SCPreviewBlizzardLogger logSnapPreviewActionForTimelineOrDM:geofilterLogger:uniqueSnapCreationCount:deletedSegmentCaptureSessionIDs:destinationInfo:]
// Type encoding: v56@0:8@16@24Q32@40@48
// Implementation: 0x105de5068

// -[SCPreviewBlizzardLogger logPreviewEditExport:errorString:success:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105de5104

// -[SCPreviewBlizzardLogger _logGraphenePreviewEditExportWithSnapCommonLoggingParameters:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105de5330

// -[SCPreviewBlizzardLogger logDirectSnapShareWithActivityType:isSnapWithLens:commonLoggingParams:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105de54fc

// -[SCPreviewBlizzardLogger _constructGeoEventWithCommonLoggingParameters:geofilterLogger:destinationInfo:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105de56f0

// -[SCPreviewBlizzardLogger _fillLensPlusParametersForEvent:withCommonParams:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105de5c94

// -[SCPreviewBlizzardLogger _constructNonGeoEventWithCommonLoggingParameters:geofilterLogger:destinationInfo:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105de6004

// -[SCPreviewBlizzardLogger _logSnapPreviewActionForMultiCapture:geofilterLogger:uniqueSnapCreationCount:deletedSegmentCaptureSessionIDs:destinationInfo:]
// Type encoding: v56@0:8@16@24Q32@40@48
// Implementation: 0x105de72bc

// -[SCPreviewBlizzardLogger _setupDirectSnapPreviewBaseEventEvent:loggingParameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105de7598

// -[SCPreviewBlizzardLogger _setSpotlightParamatersWithDirectSnapPreviewEvent:loggingParameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105de8b08

// -[SCPreviewBlizzardLogger snapSourceStringForPerformanceSummaryWithSnapSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x105de8c04

// -[SCPreviewBlizzardLogger _shouldSkipGeoDirectSnapPreviewForParams:]
// Type encoding: B24@0:8@16
// Implementation: 0x105de8c68

// -[SCPreviewBlizzardLogger previewActionObservable]
// Type encoding: @16@0:8
// Implementation: 0x105de8d48

// -[SCPreviewBlizzardLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105de8d50

@end
