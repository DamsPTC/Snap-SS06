// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedLoggingViewingSessionData
// Superclass: NSObject
// Address: 0x112b75088

@interface SCDiscoverFeedLoggingViewingSessionData

// Property: identifier; attributes: T@"NSString",R,N,V_identifier
// Property: storyLoggingInfo; attributes: T@"SCDiscoverFeedStoryLoggingInfo",R,N,V_storyLoggingInfo
// Property: rerankingId; attributes: TQ,R,N,V_rerankingId
// Property: itemPos; attributes: Tq,R,N,V_itemPos
// Property: virtualSectionItemPos; attributes: T@"NSNumber",&,N,V_virtualSectionItemPos
// Property: carouselRowNum; attributes: T@"NSNumber",&,N,V_carouselRowNum
// Property: itemSource; attributes: Tq,R,N,V_itemSource
// Property: storyTypeVariant; attributes: Tq,R,N,V_storyTypeVariant
// Property: entryEvent; attributes: Tq,R,N,V_entryEvent
// Property: entryIntent; attributes: Tq,R,N,V_entryIntent
// Property: operaNavigationType; attributes: Tq,N,V_operaNavigationType
// Property: viewSessionStartTime; attributes: T@"NSDate",R,N,V_viewSessionStartTime
// Property: mediaViewTime; attributes: Td,R,N,V_mediaViewTime
// Property: correctedMediaViewTime; attributes: Td,R,N,V_correctedMediaViewTime
// Property: totalViewTime; attributes: Td,R,N,V_totalViewTime
// Property: subitemId; attributes: T@"NSString",R,N,V_subitemId
// Property: pageId; attributes: T@"NSString",R,N,V_pageId
// Property: numberOfSnapsViewed; attributes: TQ,R,N,V_numberOfSnapsViewed
// Property: maxSubitemViewIndex; attributes: Tq,R,N,V_maxSubitemViewIndex
// Property: maxSubitemIdView; attributes: T@"NSString",R,N,V_maxSubitemIdView
// Property: fieldsOverrideDict; attributes: T@"NSDictionary",R,N,V_fieldsOverrideDict
// Property: section; attributes: T@"NSString",R,C,N,V_section
// Property: isFullyViewed; attributes: TB,R,N,V_isFullyViewed
// Property: isItemExpiring; attributes: TB,R,N,V_isItemExpiring
// Property: isSubtitlesAvailable; attributes: T@"NSNumber",C,N,V_isSubtitlesAvailable
// Property: isSpotlightRepliesEnabled; attributes: TB,N,V_isSpotlightRepliesEnabled
// Property: isSpotlightCustomInterstitial; attributes: TB,N,V_isSpotlightCustomInterstitial
// Property: liveSpotlightRepliesCount; attributes: T@"NSNumber",C,N,V_liveSpotlightRepliesCount
// Property: triggeringItemId; attributes: T@"NSString",C,N,V_triggeringItemId
// Property: triggeringItemPlaylistOffset; attributes: Tq,N,V_triggeringItemPlaylistOffset
// Property: adInsertionType; attributes: Tq,R,N,V_adInsertionType
// Property: isUpNextInfinitePlaylist; attributes: TB,R,N,V_isUpNextInfinitePlaylist
// Property: contextLabels; attributes: T@"NSArray",R,N,V_contextLabels
// Property: notificationId; attributes: T@"NSString",C,N,V_notificationId
// Property: operaMediaPlaybackSessionId; attributes: T@"NSString",R,N,V_operaMediaPlaybackSessionId
// Property: withOneTapToShare; attributes: TB,R,N,V_withOneTapToShare
// Property: contextSessionId; attributes: T@"NSString",C,N,V_contextSessionId
// Property: lensId; attributes: T@"NSString",C,N,V_lensId
// Property: rankingId; attributes: T@"NSString",C,N,V_rankingId
// Property: lensCustomizationId; attributes: T@"NSString",C,N,V_lensCustomizationId
// Property: lastMetadataFetchedTs; attributes: T@"NSDate",&,N,V_lastMetadataFetchedTs
// Property: feedType; attributes: Ti,R,N,V_feedType
// Property: isAttachmentSnap; attributes: TB,R,N,V_isAttachmentSnap
// Property: suggestedSearchQueryText; attributes: T@"NSString",C,N,V_suggestedSearchQueryText
// Property: trendMetadataString; attributes: T@"NSString",C,N,V_trendMetadataString
// Property: inFeedSurvey; attributes: T@"SCContentInFeedSurvey",&,N,V_inFeedSurvey

