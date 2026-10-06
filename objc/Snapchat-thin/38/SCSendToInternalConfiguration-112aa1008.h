// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToInternalConfiguration
// Superclass: NSObject
// Address: 0x112aa1008

@interface SCSendToInternalConfiguration

// Property: includeSelfAndTeamSnapchatInRecents; attributes: TB,R,N,V_includeSelfAndTeamSnapchatInRecents
// Property: includeSelectableContacts; attributes: TB,R,N,V_includeSelectableContacts
// Property: includeStories; attributes: TB,R,N,V_includeStories
// Property: includeSpotlight; attributes: TB,R,N,V_includeSpotlight
// Property: includeTwoDTryOnSnaps; attributes: TB,R,N,V_includeTwoDTryOnSnaps
// Property: searchFieldPlaceHolder; attributes: T@"NSString",R,C,N,V_searchFieldPlaceHolder
// Property: snapchatterSections; attributes: T@"NSSet",R,C,N,V_snapchatterSections
// Property: selectionGroupSections; attributes: T@"NSSet",R,C,N,V_selectionGroupSections
// Property: selectionRecipientSections; attributes: T@"NSSet",R,C,N,V_selectionRecipientSections
// Property: selectionStorySections; attributes: T@"NSSet",R,C,N,V_selectionStorySections
// Property: recentSections; attributes: T@"NSSet",R,C,N,V_recentSections
// Property: sectionRanker; attributes: T@"<SCSendToSectionRanking>",R,C,N,V_sectionRanker
// Property: friendsInThisSnapUserIdsObservable; attributes: T@"SCObservable",R,N,V_friendsInThisSnapUserIdsObservable
// Property: snapchatterSectionPreselectionsMap; attributes: T@"NSDictionary",R,C,N,V_snapchatterSectionPreselectionsMap
// Property: indexingSections; attributes: T@"NSOrderedSet",R,C,N,V_indexingSections
// Property: precedingSections; attributes: T@"NSOrderedSet",R,C,N,V_precedingSections
// Property: subsequentSections; attributes: T@"NSOrderedSet",R,C,N,V_subsequentSections
// Property: nonQuerySections; attributes: T@"NSOrderedSet",R,C,N,V_nonQuerySections
// Property: querySections; attributes: T@"NSOrderedSet",R,C,N,V_querySections
// Property: viewMoreSections; attributes: T@"NSOrderedSet",R,C,N,V_viewMoreSections
// Property: carouselSections; attributes: T@"NSSet",R,C,N,V_carouselSections
// Property: alphabeticalIndexes; attributes: T@"NSOrderedSet",R,C,N,V_alphabeticalIndexes
// Property: precedingIndexes; attributes: T@"NSOrderedSet",R,C,N,V_precedingIndexes
// Property: subsequentIndexes; attributes: T@"NSOrderedSet",R,C,N,V_subsequentIndexes
// Property: preSelectedItems; attributes: T@"NSArray",R,C,N,V_preSelectedItems
// Property: preSelectedLastSnapItems; attributes: T@"NSArray",R,C,N,V_preSelectedLastSnapItems
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToInternalConfiguration initAlphabeticalIndexes:preSelectedItems:previewConfiguration:recipientConfiguration:storyConfiguration:shareSheetConfiguration:snapchattersDataFetcher:circumstanceEngine:sectionRanker:lastSnapDataCoordinator:firstSnapSectionProvider:offPlatformShareOnMainCameraPreviewStateFetcher:sendToAttribution:shouldShowFindFriends:shouldShowEducationPopup:shouldShowRecentlyActiveEducation:sendToExperimentConfiguration:sendToUIConfiguration:sendToMentionsConfiguration:sendToSpotlightEligibilityService:sendToSharingConfigurationService:fanPassCreatorInfoProvider:]
// Type encoding: @180@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112B120B124B128@132@140@148@156@164@172
// Implementation: 0x105e1a8d4

// -[SCSendToInternalConfiguration titleForSectionIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e1c214

// -[SCSendToInternalConfiguration sectionHeaderViewModelForSectionIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e1c21c

// -[SCSendToInternalConfiguration indexSymbolForSectionIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e1c438

// -[SCSendToInternalConfiguration sectionIdentifierForIndexSymbol:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e1c440

// -[SCSendToInternalConfiguration sectionIdentifiersForQuery:querySource:queryParameters:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105e1c448

// -[SCSendToInternalConfiguration reuseIdentifierToCellClassMapForSectionIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e1c7b4

// -[SCSendToInternalConfiguration reuseIdentifierForSectionIdentifier:itemsCount:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105e1c808

// -[SCSendToInternalConfiguration includeSelfAndTeamSnapchatInRecents]
// Type encoding: B16@0:8
// Implementation: 0x105e1c8e8

// -[SCSendToInternalConfiguration preSelectedItems]
// Type encoding: @16@0:8
// Implementation: 0x105e1c8f0

// -[SCSendToInternalConfiguration preSelectedLastSnapItems]
// Type encoding: @16@0:8
// Implementation: 0x105e1c8f8

// -[SCSendToInternalConfiguration indexingSections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c900

// -[SCSendToInternalConfiguration precedingSections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c908

// -[SCSendToInternalConfiguration subsequentSections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c910

// -[SCSendToInternalConfiguration nonQuerySections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c918

// -[SCSendToInternalConfiguration querySections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c920

// -[SCSendToInternalConfiguration viewMoreSections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c928

// -[SCSendToInternalConfiguration carouselSections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c930

// -[SCSendToInternalConfiguration alphabeticalIndexes]
// Type encoding: @16@0:8
// Implementation: 0x105e1c938

// -[SCSendToInternalConfiguration precedingIndexes]
// Type encoding: @16@0:8
// Implementation: 0x105e1c940

// -[SCSendToInternalConfiguration subsequentIndexes]
// Type encoding: @16@0:8
// Implementation: 0x105e1c948

// -[SCSendToInternalConfiguration includeSelectableContacts]
// Type encoding: B16@0:8
// Implementation: 0x105e1c950

// -[SCSendToInternalConfiguration includeStories]
// Type encoding: B16@0:8
// Implementation: 0x105e1c958

// -[SCSendToInternalConfiguration includeSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x105e1c960

// -[SCSendToInternalConfiguration includeTwoDTryOnSnaps]
// Type encoding: B16@0:8
// Implementation: 0x105e1c968

// -[SCSendToInternalConfiguration searchFieldPlaceHolder]
// Type encoding: @16@0:8
// Implementation: 0x105e1c970

// -[SCSendToInternalConfiguration snapchatterSections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c978

// -[SCSendToInternalConfiguration selectionGroupSections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c980

// -[SCSendToInternalConfiguration selectionRecipientSections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c988

// -[SCSendToInternalConfiguration selectionStorySections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c990

// -[SCSendToInternalConfiguration recentSections]
// Type encoding: @16@0:8
// Implementation: 0x105e1c998

// -[SCSendToInternalConfiguration sectionRanker]
// Type encoding: @16@0:8
// Implementation: 0x105e1c9a0

// -[SCSendToInternalConfiguration friendsInThisSnapUserIdsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105e1c9a8

// -[SCSendToInternalConfiguration snapchatterSectionPreselectionsMap]
// Type encoding: @16@0:8
// Implementation: 0x105e1c9b0

// -[SCSendToInternalConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e1c9b8

@end
