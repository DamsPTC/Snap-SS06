// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapLoggerEventSender
// Superclass: NSObject
// Address: 0x112b61218

@interface SCMapLoggerEventSender

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapLoggerEventSender initWithBlizzardLogger:sessionIdProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107240b70

// -[SCMapLoggerEventSender mapViewOpenedWithSource:sourcePage:sourcePageContext:type:friendsInViewport:unviewedStatusesInViewport:viewedStatusesInViewport:locationSharingSetting:deviceBackgroundLocationPermissionGranted:deviceLocationPermissionGranted:]
// Type encoding: v88@0:8q16@24@32q40Q48Q56Q64q72B80B84
// Implementation: 0x107240c38

// -[SCMapLoggerEventSender mapViewClosedWithType:duration:friendOnMap:bestFriendsOnMap:friendsInViewport:friendsInViewportMax:totalFriendsSeen:totalBestFriendsSeen:totalFriendsHighlighted:totalBestFriendsHighlighted:totalUniqueClustersHighlighted:totalClustersInHighlightZone:totalClustersHighlighted:friendStoryShownUniqueThumbnailCount:friendStoryShownUniqueUserIdCount:friendStoryTapCount:unviewedStatusesInViewport:viewedStatusesInViewport:statusesInViewportMax:totalStatusesSeen:seenPoiIds:mapTrayType:trayUnseenItemCount:isHeatmapToggleOn:mapStyleName:mapAppearance:]
// Type encoding: v220@0:8q16d24Q32Q40Q48Q56Q64Q72Q80Q88Q96Q104Q112Q120Q128Q136Q144Q152Q160Q168@176q184q192B200@204q212
// Implementation: 0x107240dc0

// -[SCMapLoggerEventSender mapViewFriendClusterViewedWithSource:actionType:clusterUserIds:clusterUnviewedStatuses:clusterViewedStatuses:clusterViewedBestFriends:friendsOnMap:bestFriendsOnMap:friendsInViewport:distanceFromUser:highlighted:zoomLevel:extra:footerActionId:]
// Type encoding: v124@0:8q16q24@32Q40Q48Q56Q64Q72Q80d88B96d100@108Q116
// Implementation: 0x1072410dc

// -[SCMapLoggerEventSender mapViewFriendClusterWithActionmoji:actionType:actionmojiStickerId:ghostTargetUserGuid:actionmojiAutoAssigned:]
// Type encoding: v52@0:8q16q24@32@40B48
// Implementation: 0x1072412e4

// -[SCMapLoggerEventSender mapViewFriendClusterWithSensitiveActionmoji:actionType:actionmojiStickerId:ghostTargetUserGuid:actionmojiAutoAssigned:]
// Type encoding: v52@0:8q16q24@32@40B48
// Implementation: 0x1072413d8

// -[SCMapLoggerEventSender mapViewCompassTappedWithDistance:friendsOnMap:friendsInViewport:]
// Type encoding: v40@0:8d16Q24Q32
// Implementation: 0x1072414cc

// -[SCMapLoggerEventSender logGestureCountsWithNumberOfTaps:numberOfDoubleTaps:numberOfLongPresses:numberOfPinches:numberOfPans:numberOfZoomSliderUses:numberOfSingleTapZooms:numberOfTwoFingerTaps:numberOfTilts:numberOfRotates:]
// Type encoding: v96@0:8Q16Q24Q32Q40Q48Q56Q64Q72Q80Q88
// Implementation: 0x107241598

// -[SCMapLoggerEventSender mapDidFinishLoadingWithZoom:friendCount:friendWithBitmojiCount:storyThumbnailCount:heatPointCount:]
// Type encoding: v56@0:8d16Q24Q32Q40Q48
// Implementation: 0x1072416cc

// -[SCMapLoggerEventSender mapUIItemViewed:]
// Type encoding: v24@0:8q16
// Implementation: 0x10724179c

// -[SCMapLoggerEventSender mapScreenshotCapturedWithAction:friendsInViewport:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x107241814

// -[SCMapLoggerEventSender mapViewZoomWithMapZoomId:zoomLevel:mapZoomType:openType:initialViewportLogicType:closeType:action:]
// Type encoding: v72@0:8@16d24q32q40@48@56@64
// Implementation: 0x1072418a4

// -[SCMapLoggerEventSender buttonTappedWithType:badgeState:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107241a74

// -[SCMapLoggerEventSender mapViewOpenedToOnboardingWithSource:type:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107241b50

// -[SCMapLoggerEventSender onboardingDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x107241bfc

// -[SCMapLoggerEventSender skippableLocationPromptShownWithAccepted:source:type:]
// Type encoding: v36@0:8B16q20q28
// Implementation: 0x107241c94

// -[SCMapLoggerEventSender tapToPlayAnywhereAttemptForCoordinate:zoomLevel:result:distanceFromUser:distanceFromClosestFriend:]
// Type encoding: v64@0:8{CLLocationCoordinate2D=dd}16d32q40d48d56
// Implementation: 0x107241d34

