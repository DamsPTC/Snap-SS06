// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensBaseProcessingStrategy
// Superclass: NSObject
// Address: 0x112be2278

@interface SCLensBaseProcessingStrategy

// Property: delegate; attributes: T@"<SCLensProcessingFPSTracking>",W,N,Vdelegate
// Property: useOutputTexture; attributes: TB,N,V_useOutputTexture
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isCanceled; attributes: TB,R,N

// -[SCLensBaseProcessingStrategy initWithEffectProcessor:effectApplicator:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1090379ec

// -[SCLensBaseProcessingStrategy setLensProcessingActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x109037a90

// -[SCLensBaseProcessingStrategy setUseOutputTexture:]
// Type encoding: v20@0:8B16
// Implementation: 0x109037a94

// -[SCLensBaseProcessingStrategy useOutputTexture]
// Type encoding: B16@0:8
// Implementation: 0x109037ac0

// -[SCLensBaseProcessingStrategy setupForSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x109037ac8

// -[SCLensBaseProcessingStrategy processSampleBuffer:inputSource:error:]
// Type encoding: @40@0:8@16Q24^@32
// Implementation: 0x109037b28

// -[SCLensBaseProcessingStrategy resetProcessor]
// Type encoding: v16@0:8
// Implementation: 0x109037b50

// -[SCLensBaseProcessingStrategy processPixelBufferToImage:orientation:inputSource:timestamp:error:]
// Type encoding: @72@0:8^{__CVBuffer=}16q24Q32{?=qiIq}40^@64
// Implementation: 0x109037b80

// -[SCLensBaseProcessingStrategy cancelEffectApplicationIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x109037b88

// -[SCLensBaseProcessingStrategy isCanceled]
// Type encoding: B16@0:8
// Implementation: 0x109037b8c

// -[SCLensBaseProcessingStrategy effectProcessor]
// Type encoding: @16@0:8
// Implementation: 0x109037b94

// -[SCLensBaseProcessingStrategy effectApplicator]
// Type encoding: @16@0:8
// Implementation: 0x109037bbc

// -[SCLensBaseProcessingStrategy retainSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x109037be4

// -[SCLensBaseProcessingStrategy releaseSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x109037c34

// -[SCLensBaseProcessingStrategy delegate]
// Type encoding: @16@0:8
// Implementation: 0x109037c7c

// -[SCLensBaseProcessingStrategy setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x109037c94

// -[SCLensBaseProcessingStrategy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109037ca0

@end
