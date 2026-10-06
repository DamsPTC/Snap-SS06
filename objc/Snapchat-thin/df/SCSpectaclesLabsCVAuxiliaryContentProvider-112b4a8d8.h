// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesLabsCVAuxiliaryContentProvider
// Superclass: NSObject
// Address: 0x112b4a8d8

@interface SCSpectaclesLabsCVAuxiliaryContentProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesLabsCVAuxiliaryContentProvider initWithSimpleContentFetcher:temporaryFileWriter:dataObjectContext:encryptedContentManager:networker:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106f56a88

// -[SCSpectaclesLabsCVAuxiliaryContentProvider invalidate]
// Type encoding: v16@0:8
// Implementation: 0x106f56bd0

// -[SCSpectaclesLabsCVAuxiliaryContentProvider requestSkyClassifierWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106f56bd8

// -[SCSpectaclesLabsCVAuxiliaryContentProvider _handleSkyClassifierWithResult:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f56e74

// -[SCSpectaclesLabsCVAuxiliaryContentProvider _handleSkyClassifierErrorWithResult:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f5716c

// -[SCSpectaclesLabsCVAuxiliaryContentProvider skyClassifierPath]
// Type encoding: @16@0:8
// Implementation: 0x106f572d8

// -[SCSpectaclesLabsCVAuxiliaryContentProvider extractLookupTableFromCalibrationFile:forContentOfType:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x106f57300

// -[SCSpectaclesLabsCVAuxiliaryContentProvider loadPrimaryDepthAvailabilityForSnapId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106f576b0

// -[SCSpectaclesLabsCVAuxiliaryContentProvider downloadDepthForSnapId:depthFileHandler:depthPart:progress:completion:]
// Type encoding: v56@0:8@16@24Q32@?40@?48
// Implementation: 0x106f576b8

// -[SCSpectaclesLabsCVAuxiliaryContentProvider cancelDepthDownloadForSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f576c0

// -[SCSpectaclesLabsCVAuxiliaryContentProvider _showMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106f576c8

// -[SCSpectaclesLabsCVAuxiliaryContentProvider extractDepthFromContentFile:primaryCamera:calibrationFile:imuFile:extractBothSides:depthFileHandler:completion:]
// Type encoding: v68@0:8@16Q24@32@40B48@52@?60
// Implementation: 0x106f576e4

// -[SCSpectaclesLabsCVAuxiliaryContentProvider _writePictureFrameData:primaryCamera:depthFileHandler:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x106f57edc

// -[SCSpectaclesLabsCVAuxiliaryContentProvider stabilizationFramesFromIMUFile:contentSize:focalLength:]
// Type encoding: @48@0:8@16{CGSize=dd}24d40
// Implementation: 0x106f58468

// -[SCSpectaclesLabsCVAuxiliaryContentProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f58730

// +[SCSpectaclesLabsCVAuxiliaryContentProvider _lcvCameraFromStereoCamera:]
// Type encoding: q24@0:8Q16
// Implementation: 0x106f576cc

// +[SCSpectaclesLabsCVAuxiliaryContentProvider _imuDataRawWithContentsOfFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f58040

@end
