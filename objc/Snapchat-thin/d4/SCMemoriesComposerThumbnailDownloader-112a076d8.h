// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesComposerThumbnailDownloader
// Superclass: NSObject
// Address: 0x112a076d8

@interface SCMemoriesComposerThumbnailDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesComposerThumbnailDownloader initWithMemoriesThumbnailProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x100be4850

// -[SCMemoriesComposerThumbnailDownloader supportedURLSchemes]
// Type encoding: @16@0:8
// Implementation: 0x104efd26c

// -[SCMemoriesComposerThumbnailDownloader requestPayloadWithURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x104efd2d8

// -[SCMemoriesComposerThumbnailDownloader loadImageWithRequestPayload:parameters:completion:]
// Type encoding: @48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x104efd52c

// -[SCMemoriesComposerThumbnailDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104efdae4

// +[SCMemoriesComposerThumbnailDownloader cropImage:toFractionRect:]
// Type encoding: @56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x104efd998

@end
