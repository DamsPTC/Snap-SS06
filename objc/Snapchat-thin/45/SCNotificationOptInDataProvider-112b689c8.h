// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationOptInDataProvider
// Superclass: NSObject
// Address: 0x112b689c8

@interface SCNotificationOptInDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNotificationOptInDataProvider initWithCreatorSettingFetcher:creatorSettingsDataTracker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1079df60c

// -[SCNotificationOptInDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079df7a8

// -[SCNotificationOptInDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079df7b0

// -[SCNotificationOptInDataProvider isFriendNotificationOptedInWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1079df7b8

// -[SCNotificationOptInDataProvider initOptInUserIdSetIfNecessaryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1079df8cc

// -[SCNotificationOptInDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1079dfa90

// -[SCNotificationOptInDataProvider _announceOptInDoorbellClickEventWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079dfde4

// -[SCNotificationOptInDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079dfe5c

// +[SCNotificationOptInDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1079df79c

@end
