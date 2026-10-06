// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlaylistItemGroupImpl
// Superclass: NSObject
// Address: 0x112adba28

@interface SCOperaPlaylistItemGroupImpl

// Property: type; attributes: T@"NSString",R,C,N,V_type
// Property: _id; attributes: T@"NSString",R,C,N,V__id
// Property: swipeToDismissEnabled; attributes: TB,R,N,V_swipeToDismissEnabled
// Property: forwardAutoAdvanceEnabled; attributes: TB,N,V_forwardAutoAdvanceEnabled
// Property: backwardsAutoAdvanceEnabled; attributes: TB,R,N,V_backwardsAutoAdvanceEnabled
// Property: items; attributes: T@"NSArray",R,C,N,V_items
// Property: currentItem; attributes: T@"SCOperaPlaylistItemImpl",&,N,V_currentItem
// Property: lockedForResolution; attributes: TB,N,V_lockedForResolution
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: group; attributes: T@"<SCOperaPlaylistItemGroup>",R,N

// -[SCOperaPlaylistItemGroupImpl initWithID:type:swipeToDismissEnabled:forwardAutoAdvanceEnabled:backwardsAutoAdvanceEnabled:]
// Type encoding: @44@0:8@16@24B32B36B40
// Implementation: 0x10634c5ac

// -[SCOperaPlaylistItemGroupImpl indexOfItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10634c678

// -[SCOperaPlaylistItemGroupImpl group]
// Type encoding: @16@0:8
// Implementation: 0x10634c68c

// -[SCOperaPlaylistItemGroupImpl resolveGroupWithItemModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634c690

// -[SCOperaPlaylistItemGroupImpl resolveGroupWithItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634c814

// -[SCOperaPlaylistItemGroupImpl resolveGroupWithItemModels:currentItemID:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10634caa8

// -[SCOperaPlaylistItemGroupImpl resolveGroupWithItems:currentItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10634cc44

// -[SCOperaPlaylistItemGroupImpl unresolveGroup]
// Type encoding: v16@0:8
// Implementation: 0x10634cf58

// -[SCOperaPlaylistItemGroupImpl insertItem:afterItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10634d068

// -[SCOperaPlaylistItemGroupImpl insertItemModel:afterItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10634d124

// -[SCOperaPlaylistItemGroupImpl insertItemModel:beforeItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10634d18c

// -[SCOperaPlaylistItemGroupImpl insertItem:beforeItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10634d1f4

// -[SCOperaPlaylistItemGroupImpl setInitialItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634d28c

// -[SCOperaPlaylistItemGroupImpl playlistItemsOfLength:]
// Type encoding: @24@0:8q16
// Implementation: 0x10634d3e8

// -[SCOperaPlaylistItemGroupImpl subItemArrayContainingSubItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634d440

// -[SCOperaPlaylistItemGroupImpl _playlistItemsFromIndex:toIndex:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x10634d4ac

// -[SCOperaPlaylistItemGroupImpl type]
// Type encoding: @16@0:8
// Implementation: 0x10634d514

// -[SCOperaPlaylistItemGroupImpl _id]
// Type encoding: @16@0:8
// Implementation: 0x10634d51c

// -[SCOperaPlaylistItemGroupImpl swipeToDismissEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10634d524

// -[SCOperaPlaylistItemGroupImpl forwardAutoAdvanceEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10634d52c

// -[SCOperaPlaylistItemGroupImpl setForwardAutoAdvanceEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10634d534

// -[SCOperaPlaylistItemGroupImpl backwardsAutoAdvanceEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10634d53c

// -[SCOperaPlaylistItemGroupImpl items]
// Type encoding: @16@0:8
// Implementation: 0x10634d544

// -[SCOperaPlaylistItemGroupImpl currentItem]
// Type encoding: @16@0:8
// Implementation: 0x10634d54c

// -[SCOperaPlaylistItemGroupImpl setCurrentItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634d554

// -[SCOperaPlaylistItemGroupImpl lockedForResolution]
// Type encoding: B16@0:8
// Implementation: 0x10634d584

// -[SCOperaPlaylistItemGroupImpl setLockedForResolution:]
// Type encoding: v20@0:8B16
// Implementation: 0x10634d58c

// -[SCOperaPlaylistItemGroupImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10634d594

// +[SCOperaPlaylistItemGroupImpl newWithModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634c4d8

@end
