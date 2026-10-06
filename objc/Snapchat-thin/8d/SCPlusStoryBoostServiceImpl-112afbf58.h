// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStoryBoostServiceImpl
// Superclass: NSObject
// Address: 0x112afbf58

@interface SCPlusStoryBoostServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlusStoryBoostServiceImpl initWithPlusServices:featureSettingsService:storiesServices:myStoriesServices:storiesNetworkingServices:composerServices:composerCoreUIServices:composerPeopleBridgeUserInfoServices:valdiBlizzardLoggingServices:subscribeScopeExposer:subscribeScopeServices:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1067a2cc0

// -[SCPlusStoryBoostServiceImpl storyManagementCardForStoryType:storyId:viewController:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x1067a2fd0

// -[SCPlusStoryBoostServiceImpl boost]
// Type encoding: @16@0:8
// Implementation: 0x1067a32b8

// -[SCPlusStoryBoostServiceImpl hasEligibleStoriesToBoost]
// Type encoding: @16@0:8
// Implementation: 0x1067a33b8

// -[SCPlusStoryBoostServiceImpl observeBoostState]
// Type encoding: @16@0:8
// Implementation: 0x1067a3554

// -[SCPlusStoryBoostServiceImpl _makeStoryBoostViewForViewController:storyType:customStoryType:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x1067a357c

// -[SCPlusStoryBoostServiceImpl _makeStoryBoostViewForViewController:storyType:customStoryType:gatingValue:]
// Type encoding: @48@0:8@16q24q32@40
// Implementation: 0x1067a37c0

// -[SCPlusStoryBoostServiceImpl _makeUpsellCardWithViewController:impression:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1067a3dd8

// -[SCPlusStoryBoostServiceImpl _boostStoriesWithSuccessCallback:errorCallback:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1067a40dc

// -[SCPlusStoryBoostServiceImpl _getFilteredStoriesWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1067a4288

// -[SCPlusStoryBoostServiceImpl _boostStories:successCallback:errorCallback:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1067a45c0

// -[SCPlusStoryBoostServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067a4834

@end
