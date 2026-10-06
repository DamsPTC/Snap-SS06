// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesBackupVideoProcessor
// Superclass: NSObject
// Address: 0x112a74698

@interface SCMemoriesBackupVideoProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesBackupVideoProcessor initWithTranscodeScheduler:encryptedContentManager:cloudFS:temporaryFileWriter:bitrateCalculator:grapheneRegistry:transcodingLogger:keyFrameInterval:skipTranscodingIfPossible:qualityLevel:circumstanceEngine:]
// Type encoding: @100@0:8@16@24@32@40@48@56@64Q72B80q84@92
// Implementation: 0x10587884c

// -[SCMemoriesBackupVideoProcessor lowerBitrateForVideoSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x105878a1c

// -[SCMemoriesBackupVideoProcessor lowerBitrateFutureForVideoData:timeRange:identifier:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105878ab8

// -[SCMemoriesBackupVideoProcessor lowerBitrateFutureForVideoAsset:timeRange:identifier:isORT:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x105878ba4

// -[SCMemoriesBackupVideoProcessor lowerBitrateForVideoAsset:identifier:isORT:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105878bf8

// -[SCMemoriesBackupVideoProcessor _lowerBitrateWithOriginalAssetResultObservable:timeRange:snapId:isORT:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x105878d60

// -[SCMemoriesBackupVideoProcessor _lowerBitrateFor720pVideosWithoutQualityLevel:timeRange:snapId:isORT:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x105879190

// -[SCMemoriesBackupVideoProcessor _lowerBitrateFutureFor720pVideosWithoutQualityLevel:timeRange:snapId:isORT:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x105879668

// -[SCMemoriesBackupVideoProcessor _lowerBitrateFutureToQualityLevel:originalAsset:timeRange:snapId:isORT:]
// Type encoding: @52@0:8q16@24@32@40B48
// Implementation: 0x1058799ec

// -[SCMemoriesBackupVideoProcessor _lowerBitrateToQualityLevel:originalAsset:timeRange:snapId:isORT:]
// Type encoding: @52@0:8q16@24@32@40B48
// Implementation: 0x105879cb8

// -[SCMemoriesBackupVideoProcessor _shouldSkipTranscodingWithQualityLevel:originalAsset:timeRange:snapId:]
// Type encoding: B48@0:8q16@24@32@40
// Implementation: 0x10587a0b0

// -[SCMemoriesBackupVideoProcessor _logSkippedTranscodingWithQualityLevel:originalAsset:timeRange:snapId:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x10587a258

// -[SCMemoriesBackupVideoProcessor _transcodingSchedulerDidCompleteWithSnapId:status:outputData:promise:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x10587a454

// -[SCMemoriesBackupVideoProcessor _transcodingSchedulerDidCompleteWithSnapId:status:outputData:observer:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x10587a614

// -[SCMemoriesBackupVideoProcessor cancelOngoingTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x10587a808

// -[SCMemoriesBackupVideoProcessor _getAVAssetForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x10587a868

// -[SCMemoriesBackupVideoProcessor _transcodeInputKeepSameResolutionWithOriginalAsset:targetBitrate:keyFrameInterval:timeRange:snapId:isORT:]
// Type encoding: @60@0:8@16Q24Q32@40@48B56
// Implementation: 0x10587ab28

// -[SCMemoriesBackupVideoProcessor _transcodeInputWithOutputQualityLevel:originalAsset:keyFrameInterval:timeRange:snapId:isORT:]
// Type encoding: @60@0:8q16@24Q32@40@48B56
// Implementation: 0x10587af1c

// -[SCMemoriesBackupVideoProcessor _trackSegmentWithOriginalAsset:timeRange:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10587b294

// -[SCMemoriesBackupVideoProcessor _transcodeOutput]
// Type encoding: @16@0:8
// Implementation: 0x10587b470

// -[SCMemoriesBackupVideoProcessor _bitrateResultForVideoAsset:originalBitrate:]
// Type encoding: @28@0:8@16f24
// Implementation: 0x10587b570

// -[SCMemoriesBackupVideoProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10587b62c

@end
