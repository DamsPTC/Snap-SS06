// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapcodeStickerView
// Superclass: SCPreviewStickerViewContentView
// Address: 0x112bc4f48

@interface SCSnapcodeStickerView

// Property: config; attributes: T@"NSDictionary",R,N,V_config
// Property: infoType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: item; attributes: T@"CTPItem",R,N,V_item
// Property: itemInstance; attributes: T@"SCCTPCTItemInstance",R,N,V_itemInstance
// Property: loadedFromCache; attributes: TB,N,V_loadedFromCache
// Property: imageView; attributes: T@"UIImageView",R,N
// Property: imageFuture; attributes: T@"SCFuture",?,R,N

// -[SCSnapcodeStickerView initWithItemInstance:snapchattersDataFetcher:currentUserId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108e5e8ac

// -[SCSnapcodeStickerView initWithViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e5ecd4

// -[SCSnapcodeStickerView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108e5edcc

// -[SCSnapcodeStickerView _initalizeViews]
// Type encoding: v16@0:8
// Implementation: 0x108e5eea0

// -[SCSnapcodeStickerView updateUserSnapcodeWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108e5f09c

// -[SCSnapcodeStickerView _snapcodeStickerLabelWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e5f200

// -[SCSnapcodeStickerView _updateViewWithCurrentViewType]
// Type encoding: v16@0:8
// Implementation: 0x108e5f394

// -[SCSnapcodeStickerView completeRendering]
// Type encoding: @16@0:8
// Implementation: 0x108e5f4a8

// -[SCSnapcodeStickerView shouldRespondToTap:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e5f4d8

// -[SCSnapcodeStickerView cycleStickerToNextStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e5f4e0

// -[SCSnapcodeStickerView imageView]
// Type encoding: @16@0:8
// Implementation: 0x108e5f4f8

// -[SCSnapcodeStickerView willDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e5f590

// -[SCSnapcodeStickerView didEndDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e5f594

// -[SCSnapcodeStickerView infoType]
// Type encoding: Q16@0:8
// Implementation: 0x108e5f598

// -[SCSnapcodeStickerView intrinsicSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108e5f5a0

// -[SCSnapcodeStickerView toCTPItem]
// Type encoding: @16@0:8
// Implementation: 0x108e5f5c8

// -[SCSnapcodeStickerView toCTItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e5f5d0

// -[SCSnapcodeStickerView type]
// Type encoding: Q16@0:8
// Implementation: 0x108e5f600

// -[SCSnapcodeStickerView packId]
// Type encoding: @16@0:8
// Implementation: 0x108e5f608

// -[SCSnapcodeStickerView stickerId]
// Type encoding: @16@0:8
// Implementation: 0x108e5f614

// -[SCSnapcodeStickerView loggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x108e5f630

// -[SCSnapcodeStickerView shortLoggingName]
// Type encoding: @16@0:8
// Implementation: 0x108e5f6a8

// -[SCSnapcodeStickerView copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108e5f6b4

// -[SCSnapcodeStickerView tappableElementBounds]
// Type encoding: @16@0:8
// Implementation: 0x108e5f6d8

// -[SCSnapcodeStickerView _updateItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e5f840

// -[SCSnapcodeStickerView item]
// Type encoding: @16@0:8
// Implementation: 0x108e60440

// -[SCSnapcodeStickerView itemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e60450

// -[SCSnapcodeStickerView loadedFromCache]
// Type encoding: B16@0:8
// Implementation: 0x108e60460

// -[SCSnapcodeStickerView setLoadedFromCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e60470

// -[SCSnapcodeStickerView config]
// Type encoding: @16@0:8
// Implementation: 0x108e60480

// -[SCSnapcodeStickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e60490

// +[SCSnapcodeStickerView _fetchCurrentSnapcodeForViewModel:width:completionBlock:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x108e5fa60

// +[SCSnapcodeStickerView viewModelForStyle:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e5ff38

// +[SCSnapcodeStickerView viewModelForStickerPicker]
// Type encoding: @16@0:8
// Implementation: 0x108e600d0

// +[SCSnapcodeStickerView generateSnapcodeForStickerPicker]
// Type encoding: @16@0:8
// Implementation: 0x108e60250

// +[SCSnapcodeStickerView generateSnapcodeStickerForViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e6032c

// +[SCSnapcodeStickerView stringForDisplayUserTag:]
// Type encoding: @20@0:8B16
// Implementation: 0x108e60404

@end
