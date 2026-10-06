// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesLogger
// Superclass: NSObject
// Address: 0x112ad6078

@interface SCSpotlightRepliesLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightRepliesLogger addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106240cc0

// -[SCSpotlightRepliesLogger removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106240cc8

// -[SCSpotlightRepliesLogger initWithCompositeStoryId:snapId:isCreatorMode:isCommentAdmin:repliesLoggingInfo:isSpotlightActionBarEnabled:eventAnnouncer:interactionHistoryManager:discoverFeedDataFetcher:commentsSnapRepliesLogger:]
// Type encoding: @84@0:8@16@24B32B36@40B48@52@60@68@76
// Implementation: 0x106240cd0

// -[SCSpotlightRepliesLogger initWithCompositeStoryId:snapId:isCreatorMode:isCommentAdmin:repliesLoggingInfo:isSpotlightActionBarEnabled:interactionHistoryManager:discoverFeedDataFetcher:commentsSnapRepliesLogger:]
// Type encoding: @76@0:8@16@24B32B36@40B48@52@60@68
// Implementation: 0x106240dd4

// -[SCSpotlightRepliesLogger logCommentsTrayOpenIsForeground:commentTabType:gestureType:commentsEntryPoint:triggerCommentIds:headerSuggestedSearchQueryText:]
// Type encoding: v60@0:8B16q20q28q36@44@52
// Implementation: 0x106241008

// -[SCSpotlightRepliesLogger startClientProcessingTimer:]
// Type encoding: v20@0:8B16
// Implementation: 0x10624111c

// -[SCSpotlightRepliesLogger logCommentsTrayDismissIsBackground:commentTabType:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x106241160

// -[SCSpotlightRepliesLogger _logRecentEventWithFeedActionType:extraData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1062412cc

// -[SCSpotlightRepliesLogger _feedTypeForLogging]
// Type encoding: @16@0:8
// Implementation: 0x1062415bc

// -[SCSpotlightRepliesLogger _sectionIdentifierForLogging]
// Type encoding: @16@0:8
// Implementation: 0x10624162c

// -[SCSpotlightRepliesLogger _addToData:commentActionType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1062416d8

// -[SCSpotlightRepliesLogger logEvent:extraData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106241a0c

// -[SCSpotlightRepliesLogger handleSwitchTabLoggingToCommentTabType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106241b88

// -[SCSpotlightRepliesLogger pauseCommentsTrayTimer]
// Type encoding: v16@0:8
// Implementation: 0x106241bd4

// -[SCSpotlightRepliesLogger resumeCommentsTrayTimer]
// Type encoding: v16@0:8
// Implementation: 0x106241c2c

// -[SCSpotlightRepliesLogger snapReplyPlaybackDidStart]
// Type encoding: v16@0:8
// Implementation: 0x106241c88

// -[SCSpotlightRepliesLogger snapReplyPlaybackDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x106241cac

// -[SCSpotlightRepliesLogger commentsAreLoadedWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x106241cec

// -[SCSpotlightRepliesLogger snapRepliesCarouselDidDisplayWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x106241da0

// -[SCSpotlightRepliesLogger hasViewedFavoritedByCreatorModal]
// Type encoding: v16@0:8
// Implementation: 0x106241de8

// -[SCSpotlightRepliesLogger hasTappedFavoritedByCreatorAvatar]
// Type encoding: v16@0:8
// Implementation: 0x106241e30

// -[SCSpotlightRepliesLogger logImpressionsWithImpressionItems:viewPort:viewPortScreenPosition:]
// Type encoding: v72@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24{CGPoint=dd}56
// Implementation: 0x106241e78

// -[SCSpotlightRepliesLogger logImpressionsByFlushingAll]
// Type encoding: v16@0:8
// Implementation: 0x106242080

// -[SCSpotlightRepliesLogger addCommentsSnapReplyCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1062420d4

// -[SCSpotlightRepliesLogger _resetRepliesTrayTimer]
// Type encoding: v16@0:8
// Implementation: 0x106242140

// -[SCSpotlightRepliesLogger _resetRepliesTabTimer]
// Type encoding: v16@0:8
// Implementation: 0x106242174

// -[SCSpotlightRepliesLogger _resetSnapReplyPlaybackTimer]
// Type encoding: v16@0:8
// Implementation: 0x1062421a0

// -[SCSpotlightRepliesLogger _announceEventWithEventName:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062421a8

// -[SCSpotlightRepliesLogger _logSpotlightRepliesActionOpenTrayTabIsForeground:commentTabType:gestureType:commentsEntryPoint:triggerCommentIds:headerSuggestedSearchQueryText:]
// Type encoding: v60@0:8B16q20q28q36@44@52
// Implementation: 0x106242228

// -[SCSpotlightRepliesLogger _logSpotlightRepliesActionCloseTrayTabIsBackground:commentTabType:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1062425ac

// -[SCSpotlightRepliesLogger _loadingStatusFromSCAContentCommentsLoadingState:]
// Type encoding: @24@0:8q16
// Implementation: 0x1062429ac

// -[SCSpotlightRepliesLogger _logFeedItemActionOpenTrayIsForeground:gestureType:commentsEntryPoint:headerSuggestedSearchQueryText:]
// Type encoding: v44@0:8B16q20q28@36
// Implementation: 0x1062429d4

// -[SCSpotlightRepliesLogger _logFeedItemActionCloseTrayIsBackground:repliesTrayViewSecsNumber:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106242c84

// -[SCSpotlightRepliesLogger _includeShareTrackingInformation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106242e50

// -[SCSpotlightRepliesLogger _includeCapturedOnSnapCameraIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106242ee0

// -[SCSpotlightRepliesLogger _includeSearchRankingLoggingIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106243258

// -[SCSpotlightRepliesLogger _logGrapheneCounterMetricWithActionType:tabType:isThreadedReply:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x106243404

// -[SCSpotlightRepliesLogger _logGrapheneTimerMetricWithActionType:duration:tabType:isThreadedReply:]
// Type encoding: v44@0:8q16d24q32B40
// Implementation: 0x106243458

// -[SCSpotlightRepliesLogger fetchRepliesForSnapWithStatus:receivedStories:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062434b8

// -[SCSpotlightRepliesLogger logOpenTrayReplyCountComparisonWithReplies:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062435b8

// -[SCSpotlightRepliesLogger _shouldLogFeedItemActionEventForContentViewSource]
// Type encoding: B16@0:8
// Implementation: 0x1062437b4

// -[SCSpotlightRepliesLogger _SCAStoryFeedActionTypeFromContentCommentsActionType:commentsInteractionContext:]
// Type encoding: q32@0:8q16q24
// Implementation: 0x10624382c

// -[SCSpotlightRepliesLogger _logOpsFeedEventIfNecessary:contentCommentActionData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106243890

// -[SCSpotlightRepliesLogger _interactionContextFromSCAContentCommentsEntryPoint:]
// Type encoding: q24@0:8q16
// Implementation: 0x106243cc0

// -[SCSpotlightRepliesLogger cheetahLoggingLongImpressionHelper:didReachThresholdForItems:date:extraData:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106243ce4

// -[SCSpotlightRepliesLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062440e4

// +[SCSpotlightRepliesLogger announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106240cb4

@end
