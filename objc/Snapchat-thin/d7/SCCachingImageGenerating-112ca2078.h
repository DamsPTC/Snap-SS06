// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCachingImageGenerating
// Superclass: NSObject
// Address: 0x112ca2078

@interface SCCachingImageGenerating

// Property: images; attributes: T@"NSDictionary",C,V_images
// Property: decodedImage; attributes: T@"UIImage",&,V_decodedImage
// Property: imageFormat; attributes: TQ,R,N,V_imageFormat
// Property: delegate; attributes: T@"<SCCachingImageGeneratingDelegate>",W,N,V_delegate
// Property: shouldOverrideOrientation; attributes: TB,N,V_shouldOverrideOrientation
// Property: overrideOrientation; attributes: Tq,N,V_overrideOrientation
// Property: scaleFactor; attributes: Td,N,V_scaleFactor
// Property: scaleToRemoveWhiteBorder; attributes: TB,N,V_scaleToRemoveWhiteBorder
// Property: count; attributes: TQ,R,N,V_count
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCachingImageGenerating initWithImages:decodedImage:entity:cachingMediaManager:sourceLevel:count:logger:]
// Type encoding: @72@0:8@16@24@32@40q48Q56@64
// Implementation: 0x10b67d7d8

// -[SCCachingImageGenerating initWithImages:decodedImage:targetSize:sourceImageGenerating:sourceLevel:count:logger:]
// Type encoding: @80@0:8@16@24{CGSize=dd}32@48q56Q64@72
// Implementation: 0x10b67d9b4

// -[SCCachingImageGenerating initWithImages:decodedImage:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b67db7c

// -[SCCachingImageGenerating copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b67dccc

// -[SCCachingImageGenerating hasDecoded]
// Type encoding: B16@0:8
// Implementation: 0x10b67dde4

// -[SCCachingImageGenerating decodeImageWithPerformer:resultHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10b67de18

// -[SCCachingImageGenerating _transformImageIfNeeded:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b67e0b8

// -[SCCachingImageGenerating imageAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b67e1bc

// -[SCCachingImageGenerating count]
// Type encoding: Q16@0:8
// Implementation: 0x10b67e2ec

// -[SCCachingImageGenerating imageAtIndex:queue:resultHandler:]
// Type encoding: @40@0:8Q16@24@?32
// Implementation: 0x10b67e384

// -[SCCachingImageGenerating _generateMoreImagesAtIndex:decodeRequest:resultHandler:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x10b67e74c

// -[SCCachingImageGenerating imageFormat]
// Type encoding: Q16@0:8
// Implementation: 0x10b67ee1c

// -[SCCachingImageGenerating delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b67ee24

// -[SCCachingImageGenerating setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67ee3c

// -[SCCachingImageGenerating shouldOverrideOrientation]
// Type encoding: B16@0:8
// Implementation: 0x10b67ee48

// -[SCCachingImageGenerating setShouldOverrideOrientation:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b67ee50

// -[SCCachingImageGenerating overrideOrientation]
// Type encoding: q16@0:8
// Implementation: 0x10b67ee58

// -[SCCachingImageGenerating setOverrideOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b67ee60

// -[SCCachingImageGenerating scaleFactor]
// Type encoding: d16@0:8
// Implementation: 0x10b67ee68

// -[SCCachingImageGenerating setScaleFactor:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b67ee70

// -[SCCachingImageGenerating scaleToRemoveWhiteBorder]
// Type encoding: B16@0:8
// Implementation: 0x10b67ee78

// -[SCCachingImageGenerating setScaleToRemoveWhiteBorder:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b67ee80

// -[SCCachingImageGenerating images]
// Type encoding: @16@0:8
// Implementation: 0x10b67ee88

// -[SCCachingImageGenerating setImages:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67ee94

// -[SCCachingImageGenerating decodedImage]
// Type encoding: @16@0:8
// Implementation: 0x10b67ee9c

// -[SCCachingImageGenerating setDecodedImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67eea8

// -[SCCachingImageGenerating .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b67eeb0

// +[SCCachingImageGenerating defaultOperationQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b67d70c

@end
