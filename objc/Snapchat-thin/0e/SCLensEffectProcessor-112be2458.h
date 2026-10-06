// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensEffectProcessor
// Superclass: NSObject
// Address: 0x112be2458

@interface SCLensEffectProcessor

// Property: processingMode; attributes: Tq,N,V_processingMode
// Property: shouldProcessARFrames; attributes: TB,VshouldProcessARFrames
// Property: processingFileStream; attributes: TB,VprocessingFileStream
// Property: useOutput; attributes: TB,VuseOutput
// Property: useTimestampAsCurrentTime; attributes: TB,VuseTimestampAsCurrentTime
// Property: isTranscoding; attributes: TB,VisTranscoding
// Property: orientation; attributes: Tq,V_orientation
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensEffectProcessor initWithVideoProcessingComponent:configuration:lensProcessingSettings:performer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x109039f78

// -[SCLensEffectProcessor _setUpObservableSubscriptions]
// Type encoding: v16@0:8
// Implementation: 0x10903a0d8

// -[SCLensEffectProcessor setProcessingMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x10903a538

// -[SCLensEffectProcessor frameOrientation]
// Type encoding: q16@0:8
// Implementation: 0x10903a558

// -[SCLensEffectProcessor processPixelBuffer:inputSource:timestamp:error:]
// Type encoding: @64@0:8^{__CVBuffer=}16Q24{?=qiIq}32^@56
// Implementation: 0x10903a56c

// -[SCLensEffectProcessor processPixelBufferToImage:orientation:inputSource:timestamp:error:]
// Type encoding: @72@0:8^{__CVBuffer=}16q24Q32{?=qiIq}40^@64
// Implementation: 0x10903a710

// -[SCLensEffectProcessor resetProcessor]
// Type encoding: v16@0:8
// Implementation: 0x10903a948

// -[SCLensEffectProcessor setOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10903a98c

// -[SCLensEffectProcessor _initializeCOFValues]
// Type encoding: v16@0:8
// Implementation: 0x10903aa14

// -[SCLensEffectProcessor _configureProcessingInfo]
// Type encoding: v16@0:8
// Implementation: 0x10903aacc

// -[SCLensEffectProcessor _updateProcessingResolutionForPixelBuffer:]
// Type encoding: v24@0:8^{__CVBuffer=}16
// Implementation: 0x10903ab58

// -[SCLensEffectProcessor _setupProcessingForInputSource:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10903ac58

// -[SCLensEffectProcessor _updateProcessingModeAfterSavingWithInputSource:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10903ac74

// -[SCLensEffectProcessor _processingInfoForInputSource:timestamp:pixelBufferOrientation:]
// Type encoding: @56@0:8Q16{?=qiIq}24q48
// Implementation: 0x10903ac94

// -[SCLensEffectProcessor _processingInfoForInputSource:timestamp:pixelBufferOrientation:inputTextureOrientation:outputTextureOrientation:]
// Type encoding: @72@0:8Q16{?=qiIq}24q48q56q64
// Implementation: 0x10903acd4

// -[SCLensEffectProcessor shouldProcessARFrames]
// Type encoding: B16@0:8
// Implementation: 0x10903af90

// -[SCLensEffectProcessor setShouldProcessARFrames:]
// Type encoding: v20@0:8B16
// Implementation: 0x10903af9c

// -[SCLensEffectProcessor processingFileStream]
// Type encoding: B16@0:8
// Implementation: 0x10903afa4

// -[SCLensEffectProcessor setProcessingFileStream:]
// Type encoding: v20@0:8B16
// Implementation: 0x10903afb0

// -[SCLensEffectProcessor orientation]
// Type encoding: q16@0:8
// Implementation: 0x10903afb8

// -[SCLensEffectProcessor useOutput]
// Type encoding: B16@0:8
// Implementation: 0x10903afc0

// -[SCLensEffectProcessor setUseOutput:]
// Type encoding: v20@0:8B16
// Implementation: 0x10903afcc

// -[SCLensEffectProcessor useTimestampAsCurrentTime]
// Type encoding: B16@0:8
// Implementation: 0x10903afd4

// -[SCLensEffectProcessor setUseTimestampAsCurrentTime:]
// Type encoding: v20@0:8B16
// Implementation: 0x10903afe0

// -[SCLensEffectProcessor isTranscoding]
// Type encoding: B16@0:8
// Implementation: 0x10903afe8

// -[SCLensEffectProcessor setIsTranscoding:]
// Type encoding: v20@0:8B16
// Implementation: 0x10903aff4

// -[SCLensEffectProcessor processingMode]
// Type encoding: q16@0:8
// Implementation: 0x10903affc

// -[SCLensEffectProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10903b004

@end
