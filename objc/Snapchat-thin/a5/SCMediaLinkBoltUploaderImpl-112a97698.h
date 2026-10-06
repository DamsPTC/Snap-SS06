// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaLinkBoltUploaderImpl
// Superclass: NSObject
// Address: 0x112a97698

@interface SCMediaLinkBoltUploaderImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMediaLinkBoltUploaderImpl initWithBoltUploader:grapheneLogger:performerProvider:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105c6f548

// -[SCMediaLinkBoltUploaderImpl uploadMediaToBolt:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c6f748

// -[SCMediaLinkBoltUploaderImpl uploadMediaWithThumbnailToBolt:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c6f81c

// -[SCMediaLinkBoltUploaderImpl generateThumbnailAndUploadToBolt:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c6fdac

// -[SCMediaLinkBoltUploaderImpl _createPerformerWithPerformerProvider:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105c702f0

// -[SCMediaLinkBoltUploaderImpl _uploadMediaToBoltWithExternalLinkSendingMedia:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c7037c

// -[SCMediaLinkBoltUploaderImpl _uploadMediaToBoltWithData:uploadMediaType:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x105c70588

// -[SCMediaLinkBoltUploaderImpl _logBoltRequestLatencyWithStartTime:uploadMediaType:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x105c70b30

// -[SCMediaLinkBoltUploaderImpl _logMediaAndThumbnailUploadLatencyWithStartTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x105c70b8c

// -[SCMediaLinkBoltUploaderImpl _logBoltRequestSentGrapheneWithUploadMediaType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c70be4

// -[SCMediaLinkBoltUploaderImpl _logBoltRequestSucceededGrapheneWithUploadMediaType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c70c14

// -[SCMediaLinkBoltUploaderImpl _logBoltRequestFailedGrapheneWithUploadMediaType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c70c44

// -[SCMediaLinkBoltUploaderImpl _logRequestContentSizeInKB:uploadMediaType:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x105c70c74

// -[SCMediaLinkBoltUploaderImpl _logThumbnailGenerationFailed]
// Type encoding: v16@0:8
// Implementation: 0x105c70ca0

// -[SCMediaLinkBoltUploaderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c70cac

@end
