// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdsCommonSnapAdImpressionTrack
// Superclass: GPBMessage
// Address: 0x112cdadb0

@interface SCAdsCommonSnapAdImpressionTrack

// Property: topSnapFullyPresentTimestamp; attributes: Tq,R,N
// Property: topSnapPlaybackBeginTimestamp; attributes: Tq,R,N
// Property: attachmentTriggerTimestamp; attributes: Tq,R,N
// Property: attachmentFullyPresentedTimestamp; attributes: Tq,R,N
// Property: attachmentDismissTimestamp; attributes: Tq,R,N
// Property: topsnapDismissTimestamp; attributes: Tq,R,N
// Property: swipeUp; attributes: TB,R,N
// Property: swipeupCount; attributes: Ti,R,N
// Property: botViewTime; attributes: Tq,R,N
// Property: topsnapTimeViewedSeconds; attributes: T@"GPBFloatValue",&,D,N
// Property: hasTopsnapTimeViewedSeconds; attributes: TB,D,N
// Property: topsnapMediaDurationSeconds; attributes: T@"GPBFloatValue",&,D,N
// Property: hasTopsnapMediaDurationSeconds; attributes: TB,D,N
// Property: longformTimeViewedSeconds; attributes: T@"GPBFloatValue",&,D,N
// Property: hasLongformTimeViewedSeconds; attributes: TB,D,N
// Property: swiped; attributes: T@"GPBBoolValue",&,D,N
// Property: hasSwiped; attributes: TB,D,N
// Property: deltaBetweenReceiveAndRenderMillis; attributes: T@"GPBInt64Value",&,D,N
// Property: hasDeltaBetweenReceiveAndRenderMillis; attributes: TB,D,N
// Property: swipeCount; attributes: T@"GPBInt32Value",&,D,N
// Property: hasSwipeCount; attributes: TB,D,N
// Property: creativeId; attributes: T@"NSData",C,D,N
// Property: topsnapTimeViewedBeforeInteractionSeconds; attributes: T@"GPBFloatValue",&,D,N
// Property: hasTopsnapTimeViewedBeforeInteractionSeconds; attributes: TB,D,N
// Property: topsnapVolumes; attributes: T@"SCAdsTopsnapVolumes",&,D,N
// Property: hasTopsnapVolumes; attributes: TB,D,N
// Property: topsnapMaxContinuousTimeViewedSeconds; attributes: T@"GPBFloatValue",&,D,N
// Property: hasTopsnapMaxContinuousTimeViewedSeconds; attributes: TB,D,N
// Property: topsnapAudibleTimeViewedSeconds; attributes: T@"GPBFloatValue",&,D,N
// Property: hasTopsnapAudibleTimeViewedSeconds; attributes: TB,D,N
// Property: topsnapMediaType; attributes: Ti,D,N
// Property: wasPrefetched; attributes: T@"GPBBoolValue",&,D,N
// Property: hasWasPrefetched; attributes: TB,D,N
// Property: unskippableDurationSeconds; attributes: T@"GPBFloatValue",&,D,N
// Property: hasUnskippableDurationSeconds; attributes: TB,D,N
// Property: unskippableViewTimeSeconds; attributes: T@"GPBFloatValue",&,D,N
// Property: hasUnskippableViewTimeSeconds; attributes: TB,D,N
// Property: adSkippableType; attributes: Ti,D,N
// Property: fatalMediaLoadError; attributes: T@"GPBBoolValue",&,D,N
// Property: hasFatalMediaLoadError; attributes: TB,D,N
// Property: wasBoosted; attributes: T@"GPBBoolValue",&,D,N
// Property: hasWasBoosted; attributes: TB,D,N
// Property: autoEndCardInteractionCount; attributes: T@"GPBInt32Value",&,D,N
// Property: hasAutoEndCardInteractionCount; attributes: TB,D,N
// Property: dpa; attributes: T@"SCAdsDpaMetadata",&,D,N
// Property: hasDpa; attributes: TB,D,N
// Property: autoEndCardViewedCount; attributes: T@"GPBInt32Value",&,D,N
// Property: hasAutoEndCardViewedCount; attributes: TB,D,N
// Property: adResponseParseCompleteTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasAdResponseParseCompleteTsMs; attributes: TB,D,N
// Property: adInsertionCompleteTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasAdInsertionCompleteTsMs; attributes: TB,D,N
// Property: topsnapFullyPresentTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasTopsnapFullyPresentTsMs; attributes: TB,D,N
// Property: ctaInteractableTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasCtaInteractableTsMs; attributes: TB,D,N
// Property: attachmentPageLoadedTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasAttachmentPageLoadedTsMs; attributes: TB,D,N
// Property: attachmentTriggeredTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasAttachmentTriggeredTsMs; attributes: TB,D,N
// Property: attachmentFullyPresentedTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasAttachmentFullyPresentedTsMs; attributes: TB,D,N
// Property: attachmentDismissTriggerTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasAttachmentDismissTriggerTsMs; attributes: TB,D,N
// Property: topsnapDimissTriggerTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasTopsnapDimissTriggerTsMs; attributes: TB,D,N
// Property: ctaWillDisplayTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasCtaWillDisplayTsMs; attributes: TB,D,N
// Property: ctaDidDisplayTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasCtaDidDisplayTsMs; attributes: TB,D,N
// Property: topsnapPlaybackBeginTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasTopsnapPlaybackBeginTsMs; attributes: TB,D,N
// Property: preferredAttachmentType; attributes: Ti,D,N
// Property: actualAttachmentType; attributes: Ti,D,N
// Property: isExternalAttachment; attributes: T@"GPBBoolValue",&,D,N
// Property: hasIsExternalAttachment; attributes: TB,D,N
// Property: swipeSensitivity; attributes: T@"SCAdsSwipeSensitivity",&,D,N
// Property: hasSwipeSensitivity; attributes: TB,D,N
// Property: exitEventSwipeInfo; attributes: T@"SCAdsExitEventSwipeInfo",&,D,N
// Property: hasExitEventSwipeInfo; attributes: TB,D,N
// Property: stickerMetadataArray; attributes: T@"NSMutableArray",&,D,N
// Property: stickerMetadataArray_Count; attributes: TQ,R,D,N
// Property: adCtaCardType; attributes: Ti,D,N
// Property: adInteraction; attributes: T@"SCAdsAdInteraction",&,D,N
// Property: hasAdInteraction; attributes: TB,D,N
// Property: attemptSwipeCount; attributes: T@"GPBInt32Value",&,D,N
// Property: hasAttemptSwipeCount; attributes: TB,D,N
// Property: arShoppingExperienceTrack; attributes: T@"SCAdsArShoppingExperienceTrack",&,D,N
// Property: hasArShoppingExperienceTrack; attributes: TB,D,N
// Property: topsnapTimeViewedSecondsV2; attributes: T@"GPBFloatValue",&,D,N
// Property: hasTopsnapTimeViewedSecondsV2; attributes: TB,D,N
// Property: returnToAppSeconds; attributes: T@"GPBFloatValue",&,D,N
// Property: hasReturnToAppSeconds; attributes: TB,D,N
// Property: attemptSwipeCountAll; attributes: T@"GPBInt32Value",&,D,N
// Property: hasAttemptSwipeCountAll; attributes: TB,D,N
// Property: peekAutoTriggerAttachmentDistanceThresholdPt; attributes: T@"GPBInt32Value",&,D,N
// Property: hasPeekAutoTriggerAttachmentDistanceThresholdPt; attributes: TB,D,N
// Property: clickInteractionsArray; attributes: T@"NSMutableArray",&,D,N
// Property: clickInteractionsArray_Count; attributes: TQ,R,D,N
// Property: topsnapInteractionTracksArray; attributes: T@"NSMutableArray",&,D,N
// Property: topsnapInteractionTracksArray_Count; attributes: TQ,R,D,N
// Property: endCardImpressionTrack; attributes: T@"SCAdsEndCardImpressionTrack",&,D,N
// Property: hasEndCardImpressionTrack; attributes: TB,D,N
// Property: swipedTopSnapResumeTimeTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasSwipedTopSnapResumeTimeTsMs; attributes: TB,D,N
// Property: swipedTopSnapPauseTimeTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasSwipedTopSnapPauseTimeTsMs; attributes: TB,D,N
// Property: swipedTopSnapStopTimeTsMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasSwipedTopSnapStopTimeTsMs; attributes: TB,D,N
// Property: isInstantPageEnabled; attributes: TB,D,N
// Property: oneTapAttachmentOpenEligible; attributes: TB,D,N
// Property: oneTapAttachmentOpenTimeThresholdMs; attributes: T@"GPBFloatValue",&,D,N
// Property: hasOneTapAttachmentOpenTimeThresholdMs; attributes: TB,D,N
// Property: dpaTopsnapImpressionTracksArray; attributes: T@"NSMutableArray",&,D,N
// Property: dpaTopsnapImpressionTracksArray_Count; attributes: TQ,R,D,N
// Property: playableAdInteractionTrack; attributes: T@"SCAdsPlayableAdInteractionTrack",&,D,N
// Property: hasPlayableAdInteractionTrack; attributes: TB,D,N
// Property: canShowMultiSegmentExperience; attributes: TB,D,N
// Property: tooltipImpressionTrack; attributes: T@"SCAdsTooltipImpressionTrack",&,D,N
// Property: hasTooltipImpressionTrack; attributes: TB,D,N
// Property: hasShopifyStorefrontToken; attributes: TB,D,N
// Property: productType; attributes: Ti,D,N
// Property: defaultAttachmentPositionIndex; attributes: T@"GPBInt32Value",&,D,N
// Property: hasDefaultAttachmentPositionIndex; attributes: TB,D,N
// Property: endCardType; attributes: Ti,D,N
// Property: captionCta; attributes: T@"SCAdsCaptionCtaImpressionTrack",&,D,N
// Property: hasCaptionCta; attributes: TB,D,N
// Property: tapToPauseInteractionsArray; attributes: T@"NSMutableArray",&,D,N
// Property: tapToPauseInteractionsArray_Count; attributes: TQ,R,D,N
// Property: promoImpressionTrack; attributes: T@"SCAdsPromoImpressionTrack",&,D,N
// Property: hasPromoImpressionTrack; attributes: TB,D,N
// Property: pollStickerTrack; attributes: T@"SCAdsPollStickerTrack",&,D,N
// Property: hasPollStickerTrack; attributes: TB,D,N
// Property: wakeUpUiInteraction; attributes: T@"SCAdsWakeUpUiInteraction",&,D,N
// Property: hasWakeUpUiInteraction; attributes: TB,D,N
// Property: stickerCtaType; attributes: Ti,D,N
// Property: liveReviewImpressionTrack; attributes: T@"SCAdsLiveReviewImpressionTrack",&,D,N
// Property: hasLiveReviewImpressionTrack; attributes: TB,D,N
// Property: cardCtaAccessoryMetadata; attributes: T@"SCAdsCardCtaAccessoryMetadata",&,D,N
// Property: hasCardCtaAccessoryMetadata; attributes: TB,D,N
// Property: retargetPromptTrack; attributes: T@"SCAdsRetargetPromptTrack",&,D,N
// Property: hasRetargetPromptTrack; attributes: TB,D,N
// Property: multiSegmentType; attributes: Ti,D,N
// Property: aiContentDisclaimerRendered; attributes: TB,D,N
// Property: tapToAdvanceInteraction; attributes: T@"SCAdsTapToAdvanceInteraction",&,D,N
// Property: hasTapToAdvanceInteraction; attributes: TB,D,N
// Property: topSnapMediaFrame; attributes: T@"SCAdsRenderedBoundingRect",&,D,N
// Property: hasTopSnapMediaFrame; attributes: TB,D,N

// -[SCAdsCommonSnapAdImpressionTrack topSnapFullyPresentTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x105474618

// -[SCAdsCommonSnapAdImpressionTrack topSnapPlaybackBeginTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10547466c

// -[SCAdsCommonSnapAdImpressionTrack attachmentTriggerTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1054746c0

// -[SCAdsCommonSnapAdImpressionTrack attachmentFullyPresentedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x105474714

// -[SCAdsCommonSnapAdImpressionTrack attachmentDismissTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x105474768

// -[SCAdsCommonSnapAdImpressionTrack topsnapDismissTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1054747bc

// -[SCAdsCommonSnapAdImpressionTrack swipeUp]
// Type encoding: B16@0:8
// Implementation: 0x105474810

// -[SCAdsCommonSnapAdImpressionTrack swipeupCount]
// Type encoding: i16@0:8
// Implementation: 0x10547485c

// -[SCAdsCommonSnapAdImpressionTrack botViewTime]
// Type encoding: q16@0:8
// Implementation: 0x1054748a8

// +[SCAdsCommonSnapAdImpressionTrack descriptor]
// Type encoding: @16@0:8
// Implementation: 0x10b7e4530

@end
