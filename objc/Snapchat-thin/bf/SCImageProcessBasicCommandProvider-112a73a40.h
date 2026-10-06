// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessBasicCommandProvider
// Superclass: NSObject
// Address: 0x112a73a40

@interface SCImageProcessBasicCommandProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessBasicCommandProvider identityRGBCommand]
// Type encoding: @16@0:8
// Implementation: 0x10585bdb8

// -[SCImageProcessBasicCommandProvider identityYUVCommand]
// Type encoding: @16@0:8
// Implementation: 0x10585bdc4

// -[SCImageProcessBasicCommandProvider grayscaleRGBCommand]
// Type encoding: @16@0:8
// Implementation: 0x10585bdd0

// -[SCImageProcessBasicCommandProvider grayscaleRGBCPUCommand]
// Type encoding: @16@0:8
// Implementation: 0x10585bddc

// -[SCImageProcessBasicCommandProvider instasnapRGBCommand]
// Type encoding: @16@0:8
// Implementation: 0x10585bde8

// -[SCImageProcessBasicCommandProvider instasnapRGBCPUCommand]
// Type encoding: @16@0:8
// Implementation: 0x10585bdf4

// -[SCImageProcessBasicCommandProvider missEtikateRGBCommand]
// Type encoding: @16@0:8
// Implementation: 0x10585be00

// -[SCImageProcessBasicCommandProvider missEtikateRGBCPUCommand]
// Type encoding: @16@0:8
// Implementation: 0x10585be0c

// -[SCImageProcessBasicCommandProvider lutRGBCommandWithLutName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10585be18

// -[SCImageProcessBasicCommandProvider lutRGBCPUCommandWithLutName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10585be24

// -[SCImageProcessBasicCommandProvider blendRGBCommandWithImage:outputSize:]
// Type encoding: @40@0:8^{CGImage=}16{CGSize=dd}24
// Implementation: 0x10585be30

// -[SCImageProcessBasicCommandProvider blendRGBCPUCommandWithImage:outputSize:]
// Type encoding: @40@0:8^{CGImage=}16{CGSize=dd}24
// Implementation: 0x10585be3c

// -[SCImageProcessBasicCommandProvider mosaicRGBCommandWithImage:outputSize:]
// Type encoding: @40@0:8^{CGImage=}16{CGSize=dd}24
// Implementation: 0x10585be48

// -[SCImageProcessBasicCommandProvider mosaicRGBCPUCommandWithImage:outputSize:]
// Type encoding: @40@0:8^{CGImage=}16{CGSize=dd}24
// Implementation: 0x10585be54

// -[SCImageProcessBasicCommandProvider compoundCommandWithCommands:]
// Type encoding: @24@0:8@16
// Implementation: 0x10585be60

// -[SCImageProcessBasicCommandProvider pairedCommandWithLeftCommand:rightCommand:offset:]
// Type encoding: @36@0:8@16@24f32
// Implementation: 0x10585beac

// -[SCImageProcessBasicCommandProvider glRenderPassWithGLCommand:correspondingCPUCommand:inputBufferIds:outputBufferIds:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10585bf28

@end