// -[SCMapLoggerEventSender tapToPlayPoiAttemptForPoiId:coordinate:zoomLevel:result:distanceFromUser:distanceFromClosestFriend:]
// Type encoding: v72@0:8@16{CLLocationCoordinate2D=dd}24d40q48d56d64
// Implementation: 0x107241e3c

// -[SCMapLoggerEventSender mapStatusOnboardingPageViewWithDuration:pageName:source:]
// Type encoding: v40@0:8d16q24q32
// Implementation: 0x107241f70

// -[SCMapLoggerEventSender mapStatusOpenedWithSource:statusSessionId:currentStatusCount:statusOptionsCount:mapFooterActionId:isSnapchatPlus:locationSharingSetting:]
// Type encoding: v68@0:8q16Q24Q32Q40Q48B56@60
// Implementation: 0x107242038

// -[SCMapLoggerEventSender mapStatusActionWithStatusSessionId:action:actionStatus:itemType:itemGridIndex:itemID:]
// Type encoding: v64@0:8Q16q24@32@40@48@56
// Implementation: 0x107242168

// -[SCMapLoggerEventSender mapStatusDidTapOptionWithType:optionIndex:statusSessionId:availableStickerCount:]
// Type encoding: v48@0:8q16Q24Q32Q40
// Implementation: 0x1072422b4

// -[SCMapLoggerEventSender mapStatusDidSetOptionWithType:optionIndex:statusSessionId:availableStickerCount:chosenStickerId:chosenOptionId:]
// Type encoding: v64@0:8q16Q24Q32Q40@48@56
// Implementation: 0x10724236c

// -[SCMapLoggerEventSender mapStatusDidDeleteStatusWithType:viewCount:statusSessionId:]
// Type encoding: v40@0:8q16Q24Q32
// Implementation: 0x107242470

// -[SCMapLoggerEventSender mapStatusClosedWithDuration:statusSessionId:currentStatusCount:statusOptionsCount:actionmojiStickerID:carID:petID:homeGridIndex:homeName:]
// Type encoding: v88@0:8d16Q24Q32Q40@48@56@64@72@80
// Implementation: 0x107242518

// -[SCMapLoggerEventSender mapReadyWithSource:sourcePage:type:mapOpenState:latencyMs:]
// Type encoding: v56@0:8q16@24q32q40Q48
// Implementation: 0x1072426d8

// -[SCMapLoggerEventSender mapFriendLoadWithSource:sourcePage:mapOpenState:totalLatencyMs:friendsRenderPrepLatencyMs:locationFetchLatencyMs:]
// Type encoding: v64@0:8q16@24q32Q40Q48Q56
// Implementation: 0x1072427d0

// -[SCMapLoggerEventSender mapTapToPlayLatencyWithSource:sourcePage:latencyMs:mapOpenState:]
// Type encoding: v48@0:8q16@24Q32q40
// Implementation: 0x1072428b8

// -[SCMapLoggerEventSender mapPlaceProfileReadyWithMapSessionId:placeProfileSessionId:latencyMs:]
// Type encoding: v40@0:8Q16Q24Q32
// Implementation: 0x10724296c

// -[SCMapLoggerEventSender mapPlaceDiscoveryReadyWithMapSessionId:discoverySessionId:latencyMs:]
// Type encoding: v40@0:8Q16Q24Q32
// Implementation: 0x1072429e4

// -[SCMapLoggerEventSender shareLocationPromptOpenedWithSharingSetting:mapBestFriendCount:mapFriendCount:promptType:]
// Type encoding: v48@0:8q16Q24Q32q40
// Implementation: 0x107242a5c

// -[SCMapLoggerEventSender shareLocationPromptClosedWithAction:sharingSetting:mapBestFriendBitmojiDisplayCount:mapBestFriendCount:mapFriendCount:promptType:viewTime:]
// Type encoding: v72@0:8q16q24Q32Q40Q48q56d64
// Implementation: 0x107242b14

// -[SCMapLoggerEventSender mapBannerDidDisplayWithSessionId:bannerType:ghostTargetUserGuid:]
// Type encoding: v40@0:8Q16q24@32
// Implementation: 0x107242c0c

// -[SCMapLoggerEventSender mapBannerActionWithBannerSessionId:bannerActionType:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x107242c98

// -[SCMapLoggerEventSender mapDialogPromptOpenedWithStatusSessionId:dialogId:type:source:]
// Type encoding: v48@0:8Q16Q24q32q40
// Implementation: 0x107242cf8

// -[SCMapLoggerEventSender mapDialogPromptClosedWithStatusSessionId:dialogId:closeMethod:]
// Type encoding: v40@0:8Q16Q24q32
// Implementation: 0x107242db0

// -[SCMapLoggerEventSender notificationWithID:type:actionType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x107242e50

// -[SCMapLoggerEventSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107242eec

@end
