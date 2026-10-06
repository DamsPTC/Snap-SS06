// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapViewLogger
// Superclass: NSObject
// Address: 0x112aac5e8

@interface SCMapViewLogger

// Property: session; attributes: T@"<SCMapLoggerSessionInfoProviding>",W,N,V_session
// Property: inMap; attributes: TB,N,V_inMap
// Property: seenFriendUserIds; attributes: T@"NSMutableSet",R,N,V_seenFriendUserIds
// Property: seenBestFriendUserIds; attributes: T@"NSMutableSet",R,N,V_seenBestFriendUserIds
// Property: maxFriendsInViewport; attributes: TQ,R,N,V_maxFriendsInViewport
// Property: seenPoiIds; attributes: T@"NSMutableSet",R,N,V_seenPoiIds
// Property: seenStatusIds; attributes: T@"NSMutableSet",R,N,V_seenStatusIds
// Property: maxStatusesInViewport; attributes: TQ,R,N,V_maxStatusesInViewport
// Property: highlightedUniqueFriendUserIds; attributes: T@"NSMutableSet",R,N,V_highlightedUniqueFriendUserIds
// Property: highlightedBestFriendUserIds; attributes: T@"NSMutableSet",R,N,V_highlightedBestFriendUserIds
// Property: highlightedUniqueClusterIds; attributes: T@"NSMutableSet",R,N,V_highlightedUniqueClusterIds
// Property: friendStoryUniqueUserIdCount; attributes: TQ,R,N,V_friendStoryUniqueUserIdCount
// Property: friendStoryUniqueThumbnailCount; attributes: TQ,R,N,V_friendStoryUniqueThumbnailCount
// Property: friendStoryTapCount; attributes: TQ,R,N,V_friendStoryTapCount
// Property: clustersInHighlightZoneCount; attributes: TQ,R,N,V_clustersInHighlightZoneCount
// Property: clustersHighlightedCount; attributes: TQ,R,N,V_clustersHighlightedCount
// Property: mapViewVisibilityObservable; attributes: T@"SCObservable",R,N
// Property: mapZoomEventObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapViewLogger initWithCurrentUserId:mapGestureStatsProvider:lifecycleInfoProvider:mapLoggerSession:mapPageViewName:mapPeopleProvider:mapPersonLocationsProvider:deviceLocationPermissionsManager:mapStatusService:mapViewport:currentPageTracker:sharingPreferencesProvider:circumstanceEngine:]
// Type encoding: @120@0:8@16@24@32@40q48@56@64@72@80@88@96@104@112
// Implementation: 0x105f258d0

// -[SCMapViewLogger updateWithOpenState:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f25d94

// -[SCMapViewLogger viewDidAppearWithBitmojiLayerInfoProvider:poiIdsInViewport:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f25d9c

// -[SCMapViewLogger onboardingViewDidAppearWithOpenType:source:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105f25f20

// -[SCMapViewLogger viewDidDisappearWithCloseType:bitmojiLayerInfoProvider:trayType:trayUnseenItemCount:poiIdsInViewport:isHeatmapToggleOn:loadedMapStyle:traitCollection:]
// Type encoding: v76@0:8q16@24q32Q40@48B56@60@68
// Implementation: 0x105f25f80

// -[SCMapViewLogger applicationDidBecomeActiveWithBitmojiLayerInfoProvider:poiIdsInViewport:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f260ec

// -[SCMapViewLogger applicationDidEnterBackgroundWithBitmojiLayerInfoProvider:trayType:trayUnseenItemCount:poiIdsInViewport:isHeatmapToggleOn:loadedMapStyle:traitCollection:]
// Type encoding: v68@0:8@16q24Q32@40B48@52@60
// Implementation: 0x105f26264

// -[SCMapViewLogger regionDidChangeWithBitmojiLayerInfoProvider:poiIdsInViewport:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f263cc

// -[SCMapViewLogger viewedUnreadChatOrSnapCalloutOnPersonLocation:highlighted:zoomLevel:source:actionType:calloutUserID:isChat:]
// Type encoding: v64@0:8@16B24d28q36q44@52B60
// Implementation: 0x105f264e8

// -[SCMapViewLogger viewedPersonCluster:highlighted:zoomLevel:source:actionType:callout:footerActionId:]
// Type encoding: v68@0:8@16B24d28q36q44@52Q60
// Implementation: 0x105f26630

// -[SCMapViewLogger viewedPersonLocations:atCoordinate:highlighted:zoomLevel:source:actionType:callout:]
// Type encoding: v76@0:8@16{CLLocationCoordinate2D=dd}24B40d44q52q60@68
// Implementation: 0x105f26794

// -[SCMapViewLogger _viewedPersonLocations:atCoordinate:highlighted:zoomLevel:source:actionType:calloutExtra:calloutUserID:footerActionId:]
// Type encoding: v92@0:8@16{CLLocationCoordinate2D=dd}24B40d44q52q60@68@76Q84
// Implementation: 0x105f268e0

// -[SCMapViewLogger didTapOnCompassButton]
// Type encoding: v16@0:8
// Implementation: 0x105f26f48

// -[SCMapViewLogger userDidTakeScreenshotWithAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f270a0

// -[SCMapViewLogger logNotificationAction:notificationType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f27128

