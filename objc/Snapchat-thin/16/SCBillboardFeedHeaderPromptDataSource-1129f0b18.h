// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBillboardFeedHeaderPromptDataSource
// Superclass: NSObject
// Address: 0x1129f0b18

@interface SCBillboardFeedHeaderPromptDataSource

// Property: isUserCurrentlyOnFeed; attributes: TB,V_isUserCurrentlyOnFeed
// Property: hasSponsoredSnapOnFeed; attributes: TB,V_hasSponsoredSnapOnFeed
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBillboardFeedHeaderPromptDataSource initWithBillboardFeedHeaderPromptScope:applicationLifecycleEvents:billboardUserJourneyLogger:friendsFeedInteractionEventsObservable:friendsFeedDataCoordinator:fhpCampaignDataProvider:actionHandlers:valdiRuntimeProvider:grapheneRegistry:billboardUILatencyLogger:circumstanceEngine:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x104c8e2a8

// -[SCBillboardFeedHeaderPromptDataSource _setupFHPScopeIsDisplayingSubject]
// Type encoding: v16@0:8
// Implementation: 0x104c8e69c

// -[SCBillboardFeedHeaderPromptDataSource _setupActionHandlersMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c8e70c

// -[SCBillboardFeedHeaderPromptDataSource headerPromptViewDidTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c8e9c8

// -[SCBillboardFeedHeaderPromptDataSource headerPromptViewExtraButtonDidTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c8eaf8

// -[SCBillboardFeedHeaderPromptDataSource headerPromptViewDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c8ec34

// -[SCBillboardFeedHeaderPromptDataSource _handleTapAction:actionHandler:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104c8ece4

// -[SCBillboardFeedHeaderPromptDataSource _removeCurrentAndLoadNextPromptIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104c8ee88

// -[SCBillboardFeedHeaderPromptDataSource _handleActionFinished]
// Type encoding: v16@0:8
// Implementation: 0x104c8eef0

// -[SCBillboardFeedHeaderPromptDataSource _handleCampaignRefresh:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c8ef3c

// -[SCBillboardFeedHeaderPromptDataSource _logCampaignUpdateWithCampaignId:isExecuted:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104c8f054

// -[SCBillboardFeedHeaderPromptDataSource _loadNextPromptForRequestor:trigger:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x104c8f07c

// -[SCBillboardFeedHeaderPromptDataSource _logCampaignLoadedEventWith:loadStartTime:loadSuccess:loadFailReason:]
// Type encoding: v44@0:8@16d24B32q36
// Implementation: 0x104c8f2d0

// -[SCBillboardFeedHeaderPromptDataSource _logCampaignImpressionEventWith:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c8f50c

// -[SCBillboardFeedHeaderPromptDataSource _logCampaignActionEventWith:interactionType:tappedElement:triggeredAction:]
// Type encoding: v48@0:8@16q24q32@40
// Implementation: 0x104c8f5d0

// -[SCBillboardFeedHeaderPromptDataSource _isCampaignExemptFromSponsoredSnapsHoldout:]
// Type encoding: B24@0:8@16
// Implementation: 0x104c8f6a8

// -[SCBillboardFeedHeaderPromptDataSource _isCampaignCritical:]
// Type encoding: B24@0:8@16
// Implementation: 0x104c8f6ac

// -[SCBillboardFeedHeaderPromptDataSource _getSponsoredSnapExcludedCampaignsFromCOF:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c8f790

// -[SCBillboardFeedHeaderPromptDataSource _initFFEnterAndExitListenerForSuppressingSponsoredSnap]
// Type encoding: v16@0:8
// Implementation: 0x104c8f850

// -[SCBillboardFeedHeaderPromptDataSource _initHasSponsoredSnapListener]
// Type encoding: v16@0:8
// Implementation: 0x104c8fae8

// -[SCBillboardFeedHeaderPromptDataSource _initAdsInsertionEventListener]
// Type encoding: v16@0:8
// Implementation: 0x104c8fca8

// -[SCBillboardFeedHeaderPromptDataSource _onSponsoredSnapAddedToFeed]
// Type encoding: v16@0:8
// Implementation: 0x104c8fe74

// -[SCBillboardFeedHeaderPromptDataSource _dismissReloadDisabled]
// Type encoding: B16@0:8
// Implementation: 0x104c8ffd4

// -[SCBillboardFeedHeaderPromptDataSource _isSponsoredSnapSuppressionIgnoreFeedVisibility]
// Type encoding: B16@0:8
// Implementation: 0x104c8ffec

// -[SCBillboardFeedHeaderPromptDataSource _loadFailToSuppressThresholdInMs]
// Type encoding: q16@0:8
// Implementation: 0x104c90004

// -[SCBillboardFeedHeaderPromptDataSource _logFailToSuppressWhenNecessary]
// Type encoding: v16@0:8
// Implementation: 0x104c90030

// -[SCBillboardFeedHeaderPromptDataSource _removeBillboardPromptIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x104c900bc

// -[SCBillboardFeedHeaderPromptDataSource _onUserExitFriendsFeed]
// Type encoding: v16@0:8
// Implementation: 0x104c902f0

// -[SCBillboardFeedHeaderPromptDataSource _logSponsoredSnapSuppressWithAction:campaignName:timing:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104c9033c

// -[SCBillboardFeedHeaderPromptDataSource _logSponsoredSnapSuppressFailWithAction:campaignName:timing:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104c90354

// -[SCBillboardFeedHeaderPromptDataSource _getCurrentCampaignName]
// Type encoding: @16@0:8
// Implementation: 0x104c9036c

// -[SCBillboardFeedHeaderPromptDataSource _logUIStepCampaignDataFetchedWithCampaignId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c90374

// -[SCBillboardFeedHeaderPromptDataSource _completeFirstCampaignLoading]
// Type encoding: v16@0:8
// Implementation: 0x104c90384

// -[SCBillboardFeedHeaderPromptDataSource _showCampaign:trigger:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104c90390

// -[SCBillboardFeedHeaderPromptDataSource _removePrompt]
// Type encoding: v16@0:8
// Implementation: 0x104c90890

// -[SCBillboardFeedHeaderPromptDataSource isUserCurrentlyOnFeed]
// Type encoding: B16@0:8
// Implementation: 0x104c90918

// -[SCBillboardFeedHeaderPromptDataSource setIsUserCurrentlyOnFeed:]
// Type encoding: v20@0:8B16
// Implementation: 0x104c90924

// -[SCBillboardFeedHeaderPromptDataSource hasSponsoredSnapOnFeed]
// Type encoding: B16@0:8
// Implementation: 0x104c9092c

// -[SCBillboardFeedHeaderPromptDataSource setHasSponsoredSnapOnFeed:]
// Type encoding: v20@0:8B16
// Implementation: 0x104c90938

// -[SCBillboardFeedHeaderPromptDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104c90940

@end
