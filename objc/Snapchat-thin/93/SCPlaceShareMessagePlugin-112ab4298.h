// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaceShareMessagePlugin
// Superclass: NSObject
// Address: 0x112ab4298

@interface SCPlaceShareMessagePlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: messageViewEvents; attributes: T@"SCObservable",&,N,V_messageViewEvents
// Property: visibleMessageIds; attributes: T@"SCObservable",?,&,N
// Property: messageListScrollObservable; attributes: T@"SCObservable",?,&,N
// Property: messageVisibilityFractionProvider; attributes: T@"<SCMessageVisibilityFractionProviding>",?,W,N
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N

// -[SCPlaceShareMessagePlugin initWithPlaceProfileDataFetcher:userLocationHelpers:placeFavoritesManager:placeDiscoveryDataFetcher:mapStoryPreviewFetcher:placeStoryPlayerVendor:pageLauncher:blizzardLogger:circumstanceEngine:messagingMessageProvider:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105fa0940

// -[SCPlaceShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fa0b9c

// -[SCPlaceShareMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fa0cdc

// -[SCPlaceShareMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fa0d0c

// -[SCPlaceShareMessagePlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105fa0d14

// -[SCPlaceShareMessagePlugin fullMapPageLaunchDidEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa0d58

// -[SCPlaceShareMessagePlugin _contextForMessage:wrappedMessage:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fa0d74

// -[SCPlaceShareMessagePlugin _registerMessageVisibilityObservableForMessage:isSenderMyAI:placeCardDataSubject:placeAnnotationDataSubject:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x105fa1200

// -[SCPlaceShareMessagePlugin _createPlaceCardTweaks]
// Type encoding: @16@0:8
// Implementation: 0x105fa1674

// -[SCPlaceShareMessagePlugin _viewModelForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fa16ac

// -[SCPlaceShareMessagePlugin _launchMapScopeForPlaceID:chatId:isSenderMyAI:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105fa16e4

// -[SCPlaceShareMessagePlugin _getFormattedDistanceToLocationWithLat:lng:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x105fa1934

// -[SCPlaceShareMessagePlugin _getNativeVenueStoryPlayer]
// Type encoding: @16@0:8
// Implementation: 0x105fa1994

// -[SCPlaceShareMessagePlugin _handlePlaceShareMessageDataFetchForPlaceID:sourceSpecific:placeCardDataSubject:placeAnnotationDataSubject:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105fa1a24

// -[SCPlaceShareMessagePlugin _fetchPlaceProfileDataForPlaceID:sourceSpecific:placeCardDataSubject:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105fa1aa8

// -[SCPlaceShareMessagePlugin _fetchPlaceAnnotationsDataForPlaceID:placeAnnotationDataSubject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105fa1d50

// -[SCPlaceShareMessagePlugin _fetchPlaceStoryPreviewForPlaceID:placeCardData:placeCardDataSubject:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105fa1ed4

// -[SCPlaceShareMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fa2078

// -[SCPlaceShareMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa2080

// -[SCPlaceShareMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fa20b0

// -[SCPlaceShareMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa20b8

// -[SCPlaceShareMessagePlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105fa20e8

// -[SCPlaceShareMessagePlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa2100

// -[SCPlaceShareMessagePlugin messageViewEvents]
// Type encoding: @16@0:8
// Implementation: 0x105fa210c

// -[SCPlaceShareMessagePlugin setMessageViewEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fa2114

// -[SCPlaceShareMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fa2144

@end
