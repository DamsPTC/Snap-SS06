// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerMediaCameraRollDownloader
// Superclass: NSObject
// Address: 0x112b3a078

@interface SCComposerMediaCameraRollDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerMediaCameraRollDownloader init]
// Type encoding: @16@0:8
// Implementation: 0x100be9674

// -[SCComposerMediaCameraRollDownloader supportedURLSchemes]
// Type encoding: @16@0:8
// Implementation: 0x106dc010c

// -[SCComposerMediaCameraRollDownloader _collectLoadTasks]
// Type encoding: @16@0:8
// Implementation: 0x106dc0178

// -[SCComposerMediaCameraRollDownloader flushLoads]
// Type encoding: v16@0:8
// Implementation: 0x106dc0240

// -[SCComposerMediaCameraRollDownloader requestPayloadWithURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x106dc0744

// -[SCComposerMediaCameraRollDownloader loadImageWithRequestPayload:parameters:completion:]
// Type encoding: @48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x106dc08a4

// -[SCComposerMediaCameraRollDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106dc0cc0

// +[SCComposerMediaCameraRollDownloader imageURLForAssetId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dc09b8

// +[SCComposerMediaCameraRollDownloader imageURLForAssetId:targetSize:deliveryMode:]
// Type encoding: @48@0:8@16{CGSize=dd}24q40
// Implementation: 0x106dc0ab8

@end
