// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureBounceImpl
// Superclass: NSObject
// Address: 0x112a9c558

@interface SCPreviewFeatureBounceImpl

// Property: delegate; attributes: T@"<SCPreviewFeatureBounceDelegate>",W,N,V_delegate
// Property: state; attributes: T@"<SCBounceVideoState>",&,N,V_state
// Property: isCurrentVideoBounceable; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewFeatureBounceImpl initWithConfiguration:videoPlayback:previewVideoProviderServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105d32a90

// -[SCPreviewFeatureBounceImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105d32b4c

// -[SCPreviewFeatureBounceImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d32b54

// -[SCPreviewFeatureBounceImpl isCurrentVideoBounceable]
// Type encoding: B16@0:8
// Implementation: 0x105d32b60

// -[SCPreviewFeatureBounceImpl startBounceAtSeconds:isPaused:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105d32c34

// -[SCPreviewFeatureBounceImpl showBounceVideoWithBounceOffset:toolbarItemSupportsBounce:completion:]
// Type encoding: v36@0:8d16B24@?28
// Implementation: 0x105d32d4c

// -[SCPreviewFeatureBounceImpl removeBounceVideoForNewBounceIncoming:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d3301c

// -[SCPreviewFeatureBounceImpl bounceOffset]
// Type encoding: @16@0:8
// Implementation: 0x105d33138

// -[SCPreviewFeatureBounceImpl isPlayingAboveMinimumFramerateThreshhold]
// Type encoding: d16@0:8
// Implementation: 0x105d33208

// -[SCPreviewFeatureBounceImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d33258

// -[SCPreviewFeatureBounceImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d33270

// -[SCPreviewFeatureBounceImpl state]
// Type encoding: @16@0:8
// Implementation: 0x105d3327c

// -[SCPreviewFeatureBounceImpl setState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d33284

// -[SCPreviewFeatureBounceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d332b4

@end
