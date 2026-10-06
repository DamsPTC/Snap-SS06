// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedItemImpressionTracker
// Superclass: NSObject
// Address: 0x112a8ddf0

@interface SCFriendsFeedItemImpressionTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendsFeedItemImpressionTracker addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b64524

// -[SCFriendsFeedItemImpressionTracker removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6452c

// -[SCFriendsFeedItemImpressionTracker init]
// Type encoding: @16@0:8
// Implementation: 0x105b64534

// -[SCFriendsFeedItemImpressionTracker initWithPlusFeatureLogger:sponsoredSnapAdResponseParser:friendsFeedCellVisibilityObservable:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105b64598

// -[SCFriendsFeedItemImpressionTracker feedDidAppearWithVisibleViewModels:friendsFeedSessionId:forRowsAtIndexes:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b64810

// -[SCFriendsFeedItemImpressionTracker feedDidDisappearWithVisibleViewModels:forRowsAtIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105b64a48

// -[SCFriendsFeedItemImpressionTracker feedDidAppearFromFriendStoryPlayback]
// Type encoding: v16@0:8
// Implementation: 0x105b64af4

// -[SCFriendsFeedItemImpressionTracker feedDidDisappearForFriendStoryPlayback]
// Type encoding: v16@0:8
// Implementation: 0x105b64b50

// -[SCFriendsFeedItemImpressionTracker feedDidAppearFromMessagingPlayback]
// Type encoding: v16@0:8
// Implementation: 0x105b64bac

// -[SCFriendsFeedItemImpressionTracker feedDidDisappearForMessagingPlayback]
// Type encoding: v16@0:8
// Implementation: 0x105b64c08

// -[SCFriendsFeedItemImpressionTracker cellDidAppearWithViewModel:previousViewModel:forRowAtIndex:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105b64c64

// -[SCFriendsFeedItemImpressionTracker _tryLogPresenceHintsViewedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b64f68

// -[SCFriendsFeedItemImpressionTracker cellDidAppearWithStoryViewModel:forRowAtIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105b653c8

// -[SCFriendsFeedItemImpressionTracker cellDidDisappearWithViewModel:forRowAtIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105b65468

// -[SCFriendsFeedItemImpressionTracker cellDidDisappearWithStoryViewModel:forRowAtIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105b65594

// -[SCFriendsFeedItemImpressionTracker cellDidHandleInteractionWithViewModel:forRowAtIndex:actionIdentifier:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x105b6561c

// -[SCFriendsFeedItemImpressionTracker friendsFeedImpressionUpdatesObservable]
// Type encoding: @16@0:8
// Implementation: 0x105b65b4c

// -[SCFriendsFeedItemImpressionTracker friendsFeedCellInteractionEventsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105b65b74

// -[SCFriendsFeedItemImpressionTracker _handleFriendsFeedVisibilityEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b65b9c

// -[SCFriendsFeedItemImpressionTracker _getImpressionLoggingDictWithViewModel:forRowAtIndex:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105b65e08

// -[SCFriendsFeedItemImpressionTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b66528

// +[SCFriendsFeedItemImpressionTracker announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105b64518

@end
