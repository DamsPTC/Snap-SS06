// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBloopsTargetsServiceListenerAnnouncer
// Superclass: NSObject
// Address: 0x112be9140

@interface SCBloopsTargetsServiceListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBloopsTargetsServiceListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x109151694

// -[SCBloopsTargetsServiceListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x109151870

// -[SCBloopsTargetsServiceListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x109151ca4

// -[SCBloopsTargetsServiceListenerAnnouncer bloopsTargetsService:didUpdateUserBloopsTargetPolicy:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x109151ed4

// -[SCBloopsTargetsServiceListenerAnnouncer bloopsTargetsService:didUpdateUserBloopsAdsPolicy:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x109151ffc

// -[SCBloopsTargetsServiceListenerAnnouncer bloopsTargetsServiceDidStartDeleteUserTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x10915210c

// -[SCBloopsTargetsServiceListenerAnnouncer bloopsTargetsService:didFinishDeleteUserTargetWithSuccess:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x109152214

// -[SCBloopsTargetsServiceListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109152324

// -[SCBloopsTargetsServiceListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10915234c

@end
