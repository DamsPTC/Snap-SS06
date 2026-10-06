// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMediaDrawerVideo
// Superclass: SCChatMediaDrawerBaseMedia
// Address: 0x112b0ae18

@interface SCChatMediaDrawerVideo

// Property: fileSize; attributes: Td,R,N,V_fileSize

// -[SCChatMediaDrawerVideo initWithPHAsset:filterFactory:grapheneRegistry:videoImporter:previewURLVideoProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1069dc494

// -[SCChatMediaDrawerVideo fetchImageWithSize:mediaType:allowLowQuality:completion:]
// Type encoding: v52@0:8{CGSize=dd}16q32B40@?44
// Implementation: 0x1069dc684

// -[SCChatMediaDrawerVideo cancelThumbnailFetchRequest]
// Type encoding: v16@0:8
// Implementation: 0x1069dc9a4

// -[SCChatMediaDrawerVideo prepareUploadDataForVideo:videoFilter:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1069dca60

// -[SCChatMediaDrawerVideo snapMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1069dcb10

// -[SCChatMediaDrawerVideo prepareDataToUploadForMediaId:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069dcd50

// -[SCChatMediaDrawerVideo prepareDataToUploadForMediaId:trackingId:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1069dcd5c

// -[SCChatMediaDrawerVideo prepareChunkedTranscodeVideoFilterForMediaId:trackingId:conversationIds:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1069dd00c

// -[SCChatMediaDrawerVideo mediaContentType]
// Type encoding: q16@0:8
// Implementation: 0x1069dd344

// -[SCChatMediaDrawerVideo width]
// Type encoding: d16@0:8
// Implementation: 0x1069dd34c

// -[SCChatMediaDrawerVideo height]
// Type encoding: d16@0:8
// Implementation: 0x1069dd350

// -[SCChatMediaDrawerVideo isZipped]
// Type encoding: B16@0:8
// Implementation: 0x1069dd368

// -[SCChatMediaDrawerVideo videoCodecOfPreparedData]
// Type encoding: q16@0:8
// Implementation: 0x1069dd370

// -[SCChatMediaDrawerVideo duration]
// Type encoding: d16@0:8
// Implementation: 0x1069dd380

// -[SCChatMediaDrawerVideo miniThumbnailData]
// Type encoding: @16@0:8
// Implementation: 0x1069dd3d0

// -[SCChatMediaDrawerVideo getAVAssetAsynchronously:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1069dd3d8

// -[SCChatMediaDrawerVideo getAVAssetAsynchronously:importedContextId:completion:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1069dd3e4

// -[SCChatMediaDrawerVideo _getAVAsset:importedContextId:attemptIdx:completion:]
// Type encoding: v48@0:8Q16@24q32@?40
// Implementation: 0x1069dd40c

// -[SCChatMediaDrawerVideo fetchOriginalVideoWithCompletion:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069dd868

// -[SCChatMediaDrawerVideo fetchVideoWithSize:aspectRatio:allowLowQuality:videoFilter:completion:]
// Type encoding: v60@0:8{CGSize=dd}16d32B40@44@?52
// Implementation: 0x1069dd8f0

// -[SCChatMediaDrawerVideo fetchVideoURLWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1069ddb68

// -[SCChatMediaDrawerVideo getVideoSizeAndMetadataIfNecessary:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1069de180

// -[SCChatMediaDrawerVideo maxPixelSizeForUpload]
// Type encoding: d16@0:8
// Implementation: 0x1069de2bc

// -[SCChatMediaDrawerVideo _convertToMp4WithAsset:outputURL:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1069de2c8

// -[SCChatMediaDrawerVideo _videoSizeWithAvasset:]
// Type encoding: d24@0:8@16
// Implementation: 0x1069de570

// -[SCChatMediaDrawerVideo fileSize]
// Type encoding: d16@0:8
// Implementation: 0x1069de7c4

// -[SCChatMediaDrawerVideo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069de7d4

// +[SCChatMediaDrawerVideo _stringForApplicationState:]
// Type encoding: @24@0:8q16
// Implementation: 0x1069de798

@end
