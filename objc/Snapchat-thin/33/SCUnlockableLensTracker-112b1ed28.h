// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableLensTracker
// Superclass: SCUnlockableTracker
// Address: 0x112b1ed28

@interface SCUnlockableLensTracker

// Property: lensSource; attributes: Tq,R,N,V_lensSource
// Property: sessionId; attributes: T@"NSString",C,N
// Property: carouselSize; attributes: TQ,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnlockableLensTracker initWithSessionId:snapAdsUnlockableTracker:adsRequestProvider:unlockablesGtqNetworkRequestManager:userAdIdProvider:snapAdsPersistedDataAdapter:adLensCarouselInteractionHistoryTracker:lensSource:adConfigProvider:grapheneRegistry:adsUserInfoProvider:lensAdConfigProvider:preferences:config:inventoryType:spectrumLogger:lensEngagementProvider:sponsoredLensTrackerRepository:adsPreferencesProvider:networkConnectivityAnnouncer:]
// Type encoding: @176@0:8@16@24@32@40@48@56@64q72@80@88@96@104@112@120q128@136@144@152@160@168
// Implementation: 0x100b9074c

// -[SCUnlockableLensTracker setLensProductDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bb70bc

// -[SCUnlockableLensTracker startWithSessionId:lensSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106bb70d0

// -[SCUnlockableLensTracker setCarouselExitEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bb7100

// -[SCUnlockableLensTracker _resetLensImpressionState]
// Type encoding: v16@0:8
// Implementation: 0x106bb7110

// -[SCUnlockableLensTracker addPostCaptureInteraction:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bb7160

// -[SCUnlockableLensTracker endSessionWithCommonLoggingParameters:appliedUnlockableIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bb72c0

// -[SCUnlockableLensTracker didExitLensWithInteractionInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bb761c

// -[SCUnlockableLensTracker _hasPendingLensInteraction]
// Type encoding: B16@0:8
// Implementation: 0x106bb7a90

// -[SCUnlockableLensTracker _fireMostRecentLensImpression]
// Type encoding: v16@0:8
// Implementation: 0x106bb7abc

// -[SCUnlockableLensTracker _fireLensExitImpression:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bb7ba0

// -[SCUnlockableLensTracker grapheneLensTypeStringFromInteraction:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bb7c60

// -[SCUnlockableLensTracker addInteraction:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bb7cd4

// -[SCUnlockableLensTracker flipCameraForLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bb7de8

// -[SCUnlockableLensTracker validateAndFirePendingInteractionIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bb7ef8

// -[SCUnlockableLensTracker trackProductImpressions:forLensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bb7f9c

// -[SCUnlockableLensTracker applyProductInteraction:toLensInteraction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bb8320

// -[SCUnlockableLensTracker _createProductInteractionFromImpression:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bb8474

// -[SCUnlockableLensTracker _newProductInteractionByMergingProductInteraction:withImpression:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106bb8550

// -[SCUnlockableLensTracker _newProductInteractionByMergingProductInteraction:withVisibleAtLensExit:visibleAtLastUpdate:productTapped:totalSelectionTime:swipedOverCount:]
// Type encoding: @48@0:8@16B24B28B32d36i44
// Implementation: 0x106bb8654

// -[SCUnlockableLensTracker _updateAttachmentImpressionForLensId:attachmentInteraction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bb8730

// -[SCUnlockableLensTracker _updateCameraInteractionForLensInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bb88a8

// -[SCUnlockableLensTracker trackAttachmentViewForLensId:attachmentInteraction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bb89b0

// -[SCUnlockableLensTracker fireAttachmentInteraction:lensID:attachmentOpen:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106bb8be8

// -[SCUnlockableLensTracker trackProductAttachmentViewFromProductLinkForId:lensId:openTimestamp:isRedirectToStore:isRedirectToWebview:]
// Type encoding: v48@0:8q16@24@32B40B44
// Implementation: 0x106bb8d84

// -[SCUnlockableLensTracker trackProductAttachmentViewTimeForLensId:viewTimeSec:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106bb9074

// -[SCUnlockableLensTracker fireTrackWithSnapInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bb92e8

// -[SCUnlockableLensTracker _updateInteraction:existingInteraction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bb93ec

// -[SCUnlockableLensTracker _fireLensCarouselInteractionWithSnapInfo:shouldFireTrackViaSnapAdsClient:shouldFireTrackViaGtqClient:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x106bb9868

// -[SCUnlockableLensTracker isInteractionEligibleForIndependentLensImpression:]
// Type encoding: B24@0:8@16
// Implementation: 0x106bb9d3c

// -[SCUnlockableLensTracker _fireIndependentImpressionTrack:requestId:sequenceNumber:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106bb9d98

// -[SCUnlockableLensTracker _isSponsoredLensSwipeInteraction:]
// Type encoding: B24@0:8@16
// Implementation: 0x106bb9f08

// -[SCUnlockableLensTracker _isNoFillSwipeInteraction:]
// Type encoding: B24@0:8@16
// Implementation: 0x106bb9f50

// -[SCUnlockableLensTracker _updateInteractionWithLensEngagement:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bb9f94

// -[SCUnlockableLensTracker _newUnlockableAdTrackInfoBuilderWithRequestId:trackType:carouselExitEvent:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x106bba160

// -[SCUnlockableLensTracker _createProtoTrackWithSnapInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bba3f0

// -[SCUnlockableLensTracker newSwipeInteraction]
// Type encoding: @16@0:8
// Implementation: 0x106bbb304

// -[SCUnlockableLensTracker _newProductInteractionsWith:updateBlock:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x106bbb310

// -[SCUnlockableLensTracker _updateSnapAdsWithLensCarouselInteraction]
// Type encoding: v16@0:8
// Implementation: 0x106bbb468

// -[SCUnlockableLensTracker _canTrack:]
// Type encoding: B24@0:8@16
// Implementation: 0x106bbb7d8

// -[SCUnlockableLensTracker _shouldFireModularSessionEndImpressionForAppliedUnlockableIds:]
// Type encoding: B24@0:8@16
// Implementation: 0x106bbb8f4

// -[SCUnlockableLensTracker _isPostCaptureTracker]
// Type encoding: B16@0:8
// Implementation: 0x106bbb9e8

// -[SCUnlockableLensTracker _isLiveCameraTracker]
// Type encoding: B16@0:8
// Implementation: 0x106bbba10

// -[SCUnlockableLensTracker _isExitEventCaptureEnd]
// Type encoding: B16@0:8
// Implementation: 0x106bbba3c

// -[SCUnlockableLensTracker trackFlagUnlockableId:reasonId:flagNote:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106bbba54

// -[SCUnlockableLensTracker lensSource]
// Type encoding: q16@0:8
// Implementation: 0x106bbbc18

// -[SCUnlockableLensTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bbbc28

@end
