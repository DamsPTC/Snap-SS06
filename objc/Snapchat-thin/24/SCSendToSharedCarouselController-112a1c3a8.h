// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToSharedCarouselController
// Superclass: NSObject
// Address: 0x112a1c3a8

@interface SCSendToSharedCarouselController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToSharedCarouselController initWithSnapchattersDataFetcher:groupsDataFetcher:userSession:displayNameProvider:usernameProvider:shortcutsDataFetcher:shortcutsInteractionMutator:sendToLogger:grapheneRegistry:circumstanceEngine:shortcutsCarouselScopeServices:shortcutsCarouselScopeExposer:sessionId:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x105158d1c

// -[SCSendToSharedCarouselController setUpWithSendToTracker:uiContainer:viewUpdaterDelegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105159128

// -[SCSendToSharedCarouselController startSession]
// Type encoding: v16@0:8
// Implementation: 0x1051595b4

// -[SCSendToSharedCarouselController end]
// Type encoding: v16@0:8
// Implementation: 0x105159600

// -[SCSendToSharedCarouselController viewWillDisappear]
// Type encoding: v16@0:8
// Implementation: 0x105159654

// -[SCSendToSharedCarouselController carouselDidSelectShortcutWithIdentifier:name:shortcutType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1051596f4

// -[SCSendToSharedCarouselController carouselDidDoubleTapShortcutWithIdentifier:name:shortcutType:wasAlreadySelected:]
// Type encoding: v44@0:8@16@24Q32B40
// Implementation: 0x10515997c

// -[SCSendToSharedCarouselController carouselDidUpdateRegisteredPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x105159a30

// -[SCSendToSharedCarouselController carouselDidResetPicker]
// Type encoding: v16@0:8
// Implementation: 0x105159a34

// -[SCSendToSharedCarouselController _subscribeToSendToEventsWithTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x105159b24

// -[SCSendToSharedCarouselController _handleSendToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105159cc0

// -[SCSendToSharedCarouselController carouselDidUpdateDisplayedShortcuts:]
// Type encoding: v24@0:8@16
// Implementation: 0x105159e3c

// -[SCSendToSharedCarouselController _clearCarouselSelection]
// Type encoding: v16@0:8
// Implementation: 0x105159f7c

// -[SCSendToSharedCarouselController _clearCarouselSelectionOnPerformer]
// Type encoding: v16@0:8
// Implementation: 0x10515a050

// -[SCSendToSharedCarouselController _hideCarousel]
// Type encoding: v16@0:8
// Implementation: 0x10515a0b4

// -[SCSendToSharedCarouselController _showCarousel]
// Type encoding: v16@0:8
// Implementation: 0x10515a0e4

// -[SCSendToSharedCarouselController _selectListWithIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10515a118

// -[SCSendToSharedCarouselController _clearListSelection]
// Type encoding: v16@0:8
// Implementation: 0x10515a66c

// -[SCSendToSharedCarouselController _clearListsSelectionIfNecessaryWithShortcuts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10515a6d8

// -[SCSendToSharedCarouselController _selectedListIsRemovedFromUpdatedShortcuts:selectedListId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10515a724

// -[SCSendToSharedCarouselController _selectAllListRecipientsEnabledWithShortcutId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10515a888

// -[SCSendToSharedCarouselController _handleShortcutSelectionWithIdentifier:forceSelection:logContext:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10515a8e8

// -[SCSendToSharedCarouselController _toggleAllListRecipientsWithShortcuts:shortcutId:forceSelection:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10515ab00

// -[SCSendToSharedCarouselController _toggleAllListRecipientsWithShortcutRecipients:shortcutId:isContextual:forceSelection:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x10515adf0

// -[SCSendToSharedCarouselController _toggleAllListRecipientsWithSnapchatterUserIds:groups:source:forceSelection:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x10515b074

// -[SCSendToSharedCarouselController _setSelectionTrackerWithSnapchatters:groups:source:forceSelection:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x10515b23c

// -[SCSendToSharedCarouselController _selectionGroupsWithGroupIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10515b3c0

// -[SCSendToSharedCarouselController _mapSelectionTrackerToRecipientChanges:]
// Type encoding: @24@0:8@16
// Implementation: 0x10515b674

// -[SCSendToSharedCarouselController _logShortcutsDataModelAsLists:]
// Type encoding: v24@0:8@16
// Implementation: 0x10515ba38

// -[SCSendToSharedCarouselController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10515c1ec

@end
