// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPipCallSessionImpl
// Superclass: NSObject
// Address: 0x112ba9a18

@interface SCPipCallSessionImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: pipInfoObservable; attributes: T@"SCObservable",R,N
// Property: lensToRestore; attributes: T@"SCLens",R,N
// Property: cameraType; attributes: TQ,R,N
// Property: hasLocalVideoPublishIntent; attributes: TB,R,N
// Property: isStashed; attributes: TB,N

// -[SCPipCallSessionImpl initWithSessionWrapper:identityServices:cameraServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1085dc9bc

// -[SCPipCallSessionImpl pipInfoObservable]
// Type encoding: @16@0:8
// Implementation: 0x1085dcba8

// -[SCPipCallSessionImpl lensToRestore]
// Type encoding: @16@0:8
// Implementation: 0x1085dce70

// -[SCPipCallSessionImpl cameraType]
// Type encoding: Q16@0:8
// Implementation: 0x1085dced0

// -[SCPipCallSessionImpl hasLocalVideoPublishIntent]
// Type encoding: B16@0:8
// Implementation: 0x1085dcf08

// -[SCPipCallSessionImpl isStashed]
// Type encoding: B16@0:8
// Implementation: 0x1085dcf88

// -[SCPipCallSessionImpl setIsStashed:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085dcf90

// -[SCPipCallSessionImpl activateForIsInAppPip:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085dcfd8

// -[SCPipCallSessionImpl background]
// Type encoding: v16@0:8
// Implementation: 0x1085dd020

// -[SCPipCallSessionImpl setLocalVideoPaused:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085dd060

// -[SCPipCallSessionImpl dispose]
// Type encoding: v16@0:8
// Implementation: 0x1085dd09c

// -[SCPipCallSessionImpl createVideoViewWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1085dd0ec

// -[SCPipCallSessionImpl onUserVideoStreamVisibilityChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085dd150

// -[SCPipCallSessionImpl sessionWrapper:updatedState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085dd1c4

// -[SCPipCallSessionImpl sessionWrapper:updatedUsersTalking:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085dd1d0

// -[SCPipCallSessionImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085dd1dc

@end
