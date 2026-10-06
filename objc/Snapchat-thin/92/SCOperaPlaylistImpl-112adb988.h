// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlaylistImpl
// Superclass: NSObject
// Address: 0x112adb988

@interface SCOperaPlaylistImpl

// Property: groups; attributes: T@"NSArray",R,C,N,V_groups
// Property: currentGroup; attributes: T@"SCOperaPlaylistItemGroupImpl",&,N,V_currentGroup
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaPlaylistImpl initWithCurrentGroup:groups:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10634b190

// -[SCOperaPlaylistImpl groupAfter:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634b378

// -[SCOperaPlaylistImpl groupBefore:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634b4bc

// -[SCOperaPlaylistImpl removeItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634b5f0

// -[SCOperaPlaylistImpl groupForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634b70c

// -[SCOperaPlaylistImpl removeGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634b714

// -[SCOperaPlaylistImpl updateWithPlaylistGroups:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634b7ec

// -[SCOperaPlaylistImpl insertPlaylistItemGroup:afterPlaylistItemGroup:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x10634ba94

// -[SCOperaPlaylistImpl groups]
// Type encoding: @16@0:8
// Implementation: 0x10634bbe0

// -[SCOperaPlaylistImpl currentGroup]
// Type encoding: @16@0:8
// Implementation: 0x10634bbe8

// -[SCOperaPlaylistImpl setCurrentGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634bbf0

// -[SCOperaPlaylistImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10634bc20

@end
