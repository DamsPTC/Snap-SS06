// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraRollStickerView
// Superclass: SCPreviewStickerViewContentView
// Address: 0x112bc8a30

@interface SCCameraRollStickerView

// Property: entity; attributes: T@"SCCameraRollStickerEntity",R,N,V_entity
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: item; attributes: T@"CTPItem",R,N,V_item
// Property: itemInstance; attributes: T@"SCCTPCTItemInstance",R,N,V_itemInstance
// Property: loadedFromCache; attributes: TB,N,V_loadedFromCache
// Property: imageView; attributes: T@"UIImageView",R,N
// Property: imageFuture; attributes: T@"SCFuture",?,R,N

// -[SCCameraRollStickerView initWithEntity:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ebb104

// -[SCCameraRollStickerView initWithItemInstance:image:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108ebb368

// -[SCCameraRollStickerView updateEntity:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ebb3b8

// -[SCCameraRollStickerView shouldRespondToTap:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ebb5b8

// -[SCCameraRollStickerView scaleLimit]
// Type encoding: q16@0:8
// Implementation: 0x108ebb5c0

// -[SCCameraRollStickerView cycleStickerToNextStyle]
// Type encoding: v16@0:8
// Implementation: 0x108ebb5c8

// -[SCCameraRollStickerView imageView]
// Type encoding: @16@0:8
// Implementation: 0x108ebb680

// -[SCCameraRollStickerView didEndDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108ebb718

// -[SCCameraRollStickerView willDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108ebb71c

// -[SCCameraRollStickerView _updateShapeTo:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108ebb720

// -[SCCameraRollStickerView loadedFromCache]
// Type encoding: B16@0:8
// Implementation: 0x108ebb8e4

// -[SCCameraRollStickerView setLoadedFromCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ebb8f4

// -[SCCameraRollStickerView item]
// Type encoding: @16@0:8
// Implementation: 0x108ebb904

// -[SCCameraRollStickerView itemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108ebb914

// -[SCCameraRollStickerView entity]
// Type encoding: @16@0:8
// Implementation: 0x108ebb924

// -[SCCameraRollStickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ebb934

// +[SCCameraRollStickerView targetImageSizeWithImageSize:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x108ebb548

@end
