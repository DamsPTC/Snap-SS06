// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapSDKDataBridge
// Superclass: NSObject
// Address: 0x112aad448

@interface SCMapSDKDataBridge


// -[SCMapSDKDataBridge initWithBasemapUserMetadataManager:mapSessionIDProvider:locationProvider:shouldStartStreaming:mapValisService:friendsFeedDataCoordinator:activeUserID:sharingPreferencesProvider:userLocationPermissionManager:locationPermissionManager:notificationStatusRetriever:mutingService:bitmojiAvatarProvider:statusService:friendmojiRegistry:userPreferences:homeScreenWidgetUpdater:mapLoadTracker:personLocationsProvider:featureSettingsService:snapchatterDataFetcher:snapchatterRepository:userInfoServices:circumstanceEngine:externalMusicTweaksServices:externalMusicServices:mapView:locationRequestStateServices:]
// Type encoding: @236@0:8@16@24@32B40@44@52@60@68@76@84@92@100@108@116@124@132@140@148@156@164@172@180@188@196@204@212@220@228
// Implementation: 0x105f35488

// -[SCMapSDKDataBridge _createBatteryInfoBuilder]
// Type encoding: @16@0:8
// Implementation: 0x105f360ec

// -[SCMapSDKDataBridge _createSessionIDRequestBuilderWithSessionIDObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f36250

// -[SCMapSDKDataBridge _createUserIDRequestBuilderWithID:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f3631c

// -[SCMapSDKDataBridge _createUserLocationRequestBuilderWithLocationProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f36408

// -[SCMapSDKDataBridge _createLocationObservableWithLocationProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f364f8

// -[SCMapSDKDataBridge _createUserHeadingRequestBuilderWithLocationProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f36840

// -[SCMapSDKDataBridge _createHeadingObservableWithLocationProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f36930

// -[SCMapSDKDataBridge _createPeopleLocationsRequestBuilderWithPersonLocationProvider:valisService:statusService:activeUserID:shouldStartStreaming:mapLoadTracker:initStartTime:initToLocationsTrace:]
// Type encoding: @76@0:8@16@24@32@40B48@52d60@68
// Implementation: 0x105f36ae0

// -[SCMapSDKDataBridge _createStreamingPeopleLocationsRequestBuilderWithPersonLocationProvider:valisService:statusService:activeUserID:shouldStartStreaming:mapLoadTracker:initStartTime:initToLocationsTrace:]
// Type encoding: @76@0:8@16@24@32@40B48@52d60@68
// Implementation: 0x105f36b2c

// -[SCMapSDKDataBridge _createUnaryPeopleLocationsRequestBuilderWithPersonLocationProvider:statusService:activeUserID:mapLoadTracker:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105f370b0

// -[SCMapSDKDataBridge _createPeopleLocationRequestBuilderWithObservable:statusService:activeUserID:andDoOnFirstLocationUpdate:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x105f37354

// -[SCMapSDKDataBridge _createPeopleLocationsConverterWithStatusService:activeUserID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f37520

// -[SCMapSDKDataBridge _createFriendFeedRequestBuilderWithFriendsFeedDataCoordinator:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f37610

// -[SCMapSDKDataBridge _createFriendFeedUpdateConverter]
// Type encoding: @16@0:8
// Implementation: 0x105f37700

// -[SCMapSDKDataBridge _createSharingPreferencesRequestBuilderWithSharingPreferencesProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f37774

// -[SCMapSDKDataBridge _createNotificationsPermissionRequestBuilderWithStatusRetriever:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f37944

// -[SCMapSDKDataBridge _createLocationPermissionRequestBuilderWithLocationPermissionManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f37a2c

// -[SCMapSDKDataBridge _createLocationPermissionRequestBuilderWithUserLocationPermissionManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f37cb8

// -[SCMapSDKDataBridge _createMutedFriendsRequestBuilderWithMutingService:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f37f40

// -[SCMapSDKDataBridge _createBitmojiAvatarIDRequestBuilderWithBitmojiAvatarIDProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f38028

// -[SCMapSDKDataBridge _createBitmojiPoseOverrideRequestBuilderWithStatusFetcher:locationProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f381f8

// -[SCMapSDKDataBridge _createTravelStatusRequestBuilderWithStatusService:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f38558

// -[SCMapSDKDataBridge _createExploreUpdateConverter]
// Type encoding: @16@0:8
// Implementation: 0x105f389d4

// -[SCMapSDKDataBridge _createBestFriendEmojiRequestBuilderWithFriendmojiRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f38a58

// -[SCMapSDKDataBridge _createFriendmojiConverter]
// Type encoding: @16@0:8
// Implementation: 0x105f38d0c

// -[SCMapSDKDataBridge _createWidgetDataRequestBuilderWithUserPreferences:homeScreenWidgetUpdater:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f38d28

// -[SCMapSDKDataBridge _createHomeWorkRequestBuilderWithFeatureSettingsService:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f3913c

// -[SCMapSDKDataBridge _createInferredSchoolOnboardingRequestBuilderWithFeatureSettingsService:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f39544

// -[SCMapSDKDataBridge _createStickerOverrideRequestBuilderWithStatusFetcher:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f3994c

// -[SCMapSDKDataBridge _createPublicUserInfoRequestBuilderWithSnapchatterRepository:snapchatterDataFetcher:activeUserID:usernameProvider:displayNameProvider:bitmojiAvatarIDProvider:bitmojiSelfieIDProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105f39cd8

// -[SCMapSDKDataBridge _createFootstepsRequestsBuilderWithFeatureSettingsService:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f3a190

// -[SCMapSDKDataBridge _createFootstepsRealtimeCollectionRequestsBuilderWithFeatureSettingsService:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f3a56c

// -[SCMapSDKDataBridge _createNowPlayingRequestBuilderWithNowPlayingService:connectedProviderResolver:personLocationsProvider:currentUserId:mapFriendLoadState:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105f3a948

// -[SCMapSDKDataBridge _createNowPlayingInfoObservableWithPersonLocationsObservable:nowPlayingService:connectedProviderResolver:currentUserId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105f3ac44

// -[SCMapSDKDataBridge _calloutInfoFromResults:currentUserId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f3affc

// -[SCMapSDKDataBridge _currentUserProviderObservableWithConnectedProviderResolver:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f3b1c0

// -[SCMapSDKDataBridge _friendTracksObservableForPersonLocations:nowPlayingService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f3b36c

// -[SCMapSDKDataBridge _createLocationRequestStateBuilder]
// Type encoding: @16@0:8
// Implementation: 0x105f3b68c

// -[SCMapSDKDataBridge .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f3b764

@end