// -[SCDiscoverFeedLoggingViewingSessionData initWithIdentifier:storyLoggingInfo:rerankingId:itemPos:itemSource:subitemId:pageId:entryEvent:entryIntent:operaNavigationType:viewSessionStartTime:triggeringItemId:triggeringItemPlaylistOffset:section:isFullyViewed:isItemExpiring:fieldsOverrideDict:enableTotalNumSnapsProperty:adInsertionType:isSpotlightRepliesEnabled:liveSpotlightRepliesCount:isUpNextInfinitePlaylist:contextLabels:notificationId:operaMediaPlaybackSessionId:lastMetadataFetchedTs:feedType:isSubtitlesAvailable:isAttachmentSnap:suggestedSearchQueryText:trendMetadataString:inFeedSurvey:]
// Type encoding: @244@0:8@16@24Q32q40q48@56@64q72q80q88@96@104q112@120B128B132@136B144q148B156@160B168@172@180@188@196i204@208B216@220@228@236
// Implementation: 0x107bee824

// -[SCDiscoverFeedLoggingViewingSessionData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107beed04

// -[SCDiscoverFeedLoggingViewingSessionData viewingSubitemWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107beed28

// -[SCDiscoverFeedLoggingViewingSessionData startedViewingAtTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x107beee08

// -[SCDiscoverFeedLoggingViewingSessionData mediaStartedPlayingAtTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x107beee38

// -[SCDiscoverFeedLoggingViewingSessionData subItemDidEndViewingAtTime:isContentMediaViewTimeFixEnabled:bugFixMediaViewTime:isAttachmentSnapAndFixEnabled:correctedBugFixMediaViewTime:correctedAttachmentSnapAndFixEnabled:]
// Type encoding: v52@0:8@16B24d28B36d40B48
// Implementation: 0x107beee68

// -[SCDiscoverFeedLoggingViewingSessionData numberOfUniqueSubitemsViewed]
// Type encoding: Q16@0:8
// Implementation: 0x107beef84

// -[SCDiscoverFeedLoggingViewingSessionData getTotalMediaDurationSecs]
// Type encoding: d16@0:8
// Implementation: 0x107beef8c

// -[SCDiscoverFeedLoggingViewingSessionData resetAfterLoadingFromSavedCopyWithTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef138

// -[SCDiscoverFeedLoggingViewingSessionData updateSkippedSubitemId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107bef218

// -[SCDiscoverFeedLoggingViewingSessionData numberOfSnapsAvailable]
// Type encoding: Q16@0:8
// Implementation: 0x107bef290

// -[SCDiscoverFeedLoggingViewingSessionData adjustedSnapIndexForSubitemId:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107bef300

// -[SCDiscoverFeedLoggingViewingSessionData itemType]
// Type encoding: q16@0:8
// Implementation: 0x107bef4d0

// -[SCDiscoverFeedLoggingViewingSessionData updateStoryTypeVariant:]
// Type encoding: v24@0:8q16
// Implementation: 0x107bef4e4

// -[SCDiscoverFeedLoggingViewingSessionData updateStoryLoggingInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef514

// -[SCDiscoverFeedLoggingViewingSessionData _updateSubitemArrayWithStoryLoggingInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef570

// -[SCDiscoverFeedLoggingViewingSessionData updateTriggeringItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef658

// -[SCDiscoverFeedLoggingViewingSessionData updateNotificationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef688

// -[SCDiscoverFeedLoggingViewingSessionData updateOperaMediaPlaybackSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef6b8

// -[SCDiscoverFeedLoggingViewingSessionData markOneTapToShareDisplayed]
// Type encoding: v16@0:8
// Implementation: 0x107bef6e8

// -[SCDiscoverFeedLoggingViewingSessionData updateContextLabels:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef6f4

// -[SCDiscoverFeedLoggingViewingSessionData identifier]
// Type encoding: @16@0:8
// Implementation: 0x107bef7a0

// -[SCDiscoverFeedLoggingViewingSessionData storyLoggingInfo]
// Type encoding: @16@0:8
// Implementation: 0x107bef7a8

