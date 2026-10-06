// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaRemoteVideoState
// Superclass: NSObject
// Address: 0x112b73a58

@interface SCOperaRemoteVideoState

// Property: isViewVisible; attributes: TB,N,V_isViewVisible
// Property: stateTagHistory; attributes: T@"NSMutableArray",&,N,V_stateTagHistory
// Property: stateTag; attributes: Tq,N,V_stateTag
// Property: delegate; attributes: T@"<SCOperaRemoteVideoStateDelegate>",W,N,V_delegate
// Property: preloadHelper; attributes: T@"<SCOperaRemoteVideoPreloadStrategy>",W,N,V_preloadHelper

// -[SCOperaRemoteVideoState shouldShowActivityIndicator]
// Type encoding: B16@0:8
// Implementation: 0x107b8409c

// -[SCOperaRemoteVideoState shouldShowPlayButton]
// Type encoding: B16@0:8
// Implementation: 0x107b840c8

// -[SCOperaRemoteVideoState shouldShowPlayerView]
// Type encoding: B16@0:8
// Implementation: 0x107b840f0

// -[SCOperaRemoteVideoState initWithDelegate:preloadHelper:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107b8411c

// -[SCOperaRemoteVideoState setStateTag:]
// Type encoding: v24@0:8q16
// Implementation: 0x107b841b8

// -[SCOperaRemoteVideoState clear]
// Type encoding: v16@0:8
// Implementation: 0x107b8426c

// -[SCOperaRemoteVideoState updateWithAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x107b842b0

// -[SCOperaRemoteVideoState delegate]
// Type encoding: @16@0:8
// Implementation: 0x107b8495c

// -[SCOperaRemoteVideoState setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b84974

// -[SCOperaRemoteVideoState preloadHelper]
// Type encoding: @16@0:8
// Implementation: 0x107b84980

// -[SCOperaRemoteVideoState setPreloadHelper:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b84998

// -[SCOperaRemoteVideoState stateTag]
// Type encoding: q16@0:8
// Implementation: 0x107b849a4

// -[SCOperaRemoteVideoState isViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x107b849ac

// -[SCOperaRemoteVideoState setIsViewVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b849b4

// -[SCOperaRemoteVideoState stateTagHistory]
// Type encoding: @16@0:8
// Implementation: 0x107b849bc

// -[SCOperaRemoteVideoState setStateTagHistory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b849c4

// -[SCOperaRemoteVideoState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b849f4

// +[SCOperaRemoteVideoState descriptionForStateTag:]
// Type encoding: @24@0:8q16
// Implementation: 0x107b84918

// +[SCOperaRemoteVideoState descriptionForAction:]
// Type encoding: @24@0:8q16
// Implementation: 0x107b8493c

@end
