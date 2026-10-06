// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesCachedSummaryInfoProvider
// Superclass: NSObject
// Address: 0x112b60ae8

@interface SCStoriesCachedSummaryInfoProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesCachedSummaryInfoProvider initWithStoriesDataCoordinator:myStoriesDataCoordinator:readReceiptCoordinator:currentUserId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10721d4d4

// -[SCStoriesCachedSummaryInfoProvider warmUpCache]
// Type encoding: v16@0:8
// Implementation: 0x10721d69c

// -[SCStoriesCachedSummaryInfoProvider storiesSummaryInfoForStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10721d6a0

// -[SCStoriesCachedSummaryInfoProvider addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10721d718

// -[SCStoriesCachedSummaryInfoProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10721d720

// -[SCStoriesCachedSummaryInfoProvider _setUpMyStoryObservable]
// Type encoding: v16@0:8
// Implementation: 0x10721d728

// -[SCStoriesCachedSummaryInfoProvider _updateSummaries]
// Type encoding: v16@0:8
// Implementation: 0x10721de14

// -[SCStoriesCachedSummaryInfoProvider _handleFetchedSummaries:]
// Type encoding: v24@0:8@16
// Implementation: 0x10721df28

// -[SCStoriesCachedSummaryInfoProvider _onMyStorySummary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10721e230

// -[SCStoriesCachedSummaryInfoProvider didUpdateSummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10721e260

// -[SCStoriesCachedSummaryInfoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10721e2cc

@end
