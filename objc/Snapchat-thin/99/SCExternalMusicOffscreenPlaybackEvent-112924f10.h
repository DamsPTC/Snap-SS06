// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExternalMusicOffscreenPlaybackEvent
// Superclass: NSObject
// Address: 0x112924f10

@interface SCExternalMusicOffscreenPlaybackEvent

// Property: lensId; attributes: T@"NSString",N,R
// Property: trackId; attributes: TQ,N,R,VtrackId
// Property: playerOffsetMS; attributes: Td,N,R,VplayerOffsetMS
// Property: state; attributes: T@"SCExternalMusicOffscreenPlaybackState",N,R,Vstate
// Property: description; attributes: T@"NSString",N,R

// -[SCExternalMusicOffscreenPlaybackEvent lensId]
// Type encoding: @16@0:8
// Implementation: 0x103ad0760

// -[SCExternalMusicOffscreenPlaybackEvent trackId]
// Type encoding: Q16@0:8
// Implementation: 0x103ad076c

// -[SCExternalMusicOffscreenPlaybackEvent playerOffsetMS]
// Type encoding: d16@0:8
// Implementation: 0x103ad077c

// -[SCExternalMusicOffscreenPlaybackEvent state]
// Type encoding: @16@0:8
// Implementation: 0x103ad078c

// -[SCExternalMusicOffscreenPlaybackEvent initWithLensId:trackId:playerOffsetMS:state:]
// Type encoding: @48@0:8@16Q24d32@40
// Implementation: 0x103ad0838

// -[SCExternalMusicOffscreenPlaybackEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x103ad103c

// -[SCExternalMusicOffscreenPlaybackEvent description]
// Type encoding: @16@0:8
// Implementation: 0x103ad1030

// -[SCExternalMusicOffscreenPlaybackEvent init]
// Type encoding: @16@0:8
// Implementation: 0x103ad0ab4

// -[SCExternalMusicOffscreenPlaybackEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103ad0afc

@end
