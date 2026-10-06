// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightSharingLensTranscoder
// Superclass: NSObject
// Address: 0x112a6f738

@interface SCSpotlightSharingLensTranscoder

// Property: lensId; attributes: TQ,R,N
// Property: targetDurationMs; attributes: TQ,R,N

// -[SCSpotlightSharingLensTranscoder initWithSnapUploaderServices:lensMetadataBuilder:spotlightConfigProvider:snapDocEditorFactory:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105818160

// -[SCSpotlightSharingLensTranscoder lensId]
// Type encoding: Q16@0:8
// Implementation: 0x1058182e0

// -[SCSpotlightSharingLensTranscoder targetDurationMs]
// Type encoding: Q16@0:8
// Implementation: 0x105818320

// -[SCSpotlightSharingLensTranscoder transcodeAndUploadMedia:overlayData:isImage:crossPostToStoryInfo:completionQueue:completionHandler:]
// Type encoding: v60@0:8@16@24B32@36@44@?52
// Implementation: 0x105818328

// -[SCSpotlightSharingLensTranscoder _transcodeAndUploadSnapDoc:clientId:encryptionKey:encryptionIV:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x10581884c

// -[SCSpotlightSharingLensTranscoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105818c6c

@end
