// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAltitudeStickerView
// Superclass: SCPreviewStickerViewContentView
// Address: 0x112bc4b38

@interface SCAltitudeStickerView

// Property: unit; attributes: TQ,R,N,V_unit
// Property: viewType; attributes: TQ,R,N,V_viewType
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

// -[SCAltitudeStickerView initWithItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e54850

// -[SCAltitudeStickerView initWithPickerFrame:altitude:]
// Type encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x108e54a28

// -[SCAltitudeStickerView initWithPreviewFrame:altitude:]
// Type encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x108e54dac

// -[SCAltitudeStickerView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108e54e90

// -[SCAltitudeStickerView _setupPreviewViewWithAltitude:viewType:unit:frame:]
// Type encoding: v72@0:8d16Q24Q32{CGRect={CGPoint=dd}{CGSize=dd}}40
// Implementation: 0x108e54fe0

// -[SCAltitudeStickerView _setupAltitudeNumberViewWithFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e550dc

// -[SCAltitudeStickerView _setupAltitudeGaugeView]
// Type encoding: v16@0:8
// Implementation: 0x108e5537c

// -[SCAltitudeStickerView _correctedAltitudeValue]
// Type encoding: d16@0:8
// Implementation: 0x108e55ab4

// -[SCAltitudeStickerView _unitString]
// Type encoding: @16@0:8
// Implementation: 0x108e55afc

// -[SCAltitudeStickerView _unitString:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108e55b80

// -[SCAltitudeStickerView _updateAltitudeView]
// Type encoding: v16@0:8
// Implementation: 0x108e55bf8

// -[SCAltitudeStickerView _setAltitudeToDisplayGauge]
// Type encoding: v16@0:8
// Implementation: 0x108e55cd0

// -[SCAltitudeStickerView _setAltitudeNeedlePositions:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e55f9c

// -[SCAltitudeStickerView _setAltitudeNumberView]
// Type encoding: v16@0:8
// Implementation: 0x108e56134

// -[SCAltitudeStickerView shouldRespondToTap:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e564a4

// -[SCAltitudeStickerView cycleStickerToNextStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e56568

// -[SCAltitudeStickerView encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e565bc

// -[SCAltitudeStickerView copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108e565c0

// -[SCAltitudeStickerView loggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x108e565e4

// -[SCAltitudeStickerView packId]
// Type encoding: @16@0:8
// Implementation: 0x108e565ec

// -[SCAltitudeStickerView shortLoggingName]
// Type encoding: @16@0:8
// Implementation: 0x108e565f8

// -[SCAltitudeStickerView stickerId]
// Type encoding: @16@0:8
// Implementation: 0x108e56604

// -[SCAltitudeStickerView toCTItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e5660c

// -[SCAltitudeStickerView toCTPItem]
// Type encoding: @16@0:8
// Implementation: 0x108e5663c

// -[SCAltitudeStickerView infoType]
// Type encoding: Q16@0:8
// Implementation: 0x108e56644

// -[SCAltitudeStickerView type]
// Type encoding: Q16@0:8
// Implementation: 0x108e5664c

// -[SCAltitudeStickerView intrinsicSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108e56654

// -[SCAltitudeStickerView imageView]
// Type encoding: @16@0:8
// Implementation: 0x108e56664

// -[SCAltitudeStickerView didEndDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e566fc

// -[SCAltitudeStickerView willDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e56700

// -[SCAltitudeStickerView _updateItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e56704

// -[SCAltitudeStickerView loadedFromCache]
// Type encoding: B16@0:8
// Implementation: 0x108e5686c

// -[SCAltitudeStickerView setLoadedFromCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e5687c

// -[SCAltitudeStickerView item]
// Type encoding: @16@0:8
// Implementation: 0x108e5688c

// -[SCAltitudeStickerView itemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e5689c

// -[SCAltitudeStickerView unit]
// Type encoding: Q16@0:8
// Implementation: 0x108e568ac

// -[SCAltitudeStickerView viewType]
// Type encoding: Q16@0:8
// Implementation: 0x108e568bc

// -[SCAltitudeStickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e568cc

@end
