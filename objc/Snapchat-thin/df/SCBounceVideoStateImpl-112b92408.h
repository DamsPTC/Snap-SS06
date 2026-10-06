// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBounceVideoStateImpl
// Superclass: NSObject
// Address: 0x112b92408

@interface SCBounceVideoStateImpl

// Property: bounceProcessingBlock; attributes: T@?,C,N,V_bounceProcessingBlock
// Property: videoDuration; attributes: Td,R,N,V_videoDuration
// Property: bounceOffset; attributes: Td,N,V_bounceOffset
// Property: bounceVideoDuration; attributes: Td,R,N,V_bounceVideoDuration
// Property: bounceAsset; attributes: T@"AVAsset",R,N,V_bounceAsset
// Property: originalAsset; attributes: T@"AVAsset",R,N,V_originalAsset
// Property: highOutputFramerate; attributes: TB,N,V_highOutputFramerate
// Property: outputSpeedFactor; attributes: Td,N,V_outputSpeedFactor
// Property: normalizeOutputDuration; attributes: TB,N,V_normalizeOutputDuration
// Property: removeDuplicateKeyFrames; attributes: TB,N,V_removeDuplicateKeyFrames
// Property: removeDuplicateEndFrames; attributes: TB,N,V_removeDuplicateEndFrames
// Property: useCustomBezierCurve; attributes: TB,N,V_useCustomBezierCurve
// Property: customBezierControlPoint1; attributes: T{CGPoint=dd},N,V_customBezierControlPoint1
// Property: customBezierControlPoint2; attributes: T{CGPoint=dd},N,V_customBezierControlPoint2
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBounceVideoStateImpl initWithVideoAsset:bounceVideoDuration:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x108001694

// -[SCBounceVideoStateImpl removeBounceVideoIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108001760

// -[SCBounceVideoStateImpl setHighOutputFramerate:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080017c8

// -[SCBounceVideoStateImpl generateBounceVideoWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080017e4

// -[SCBounceVideoStateImpl generateBounceVideoSynchronously]
// Type encoding: v16@0:8
// Implementation: 0x108001b68

// -[SCBounceVideoStateImpl generateBounceVideoSynchronouslyWithRepeatCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108001bd8

// -[SCBounceVideoStateImpl timestampOfOriginalVideoForBounceVideoTimestamp:]
// Type encoding: {?=qiIq}40@0:8{?=qiIq}16
// Implementation: 0x108001c4c

// -[SCBounceVideoStateImpl _bezierYValuesWithPointA:pointB:xCount:]
// Type encoding: @52@0:8{CGPoint=dd}16{CGPoint=dd}32i48
// Implementation: 0x108001e58

// -[SCBounceVideoStateImpl _bounceKeyFrames]
// Type encoding: @16@0:8
// Implementation: 0x10800201c

// -[SCBounceVideoStateImpl _bounceAssetWithAsset:keyFrames:timeOffset:loopCount:]
// Type encoding: @48@0:8@16@24d32q40
// Implementation: 0x108002238

// -[SCBounceVideoStateImpl videoDuration]
// Type encoding: d16@0:8
// Implementation: 0x108002c94

// -[SCBounceVideoStateImpl bounceOffset]
// Type encoding: d16@0:8
// Implementation: 0x108002c9c

// -[SCBounceVideoStateImpl setBounceOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x108002ca4

// -[SCBounceVideoStateImpl bounceVideoDuration]
// Type encoding: d16@0:8
// Implementation: 0x108002cac

// -[SCBounceVideoStateImpl bounceAsset]
// Type encoding: @16@0:8
// Implementation: 0x108002cb4

// -[SCBounceVideoStateImpl originalAsset]
// Type encoding: @16@0:8
// Implementation: 0x108002cbc

// -[SCBounceVideoStateImpl highOutputFramerate]
// Type encoding: B16@0:8
// Implementation: 0x108002cc4

// -[SCBounceVideoStateImpl outputSpeedFactor]
// Type encoding: d16@0:8
// Implementation: 0x108002ccc

// -[SCBounceVideoStateImpl setOutputSpeedFactor:]
// Type encoding: v24@0:8d16
// Implementation: 0x108002cd4

// -[SCBounceVideoStateImpl normalizeOutputDuration]
// Type encoding: B16@0:8
// Implementation: 0x108002cdc

// -[SCBounceVideoStateImpl setNormalizeOutputDuration:]
// Type encoding: v20@0:8B16
// Implementation: 0x108002ce4

// -[SCBounceVideoStateImpl removeDuplicateKeyFrames]
// Type encoding: B16@0:8
// Implementation: 0x108002cec

// -[SCBounceVideoStateImpl setRemoveDuplicateKeyFrames:]
// Type encoding: v20@0:8B16
// Implementation: 0x108002cf4

// -[SCBounceVideoStateImpl removeDuplicateEndFrames]
// Type encoding: B16@0:8
// Implementation: 0x108002cfc

// -[SCBounceVideoStateImpl setRemoveDuplicateEndFrames:]
// Type encoding: v20@0:8B16
// Implementation: 0x108002d04

// -[SCBounceVideoStateImpl useCustomBezierCurve]
// Type encoding: B16@0:8
// Implementation: 0x108002d0c

// -[SCBounceVideoStateImpl setUseCustomBezierCurve:]
// Type encoding: v20@0:8B16
// Implementation: 0x108002d14

// -[SCBounceVideoStateImpl customBezierControlPoint1]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108002d1c

// -[SCBounceVideoStateImpl setCustomBezierControlPoint1:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x108002d24

// -[SCBounceVideoStateImpl customBezierControlPoint2]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108002d2c

// -[SCBounceVideoStateImpl setCustomBezierControlPoint2:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x108002d34

// -[SCBounceVideoStateImpl bounceProcessingBlock]
// Type encoding: @?16@0:8
// Implementation: 0x108002d3c

// -[SCBounceVideoStateImpl setBounceProcessingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108002d44

// -[SCBounceVideoStateImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108002d4c

// +[SCBounceVideoStateImpl bounceVideoPerformer]
// Type encoding: @16@0:8
// Implementation: 0x108001534

// +[SCBounceVideoStateImpl emptyBounceVideoStateForVideoAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080015cc

// +[SCBounceVideoStateImpl emptyBounceVideoStateForVideoAsset:bounceVideoDuration:outputSpeedFactor:normalizeOutputDuration:]
// Type encoding: @44@0:8@16d24d32B40
// Implementation: 0x1080015e0

@end
