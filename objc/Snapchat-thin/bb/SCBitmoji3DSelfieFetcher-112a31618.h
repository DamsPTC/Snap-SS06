// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmoji3DSelfieFetcher
// Superclass: NSObject
// Address: 0x112a31618

@interface SCBitmoji3DSelfieFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmoji3DSelfieFetcher initWithFlatlandContentFetcher:selfieIdModifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053ca5ac

// -[SCBitmoji3DSelfieFetcher fetchSelfieRequest:contexts:feature:shouldDecode:completionQueue:completion:]
// Type encoding: @56@0:8@16@24i32B36@40@?48
// Implementation: 0x1053ca650

// -[SCBitmoji3DSelfieFetcher isSelfieCached:]
// Type encoding: B24@0:8@16
// Implementation: 0x1053ca7a8

// -[SCBitmoji3DSelfieFetcher _fetch3DSelfieRequest:preferredSelfieId:feature:shouldDecode:completionQueue:completion:]
// Type encoding: @56@0:8@16@24i32B36@40@?48
// Implementation: 0x1053ca7b0

// -[SCBitmoji3DSelfieFetcher _fetch3DSelfieRequest:mappedSelfieId:cancelableGroup:feature:shouldDecode:completionQueue:completion:]
// Type encoding: v64@0:8@16@24@32i40B44@48@?56
// Implementation: 0x1053ca8b8

// -[SCBitmoji3DSelfieFetcher _fetch3DSelfieImageForSceneRequest:selfieRequest:selfieId:feature:cancelableGroup:completionQueue:completion:]
// Type encoding: @68@0:8@16@24@32i40@44@52@?60
// Implementation: 0x1053cac3c

// -[SCBitmoji3DSelfieFetcher _fetch3DSelfieImageDataForSceneRequest:selfieRequest:selfieId:feature:cancelableGroup:completionQueue:completion:]
// Type encoding: @68@0:8@16@24@32i40@44@52@?60
// Implementation: 0x1053caf70

// -[SCBitmoji3DSelfieFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053cb0f0

@end
