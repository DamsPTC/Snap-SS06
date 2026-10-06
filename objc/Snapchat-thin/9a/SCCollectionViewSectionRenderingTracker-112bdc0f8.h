// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCollectionViewSectionRenderingTracker
// Superclass: NSObject
// Address: 0x112bdc0f8

@interface SCCollectionViewSectionRenderingTracker

// Property: areSectionsRendered; attributes: TB,R,N,V_areSectionsRendered

// -[SCCollectionViewSectionRenderingTracker initWithCollectionViewUpdater:collectionView:performer:sectionRenderingSource:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108f840a4

// -[SCCollectionViewSectionRenderingTracker queryResultDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x108f8425c

// -[SCCollectionViewSectionRenderingTracker forceRenderingCompletion]
// Type encoding: v16@0:8
// Implementation: 0x108f843ec

// -[SCCollectionViewSectionRenderingTracker addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f84510

// -[SCCollectionViewSectionRenderingTracker removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f84518

// -[SCCollectionViewSectionRenderingTracker _trackInitialRenderingForCollectionViewSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f84520

// -[SCCollectionViewSectionRenderingTracker _trackFirstDataReceivedForCollectionViewSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f845c4

// -[SCCollectionViewSectionRenderingTracker _subscribeToDataTrackerObservableFirstEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f846e8

// -[SCCollectionViewSectionRenderingTracker _onDataReceivedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f84838

// -[SCCollectionViewSectionRenderingTracker _didReceiveDataForSection:timestamp:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108f8498c

// -[SCCollectionViewSectionRenderingTracker _trackSubsequentRenderingForCollectionViewSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f84a04

// -[SCCollectionViewSectionRenderingTracker _trackRenderingForCollectionViewSections:index:unrenderedIndexes:timestamp:]
// Type encoding: v48@0:8@16Q24@32d40
// Implementation: 0x108f84b60

// -[SCCollectionViewSectionRenderingTracker _didRenderSection:index:withTimestamp:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x108f84dd4

// -[SCCollectionViewSectionRenderingTracker _didRenderMultisections:index:withTimestamp:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x108f84f50

// -[SCCollectionViewSectionRenderingTracker _announceOnRenderingCompletionWithVisibleIndexPaths:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f851d4

// -[SCCollectionViewSectionRenderingTracker areSectionsRendered]
// Type encoding: B16@0:8
// Implementation: 0x108f85430

// -[SCCollectionViewSectionRenderingTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f85438

@end
