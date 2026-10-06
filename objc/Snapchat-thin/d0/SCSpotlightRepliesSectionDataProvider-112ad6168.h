// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesSectionDataProvider
// Superclass: NSObject
// Address: 0x112ad6168

@interface SCSpotlightRepliesSectionDataProvider

// Property: cellDataFetchingState; attributes: TQ,N,V_cellDataFetchingState
// Property: viewerPendingCellDataFetchingState; attributes: TQ,N,V_viewerPendingCellDataFetchingState
// Property: liveRepliesFetchingState; attributes: TQ,N,V_liveRepliesFetchingState
// Property: favByCreatorIconDelegate; attributes: T@"<SCSpotlightCommentsFavByCreatorIconViewDelegate>",W,N,V_favByCreatorIconDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: dataProviderDelegate; attributes: T@"<SCSectionDataProvidingDelegate>",W,N,V_dataProviderDelegate
// Property: sectionDataModel; attributes: T@"NSObject<NSCopying>",C,N,V_sectionDataModel
// Property: updateQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_updateQueuePerformer

// -[SCSpotlightRepliesSectionDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106246230

// -[SCSpotlightRepliesSectionDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106246238

// -[SCSpotlightRepliesSectionDataProvider initWithDataFetcher:reactionManager:snapInteractionInfo:isConsumer:isCommentAdmin:spotlightRepliesUpdateAnnouncer:spotlightRepliesFeatureSettingsManager:enableDeeplinkToReplyPosterProfile:circumstanceEngine:repliesActionConfig:commentPosterThumbnailFetcher:creatorInfo:repliesLogger:commentsSnapReplyActionsConfig:storiesConfigProvider:commentsAttachmentFetcher:]
// Type encoding: @132@0:8@16@24@32B40B44@48@56B64@68@76@84@92@100@108@116@124
// Implementation: 0x106246240

// -[SCSpotlightRepliesSectionDataProvider setUp]
// Type encoding: v16@0:8
// Implementation: 0x106246580

// -[SCSpotlightRepliesSectionDataProvider tearDown]
// Type encoding: v16@0:8
// Implementation: 0x1062465bc

// -[SCSpotlightRepliesSectionDataProvider setSectionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106246618

// -[SCSpotlightRepliesSectionDataProvider containerCellViewModelsForIndexPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062466cc

// -[SCSpotlightRepliesSectionDataProvider contentCellClassesByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10624679c

// -[SCSpotlightRepliesSectionDataProvider configurationBlocksByReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1062468a8

// -[SCSpotlightRepliesSectionDataProvider _configureSnapRepliesCarouselCollectionViewCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106246b7c

// -[SCSpotlightRepliesSectionDataProvider _configureEmptyStateCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106246b8c

// -[SCSpotlightRepliesSectionDataProvider _configureApprovedCellV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x106246bf8

// -[SCSpotlightRepliesSectionDataProvider numberOfSections]
// Type encoding: Q16@0:8
// Implementation: 0x106246ccc

// -[SCSpotlightRepliesSectionDataProvider numberOfItemsInSection:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106246cd4

// -[SCSpotlightRepliesSectionDataProvider dataLoadingStatus]
// Type encoding: q16@0:8
// Implementation: 0x106246cdc

// -[SCSpotlightRepliesSectionDataProvider reloadSection]
// Type encoding: v16@0:8
// Implementation: 0x106246ce4

// -[SCSpotlightRepliesSectionDataProvider _reloadSectionWithEventName:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106246cf0

// -[SCSpotlightRepliesSectionDataProvider _reloadSectionWithSpotlightReplies:snapReplies:sectionContentDataModel:hasMoreContent:eventName:extraData:]
// Type encoding: v60@0:8@16@24@32B40@44@52
// Implementation: 0x106246f6c

// -[SCSpotlightRepliesSectionDataProvider _snapRepliesCarouselCellViewModelFromSnapReplies:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062474fc

// -[SCSpotlightRepliesSectionDataProvider _snapReplyCellViewModelFromSnapReply:itemPos:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106247748

// -[SCSpotlightRepliesSectionDataProvider _thumbnailInfoFromSnapPlaybackInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x106247948

// -[SCSpotlightRepliesSectionDataProvider _replyCellViewModelFromReply:isPendingTab:eventName:extraData:]
// Type encoding: @44@0:8@16B24@28@36
// Implementation: 0x1062479dc

// -[SCSpotlightRepliesSectionDataProvider _shouldAddShowMoreCellAfterCurrentReply:nextReply:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106247de8

// -[SCSpotlightRepliesSectionDataProvider _fetchCreatorProfileImage]
// Type encoding: v16@0:8
// Implementation: 0x106247f58

// -[SCSpotlightRepliesSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062481cc

// -[SCSpotlightRepliesSectionDataProvider sectionDataModel]
// Type encoding: @16@0:8
// Implementation: 0x1062481d4

// -[SCSpotlightRepliesSectionDataProvider dataProviderDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1062481dc

// -[SCSpotlightRepliesSectionDataProvider setDataProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062481f4

// -[SCSpotlightRepliesSectionDataProvider updateQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x106248200

// -[SCSpotlightRepliesSectionDataProvider setUpdateQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106248208

// -[SCSpotlightRepliesSectionDataProvider cellDataFetchingState]
// Type encoding: Q16@0:8
// Implementation: 0x106248238

// -[SCSpotlightRepliesSectionDataProvider setCellDataFetchingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106248240

// -[SCSpotlightRepliesSectionDataProvider viewerPendingCellDataFetchingState]
// Type encoding: Q16@0:8
// Implementation: 0x106248248

// -[SCSpotlightRepliesSectionDataProvider setViewerPendingCellDataFetchingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106248250

// -[SCSpotlightRepliesSectionDataProvider liveRepliesFetchingState]
// Type encoding: Q16@0:8
// Implementation: 0x106248258

// -[SCSpotlightRepliesSectionDataProvider setLiveRepliesFetchingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106248260

// -[SCSpotlightRepliesSectionDataProvider favByCreatorIconDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106248268

// -[SCSpotlightRepliesSectionDataProvider setFavByCreatorIconDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106248280

// -[SCSpotlightRepliesSectionDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10624828c

// +[SCSpotlightRepliesSectionDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106246224

@end
