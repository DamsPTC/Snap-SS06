// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteAssetLogger
// Superclass: NSObject
// Address: 0x112a90938

@interface SCLensRemoteAssetLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteAssetLogger initWithGraphene:blizzardLogger:lensUserProvider:grapheneLoggerV2:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100b7b1d8

// -[SCLensRemoteAssetLogger assetDownloadStartedWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105bee890

// -[SCLensRemoteAssetLogger assetDownloadFinishedWithDuration:assetSize:type:source:assetId:requestingLensId:mediaId:fetchType:statusCode:]
// Type encoding: v88@0:8d16Q24q32Q40@48@56@64q72q80
// Implementation: 0x105bee8d8

// -[SCLensRemoteAssetLogger _logAssetDownloadToBlizzardWithDuration:assetSize:type:assetId:requestingLensId:mediaId:fetchType:statusCode:]
// Type encoding: v80@0:8d16Q24q32@40@48@56q64q72
// Implementation: 0x105bee9b4

// -[SCLensRemoteAssetLogger _logAssetDownloadToGrapheneWithDuration:assetSize:type:source:]
// Type encoding: v48@0:8d16Q24q32Q40
// Implementation: 0x105beeb64

// -[SCLensRemoteAssetLogger assetUploadStarted]
// Type encoding: v16@0:8
// Implementation: 0x105beec2c

// -[SCLensRemoteAssetLogger assetUploadFinishedWithDuration:assetSize:type:]
// Type encoding: v40@0:8d16Q24q32
// Implementation: 0x105beec38

// -[SCLensRemoteAssetLogger uploadAssetMissedWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105beeccc

// -[SCLensRemoteAssetLogger assetLensResourceLookupFinishedWithDuration:success:type:]
// Type encoding: v36@0:8d16B24q28
// Implementation: 0x105beed14

// -[SCLensRemoteAssetLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105beee48

// +[SCLensRemoteAssetLogger _assetTypeToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x105beede4

// +[SCLensRemoteAssetLogger _sizeInKB:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105beee0c

// +[SCLensRemoteAssetLogger _blizzardLensRemoteAssetTypeFromLensRemoteAssetType:]
// Type encoding: q24@0:8q16
// Implementation: 0x105beee18

// +[SCLensRemoteAssetLogger _lensFetchTypeFromLensRemoteAssetFetchType:]
// Type encoding: q24@0:8q16
// Implementation: 0x105beee28

@end
