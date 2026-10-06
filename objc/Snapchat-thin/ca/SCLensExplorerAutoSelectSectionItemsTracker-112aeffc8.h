// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerAutoSelectSectionItemsTracker
// Superclass: NSObject
// Address: 0x112aeffc8

@interface SCLensExplorerAutoSelectSectionItemsTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerAutoSelectSectionItemsTracker initWithLensAutoSelection:lensExplorerRouter:sections:dataStoreFactory:selectionTracker:selectionUpdatesPerformer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1066d2f3c

// -[SCLensExplorerAutoSelectSectionItemsTracker startTracking]
// Type encoding: v16@0:8
// Implementation: 0x1066d3088

// -[SCLensExplorerAutoSelectSectionItemsTracker stopTracking]
// Type encoding: v16@0:8
// Implementation: 0x1066d33b4

// -[SCLensExplorerAutoSelectSectionItemsTracker _trackingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1066d33e0

// -[SCLensExplorerAutoSelectSectionItemsTracker _sectionItemsObservableForSection:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066d34b0

// -[SCLensExplorerAutoSelectSectionItemsTracker _handleUpdateForSection:withItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066d35c4

// -[SCLensExplorerAutoSelectSectionItemsTracker _autoSelectFirstLensFromItems:sectionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066d3790

// -[SCLensExplorerAutoSelectSectionItemsTracker _autoSelectRandomLensFromItems:sectionId:inRange:]
// Type encoding: v48@0:8@16@24{_NSRange=QQ}32
// Implementation: 0x1066d38dc

// -[SCLensExplorerAutoSelectSectionItemsTracker _handleAutoSelectedItem:sectionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066d39a8

// -[SCLensExplorerAutoSelectSectionItemsTracker _pickItemFromLensItem:sectionId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066d3a5c

// -[SCLensExplorerAutoSelectSectionItemsTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066d3ae0

@end
