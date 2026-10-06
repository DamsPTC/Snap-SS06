// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToPanGestureActionHandler
// Superclass: NSObject
// Address: 0x112aa29f8

@interface SCSendToPanGestureActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToPanGestureActionHandler initWithDelegate:scrollOnSelectEnabled:scrollByOneCellEnabled:respectDragMode:sectionsAllowlist:]
// Type encoding: @44@0:8@16B24B28B32@36
// Implementation: 0x105e59f34

// -[SCSendToPanGestureActionHandler gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105e5a034

// -[SCSendToPanGestureActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105e5a03c

// -[SCSendToPanGestureActionHandler _saveSourceViewIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5a180

// -[SCSendToPanGestureActionHandler _setDragSelectionMode:indexPath:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105e5a21c

// -[SCSendToPanGestureActionHandler _handleLongPressGestureForActionModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x105e5a2f8

// -[SCSendToPanGestureActionHandler _handlePanGestureForActionModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x105e5a41c

// -[SCSendToPanGestureActionHandler _selectCellWithGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e5a500

// -[SCSendToPanGestureActionHandler _scrollByOneCellWithIndexPath:previousIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e5a644

// -[SCSendToPanGestureActionHandler _getCurrentSelectedIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e5a7bc

// -[SCSendToPanGestureActionHandler _getRecipientCellFromIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e5a870

// -[SCSendToPanGestureActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e5a91c

@end
