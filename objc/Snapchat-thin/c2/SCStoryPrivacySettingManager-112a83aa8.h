// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryPrivacySettingManager
// Superclass: NSObject
// Address: 0x112a83aa8

@interface SCStoryPrivacySettingManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: storyPrivacySettingObserverable; attributes: T@"SCObservable",R,N

// -[SCStoryPrivacySettingManager initWithStoryPrivacyProvider:snapchattersDataFetcher:snapchattersDataMutator:snapchattersDataTracker:friendStorySettingMutator:circumstanceEngine:storiesBlizzardLogger:docObjectContext:userPreferences:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x105a1ec18

// -[SCStoryPrivacySettingManager _setup]
// Type encoding: v16@0:8
// Implementation: 0x105a1ef80

// -[SCStoryPrivacySettingManager _setupLocalStoryPrivacyWithInitialStoryPrivacy:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a1f274

// -[SCStoryPrivacySettingManager _onUserStoryPrivacy:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a1f428

// -[SCStoryPrivacySettingManager storyPrivacySettingObserverable]
// Type encoding: @16@0:8
// Implementation: 0x105a1f4ac

// -[SCStoryPrivacySettingManager storyPrivacySetting]
// Type encoding: q16@0:8
// Implementation: 0x105a1f4b4

// -[SCStoryPrivacySettingManager updateStoryPrivacyWithUpdateRequest:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105a1f61c

// -[SCStoryPrivacySettingManager _currentStoryPrivacyEnum]
// Type encoding: q16@0:8
// Implementation: 0x105a1f784

// -[SCStoryPrivacySettingManager _updateStoryPrivacyWithUpdateRequest:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105a1f7e4

// -[SCStoryPrivacySettingManager _updateSendToMyStoryAudienceIfNecessary:storyPrivacy:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105a200b4

// -[SCStoryPrivacySettingManager _updateStoryPrivacyWithNewPrivacy:originalPrivacy:outGoingSnapchatters:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105a2014c

// -[SCStoryPrivacySettingManager _logGrapheneStoryPrivacyUpdateTo:blockedUserIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a20428

// -[SCStoryPrivacySettingManager didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a206c8

// -[SCStoryPrivacySettingManager didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105a206cc

// -[SCStoryPrivacySettingManager _handleDidEndSnapchattersUpdateDataRequest:withSuccess:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a2081c

// -[SCStoryPrivacySettingManager _processSTMSStoryPrivacyUpdateWithNewPrivacy:originalPrivacy:blockedUserIds:success:completionQueue:completion:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x105a20900

// -[SCStoryPrivacySettingManager _currentStoryPrivacyInDocObject]
// Type encoding: @16@0:8
// Implementation: 0x105a20a64

// -[SCStoryPrivacySettingManager _updatePrivacyInDocObjectWithNewPrivacy:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a20aac

// -[SCStoryPrivacySettingManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a20bdc

@end
