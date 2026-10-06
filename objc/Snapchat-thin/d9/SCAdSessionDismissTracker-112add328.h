// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSessionDismissTracker
// Superclass: NSObject
// Address: 0x112add328

@interface SCAdSessionDismissTracker

// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: totalTimeItemUnviewedSeconds; attributes: Td,R,N

// -[SCAdSessionDismissTracker initWithAdDataSource:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063a2da8

// -[SCAdSessionDismissTracker totalTimeItemUnviewedSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1063a2e38

// -[SCAdSessionDismissTracker itemDismissStarted:]
// Type encoding: v24@0:8d16
// Implementation: 0x1063a2e40

// -[SCAdSessionDismissTracker itemDismissCancelled:]
// Type encoding: v24@0:8d16
// Implementation: 0x1063a2e44

// -[SCAdSessionDismissTracker reset]
// Type encoding: v16@0:8
// Implementation: 0x1063a2e48

// -[SCAdSessionDismissTracker registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1063a2e4c

// -[SCAdSessionDismissTracker operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063a2f28

// -[SCAdSessionDismissTracker playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1063a3110

// -[SCAdSessionDismissTracker setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063a3128

// -[SCAdSessionDismissTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063a3134

@end
