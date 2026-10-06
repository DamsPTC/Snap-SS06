// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToLoggerDataModel
// Superclass: NSObject
// Address: 0x112b9d0d8

@interface SCSendToLoggerDataModel

// Property: attribution; attributes: T@"SCSendToAttribution",R,C,N,V_attribution
// Property: sendStatus; attributes: TB,R,N,V_sendStatus
// Property: eventToTimestampMapping; attributes: T@"NSDictionary",R,C,N,V_eventToTimestampMapping
// Property: sectionToDataReadyTimestampMapping; attributes: T@"NSDictionary",R,C,N,V_sectionToDataReadyTimestampMapping
// Property: sectionToRenderTimestampMapping; attributes: T@"NSDictionary",R,C,N,V_sectionToRenderTimestampMapping
// Property: sectionToAvailableViewModelsMapping; attributes: T@"NSDictionary",R,C,N,V_sectionToAvailableViewModelsMapping
// Property: sectionToAvailableContactViewModelsMapping; attributes: T@"NSDictionary",R,C,N,V_sectionToAvailableContactViewModelsMapping
// Property: sectionToSeenViewModelsMapping; attributes: T@"NSDictionary",R,C,N,V_sectionToSeenViewModelsMapping
// Property: sectionToSeenVisibilityMapping; attributes: T@"NSDictionary",R,C,N,V_sectionToSeenVisibilityMapping
// Property: sectionToVisibleElements; attributes: T@"NSDictionary",R,C,N,V_sectionToVisibleElements
// Property: sectionToSeenContactViewModelsMapping; attributes: T@"NSDictionary",R,C,N,V_sectionToSeenContactViewModelsMapping
// Property: selectedItemAttributions; attributes: T@"NSArray",R,C,N,V_selectedItemAttributions
// Property: selectedContactItemAttributions; attributes: T@"NSArray",R,C,N,V_selectedContactItemAttributions
// Property: sectionToVisibleCellsNumberMapping; attributes: T@"NSDictionary",R,C,N,V_sectionToVisibleCellsNumberMapping
// Property: sectionToVisibleContactCellsNumberMapping; attributes: T@"NSDictionary",R,C,N,V_sectionToVisibleContactCellsNumberMapping
// Property: contextualListsSectionToAvailableCellsNumberMapping; attributes: T@"NSDictionary",R,C,N,V_contextualListsSectionToAvailableCellsNumberMapping
// Property: userGeneratedListsViewed; attributes: TB,R,N,V_userGeneratedListsViewed
// Property: userGeneratedListsAvailable; attributes: T@"NSNumber",R,C,N,V_userGeneratedListsAvailable
// Property: userGeneratedListRecipientsAvailable; attributes: T@"NSNumber",R,C,N,V_userGeneratedListRecipientsAvailable
// Property: contextualListRecipientsAvailable; attributes: T@"NSNumber",R,C,N,V_contextualListRecipientsAvailable
// Property: shareSheetAvailable; attributes: TB,R,N,V_shareSheetAvailable
// Property: snapSendSnapchatterCount; attributes: TQ,R,N,V_snapSendSnapchatterCount
// Property: snapSendGroupCount; attributes: TQ,R,N,V_snapSendGroupCount
// Property: snapSendMyStoryCount; attributes: TQ,R,N,V_snapSendMyStoryCount
// Property: snapSendOurStoryCount; attributes: TQ,R,N,V_snapSendOurStoryCount
// Property: snapSendSpotlightStoryCount; attributes: TQ,R,N,V_snapSendSpotlightStoryCount
// Property: snapSendPublicStoryCount; attributes: TQ,R,N,V_snapSendPublicStoryCount
// Property: snapSendUnknownStoryCount; attributes: TQ,R,N,V_snapSendUnknownStoryCount
// Property: snapSendCustomStoryCount; attributes: TQ,R,N,V_snapSendCustomStoryCount
// Property: snapSendNewlyCreatedCustomStoryCount; attributes: TQ,R,N,V_snapSendNewlyCreatedCustomStoryCount
// Property: sponsor; attributes: T@"SCSnapSponsorInfo",R,C,N,V_sponsor
// Property: hasSeenPublicStoryNux; attributes: TB,R,N,V_hasSeenPublicStoryNux
// Property: hasSeenPublicAttributionNuxMap; attributes: TB,R,N,V_hasSeenPublicAttributionNuxMap
// Property: hasSeenPublicAttributionNuxSpotlight; attributes: TB,R,N,V_hasSeenPublicAttributionNuxSpotlight
// Property: listsSelectAllCount; attributes: TQ,R,N,V_listsSelectAllCount
// Property: bestFriendsSelectAllCount; attributes: TQ,R,N,V_bestFriendsSelectAllCount
// Property: bestFriendsDeselectAllCount; attributes: TQ,R,N,V_bestFriendsDeselectAllCount
// Property: bestFriendsSelectAllLastActionType; attributes: Tq,R,N,V_bestFriendsSelectAllLastActionType
// Property: recipientRankingFeaturesMap; attributes: T@"NSDictionary",R,C,N,V_recipientRankingFeaturesMap
// Property: hasSeenSpotlightNux; attributes: TB,R,N,V_hasSeenSpotlightNux
// Property: selectBarActionsMap; attributes: T@"NSDictionary",R,C,N,V_selectBarActionsMap
// Property: groupsCreationCountMap; attributes: T@"NSDictionary",R,C,N,V_groupsCreationCountMap
// Property: addAChatPrefilled; attributes: TB,R,N,V_addAChatPrefilled
// Property: addAChatUsed; attributes: TB,R,N,V_addAChatUsed
// Property: lastSnapRecipientsCountByType; attributes: T@"NSDictionary",R,C,N,V_lastSnapRecipientsCountByType
// Property: opsFabShown; attributes: TB,R,N,V_opsFabShown
// Property: opsFabTapped; attributes: TB,R,N,V_opsFabTapped

