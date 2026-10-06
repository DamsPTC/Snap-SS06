// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryManagementDataSource
// Superclass: NSObject
// Address: 0x112b6a0e8

@interface SCStoryManagementDataSource

// Property: storyId; attributes: T@"NSString",R,C,N,V_storyId
// Property: storyType; attributes: Tq,R,N,V_storyType
// Property: variant; attributes: Tq,R,N,V_variant
// Property: userId; attributes: T@"NSString",R,N,V_userId

// -[SCStoryManagementDataSource initWithStoryId:storyType:variant:userSessionUserId:myStoriesDataCoordinator:customStoriesDataFetcher:snapViewerDataCoordinator:snapchatterFetcher:storiesDataCoordinator:plusServices:profileRepostSectionEnabled:]
// Type encoding: @100@0:8@16q24q32@40@48@56@64@72@80@88B96
// Implementation: 0x107a16d2c

// -[SCStoryManagementDataSource snapDataModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x107a17104

// -[SCStoryManagementDataSource storyDisplayNameObservable]
// Type encoding: @16@0:8
// Implementation: 0x107a1712c

// -[SCStoryManagementDataSource indexForClientId:]
// Type encoding: q24@0:8@16
// Implementation: 0x107a17134

// -[SCStoryManagementDataSource dataModelForIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x107a172b0

// -[SCStoryManagementDataSource _setUp]
// Type encoding: v16@0:8
// Implementation: 0x107a17310

// -[SCStoryManagementDataSource _setUpDataModelsData]
// Type encoding: v16@0:8
// Implementation: 0x107a17334

// -[SCStoryManagementDataSource _setUpDisplayNameData]
// Type encoding: v16@0:8
// Implementation: 0x107a17ab4

// -[SCStoryManagementDataSource _onPlaybackSequence:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a17ccc

// -[SCStoryManagementDataSource _onSnapIdToSnapViewers:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a17d90

// -[SCStoryManagementDataSource _onPostingStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a17dc8

// -[SCStoryManagementDataSource _onStorySummaryInfos:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a17e00

// -[SCStoryManagementDataSource _fetchMissingSnapchattersIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107a17fa8

// -[SCStoryManagementDataSource _onSnapchattersFetched:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a184ec

// -[SCStoryManagementDataSource _updateDataModels]
// Type encoding: v16@0:8
// Implementation: 0x107a18568

// -[SCStoryManagementDataSource _onDisplayNameUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a18b48

// -[SCStoryManagementDataSource _onPlaybackSequenceComplete]
// Type encoding: v16@0:8
// Implementation: 0x107a18b50

// -[SCStoryManagementDataSource _onShowViewTimestampsUpdated:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a18be4

// -[SCStoryManagementDataSource storyId]
// Type encoding: @16@0:8
// Implementation: 0x107a18bfc

// -[SCStoryManagementDataSource storyType]
// Type encoding: q16@0:8
// Implementation: 0x107a18c04

// -[SCStoryManagementDataSource variant]
// Type encoding: q16@0:8
// Implementation: 0x107a18c0c

// -[SCStoryManagementDataSource userId]
// Type encoding: @16@0:8
// Implementation: 0x107a18c14

// -[SCStoryManagementDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a18c1c

@end
