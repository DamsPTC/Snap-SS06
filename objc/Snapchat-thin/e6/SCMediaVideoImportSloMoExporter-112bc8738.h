// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaVideoImportSloMoExporter
// Superclass: NSObject
// Address: 0x112bc8738

@interface SCMediaVideoImportSloMoExporter

// Property: rotateToPortraitOrientation; attributes: TB,N,V_rotateToPortraitOrientation
// Property: presetName; attributes: T@"NSString",R,N,V_presetName
// Property: state; attributes: Tq,R,N,V_state
// Property: progressRatio; attributes: Tf,R,N

// -[SCMediaVideoImportSloMoExporter initWithVideoAVComposition:avAssetRequestInfo:presetName:timeRange:outputURL:circumstanceEngine:]
// Type encoding: @104@0:8@16@24@32{?={?=qiIq}{?=qiIq}}40@88@96
// Implementation: 0x108eb3f7c

// -[SCMediaVideoImportSloMoExporter cancelExport]
// Type encoding: v16@0:8
// Implementation: 0x108eb4118

// -[SCMediaVideoImportSloMoExporter exportWithRotateLandscapeVideoToPortraitOrientationRight:completionQueue:completionHandler:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x108eb4120

// -[SCMediaVideoImportSloMoExporter progressRatio]
// Type encoding: f16@0:8
// Implementation: 0x108eb435c

// -[SCMediaVideoImportSloMoExporter _copyBuffersForMediaIndex:mediaReaderOutput:mediaWriterInput:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x108eb43c4

// -[SCMediaVideoImportSloMoExporter _finishWithVideoURL:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108eb46ec

// -[SCMediaVideoImportSloMoExporter _handleCancellation]
// Type encoding: v16@0:8
// Implementation: 0x108eb4938

// -[SCMediaVideoImportSloMoExporter _handleImportedSloMoVideoWithRotateLandscapeVideoToPortraitOrientationRight:]
// Type encoding: v20@0:8B16
// Implementation: 0x108eb4990

// -[SCMediaVideoImportSloMoExporter _isCancelled]
// Type encoding: B16@0:8
// Implementation: 0x108eb5608

// -[SCMediaVideoImportSloMoExporter rotateToPortraitOrientation]
// Type encoding: B16@0:8
// Implementation: 0x108eb5628

// -[SCMediaVideoImportSloMoExporter setRotateToPortraitOrientation:]
// Type encoding: v20@0:8B16
// Implementation: 0x108eb5630

// -[SCMediaVideoImportSloMoExporter presetName]
// Type encoding: @16@0:8
// Implementation: 0x108eb5638

// -[SCMediaVideoImportSloMoExporter state]
// Type encoding: q16@0:8
// Implementation: 0x108eb5640

// -[SCMediaVideoImportSloMoExporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108eb5648

// +[SCMediaVideoImportSloMoExporter allExportPresets]
// Type encoding: @16@0:8
// Implementation: 0x108eb3e80

// +[SCMediaVideoImportSloMoExporter supportsPresetName:]
// Type encoding: B24@0:8@16
// Implementation: 0x108eb3f18

@end
