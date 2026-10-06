// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerDynamicBatchUpdateHandler
// Superclass: NSObject
// Address: 0x112af0518

@interface SCLensExplorerDynamicBatchUpdateHandler

// Property: coordinatorFactory; attributes: T@"<SCLensExplorerQueryCoordinatorFactoryProtocol>",W,N,V_coordinatorFactory
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerDynamicBatchUpdateHandler initWithSectionConfigurationsDataStore:deepLinkProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1007b4870

// -[SCLensExplorerDynamicBatchUpdateHandler handleFeeds:forQueryResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066e3c5c

// -[SCLensExplorerDynamicBatchUpdateHandler handleItems:forFeedId:remoteState:queryResult:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1066e3dcc

// -[SCLensExplorerDynamicBatchUpdateHandler _storeSectionForFeed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066e3f20

// -[SCLensExplorerDynamicBatchUpdateHandler _updateCoordinatorForFeed:queryResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066e4368

// -[SCLensExplorerDynamicBatchUpdateHandler _logInfoForHandledFeed:queryResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066e45e8

// -[SCLensExplorerDynamicBatchUpdateHandler _isContainerFeed:withinFeeds:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1066e45ec

// -[SCLensExplorerDynamicBatchUpdateHandler coordinatorFactory]
// Type encoding: @16@0:8
// Implementation: 0x1066e487c

// -[SCLensExplorerDynamicBatchUpdateHandler setCoordinatorFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066e4894

// -[SCLensExplorerDynamicBatchUpdateHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066e48a0

@end