// -[SCSendToLoggerDataModel initWithAttribution:sendStatus:eventToTimestampMapping:sectionToDataReadyTimestampMapping:sectionToRenderTimestampMapping:sectionToAvailableViewModelsMapping:sectionToAvailableContactViewModelsMapping:sectionToSeenViewModelsMapping:sectionToSeenVisibilityMapping:sectionToVisibleElements:sectionToSeenContactViewModelsMapping:selectedItemAttributions:selectedContactItemAttributions:sectionToVisibleCellsNumberMapping:sectionToVisibleContactCellsNumberMapping:contextualListsSectionToAvailableCellsNumberMapping:userGeneratedListsViewed:userGeneratedListsAvailable:userGeneratedListRecipientsAvailable:contextualListRecipientsAvailable:shareSheetAvailable:snapSendSnapchatterCount:snapSendGroupCount:snapSendMyStoryCount:snapSendOurStoryCount:snapSendSpotlightStoryCount:snapSendPublicStoryCount:snapSendUnknownStoryCount:snapSendCustomStoryCount:snapSendNewlyCreatedCustomStoryCount:sponsor:hasSeenPublicStoryNux:hasSeenPublicAttributionNuxMap:hasSeenPublicAttributionNuxSpotlight:listsSelectAllCount:bestFriendsSelectAllCount:bestFriendsDeselectAllCount:bestFriendsSelectAllLastActionType:recipientRankingFeaturesMap:hasSeenSpotlightNux:selectBarActionsMap:groupsCreationCountMap:addAChatPrefilled:addAChatUsed:lastSnapRecipientsCountByType:opsFabShown:opsFabTapped:]
// Type encoding: @348@0:8@16B24@28@36@44@52@60@68@76@84@92@100@108@116@124@132B140@144@152@160B168Q172Q180Q188Q196Q204Q212Q220Q228Q236@244B252B256B260Q264Q272Q280q288@296B304@308@316B324B328@332B340B344
// Implementation: 0x108429b70

// -[SCSendToLoggerDataModel copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10842a13c

// -[SCSendToLoggerDataModel hash]
// Type encoding: Q16@0:8
// Implementation: 0x10842a160

// -[SCSendToLoggerDataModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10842a350

// -[SCSendToLoggerDataModel attribution]
// Type encoding: @16@0:8
// Implementation: 0x10842a770

// -[SCSendToLoggerDataModel sendStatus]
// Type encoding: B16@0:8
// Implementation: 0x10842a778

// -[SCSendToLoggerDataModel eventToTimestampMapping]
// Type encoding: @16@0:8
// Implementation: 0x10842a780

// -[SCSendToLoggerDataModel sectionToDataReadyTimestampMapping]
// Type encoding: @16@0:8
// Implementation: 0x10842a788

// -[SCSendToLoggerDataModel sectionToRenderTimestampMapping]
// Type encoding: @16@0:8
// Implementation: 0x10842a790

// -[SCSendToLoggerDataModel sectionToAvailableViewModelsMapping]
// Type encoding: @16@0:8
// Implementation: 0x10842a798

// -[SCSendToLoggerDataModel sectionToAvailableContactViewModelsMapping]
// Type encoding: @16@0:8
// Implementation: 0x10842a7a0

// -[SCSendToLoggerDataModel sectionToSeenViewModelsMapping]
// Type encoding: @16@0:8
// Implementation: 0x10842a7a8

// -[SCSendToLoggerDataModel sectionToSeenVisibilityMapping]
// Type encoding: @16@0:8
// Implementation: 0x10842a7b0

// -[SCSendToLoggerDataModel sectionToVisibleElements]
// Type encoding: @16@0:8
// Implementation: 0x10842a7b8