// -[SCMapViewLogger mapZoomEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f271b4

// -[SCMapViewLogger logMapZoomForMapInitialViewportWithOpenType:initialViewportLogicType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105f271dc

// -[SCMapViewLogger _logMapZoomWithMapZoomType:openType:initialViewportLogicType:closeType:action:]
// Type encoding: v56@0:8q16q24@32@40@48
// Implementation: 0x105f271f4

// -[SCMapViewLogger _logMapZoomForMapCloseWithCloseType:lastZoomGesture:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x105f27374

// -[SCMapViewLogger _logMapZoomForMapZoomType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f273ec

// -[SCMapViewLogger mapDidBecomeInteractiveLatencyMs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105f27400

// -[SCMapViewLogger mapLoadedFirstFriendBitmojiLatencyMs:locationRequestedToFetchedLatencyMs:locationFetchedToBitmojiRenderLatencyMs:]
// Type encoding: v40@0:8Q16Q24Q32
// Implementation: 0x105f274c8

// -[SCMapViewLogger didFinishFirstMapLoadWithStoryThumbnailCount:heatPointCount:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x105f27584

// -[SCMapViewLogger mapViewVisibilityObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f2776c

// -[SCMapViewLogger _onMapEnteredWithOpenType:source:sourcePage:sourcePageContext:]
// Type encoding: v48@0:8q16q24@32@40
// Implementation: 0x105f27794

// -[SCMapViewLogger _onMapExitedWithCloseType:trayType:trayUnseenItemCount:isHeatmapToggleOn:loadedMapStyleName:traitCollection:]
// Type encoding: v60@0:8q16q24Q32B40@44@52
// Implementation: 0x105f27bb4

// -[SCMapViewLogger _startSnapchatSessionLoggingWithOpenType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f28128

// -[SCMapViewLogger _stopSnapchatSessionLoggingWithCloseType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f28170

// -[SCMapViewLogger _updateFriendsInViewportStatistics]
// Type encoding: v16@0:8
// Implementation: 0x105f28174

// -[SCMapViewLogger _updateHighlightedFriendsStatisticsWithHighlightedFriendUserIds:highlightedClusterIds:clustersInHighlightZoneCount:clustersHighlightedCount:totalFriendStoryUniqueUserIdCount:totalFriendStoryUniqueThumbnailCount:totalFriendStoryTapCount:]
// Type encoding: v72@0:8@16@24Q32Q40Q48Q56Q64
// Implementation: 0x105f28360

// -[SCMapViewLogger _updatePoisInViewportStatisticsWithPoisInViewport:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f285c8

// -[SCMapViewLogger _updateStatusesInViewportStatistics]
// Type encoding: v16@0:8
// Implementation: 0x105f28624

// -[SCMapViewLogger _friendsInViewport]
// Type encoding: @16@0:8
// Implementation: 0x105f2878c

// -[SCMapViewLogger _friendsOnMap]
// Type encoding: @16@0:8
// Implementation: 0x105f28864

// -[SCMapViewLogger _bestFriendsOnMap]
// Type encoding: @16@0:8
// Implementation: 0x105f28930

// -[SCMapViewLogger _currentUserInViewport]
// Type encoding: B16@0:8
// Implementation: 0x105f289f0

// -[SCMapViewLogger _statusIdForPersonLocation:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f28b40

// -[SCMapViewLogger session]
// Type encoding: @16@0:8
// Implementation: 0x105f28bd0

// -[SCMapViewLogger setSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f28be8

// -[SCMapViewLogger inMap]
// Type encoding: B16@0:8
// Implementation: 0x105f28bf4

// -[SCMapViewLogger setInMap:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f28bfc

// -[SCMapViewLogger seenFriendUserIds]
// Type encoding: @16@0:8
// Implementation: 0x105f28c04

// -[SCMapViewLogger seenBestFriendUserIds]
// Type encoding: @16@0:8
// Implementation: 0x105f28c0c

// -[SCMapViewLogger maxFriendsInViewport]
// Type encoding: Q16@0:8
// Implementation: 0x105f28c14

// -[SCMapViewLogger seenPoiIds]
// Type encoding: @16@0:8
// Implementation: 0x105f28c1c

// -[SCMapViewLogger seenStatusIds]
// Type encoding: @16@0:8
// Implementation: 0x105f28c24

// -[SCMapViewLogger maxStatusesInViewport]
// Type encoding: Q16@0:8
// Implementation: 0x105f28c2c

// -[SCMapViewLogger highlightedUniqueFriendUserIds]
// Type encoding: @16@0:8
// Implementation: 0x105f28c34

// -[SCMapViewLogger highlightedBestFriendUserIds]
// Type encoding: @16@0:8
// Implementation: 0x105f28c3c

// -[SCMapViewLogger highlightedUniqueClusterIds]
// Type encoding: @16@0:8
// Implementation: 0x105f28c44

// -[SCMapViewLogger friendStoryUniqueUserIdCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f28c4c

// -[SCMapViewLogger friendStoryUniqueThumbnailCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f28c54

// -[SCMapViewLogger friendStoryTapCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f28c5c

// -[SCMapViewLogger clustersInHighlightZoneCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f28c64

// -[SCMapViewLogger clustersHighlightedCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f28c6c

// -[SCMapViewLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f28c74

@end
