// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesComposerThumbnailLoader
// Superclass: NSObject
// Address: 0x112a885f8

@interface SCSpectaclesComposerThumbnailLoader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesComposerThumbnailLoader initWithSpectaclesManager:asyncQueueProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105a89a44

// -[SCSpectaclesComposerThumbnailLoader supportedURLSchemes]
// Type encoding: @16@0:8
// Implementation: 0x105a89b28

// -[SCSpectaclesComposerThumbnailLoader requestPayloadWithURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x105a89b94

// -[SCSpectaclesComposerThumbnailLoader loadImageWithRequestPayload:parameters:completion:]
// Type encoding: @48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x105a89b9c

// -[SCSpectaclesComposerThumbnailLoader _performLoadingImageWithContentId:deviceSerialNumber:parameters:completion:]
// Type encoding: v56@0:8@16@24{SCValdiAssetRequestParameters=qq}32@?48
// Implementation: 0x105a89e84

// -[SCSpectaclesComposerThumbnailLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a8a088

@end
