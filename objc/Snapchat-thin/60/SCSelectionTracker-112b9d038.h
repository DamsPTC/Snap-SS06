// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSelectionTracker
// Superclass: NSObject
// Address: 0x112b9d038

@interface SCSelectionTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSelectionTracker initWithSnapchatterServices:sigNotificationPool:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108426150

// -[SCSelectionTracker registerSelectionInterceptors:]
// Type encoding: v24@0:8@16
// Implementation: 0x108426500

// -[SCSelectionTracker setSelectionItems:disabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108426530

// -[SCSelectionTracker setSelectionItem:isSelected:source:]
// Type encoding: B36@0:8@16B24@28
// Implementation: 0x108426740

// -[SCSelectionTracker setSelectionItems:isSelected:source:]
// Type encoding: B36@0:8@16B24@28
// Implementation: 0x10842719c

// -[SCSelectionTracker setSelectionParticipant:isSelected:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108427a30

// -[SCSelectionTracker updateSelectionItemTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10842807c

// -[SCSelectionTracker updateSelectionItemAdditionalData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084283dc

// -[SCSelectionTracker selectionStatesForIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x108428650

// -[SCSelectionTracker disabledStatesForIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084288c8

// -[SCSelectionTracker orderedSelectedItems]
// Type encoding: @16@0:8
// Implementation: 0x108428b2c

// -[SCSelectionTracker selectedItemsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108428cac

// -[SCSelectionTracker orderedSelectionItemAttributions]
// Type encoding: @16@0:8
// Implementation: 0x108428cd4

// -[SCSelectionTracker deltaSelectionStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x108428e14

// -[SCSelectionTracker deltaItemUpdatesObservable]
// Type encoding: @16@0:8
// Implementation: 0x108428e3c

// -[SCSelectionTracker orderedSelectedIdentifiersObservable]
// Type encoding: @16@0:8
// Implementation: 0x108428e64

// -[SCSelectionTracker orderedSelectedParticipants]
// Type encoding: @16@0:8
// Implementation: 0x108428e8c

// -[SCSelectionTracker selectionParticipantsUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x108428f7c

// -[SCSelectionTracker updatedSelectionItemTitleObservable]
// Type encoding: @16@0:8
// Implementation: 0x108428fa4

// -[SCSelectionTracker dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108428fcc

// -[SCSelectionTracker didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108429050

// -[SCSelectionTracker didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108429054

// -[SCSelectionTracker _shouldInterceptSelectionWithSelectionItem:isSelected:wasSelected:]
// Type encoding: B32@0:8@16B24B28
// Implementation: 0x108429194

// -[SCSelectionTracker _getMaxDestinationCount]
// Type encoding: @16@0:8
// Implementation: 0x1084292e4

// -[SCSelectionTracker _shouldDisableSelectionWithSelectionItemCount:isSelected:source:]
// Type encoding: B36@0:8q16B24@28
// Implementation: 0x108429314

// -[SCSelectionTracker _presentErrorToast]
// Type encoding: v16@0:8
// Implementation: 0x1084293b0

// -[SCSelectionTracker _nextSelectionParticipantUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x10842943c

// -[SCSelectionTracker _associatedParticipantsForIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084297b8

// -[SCSelectionTracker _removeSnapchater:]
// Type encoding: v24@0:8@16
// Implementation: 0x108429880

// -[SCSelectionTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108429988

@end
