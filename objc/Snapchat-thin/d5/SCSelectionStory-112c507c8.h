// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSelectionStory
// Superclass: NSObject
// Address: 0x112c507c8

@interface SCSelectionStory


// -[SCSelectionStory copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b02dbbc

// -[SCSelectionStory hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b02dbe0

// -[SCSelectionStory internalInit]
// Type encoding: @16@0:8
// Implementation: 0x10b02de50

// -[SCSelectionStory isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b02de94

// -[SCSelectionStory matchMyStory:ourStory:businessStory:customStory:spotlightStory:condensedMyStory:fanPassStory:]
// Type encoding: v72@0:8@?16@?24@?32@?40@?48@?56@?64
// Implementation: 0x10b02e364

// -[SCSelectionStory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b02e588

// +[SCSelectionStory businessStoryWithBusinessStoryId:displayName:logoURL:officialBadgeType:tier:category:categoryEnum:subcategoryEnum:customTTL:bitmojiInfo:isHost:]
// Type encoding: @100@0:8@16@24@32q40q48q56q64q72@80@88B96
// Implementation: 0x10b02d298

// +[SCSelectionStory condensedMyStoryWithStories:storySelectedInDropDown:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b02d404

// +[SCSelectionStory customStoryWithPublicationId:type:displayName:subtitle:creationTimestamp:myLastPostTimestamp:joinTimestamp:customTTL:]
// Type encoding: @80@0:8@16q24@32@40@48@56@64@72
// Implementation: 0x10b02d49c

// +[SCSelectionStory fanPassStoryWithFanPassStoryId:displayName:logoURL:customTTL:isHost:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x10b02d628

// +[SCSelectionStory myStoryWithUserId:username:type:bitmojiAvatarId:bitmojiSelfieId:storyPrivacy:customTTL:]
// Type encoding: @72@0:8@16@24Q32@40@48q56@64
// Implementation: 0x10b02d730

// +[SCSelectionStory ourStoryWithOurStoryId:displayName:subtext:mapLastPostTimestamp:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b02d864

// +[SCSelectionStory spotlightStoryWithSpotlightStoryId:memberRoleBusinessId:memberRoleAvatarURL:snapchatter:displayName:subtext:actionIdentifier:badgeTitle:isPostingEnabled:showDisclosureIndicator:leadingAccessoryImage:subtextIcon:isErrorState:]
// Type encoding: @108@0:8@16@24@32@40@48@56@64@72B80B84@88@96B104
// Implementation: 0x10b02d95c

@end
