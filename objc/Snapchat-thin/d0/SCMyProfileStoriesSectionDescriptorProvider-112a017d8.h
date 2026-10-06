// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMyProfileStoriesSectionDescriptorProvider
// Superclass: NSObject
// Address: 0x112a017d8

@interface SCMyProfileStoriesSectionDescriptorProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCUnifiedProfileSectionDescriptorProvidingDelegate>",W,N,V_delegate

// -[SCMyProfileStoriesSectionDescriptorProvider initWithUserSession:newStoryActionsManager:circumstanceEngine:complianceEngine:myStoriesServices:snapProUserProfileIdProvider:snapProProfilesProvider:storiesConfigProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104e46f40

// -[SCMyProfileStoriesSectionDescriptorProvider fetchSectionDescriptors:updateReason:updatingQueue:]
// Type encoding: v40@0:8@?16q24@32
// Implementation: 0x104e474cc

// -[SCMyProfileStoriesSectionDescriptorProvider _fetchStoriesAndCustomStoryMetadataWithCompletion:completionQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x104e476d4

// -[SCMyProfileStoriesSectionDescriptorProvider _isStoryActive:]
// Type encoding: B24@0:8@16
// Implementation: 0x104e47a60

// -[SCMyProfileStoriesSectionDescriptorProvider _sortByMostRecentSnapTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e47aa4

// -[SCMyProfileStoriesSectionDescriptorProvider _sortByLastPostTime:customStoriesByStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e47bdc

// -[SCMyProfileStoriesSectionDescriptorProvider _updateSectionsWithStories:customStoriesByStoryId:preStoriesSectionDescriptors:updatingBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104e47d9c

// -[SCMyProfileStoriesSectionDescriptorProvider _spotlightSections]
// Type encoding: @16@0:8
// Implementation: 0x104e48dbc

// -[SCMyProfileStoriesSectionDescriptorProvider didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e48ef4

// -[SCMyProfileStoriesSectionDescriptorProvider _reloadSectionWithUpdateReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x104e4921c

// -[SCMyProfileStoriesSectionDescriptorProvider _calculateGroupsCountToshowWithExpandedState:threshold:storyCount:]
// Type encoding: q36@0:8B16Q20Q28
// Implementation: 0x104e49260

// -[SCMyProfileStoriesSectionDescriptorProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x104e49274

// -[SCMyProfileStoriesSectionDescriptorProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e4928c

// -[SCMyProfileStoriesSectionDescriptorProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e49298

@end
