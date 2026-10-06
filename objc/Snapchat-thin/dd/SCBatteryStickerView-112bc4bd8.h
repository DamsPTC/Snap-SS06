// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatteryStickerView
// Superclass: SCPreviewStickerViewContentView
// Address: 0x112bc4bd8

@interface SCBatteryStickerView

// Property: infoType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: item; attributes: T@"CTPItem",R,N,V_item
// Property: itemInstance; attributes: T@"SCCTPCTItemInstance",R,N,V_itemInstance
// Property: loadedFromCache; attributes: TB,N,V_loadedFromCache
// Property: imageView; attributes: T@"UIImageView",R,N,V_imageView
// Property: imageFuture; attributes: T@"SCFuture",?,R,N

// -[SCBatteryStickerView initWithFrame:battery:]
// Type encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16Q48
// Implementation: 0x108e57e3c

// -[SCBatteryStickerView initWithItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e57ebc

// -[SCBatteryStickerView _imageRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e57f40

// -[SCBatteryStickerView _setupBatteryImageViewFromItemInstance:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e57f5c

// -[SCBatteryStickerView willDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e58130

// -[SCBatteryStickerView didEndDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e58134

// -[SCBatteryStickerView encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e58138

// -[SCBatteryStickerView copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108e5813c

// -[SCBatteryStickerView loggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x108e58160

// -[SCBatteryStickerView packId]
// Type encoding: @16@0:8
// Implementation: 0x108e58168

// -[SCBatteryStickerView shortLoggingName]
// Type encoding: @16@0:8
// Implementation: 0x108e58170

// -[SCBatteryStickerView stickerId]
// Type encoding: @16@0:8
// Implementation: 0x108e58178

// -[SCBatteryStickerView toCTItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e58180

// -[SCBatteryStickerView toCTPItem]
// Type encoding: @16@0:8
// Implementation: 0x108e581b0

// -[SCBatteryStickerView infoType]
// Type encoding: Q16@0:8
// Implementation: 0x108e581b8

// -[SCBatteryStickerView type]
// Type encoding: Q16@0:8
// Implementation: 0x108e581c0

// -[SCBatteryStickerView intrinsicSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108e581c8

// -[SCBatteryStickerView _itemInstanceWithBatteryStatus:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108e581d8

// -[SCBatteryStickerView _batteryStickerMetadataLevelForSCBatteryStatus:]
// Type encoding: i24@0:8Q16
// Implementation: 0x108e58308

// -[SCBatteryStickerView item]
// Type encoding: @16@0:8
// Implementation: 0x108e58320

// -[SCBatteryStickerView itemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e58330

// -[SCBatteryStickerView loadedFromCache]
// Type encoding: B16@0:8
// Implementation: 0x108e58340

// -[SCBatteryStickerView setLoadedFromCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e58350

// -[SCBatteryStickerView imageView]
// Type encoding: @16@0:8
// Implementation: 0x108e58360

// -[SCBatteryStickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e58370

@end
