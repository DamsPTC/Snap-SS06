// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureCustomSticker
// Superclass: NSObject
// Address: 0x112a99df8

@interface SCPreviewFeatureCustomSticker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: customStickerObservable; attributes: T@"SCObservable",R,C,N

// -[SCPreviewFeatureCustomSticker initWithStickerContainer:applicationLifecycleEvents:creativeExpressionsManager:customStickerManager:snapEditor:anrThreadMonitoring:itemViewService:creativeToolsABProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105ce704c

// -[SCPreviewFeatureCustomSticker dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105ce7250

// -[SCPreviewFeatureCustomSticker customStickerObservable]
// Type encoding: @16@0:8
// Implementation: 0x105ce72ec

// -[SCPreviewFeatureCustomSticker configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce7314

// -[SCPreviewFeatureCustomSticker activate]
// Type encoding: v16@0:8
// Implementation: 0x105ce7344

// -[SCPreviewFeatureCustomSticker featureType]
// Type encoding: Q16@0:8
// Implementation: 0x105ce7368

// -[SCPreviewFeatureCustomSticker createAndDisplayCustomStickerWithImageData:origin:isAnimated:]
// Type encoding: v32@0:8@16i24B28
// Implementation: 0x105ce7370

// -[SCPreviewFeatureCustomSticker didFinishCuttingStickerWithImageData:atPosition:isFromCutout:origin:]
// Type encoding: v48@0:8@16{CGPoint=dd}24B40i44
// Implementation: 0x105ce74e0

// -[SCPreviewFeatureCustomSticker dropInteraction:canHandleSession:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105ce763c

// -[SCPreviewFeatureCustomSticker dropInteraction:sessionDidUpdate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105ce7700

// -[SCPreviewFeatureCustomSticker dropInteraction:performDrop:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ce7724

// -[SCPreviewFeatureCustomSticker _createAndDisplayCustomStickerWithImageData:atPosition:isFromCutout:origin:isAnimated:completion:]
// Type encoding: v60@0:8@16{CGPoint=dd}24B40i44B48@?52
// Implementation: 0x105ce7c64

// -[SCPreviewFeatureCustomSticker _scaleImageData:isAnimated:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105ce7e88

// -[SCPreviewFeatureCustomSticker _setupPasteboardObserving]
// Type encoding: v16@0:8
// Implementation: 0x105ce8268

// -[SCPreviewFeatureCustomSticker _pasteImagesFromPasteboard:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce84a0

// -[SCPreviewFeatureCustomSticker _canPasteImagesFromPasteboard:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ce8888

// -[SCPreviewFeatureCustomSticker _handleAppForeground]
// Type encoding: v16@0:8
// Implementation: 0x105ce8970

// -[SCPreviewFeatureCustomSticker _updateStickerToolbarButtonWithImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce89fc

// -[SCPreviewFeatureCustomSticker _displayCustomSticker:atPosition:isFromCutout:isAnimated:]
// Type encoding: v48@0:8@16{CGPoint=dd}24B40B44
// Implementation: 0x105ce8a54

// -[SCPreviewFeatureCustomSticker _setupDropInteraction]
// Type encoding: v16@0:8
// Implementation: 0x105ce8e54

// -[SCPreviewFeatureCustomSticker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ce8eb4

@end