// -[SCDiscoverFeedLoggingViewingSessionData rerankingId]
// Type encoding: Q16@0:8
// Implementation: 0x107bef7b0

// -[SCDiscoverFeedLoggingViewingSessionData itemPos]
// Type encoding: q16@0:8
// Implementation: 0x107bef7b8

// -[SCDiscoverFeedLoggingViewingSessionData virtualSectionItemPos]
// Type encoding: @16@0:8
// Implementation: 0x107bef7c0

// -[SCDiscoverFeedLoggingViewingSessionData setVirtualSectionItemPos:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef7c8

// -[SCDiscoverFeedLoggingViewingSessionData carouselRowNum]
// Type encoding: @16@0:8
// Implementation: 0x107bef7f8

// -[SCDiscoverFeedLoggingViewingSessionData setCarouselRowNum:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef800

// -[SCDiscoverFeedLoggingViewingSessionData itemSource]
// Type encoding: q16@0:8
// Implementation: 0x107bef830

// -[SCDiscoverFeedLoggingViewingSessionData storyTypeVariant]
// Type encoding: q16@0:8
// Implementation: 0x107bef838

// -[SCDiscoverFeedLoggingViewingSessionData entryEvent]
// Type encoding: q16@0:8
// Implementation: 0x107bef840

// -[SCDiscoverFeedLoggingViewingSessionData entryIntent]
// Type encoding: q16@0:8
// Implementation: 0x107bef848

// -[SCDiscoverFeedLoggingViewingSessionData operaNavigationType]
// Type encoding: q16@0:8
// Implementation: 0x107bef850

// -[SCDiscoverFeedLoggingViewingSessionData setOperaNavigationType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107bef858

// -[SCDiscoverFeedLoggingViewingSessionData viewSessionStartTime]
// Type encoding: @16@0:8
// Implementation: 0x107bef860

// -[SCDiscoverFeedLoggingViewingSessionData mediaViewTime]
// Type encoding: d16@0:8
// Implementation: 0x107bef868

// -[SCDiscoverFeedLoggingViewingSessionData correctedMediaViewTime]
// Type encoding: d16@0:8
// Implementation: 0x107bef870

// -[SCDiscoverFeedLoggingViewingSessionData totalViewTime]
// Type encoding: d16@0:8
// Implementation: 0x107bef878

// -[SCDiscoverFeedLoggingViewingSessionData subitemId]
// Type encoding: @16@0:8
// Implementation: 0x107bef880

// -[SCDiscoverFeedLoggingViewingSessionData pageId]
// Type encoding: @16@0:8
// Implementation: 0x107bef888

// -[SCDiscoverFeedLoggingViewingSessionData numberOfSnapsViewed]
// Type encoding: Q16@0:8
// Implementation: 0x107bef890

// -[SCDiscoverFeedLoggingViewingSessionData maxSubitemViewIndex]
// Type encoding: q16@0:8
// Implementation: 0x107bef898

// -[SCDiscoverFeedLoggingViewingSessionData maxSubitemIdView]
// Type encoding: @16@0:8
// Implementation: 0x107bef8a0

// -[SCDiscoverFeedLoggingViewingSessionData fieldsOverrideDict]
// Type encoding: @16@0:8
// Implementation: 0x107bef8a8

// -[SCDiscoverFeedLoggingViewingSessionData section]
// Type encoding: @16@0:8
// Implementation: 0x107bef8b0

// -[SCDiscoverFeedLoggingViewingSessionData isFullyViewed]
// Type encoding: B16@0:8
// Implementation: 0x107bef8b8

// -[SCDiscoverFeedLoggingViewingSessionData isItemExpiring]
// Type encoding: B16@0:8
// Implementation: 0x107bef8c0

// -[SCDiscoverFeedLoggingViewingSessionData isSubtitlesAvailable]
// Type encoding: @16@0:8
// Implementation: 0x107bef8c8

// -[SCDiscoverFeedLoggingViewingSessionData setIsSubtitlesAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef8d0

// -[SCDiscoverFeedLoggingViewingSessionData isSpotlightRepliesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107bef8d8

// -[SCDiscoverFeedLoggingViewingSessionData setIsSpotlightRepliesEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bef8e0

// -[SCDiscoverFeedLoggingViewingSessionData isSpotlightCustomInterstitial]
// Type encoding: B16@0:8
// Implementation: 0x107bef8e8

