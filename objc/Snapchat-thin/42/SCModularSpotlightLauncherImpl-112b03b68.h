// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCModularSpotlightLauncherImpl
// Superclass: NSObject
// Address: 0x112b03b68

@interface SCModularSpotlightLauncherImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCModularSpotlightLauncherImpl initWithSpotlightScopeExposer:spotlightScopeServices:storiesConfigProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100516b58

// -[SCModularSpotlightLauncherImpl launchModularSpotlightWithUiContainer:configuration:sourcePage:sourcePageSessionId:viewLocation:feedPageEntryType:spotlightScopeDelegate:spotlightPlaybackDelegate:]
// Type encoding: v80@0:8@16@24q32@40q48q56@64@72
// Implementation: 0x106897de4

// -[SCModularSpotlightLauncherImpl launchSpotlightOnFriendsFeedWithParentController:baseView:sourcePage:sourcePageSessionId:feedPageEntryType:tappedStories:cachedSpotlightStories:friendUserId:friendFeedUserIds:inChatContextParams:spotlightScopeDelegate:spotlightPlaybackDelegate:]
// Type encoding: v112@0:8@16@24q32@40q48@56@64@72@80@88@96@104
// Implementation: 0x106897ee4

// -[SCModularSpotlightLauncherImpl _SOFFSeededConfigurationWithTappedStories:cachedSpotlightStories:friendUserId:friendFeedUserIds:inChatContextParams:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10689805c

// -[SCModularSpotlightLauncherImpl _SOFFCacheSliceFor:friendUserId:friendFeedUserIds:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1068982f8

// -[SCModularSpotlightLauncherImpl _SOFFStories:orderedFromFriendUserId:friendFeedUserIds:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10689854c

// -[SCModularSpotlightLauncherImpl _SOFFFeedIdsForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x106898a20

// -[SCModularSpotlightLauncherImpl removeSpotlightScope]
// Type encoding: v16@0:8
// Implementation: 0x106898e34

// -[SCModularSpotlightLauncherImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106898e7c

@end
