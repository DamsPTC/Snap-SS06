// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessCPUMosaicBGRCommand
// Superclass: SCImageProcessCPUCommandImpl
// Address: 0x112be4398

@interface SCImageProcessCPUMosaicBGRCommand


// -[SCImageProcessCPUMosaicBGRCommand initWithImage:outputSize:]
// Type encoding: @40@0:8^{CGImage=}16{CGSize=dd}24
// Implementation: 0x109077c6c

// -[SCImageProcessCPUMosaicBGRCommand setOutputSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x109077cec

// -[SCImageProcessCPUMosaicBGRCommand dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109077d00

// -[SCImageProcessCPUMosaicBGRCommand _generatePixelDataFromImage]
// Type encoding: v16@0:8
// Implementation: 0x109077d68

// -[SCImageProcessCPUMosaicBGRCommand runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:]
// Type encoding: @56@0:8@16^{__CVBuffer=}24^{__CVBuffer=}32Q40^@48
// Implementation: 0x109077ea0

// -[SCImageProcessCPUMosaicBGRCommand _validationErrorWithReason:]
// Type encoding: @24@0:8@16
// Implementation: 0x1090782bc

// -[SCImageProcessCPUMosaicBGRCommand commandName]
// Type encoding: @16@0:8
// Implementation: 0x10907840c

// -[SCImageProcessCPUMosaicBGRCommand isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109078418

// +[SCImageProcessCPUMosaicBGRCommand commandWithImage:outputSize:]
// Type encoding: @40@0:8^{CGImage=}16{CGSize=dd}24
// Implementation: 0x109077c24

@end
