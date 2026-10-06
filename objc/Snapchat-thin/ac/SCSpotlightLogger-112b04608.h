// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightLogger
// Superclass: NSObject
// Address: 0x112b04608

@interface SCSpotlightLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightLogger initWithDiscoverFeedEventsController:interactionHistoryManager:discoverFeedDataFetcher:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1068ba208

// -[SCSpotlightLogger _logFeedItemsLongImpression:pageType:itemId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1068ba2d4

// -[SCSpotlightLogger _logFeedItemAction:pageType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1068ba508

// -[SCSpotlightLogger _logFeedItemAction:extraData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1068ba648

// -[SCSpotlightLogger logImpressionEventForContextLayer:impressionType:contextPageType:itemId:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x1068ba750

// -[SCSpotlightLogger logSpotlightFeedItemActionEvent:pageType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1068ba7d4

// -[SCSpotlightLogger logSpotlightFeedItemActionEvent:extraData:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1068ba7d8

// -[SCSpotlightLogger logContentTooltipImpressionEventWithItemId:itemType:tooltipType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x1068ba7dc

// -[SCSpotlightLogger performLoggerUpdateWithExtraData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068ba98c

// -[SCSpotlightLogger logOneTapToShareDisplayed]
// Type encoding: v16@0:8
// Implementation: 0x1068baa20

// -[SCSpotlightLogger logInFeedSurveyResponseWithData:storyDedupeFp:pageSessionId:feedActionType:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1068bab1c

// -[SCSpotlightLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068badd0

// +[SCSpotlightLogger announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1068ba1fc

@end
