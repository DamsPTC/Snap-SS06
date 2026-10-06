// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessCPUBlendBGRCommand
// Superclass: SCImageProcessCPUCommandImpl
// Address: 0x112be3f38

@interface SCImageProcessCPUBlendBGRCommand


// -[SCImageProcessCPUBlendBGRCommand initWithImage:outputSize:]
// Type encoding: @40@0:8^{CGImage=}16{CGSize=dd}24
// Implementation: 0x109072d98

// -[SCImageProcessCPUBlendBGRCommand dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109072e18

// -[SCImageProcessCPUBlendBGRCommand _generatePixelDataFromImageWithWidth:height:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x109072e80

// -[SCImageProcessCPUBlendBGRCommand runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:]
// Type encoding: @56@0:8@16^{__CVBuffer=}24^{__CVBuffer=}32Q40^@48
// Implementation: 0x109072f50

// -[SCImageProcessCPUBlendBGRCommand commandName]
// Type encoding: @16@0:8
// Implementation: 0x1090732b8

// -[SCImageProcessCPUBlendBGRCommand isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1090732c4

// +[SCImageProcessCPUBlendBGRCommand commandWithImage:outputSize:]
// Type encoding: @40@0:8^{CGImage=}16{CGSize=dd}24
// Implementation: 0x109072d50

@end
