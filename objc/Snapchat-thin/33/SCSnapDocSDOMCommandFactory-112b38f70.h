// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocSDOMCommandFactory
// Superclass: NSObject
// Address: 0x112b38f70

@interface SCSnapDocSDOMCommandFactory


// +[SCSnapDocSDOMCommandFactory addOverlayCommandWithImage:atIndexEditContainer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d92378

// +[SCSnapDocSDOMCommandFactory addPlainAssetCommandWithMedia:atIndexLayerContainer:assetType:mediaType:]
// Type encoding: @40@0:8@16@24i32i36
// Implementation: 0x106d92450

// +[SCSnapDocSDOMCommandFactory addImageSegmentCommandWithImageData:atIndex:imageDuration:replaceExistingClip:keepEdiginLayers:]
// Type encoding: @64@0:8@16Q24{?=qiIq}32B56B60
// Implementation: 0x106d9253c

// +[SCSnapDocSDOMCommandFactory addVideoSegmentCommandWithVideoUrl:atIndex:replaceExistingClip:keepEdiginLayers:]
// Type encoding: @40@0:8@16Q24B32B36
// Implementation: 0x106d927e0

// +[SCSnapDocSDOMCommandFactory addTrimCommandatClipIndex:startMs:durationMs:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x106d92ab4

// +[SCSnapDocSDOMCommandFactory applyAlternativeAssetAtIndexLayerContainer:originAssetType:altAssetType:keepAlternateLayer:]
// Type encoding: @36@0:8@16i24i28B32
// Implementation: 0x106d92b98

// +[SCSnapDocSDOMCommandFactory clipIndexFromIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106d92c74

// +[SCSnapDocSDOMCommandFactory mediaIndexFromBytes:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d92cd8

// +[SCSnapDocSDOMCommandFactory mediaIndexFromUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d92d50

// +[SCSnapDocSDOMCommandFactory importSnapClipCommandWithSnapDoc:startTime:durationMs:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x106d92de8

// +[SCSnapDocSDOMCommandFactory addRenderEffectWithCTItem:renderEffectType:effectIndex:]
// Type encoding: @36@0:8@16i24@28
// Implementation: 0x106d930b4

@end
