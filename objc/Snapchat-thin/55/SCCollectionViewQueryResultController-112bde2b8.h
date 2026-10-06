// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCollectionViewQueryResultController
// Superclass: NSObject
// Address: 0x112bde2b8

@interface SCCollectionViewQueryResultController

// Property: shouldPerformAnimationWhenQueryChanges; attributes: TB,N,V_shouldPerformAnimationWhenQueryChanges
// Property: delegate; attributes: T@"<SCSearchQueryResultControllerDelegate>",W,N,V_delegate
// Property: collectionViewDelegate; attributes: T@"<UICollectionViewDelegate>",W,N
// Property: collectionViewUpdater; attributes: T@"SCBaseSectionBasedCollectionViewUpdater",R,N,V_collectionViewUpdater
// Property: query; attributes: T@"SCSearchQuery",C,N,V_query
// Property: currentQueryResultState; attributes: Tq,R,N,V_currentQueryResultState
// Property: currentSectionConfigurations; attributes: T@"NSArray",R,C,N,V_currentSectionConfigurations
// Property: sectionController; attributes: T@"SCCollectionViewSectionController",R,N,V_sectionController
// Property: disableSectionRecycle; attributes: TB,N,V_disableSectionRecycle
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCollectionViewQueryResultController addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fbd940

// -[SCCollectionViewQueryResultController removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fbd948

// -[SCCollectionViewQueryResultController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108fbd950

// -[SCCollectionViewQueryResultController initWithResultCollectionView:queryCoordinator:sectionCreator:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108fbd958

// -[SCCollectionViewQueryResultController setCollectionViewDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fbdb10

// -[SCCollectionViewQueryResultController collectionViewDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108fbdb18

// -[SCCollectionViewQueryResultController setQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fbdb20

// -[SCCollectionViewQueryResultController sectionBasedCollectionViewUpdaterWillUpdateCollectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fbdd08

// -[SCCollectionViewQueryResultController sectionBasedCollectionViewUpdater:didSetUpSections:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108fbddc0

// -[SCCollectionViewQueryResultController sectionBasedCollectionViewUpdater:didTearDownSections:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108fbdf08

// -[SCCollectionViewQueryResultController sectionInsetsForSectionBasedCollectionViewUpdater:]
// Type encoding: {UIEdgeInsets=dddd}24@0:8@16
// Implementation: 0x108fbe064

// -[SCCollectionViewQueryResultController sectionBasedCollectionViewUpdater:didUpdateLayoutWithAnimationFinished:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108fbe0d0

// -[SCCollectionViewQueryResultController sectionBasedCollectionViewUpdater:didUpdateSectionsWithAnimationFinished:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108fbe104

// -[SCCollectionViewQueryResultController presentingViewControllerForSectionBasedCollectionViewUpdater:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fbe318

// -[SCCollectionViewQueryResultController releasePendingQueryResultWithLoadingQueryResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fbe360

// -[SCCollectionViewQueryResultController _releasePendingQueryResult]
// Type encoding: v16@0:8
// Implementation: 0x108fbe508

// -[SCCollectionViewQueryResultController firstSectionHeightChangedBy:]
// Type encoding: v24@0:8d16
// Implementation: 0x108fbe634

// -[SCCollectionViewQueryResultController _updateSuspendedQueryResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fbe6b8

// -[SCCollectionViewQueryResultController _applyNewQueryResults:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fbe958

// -[SCCollectionViewQueryResultController _updateResultsWithQuery:sectionDescriptors:resultState:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x108fbec44

// -[SCCollectionViewQueryResultController _applySectionsChangesWithQuery:newSectionWithConfigurations:resultState:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x108fbeef4

// -[SCCollectionViewQueryResultController _updateCurrentResultState:]
// Type encoding: v24@0:8q16
// Implementation: 0x108fbf0d4

// -[SCCollectionViewQueryResultController _updateCurrentSectionConfigurations:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fbf1ac

// -[SCCollectionViewQueryResultController _hasItemsInResult]
// Type encoding: B16@0:8
// Implementation: 0x108fbf1dc

// -[SCCollectionViewQueryResultController _updateWithNoResultSections]
// Type encoding: v16@0:8
// Implementation: 0x108fbf2f4

// -[SCCollectionViewQueryResultController _announceNoResultEvent]
// Type encoding: v16@0:8
// Implementation: 0x108fbf38c

// -[SCCollectionViewQueryResultController _notifyQueryStateAwareSupplementaryViewProviders]
// Type encoding: v16@0:8
// Implementation: 0x108fbf530

// -[SCCollectionViewQueryResultController shouldPerformAnimationWhenQueryChanges]
// Type encoding: B16@0:8
// Implementation: 0x108fbf710

// -[SCCollectionViewQueryResultController setShouldPerformAnimationWhenQueryChanges:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fbf718

// -[SCCollectionViewQueryResultController delegate]
// Type encoding: @16@0:8
// Implementation: 0x108fbf720

// -[SCCollectionViewQueryResultController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fbf738

// -[SCCollectionViewQueryResultController collectionViewUpdater]
// Type encoding: @16@0:8
// Implementation: 0x108fbf744

// -[SCCollectionViewQueryResultController query]
// Type encoding: @16@0:8
// Implementation: 0x108fbf74c

// -[SCCollectionViewQueryResultController currentQueryResultState]
// Type encoding: q16@0:8
// Implementation: 0x108fbf754

// -[SCCollectionViewQueryResultController currentSectionConfigurations]
// Type encoding: @16@0:8
// Implementation: 0x108fbf75c

// -[SCCollectionViewQueryResultController sectionController]
// Type encoding: @16@0:8
// Implementation: 0x108fbf764

// -[SCCollectionViewQueryResultController disableSectionRecycle]
// Type encoding: B16@0:8
// Implementation: 0x108fbf76c

// -[SCCollectionViewQueryResultController setDisableSectionRecycle:]
// Type encoding: v20@0:8B16
// Implementation: 0x108fbf774

// -[SCCollectionViewQueryResultController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108fbf77c

// +[SCCollectionViewQueryResultController announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x108fbd934

@end
