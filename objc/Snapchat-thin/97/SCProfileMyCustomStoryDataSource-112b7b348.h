// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileMyCustomStoryDataSource
// Superclass: NSObject
// Address: 0x112b7b348

@interface SCProfileMyCustomStoryDataSource

// Property: storyType; attributes: Tq,R,N,V_storyType
// Property: storyId; attributes: T@"NSString",R,N,V_storyId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProfileMyCustomStoryDataSource initWithStoryId:storyType:myStoriesDataCoordinator:snapViewerDataCoordinator:readReceiptCoordinator:customStoriesDataFetcher:snapchattersDataFetcher:shortcutsDataFetcher:currentUserId:circumstanceEngine:]
// Type encoding: @96@0:8@16q24@32@40@48@56@64@72@80@88
// Implementation: 0x107d0fbc8

// -[SCProfileMyCustomStoryDataSource _setUp]
// Type encoding: v16@0:8
// Implementation: 0x107d0ff50

// -[SCProfileMyCustomStoryDataSource _onStoryUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d10a08

// -[SCProfileMyCustomStoryDataSource _updateWithStoryUpdate:userIdToSnapchatter:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107d10e7c

// -[SCProfileMyCustomStoryDataSource _updateWithStoryUpdate:subtext:displayName:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107d10f68

// -[SCProfileMyCustomStoryDataSource storiesSectionDataModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x107d11214

// -[SCProfileMyCustomStoryDataSource storySavableObservable]
// Type encoding: @16@0:8
// Implementation: 0x107d1121c

// -[SCProfileMyCustomStoryDataSource dismissTooltip]
// Type encoding: v16@0:8
// Implementation: 0x107d11224

// -[SCProfileMyCustomStoryDataSource storyId]
// Type encoding: @16@0:8
// Implementation: 0x107d11228

// -[SCProfileMyCustomStoryDataSource storyType]
// Type encoding: q16@0:8
// Implementation: 0x107d11230

// -[SCProfileMyCustomStoryDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d11238

@end
