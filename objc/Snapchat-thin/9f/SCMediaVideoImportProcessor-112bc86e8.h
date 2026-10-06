// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaVideoImportProcessor
// Superclass: NSObject
// Address: 0x112bc86e8

@interface SCMediaVideoImportProcessor


// -[SCMediaVideoImportProcessor initWithPerformer:userBlizzardLogger:cofEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108eaf68c

// -[SCMediaVideoImportProcessor AVAssetForImportedCameraRollVideo:strategy:logger:context:importedContentId:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x108eaf798

// -[SCMediaVideoImportProcessor _retrieveAVAssetPromise:response:canceler:importedCameraRollVideo:strategy:retryCount:logger:context:importedContentId:startTime:]
// Type encoding: v92@0:8@16@24@32@40@48i56@60@68@76d84
// Implementation: 0x108eaf904

// -[SCMediaVideoImportProcessor exportedUrlForImportedCameraRollAVAsset:timeRange:strategy:logger:importedContentId:context:progressHandler:]
// Type encoding: @112@0:8@16{?={?=qiIq}{?=qiIq}}24@72@80@88@96@?104
// Implementation: 0x108eb020c

// -[SCMediaVideoImportProcessor _shouldEnabledCameraRollNoAudioFixWithInputAsset:outputURL:currentPreset:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x108eb2380

// -[SCMediaVideoImportProcessor basicLoggerWithImportLoggingBlock:exportLoggingBlock:logEventsToNetwork:]
// Type encoding: @36@0:8@?16@?24B32
// Implementation: 0x108eb2438

// -[SCMediaVideoImportProcessor exportedURLForPHAsset:strategy:logger:context:timeRange:progressHandler:]
// Type encoding: @104@0:8@16@24@32@40{?={?=qiIq}{?=qiIq}}48@?96
// Implementation: 0x108eb24ac

// -[SCMediaVideoImportProcessor optionalExportedURLForPHAsset:strategy:logger:context:timeRange:progressHandler:]
// Type encoding: @104@0:8@16@24@32@40{?={?=qiIq}{?=qiIq}}48@?96
// Implementation: 0x108eb2a44

// -[SCMediaVideoImportProcessor updateResponse:forAVMetadataItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108eb3088

// -[SCMediaVideoImportProcessor externalMediaSourceFromMetadata:]
// Type encoding: i24@0:8@16
// Implementation: 0x108eb318c

// -[SCMediaVideoImportProcessor snapEmbeddedMetadataForAVMetadataItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x108eb34cc

// -[SCMediaVideoImportProcessor _importStrategyForExportVideoUrlFromAVAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x108eb378c

// -[SCMediaVideoImportProcessor isCameraRollMediaImportMetricOptimizationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108eb37e0

// -[SCMediaVideoImportProcessor videoImportBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x108eb37e8

// -[SCMediaVideoImportProcessor _exportPresetForVideoProperties:]
// Type encoding: {SCVideoImportExportPresetResult=@q}32@0:8{SCVideoImportVideoProperties=BBBBBBB@}16
// Implementation: 0x108eb3850

// -[SCMediaVideoImportProcessor _skipTranscodingWithAVAsset:strategy:timeRange:urlPromise:logger:importedContentId:externalMediaSource:startTime:context:]
// Type encoding: v124@0:8@16@24{?={?=qiIq}{?=qiIq}}32@80@88@96i104d108@116
// Implementation: 0x108eb3904

// -[SCMediaVideoImportProcessor _timeRangeOKToSkipTranscode:videoDuration:]
// Type encoding: B88@0:8{?={?=qiIq}{?=qiIq}}16{?=qiIq}64
// Implementation: 0x108eb3c14

// -[SCMediaVideoImportProcessor _assetWithFullyEnabledTracksVideo:audio:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108eb3ccc

// -[SCMediaVideoImportProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108eb3e20

@end
