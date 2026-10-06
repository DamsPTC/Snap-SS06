// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoAssetMutator
// Superclass: NSObject
// Address: 0x112be76d8

@interface SCVideoAssetMutator


// -[SCVideoAssetMutator initWithInputVideoAsset:audioOverrideAsset:outputPlaybackRate:outputTimeRanges:]
// Type encoding: @48@0:8@16@24d32@40
// Implementation: 0x109117270

// -[SCVideoAssetMutator initWithInputVideoAssets:videoTimeRanges:videoRenderSize:audioOverrideAssets:audioOverrideLoopingEnabled:outputPlaybackRate:]
// Type encoding: @68@0:8@16@24{CGSize=dd}32@48B56d60
// Implementation: 0x10911734c

// -[SCVideoAssetMutator generateMutatedVideoAssetWithErrorType:]
// Type encoding: @24@0:8^q16
// Implementation: 0x1091175d8

// -[SCVideoAssetMutator _generateMutatedVideoAssetForSingleInputWithErrorType:]
// Type encoding: @24@0:8^q16
// Implementation: 0x109117648

// -[SCVideoAssetMutator _generateMutatedVideoAssetForMultipleInputsWithErrorType:]
// Type encoding: @24@0:8^q16
// Implementation: 0x109117dbc

// -[SCVideoAssetMutator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109119190

@end
