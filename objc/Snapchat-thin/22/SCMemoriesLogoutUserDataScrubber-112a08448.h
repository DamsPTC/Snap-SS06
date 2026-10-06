// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesLogoutUserDataScrubber
// Superclass: NSObject
// Address: 0x112a08448

@interface SCMemoriesLogoutUserDataScrubber

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesLogoutUserDataScrubber initWithCurrentUserId:docObjectContext:composerServices:circumstanceEngine:grapheneRegistry:userBlizzardLogger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104f0f388

// -[SCMemoriesLogoutUserDataScrubber kindName]
// Type encoding: @16@0:8
// Implementation: 0x104f100f8

// -[SCMemoriesLogoutUserDataScrubber removeExpiredContentAsyncForReason:dispatchGroup:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x104f10104

// -[SCMemoriesLogoutUserDataScrubber removeAllUserSessionDataAsync]
// Type encoding: v16@0:8
// Implementation: 0x104f104a8

// -[SCMemoriesLogoutUserDataScrubber handleEmergencyDiskConditionWithDispatchGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f104ac

// -[SCMemoriesLogoutUserDataScrubber reportMetrics]
// Type encoding: @16@0:8
// Implementation: 0x104f104b0

// -[SCMemoriesLogoutUserDataScrubber .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f104b8

// +[SCMemoriesLogoutUserDataScrubber clearAllUserDataExceptUserId:composerServices:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f0f504

// +[SCMemoriesLogoutUserDataScrubber clearLogoutUserDataWithCurrentUserId:expireDurationInDays:composerServices:grapheneRegistry:]
// Type encoding: @48@0:8@16Q24@32@40
// Implementation: 0x104f0f5a4

// +[SCMemoriesLogoutUserDataScrubber hasLogoutUserDataWithCurrentUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x104f0f748

// +[SCMemoriesLogoutUserDataScrubber hasEnoughFreeDisk]
// Type encoding: B16@0:8
// Implementation: 0x104f0f7e4

// +[SCMemoriesLogoutUserDataScrubber updateDataLossStatusFromDocObjectContext:retainedUserHashSet:shouldReportMetrics:currentUserName:currentUserId:grapheneRegistry:userBlizzardLogger:]
// Type encoding: v68@0:8@16@24B32@36@44@52@60
// Implementation: 0x104f0f824

// +[SCMemoriesLogoutUserDataScrubber _prepareExculdeUserHashSetWithCurrentUserId:expireDurationInDays:userHashDict:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x104f0fc64

// +[SCMemoriesLogoutUserDataScrubber _clearAllUserDataExceptUserHashSet:composerServices:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f0fe8c

// +[SCMemoriesLogoutUserDataScrubber _isExpiredForFileDir:expireDurationInDays:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x104f0ff10

// +[SCMemoriesLogoutUserDataScrubber _hasLogoutUserDataForUserHash:currentUserId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x104f10048

@end
