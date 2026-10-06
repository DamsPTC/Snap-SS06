// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerMediaImage
// Superclass: NSObject
// Address: 0x112bc8378

@interface SCComposerMediaImage

// Property: image; attributes: T@"UIImage",R,N,V_image
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerMediaImage initWithImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x108eab160

// -[SCComposerMediaImage getWidth]
// Type encoding: d16@0:8
// Implementation: 0x108eab1d4

// -[SCComposerMediaImage getHeight]
// Type encoding: d16@0:8
// Implementation: 0x108eab210

// -[SCComposerMediaImage resizeWithWidth:height:callback:]
// Type encoding: v40@0:8d16d24@?32
// Implementation: 0x108eab24c

// -[SCComposerMediaImage cropWithX:y:width:height:callback:]
// Type encoding: v56@0:8d16d24d32d40@?48
// Implementation: 0x108eab488

// -[SCComposerMediaImage rotateWithAngle:callback:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x108eab6e4

// -[SCComposerMediaImage getPngDataWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108eab920

// -[SCComposerMediaImage getJpegDataWithCompressionQuality:callback:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x108eaba18

// -[SCComposerMediaImage dispose]
// Type encoding: v16@0:8
// Implementation: 0x108eabb28

// -[SCComposerMediaImage pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x108eabd00

// -[SCComposerMediaImage image]
// Type encoding: @16@0:8
// Implementation: 0x108eabd0c

// -[SCComposerMediaImage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108eabd14

@end