// -[SCDiscoverFeedLoggingViewingSessionData setIsSpotlightCustomInterstitial:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bef8f0

// -[SCDiscoverFeedLoggingViewingSessionData liveSpotlightRepliesCount]
// Type encoding: @16@0:8
// Implementation: 0x107bef8f8

// -[SCDiscoverFeedLoggingViewingSessionData setLiveSpotlightRepliesCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef900

// -[SCDiscoverFeedLoggingViewingSessionData triggeringItemId]
// Type encoding: @16@0:8
// Implementation: 0x107bef908

// -[SCDiscoverFeedLoggingViewingSessionData setTriggeringItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef910

// -[SCDiscoverFeedLoggingViewingSessionData triggeringItemPlaylistOffset]
// Type encoding: q16@0:8
// Implementation: 0x107bef918

// -[SCDiscoverFeedLoggingViewingSessionData setTriggeringItemPlaylistOffset:]
// Type encoding: v24@0:8q16
// Implementation: 0x107bef920

// -[SCDiscoverFeedLoggingViewingSessionData adInsertionType]
// Type encoding: q16@0:8
// Implementation: 0x107bef928

// -[SCDiscoverFeedLoggingViewingSessionData isUpNextInfinitePlaylist]
// Type encoding: B16@0:8
// Implementation: 0x107bef930

// -[SCDiscoverFeedLoggingViewingSessionData contextLabels]
// Type encoding: @16@0:8
// Implementation: 0x107bef938

// -[SCDiscoverFeedLoggingViewingSessionData notificationId]
// Type encoding: @16@0:8
// Implementation: 0x107bef940

// -[SCDiscoverFeedLoggingViewingSessionData setNotificationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef948

// -[SCDiscoverFeedLoggingViewingSessionData operaMediaPlaybackSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107bef950

// -[SCDiscoverFeedLoggingViewingSessionData withOneTapToShare]
// Type encoding: B16@0:8
// Implementation: 0x107bef958

// -[SCDiscoverFeedLoggingViewingSessionData contextSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107bef960

// -[SCDiscoverFeedLoggingViewingSessionData setContextSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef968

// -[SCDiscoverFeedLoggingViewingSessionData lensId]
// Type encoding: @16@0:8
// Implementation: 0x107bef970

// -[SCDiscoverFeedLoggingViewingSessionData setLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef978

// -[SCDiscoverFeedLoggingViewingSessionData rankingId]
// Type encoding: @16@0:8
// Implementation: 0x107bef980

// -[SCDiscoverFeedLoggingViewingSessionData setRankingId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef988

// -[SCDiscoverFeedLoggingViewingSessionData lensCustomizationId]
// Type encoding: @16@0:8
// Implementation: 0x107bef990

// -[SCDiscoverFeedLoggingViewingSessionData setLensCustomizationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef998

// -[SCDiscoverFeedLoggingViewingSessionData lastMetadataFetchedTs]
// Type encoding: @16@0:8
// Implementation: 0x107bef9a0

// -[SCDiscoverFeedLoggingViewingSessionData setLastMetadataFetchedTs:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef9a8

// -[SCDiscoverFeedLoggingViewingSessionData feedType]
// Type encoding: i16@0:8
// Implementation: 0x107bef9d8

// -[SCDiscoverFeedLoggingViewingSessionData isAttachmentSnap]
// Type encoding: B16@0:8
// Implementation: 0x107bef9e0

// -[SCDiscoverFeedLoggingViewingSessionData suggestedSearchQueryText]
// Type encoding: @16@0:8
// Implementation: 0x107bef9e8

// -[SCDiscoverFeedLoggingViewingSessionData setSuggestedSearchQueryText:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bef9f0

// -[SCDiscoverFeedLoggingViewingSessionData trendMetadataString]
// Type encoding: @16@0:8
// Implementation: 0x107bef9f8

// -[SCDiscoverFeedLoggingViewingSessionData setTrendMetadataString:]
// Type encoding: v24@0:8@16
// Implementation: 0x107befa00

// -[SCDiscoverFeedLoggingViewingSessionData inFeedSurvey]
// Type encoding: @16@0:8
// Implementation: 0x107befa08

// -[SCDiscoverFeedLoggingViewingSessionData setInFeedSurvey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107befa10

// -[SCDiscoverFeedLoggingViewingSessionData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107befa40

@end
