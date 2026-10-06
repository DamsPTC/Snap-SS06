// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingFPSTracker
// Superclass: NSObject
// Address: 0x112bbb7b8

@interface SCLensProcessingFPSTracker

// Property: isRecording; attributes: TB,V_isRecording
// Property: loadedEffectIds; attributes: T@"NSSet",&,V_loadedEffectIds
// Property: fpsInfoUIUpdateObservable; attributes: T@"SCObservable",R,N
// Property: fpsInfoLoggingObservable; attributes: T@"SCObservable",R,N
// Property: firstFrameRenderedObservable; attributes: T@"SCObservable",R,N,V_firstFrameRenderedObservable
// Property: currentFPSInfo; attributes: T@"SCLensProcessingFPSInfo",R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensProcessingFPSTracker initWithEffectApplicator:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108c93ddc

// -[SCLensProcessingFPSTracker fpsInfoUIUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c9400c

// -[SCLensProcessingFPSTracker fpsInfoLoggingObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c94150

// -[SCLensProcessingFPSTracker _createFirstFrameRenderedObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c94278

// -[SCLensProcessingFPSTracker currentFPSInfo]
// Type encoding: @16@0:8
// Implementation: 0x108c943a4

// -[SCLensProcessingFPSTracker didProcessEffects:latency:inputSource:]
// Type encoding: v40@0:8@16d24Q32
// Implementation: 0x108c94478

// -[SCLensProcessingFPSTracker didDrawSampleBuffer:latency:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108c94504

// -[SCLensProcessingFPSTracker didDrawTextureWithEffects:latency:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108c945f4

// -[SCLensProcessingFPSTracker _setLoadedEffects:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c94694

// -[SCLensProcessingFPSTracker _subscribeOnApplicator:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c94710

// -[SCLensProcessingFPSTracker _resetTracking]
// Type encoding: v16@0:8
// Implementation: 0x108c948dc

// -[SCLensProcessingFPSTracker firstFrameRenderedObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c94904

// -[SCLensProcessingFPSTracker isRecording]
// Type encoding: B16@0:8
// Implementation: 0x108c9490c

// -[SCLensProcessingFPSTracker setIsRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x108c94918

// -[SCLensProcessingFPSTracker loadedEffectIds]
// Type encoding: @16@0:8
// Implementation: 0x108c94920

// -[SCLensProcessingFPSTracker setLoadedEffectIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c9492c

// -[SCLensProcessingFPSTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c94934

@end
