// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingCommandsGenerator
// Superclass: NSObject
// Address: 0x112ba7768

@interface SCVideoTranscodingCommandsGenerator

// Property: mediaSource; attributes: TQ,N,V_mediaSource
// Property: mediaDestination; attributes: TQ,N,V_mediaDestination
// Property: videoSourceSize; attributes: T{CGSize=dd},N,V_videoSourceSize
// Property: videoTargetSize; attributes: T{CGSize=dd},N,V_videoTargetSize
// Property: imageProcessData; attributes: T@"SCVideoTranscodingRequestImageProcessData",&,N,V_imageProcessData
// Property: targetTrajectoryFactory; attributes: T@"SCLazy",&,N,V_targetTrajectoryFactory
// Property: overlayImage; attributes: T@"UIImage",&,N,V_overlayImage
// Property: videoTrackedImages; attributes: T@"NSArray",&,N,V_videoTrackedImages
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoTranscodingCommandsGenerator initWithMediaSource:mediaDestination:sourceSize:targetSize:overlayImage:videoTrackedImages:imageProcessData:targetTrajectoryFactory:spectaclesImageProcessCommandFactory:]
// Type encoding: @104@0:8Q16Q24{CGSize=dd}32{CGSize=dd}48@64@72@80@88@96
// Implementation: 0x108568bfc

// -[SCVideoTranscodingCommandsGenerator overlayImage]
// Type encoding: @16@0:8
// Implementation: 0x108568d5c

// -[SCVideoTranscodingCommandsGenerator generateGPUCommands]
// Type encoding: @16@0:8
// Implementation: 0x108568f74

// -[SCVideoTranscodingCommandsGenerator generateCPUCommands]
// Type encoding: @16@0:8
// Implementation: 0x108569c1c

// -[SCVideoTranscodingCommandsGenerator _isSpectaclesMedia]
// Type encoding: B16@0:8
// Implementation: 0x10856a68c

// -[SCVideoTranscodingCommandsGenerator _isCircular]
// Type encoding: B16@0:8
// Implementation: 0x10856a6cc

// -[SCVideoTranscodingCommandsGenerator _cropOverlayIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x10856a734

// -[SCVideoTranscodingCommandsGenerator _overlayImageRectForTargetVideoSize]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10856a82c

// -[SCVideoTranscodingCommandsGenerator _hasEdits]
// Type encoding: B16@0:8
// Implementation: 0x10856a94c

// -[SCVideoTranscodingCommandsGenerator _createdShiftedImageProcessProviderWithDisparityXOffset:forVideoTrackedImage:staticTransform:]
// Type encoding: @36@0:8f16@20@28
// Implementation: 0x10856ad28

// -[SCVideoTranscodingCommandsGenerator _croppingStateForVideoTrackedImages]
// Type encoding: @16@0:8
// Implementation: 0x10856ae28

// -[SCVideoTranscodingCommandsGenerator _needsVideoCircleRendererOrCropping]
// Type encoding: B16@0:8
// Implementation: 0x10856ae8c

// -[SCVideoTranscodingCommandsGenerator _needsVideoCircleRenderer]
// Type encoding: B16@0:8
// Implementation: 0x10856aef0

// -[SCVideoTranscodingCommandsGenerator mediaSource]
// Type encoding: Q16@0:8
// Implementation: 0x10856aff4

// -[SCVideoTranscodingCommandsGenerator setMediaSource:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10856affc

// -[SCVideoTranscodingCommandsGenerator mediaDestination]
// Type encoding: Q16@0:8
// Implementation: 0x10856b004

// -[SCVideoTranscodingCommandsGenerator setMediaDestination:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10856b00c

// -[SCVideoTranscodingCommandsGenerator videoSourceSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10856b014

// -[SCVideoTranscodingCommandsGenerator setVideoSourceSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10856b01c

// -[SCVideoTranscodingCommandsGenerator videoTargetSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10856b024

// -[SCVideoTranscodingCommandsGenerator setVideoTargetSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10856b02c

// -[SCVideoTranscodingCommandsGenerator imageProcessData]
// Type encoding: @16@0:8
// Implementation: 0x10856b034

// -[SCVideoTranscodingCommandsGenerator setImageProcessData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10856b03c

// -[SCVideoTranscodingCommandsGenerator targetTrajectoryFactory]
// Type encoding: @16@0:8
// Implementation: 0x10856b06c

// -[SCVideoTranscodingCommandsGenerator setTargetTrajectoryFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10856b074

// -[SCVideoTranscodingCommandsGenerator setOverlayImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10856b0a4

// -[SCVideoTranscodingCommandsGenerator videoTrackedImages]
// Type encoding: @16@0:8
// Implementation: 0x10856b0d4

// -[SCVideoTranscodingCommandsGenerator setVideoTrackedImages:]
// Type encoding: v24@0:8@16
// Implementation: 0x10856b0dc

// -[SCVideoTranscodingCommandsGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10856b10c

@end
