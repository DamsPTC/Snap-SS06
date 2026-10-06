// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceProfileV2WorkflowManager
// Superclass: NSObject
// Address: 0x112a06eb8

@interface SCMapPlaceProfileV2WorkflowManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlaceProfileV2WorkflowManager initWithMultiTrayServices:contextFactory:valdiRuntimeProvider:mapSession:contentFetcher:notificationPool:venueEditorScopeExposer:webBrowsingScopeExposer:webBrowsingUIContainer:unifiedPublicProfilesPresenterScopeLauncher:placeSharingScopeExposer:deepLinkHandler:placeProfileV2Scope:composerPlaceStoryServices:storyFetcher:storyPlaybackScopeExposer:storyPlaybackScopeServices:composerCoreUIServices:bitmojiAvatarId:basemapManager:mapPlacesContentServices:previewStoryFetcher:mapNavigationRouteFetcher:profilesProvider:locationProvider:mapLoggerProvider:mapViewServices:eventSender:mapPlaceSuggestAttributeTrayScopeExposer:mapPeopleFriendsProvider:circumstanceEngine:mapBrowsingContextManager:promotedPlaceActionPublisher:promotedPlaceRepository:mapBitmojiAvatarGenerator:cameraScopeExposer:caasCameraScopeBuilderServices:]
// Type encoding: @312@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304
// Implementation: 0x104ee851c

// -[SCMapPlaceProfileV2WorkflowManager cleanup:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee9194

// -[SCMapPlaceProfileV2WorkflowManager _presentPlaceProfileTrayWithTrayData:isStacked:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104ee92fc

// -[SCMapPlaceProfileV2WorkflowManager _restoreNextController]
// Type encoding: v16@0:8
// Implementation: 0x104ee9574

// -[SCMapPlaceProfileV2WorkflowManager _onNextTrayPositionUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee9618

// -[SCMapPlaceProfileV2WorkflowManager placeProfileLoadedForController:needsDefaultCamera:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104ee9718

// -[SCMapPlaceProfileV2WorkflowManager trayLifecycleWasCreatedForController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee97f0

// -[SCMapPlaceProfileV2WorkflowManager dismissActiveTrayController]
// Type encoding: v16@0:8
// Implementation: 0x104ee99d8

// -[SCMapPlaceProfileV2WorkflowManager updateTrayPositionWithPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104ee9b18

// -[SCMapPlaceProfileV2WorkflowManager openStackedTrayWithTrayData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee9c90

// -[SCMapPlaceProfileV2WorkflowManager closeAllTrays]
// Type encoding: v16@0:8
// Implementation: 0x104ee9d8c

// -[SCMapPlaceProfileV2WorkflowManager _removeAllTrays:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ee9d94

// -[SCMapPlaceProfileV2WorkflowManager _handleEvent:trayLifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eea0a8

// -[SCMapPlaceProfileV2WorkflowManager _onWasRemovedForTrayLifecycle:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eea254

// -[SCMapPlaceProfileV2WorkflowManager _onWillChangeToPosition:withInteractionMethod:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x104eea31c

// -[SCMapPlaceProfileV2WorkflowManager _registerMapSessionResetObservable]
// Type encoding: v16@0:8
// Implementation: 0x104eea504

// -[SCMapPlaceProfileV2WorkflowManager _getExitTypeFromInteractionMethod:trayPosition:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x104eea668

// -[SCMapPlaceProfileV2WorkflowManager _presentActiveControllerBasemapStateForMapPlace:needsDefaultCamera:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104eea6b4

// -[SCMapPlaceProfileV2WorkflowManager _publishAdsPinTapEventWithTrayData:uiContainer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eea840

// -[SCMapPlaceProfileV2WorkflowManager _emitAdContentPresentationEndedTrigger]
// Type encoding: v16@0:8
// Implementation: 0x104eeaac0

// -[SCMapPlaceProfileV2WorkflowManager _logPromotedPlaceOpenedIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eeac04

// -[SCMapPlaceProfileV2WorkflowManager _logPromotedPlaceClosedIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eeac8c

// -[SCMapPlaceProfileV2WorkflowManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104eead14

@end
