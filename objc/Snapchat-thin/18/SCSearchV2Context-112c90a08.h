// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchV2Context
// Superclass: SCValdiMarshallableObject
// Address: 0x112c90a08

@interface SCSearchV2Context

// Property: navigator; attributes: T@"<SCValdiINavigator>",&,D,N
// Property: birthdayPagePresenter; attributes: T@"SCCFoundationProvider",&,D,N
// Property: grpcServiceFactory; attributes: T@"<SCComposerNetworkingGrpcServiceFactory>",&,D,N
// Property: deeplinkActionHandler; attributes: T@"<SCCActivityCenterSharedDeeplinkActionHandler>",&,D,N
// Property: groupStore; attributes: T@"<SCCGroupStoring>",&,D,N
// Property: friendStore; attributes: T@"<SCCFriendStoring>",&,D,N
// Property: friendActionStore; attributes: T@"<SCCFriendActionStoring>",&,D,N
// Property: suggestedFriendStore; attributes: T@"<SCCSuggestedFriendStoring>",&,D,N
// Property: blockedUserStore; attributes: T@"<SCCBlockedUserStoring>",&,D,N
// Property: storySummaryInfoStore; attributes: T@"<SCCStorySummaryInfoStoring>",&,D,N
// Property: friendmojiProvider; attributes: T@"<SCCFriendmojiProviding>",&,D,N
// Property: userInfoProvider; attributes: T@"<SCComposerPeopleUserInfoProviding>",&,D,N
// Property: subscriptionStore; attributes: T@"<SCCSubscriptionStore>",&,D,N
// Property: snapProSubscriptionStatusHandlerProvider; attributes: T@"<SCCSearchV2ISnapProSubscriptionStatusHandlerProvider>",&,D,N
// Property: lensActionHandler; attributes: T@"<SCCLensActionHandling>",&,D,N
// Property: blizzardLogger; attributes: T@"<SCCBlizzardLogging>",&,D,N
// Property: networkingClient; attributes: T@"<SCComposerNetworkingClientProtocol>",&,D,N
// Property: storyPlayer; attributes: T@"SCCFoundationProvider",&,D,N
// Property: nativeUserStoryFetcher; attributes: T@"<SCCStoryPlayerNativeUserStoryFetching>",&,D,N
// Property: friendsFeedStatusHandlerProvider; attributes: T@"<SCCFriendsFeedStatusHandlerProviding>",&,D,N
// Property: actionSheetPresenter; attributes: T@"<SCSearchV2ActionSheetPresenting>",&,D,N
// Property: flavorContext; attributes: Ti,D,N
// Property: studyValues; attributes: T@"SCCSearchStudyValues",&,D,N
// Property: themeType; attributes: T@"NSNumber",&,D,N
// Property: lensSelectionConfig; attributes: T@"SCCLensSelectionConfig",&,D,N
// Property: appearanceConfig; attributes: T@"SCCSearchAppearanceConfig",&,D,N
// Property: lensActivationSourceContext; attributes: T@"SCCLensesILensActivationSourceContext",&,D,N
// Property: storySnapViewStateProvider; attributes: T@"<SCCStoryPlayerStorySnapViewStateProviding>",&,D,N
// Property: cameraPresenter; attributes: T@"<SCCCameraPresenting>",&,D,N
// Property: mapPresenter; attributes: T@"<SCCMapPresenting>",&,D,N
// Property: locationStore; attributes: T@"<SCCLocationStoring>",&,D,N
// Property: incomingFriendStore; attributes: T@"<SCCIncomingFriendStoring>",&,D,N
// Property: contactAddressBookEntryStore; attributes: T@"<SCCContactAddressBookEntryStoring>",&,D,N
// Property: sharingFeatureSettings; attributes: T@"<SCCSharingApiIValdiSharingFeatureSettings>",&,D,N
// Property: contactUserStore; attributes: T@"<SCCContactUserStoring>",&,D,N
// Property: topicPageLauncher; attributes: T@"<SCCTopicPageLauncher>",&,D,N
// Property: actionsHandler; attributes: T@"SCSearchV2ActionsHandler",&,D,N
// Property: alertPresenter; attributes: T@"<SCComposerFoundationAlertPresenting>",&,D,N
// Property: lensesByCreatorGrpcService; attributes: T@"<SCComposerNetworkingGrpcServiceProtocol>",&,D,N
// Property: familyCenterPresenter; attributes: T@"<SCCFamilyCenterPresenting>",&,D,N
// Property: snapchatPlusPresenter; attributes: T@"<SCCSnapchatPlusPresenting>",&,D,N
// Property: nativeVenueStoryPlayer; attributes: T@"SCCFoundationProvider",&,D,N
// Property: performanceMetricsContext; attributes: T@"SCCSearchPerformanceMetricsContext",&,D,N
// Property: publisherWatchStateStoreFactory; attributes: T@"<SCCPublisherWatchStateStoreFactory>",&,D,N
// Property: publicProfilePresenter; attributes: T@"<SCCPublicProfilePresenting>",&,D,N
// Property: cofStore; attributes: T@"<SCComposerCOFRxStoring>",&,D,N
// Property: webLauncher; attributes: T@"<SCCWebLauncher>",&,D,N
// Property: s2CellBridge; attributes: T@"<SCCS2CellBridge>",&,D,N
// Property: searchUiScopedCofStore; attributes: T@"SCBridgeObservable",&,D,N
// Property: musicFeatureProvider; attributes: T@"<SCMusicFeatureProviding>",&,D,N
// Property: performanceLogger; attributes: T@"<SCCPerformancePerformanceLogger>",&,D,N
// Property: snapProActionHandler; attributes: T@"<SCCSearchV2SnapProActionHandler>",&,D,N
// Property: nativeStoryCardFetcher; attributes: T@"SCCFoundationProvider",&,D,N
// Property: userActionHandling; attributes: T@"SCCFoundationProvider",&,D,N
// Property: searchSafetyReporting; attributes: T@"<SCCSearchApiUiSearchSafetyReporting>",&,D,N
// Property: extraContactsViewFactory; attributes: T@"<SCValdiViewFactory>",&,D,N
// Property: discoverFeedFetcher; attributes: T@"<SCCFeedDataFetching>",&,D,N
// Property: nativeAstSearchService; attributes: T@"SCBridgeObservable",&,D,N
// Property: createChatPagePresenter; attributes: T@"<SCCCreateChatPagePresenting>",&,D,N
// Property: callLauncher; attributes: T@"<SCCCallLauncher>",&,D,N
// Property: lastInteractionStateProvider; attributes: T@"<SCCLastInteractionStateProviding>",&,D,N

// -[SCSearchV2Context initWithGroupStore:friendStore:suggestedFriendStore:blockedUserStore:storySummaryInfoStore:friendmojiProvider:userInfoProvider:subscriptionStore:lensActionHandler:blizzardLogger:networkingClient:storyPlayer:nativeUserStoryFetcher:friendsFeedStatusHandlerProvider:actionSheetPresenter:flavorContext:studyValues:mapPresenter:locationStore:incomingFriendStore:contactAddressBookEntryStore:sharingFeatureSettings:contactUserStore:topicPageLauncher:actionsHandler:alertPresenter:nativeVenueStoryPlayer:searchUiScopedCofStore:userActionHandling:]
// Type encoding: @244@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128i136@140@148@156@164@172@180@188@196@204@212@220@228@236
// Implementation: 0x10b667b70

// +[SCSearchV2Context valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b667c64

@end
