// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCQuickStickerViewProvider
// Superclass: NSObject
// Address: 0x112ac5318

@interface SCQuickStickerViewProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: quickStickerImage; attributes: T@"SCQuickStickerImage",R,N,V_quickStickerImage
// Property: quickStickerMetadata; attributes: T@"SCQuickStickerMetadata",R,N,V_quickStickerMetadata
// Property: triggeringSection; attributes: Tq,R,N

// -[SCQuickStickerViewProvider initWithQuickStickerImage:quickStickerMetadata:userSession:creativeToolsSnapReplyServices:temporaryFileWriter:cameraZoomIndicatorVisibilityObservable:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1060ccf68

// -[SCQuickStickerViewProvider attachQuickStickerViewToContainer:idProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060cd110

// -[SCQuickStickerViewProvider canProvide]
// Type encoding: B16@0:8
// Implementation: 0x1060cd8fc

// -[SCQuickStickerViewProvider triggeringSection]
// Type encoding: q16@0:8
// Implementation: 0x1060cd90c

// -[SCQuickStickerViewProvider previewQuickStickerProvider]
// Type encoding: @16@0:8
// Implementation: 0x1060cda28

// -[SCQuickStickerViewProvider sticker]
// Type encoding: @16@0:8
// Implementation: 0x1060cda60

// -[SCQuickStickerViewProvider ctItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x1060cda68

// -[SCQuickStickerViewProvider _quickStickerViewForItemInstance:sticker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060cda70

// -[SCQuickStickerViewProvider _insertQuickStickerView:inFeatureContainer:inContainer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1060cdb38

// -[SCQuickStickerViewProvider _addDisclaimerLabelIfNeededAboveQuickStickerView:inFeatureContainer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060ce068

// -[SCQuickStickerViewProvider _centerContentViewInPreviewStickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060ce468

// -[SCQuickStickerViewProvider _setQuickStickerView:featureContainer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060ce520

// -[SCQuickStickerViewProvider previewStickerViewDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060ce788

// -[SCQuickStickerViewProvider quickStickerImage]
// Type encoding: @16@0:8
// Implementation: 0x1060ce7f0

// -[SCQuickStickerViewProvider quickStickerMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1060ce7f8

// -[SCQuickStickerViewProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060ce800

@end