// -[SCSendToLoggerDataModel sectionToSeenContactViewModelsMapping]
// Type encoding: @16@0:8
// Implementation: 0x10842a7c0

// -[SCSendToLoggerDataModel selectedItemAttributions]
// Type encoding: @16@0:8
// Implementation: 0x10842a7c8

// -[SCSendToLoggerDataModel selectedContactItemAttributions]
// Type encoding: @16@0:8
// Implementation: 0x10842a7d0

// -[SCSendToLoggerDataModel sectionToVisibleCellsNumberMapping]
// Type encoding: @16@0:8
// Implementation: 0x10842a7d8

// -[SCSendToLoggerDataModel sectionToVisibleContactCellsNumberMapping]
// Type encoding: @16@0:8
// Implementation: 0x10842a7e0

// -[SCSendToLoggerDataModel contextualListsSectionToAvailableCellsNumberMapping]
// Type encoding: @16@0:8
// Implementation: 0x10842a7e8

// -[SCSendToLoggerDataModel userGeneratedListsViewed]
// Type encoding: B16@0:8
// Implementation: 0x10842a7f0

// -[SCSendToLoggerDataModel userGeneratedListsAvailable]
// Type encoding: @16@0:8
// Implementation: 0x10842a7f8

// -[SCSendToLoggerDataModel userGeneratedListRecipientsAvailable]
// Type encoding: @16@0:8
// Implementation: 0x10842a800

// -[SCSendToLoggerDataModel contextualListRecipientsAvailable]
// Type encoding: @16@0:8
// Implementation: 0x10842a808

// -[SCSendToLoggerDataModel shareSheetAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10842a810

// -[SCSendToLoggerDataModel snapSendSnapchatterCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a818

// -[SCSendToLoggerDataModel snapSendGroupCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a820

// -[SCSendToLoggerDataModel snapSendMyStoryCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a828

// -[SCSendToLoggerDataModel snapSendOurStoryCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a830

// -[SCSendToLoggerDataModel snapSendSpotlightStoryCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a838

// -[SCSendToLoggerDataModel snapSendPublicStoryCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a840

// -[SCSendToLoggerDataModel snapSendUnknownStoryCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a848

// -[SCSendToLoggerDataModel snapSendCustomStoryCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a850

// -[SCSendToLoggerDataModel snapSendNewlyCreatedCustomStoryCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a858

// -[SCSendToLoggerDataModel sponsor]
// Type encoding: @16@0:8
// Implementation: 0x10842a860

// -[SCSendToLoggerDataModel hasSeenPublicStoryNux]
// Type encoding: B16@0:8
// Implementation: 0x10842a868

// -[SCSendToLoggerDataModel hasSeenPublicAttributionNuxMap]
// Type encoding: B16@0:8
// Implementation: 0x10842a870

// -[SCSendToLoggerDataModel hasSeenPublicAttributionNuxSpotlight]
// Type encoding: B16@0:8
// Implementation: 0x10842a878

// -[SCSendToLoggerDataModel listsSelectAllCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a880

// -[SCSendToLoggerDataModel bestFriendsSelectAllCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a888

// -[SCSendToLoggerDataModel bestFriendsDeselectAllCount]
// Type encoding: Q16@0:8
// Implementation: 0x10842a890

// -[SCSendToLoggerDataModel bestFriendsSelectAllLastActionType]
// Type encoding: q16@0:8
// Implementation: 0x10842a898

// -[SCSendToLoggerDataModel recipientRankingFeaturesMap]
// Type encoding: @16@0:8
// Implementation: 0x10842a8a0

// -[SCSendToLoggerDataModel hasSeenSpotlightNux]
// Type encoding: B16@0:8
// Implementation: 0x10842a8a8

// -[SCSendToLoggerDataModel selectBarActionsMap]
// Type encoding: @16@0:8
// Implementation: 0x10842a8b0

// -[SCSendToLoggerDataModel groupsCreationCountMap]
// Type encoding: @16@0:8
// Implementation: 0x10842a8b8

// -[SCSendToLoggerDataModel addAChatPrefilled]
// Type encoding: B16@0:8
// Implementation: 0x10842a8c0

// -[SCSendToLoggerDataModel addAChatUsed]
// Type encoding: B16@0:8
// Implementation: 0x10842a8c8

// -[SCSendToLoggerDataModel lastSnapRecipientsCountByType]
// Type encoding: @16@0:8
// Implementation: 0x10842a8d0

// -[SCSendToLoggerDataModel opsFabShown]
// Type encoding: B16@0:8
// Implementation: 0x10842a8d8

// -[SCSendToLoggerDataModel opsFabTapped]
// Type encoding: B16@0:8
// Implementation: 0x10842a8e0

// -[SCSendToLoggerDataModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10842a8e8

@end
