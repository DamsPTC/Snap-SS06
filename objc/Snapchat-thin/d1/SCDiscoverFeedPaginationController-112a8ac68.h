// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedPaginationController
// Superclass: NSObject
// Address: 0x112a8ac68

@interface SCDiscoverFeedPaginationController

// Property: delegate; attributes: T@"<SCDiscoverFeedSectionPaginationDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedPaginationController initWithDataFetcher:queryResultController:datasourceResetEnabled:storiesGrapheneMetricsEmitter:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x105ae7fa0

// -[SCDiscoverFeedPaginationController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105ae8118

// -[SCDiscoverFeedPaginationController startPaginationForFeedType:pageSessionId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105ae8170

// -[SCDiscoverFeedPaginationController endPaginationIfNeededForQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ae8288

// -[SCDiscoverFeedPaginationController _performPaginationForFeedType:pageSessionId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105ae828c

// -[SCDiscoverFeedPaginationController _performRemovalOfPendingPaginationWithQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ae8424

// -[SCDiscoverFeedPaginationController _removePendingPagination:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105ae85b8

// -[SCDiscoverFeedPaginationController _notifyDelegateForFeedType:inFlight:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x105ae8670

// -[SCDiscoverFeedPaginationController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ae86c0

// -[SCDiscoverFeedPaginationController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105ae88c0

// -[SCDiscoverFeedPaginationController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ae88d8

// -[SCDiscoverFeedPaginationController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ae88e4

@end
