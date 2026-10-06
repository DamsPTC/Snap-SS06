// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: YYImageDecoder
// Superclass: NSObject
// Address: 0x112bf6b88

@interface YYImageDecoder

// Property: data; attributes: T@"NSData",R,N,V_data
// Property: type; attributes: TQ,R,N,V_type
// Property: scale; attributes: Td,R,N,V_scale
// Property: frameCount; attributes: TQ,R,N,V_frameCount
// Property: loopCount; attributes: TQ,R,N,V_loopCount
// Property: width; attributes: TQ,R,N,V_width
// Property: height; attributes: TQ,R,N,V_height
// Property: finalized; attributes: TB,R,N,GisFinalized,V_finalized

// -[YYImageDecoder dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109218788

// -[YYImageDecoder init]
// Type encoding: @16@0:8
// Implementation: 0x1092188dc

// -[YYImageDecoder initWithScale:]
// Type encoding: @24@0:8d16
// Implementation: 0x10921892c

// -[YYImageDecoder updateData:final:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1092189f8

// -[YYImageDecoder frameAtIndex:decodeForDisplay:]
// Type encoding: @28@0:8Q16B24
// Implementation: 0x109218a5c

// -[YYImageDecoder frameDurationAtIndex:]
// Type encoding: d24@0:8Q16
// Implementation: 0x109218ab8

// -[YYImageDecoder framePropertiesAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x109218b34

// -[YYImageDecoder imageProperties]
// Type encoding: @16@0:8
// Implementation: 0x109218b80

// -[YYImageDecoder _updateData:final:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x109218bc4

// -[YYImageDecoder _frameAtIndex:decodeForDisplay:]
// Type encoding: @28@0:8Q16B24
// Implementation: 0x109218e78

// -[YYImageDecoder _framePropertiesAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x109219288

// -[YYImageDecoder _imageProperties]
// Type encoding: @16@0:8
// Implementation: 0x1092192dc

// -[YYImageDecoder _updateSource]
// Type encoding: v16@0:8
// Implementation: 0x109219304

// -[YYImageDecoder _updateSourceWebP]
// Type encoding: v16@0:8
// Implementation: 0x109219324

// -[YYImageDecoder _updateSourceAPNG]
// Type encoding: v16@0:8
// Implementation: 0x10921969c

// -[YYImageDecoder _updateSourceImageIO]
// Type encoding: v16@0:8
// Implementation: 0x109219e2c

// -[YYImageDecoder _newUnblendedImageAtIndex:extendToCanvas:decoded:]
// Type encoding: ^{CGImage=}36@0:8Q16B24^B28
// Implementation: 0x10921a1a8

// -[YYImageDecoder _createBlendContextIfNeeded]
// Type encoding: B16@0:8
// Implementation: 0x10921aaa4

// -[YYImageDecoder _blendImageWithFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x10921ab3c

// -[YYImageDecoder _newBlendedImageWithFrame:]
// Type encoding: ^{CGImage=}24@0:8@16
// Implementation: 0x10921acbc

// -[YYImageDecoder data]
// Type encoding: @16@0:8
// Implementation: 0x10921b064

// -[YYImageDecoder type]
// Type encoding: Q16@0:8
// Implementation: 0x10921b06c

// -[YYImageDecoder scale]
// Type encoding: d16@0:8
// Implementation: 0x10921b074

// -[YYImageDecoder frameCount]
// Type encoding: Q16@0:8
// Implementation: 0x10921b07c

// -[YYImageDecoder loopCount]
// Type encoding: Q16@0:8
// Implementation: 0x10921b084

// -[YYImageDecoder width]
// Type encoding: Q16@0:8
// Implementation: 0x10921b08c

// -[YYImageDecoder height]
// Type encoding: Q16@0:8
// Implementation: 0x10921b094

// -[YYImageDecoder isFinalized]
// Type encoding: B16@0:8
// Implementation: 0x10921b09c

// -[YYImageDecoder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10921b0a4

// +[YYImageDecoder decoderWithData:scale:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10921884c

@end
