// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDefaultPostRegistrationLogger
// Superclass: NSObject
// Address: 0x112a341d8

@interface SCDefaultPostRegistrationLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDefaultPostRegistrationLogger initWithLogger:deviceInfoProvider:grapheneRegistry:registrationFlowUUIDService:authenticationSessionInfoProvider:loginInfoRepository:registrationLastPageService:registrationSourceService:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1053ed820

// -[SCDefaultPostRegistrationLogger logPageView:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053eda68

// -[SCDefaultPostRegistrationLogger _updateLastPage:]
// Type encoding: q24@0:8q16
// Implementation: 0x1053edc40

// -[SCDefaultPostRegistrationLogger logRegistrationFlowEvent:pageType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1053edcb4

// -[SCDefaultPostRegistrationLogger logUserSetSearchability:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053edd74

// -[SCDefaultPostRegistrationLogger logUserGrantContactPermission:promptLevel:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1053ede1c

// -[SCDefaultPostRegistrationLogger logUserFindFriends:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053edfb8

// -[SCDefaultPostRegistrationLogger logUserAddFriends:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053edfc4

// -[SCDefaultPostRegistrationLogger logResponseSetSearchability:success:searchable:]
// Type encoding: v32@0:8q16B24B28
// Implementation: 0x1053ee06c

// -[SCDefaultPostRegistrationLogger logResponseFindFriendsRequestWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053ee110

// -[SCDefaultPostRegistrationLogger logResponseFindFriendsRequestRetryWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053ee1b8

// -[SCDefaultPostRegistrationLogger logResponseFindFriendsSuccessWithSource:isShowingSuggestions:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1053ee24c

// -[SCDefaultPostRegistrationLogger logResponseFindFriendsFailureWithSource:errorType:blizzardErrorType:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x1053ee364

// -[SCDefaultPostRegistrationLogger logResponseAddFriends:success:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1053ee4d8

// -[SCDefaultPostRegistrationLogger logRegistrationUserContactPermissionGrantWithVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053ee56c

// -[SCDefaultPostRegistrationLogger logRegistrationUserContactPermissionDenyWithVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053ee5e8

// -[SCDefaultPostRegistrationLogger logRegistrationUserContactPageviewWithVersion:verificationType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1053ee664

// -[SCDefaultPostRegistrationLogger logRegistrationUserContactSkipWithPageType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053ee6f8

// -[SCDefaultPostRegistrationLogger logRegistrationUserContactFindSuccessWithVersion:contactFoundCount:contactInviteCount:friendAddCount:recommendedCount:recommendedAddCount:verificationType:contactBookSize:waitTimeSec:]
// Type encoding: v88@0:8q16Q24Q32Q40Q48Q56q64Q72d80
// Implementation: 0x1053ee780

// -[SCDefaultPostRegistrationLogger logRegistrationUserContactSkipDialogWithContactFoundCount:recommendedContactCount:userConfirmedSkip:verificationType:pageType:]
// Type encoding: v52@0:8Q16Q24B32q36q44
// Implementation: 0x1053ee8b4

// -[SCDefaultPostRegistrationLogger logRegistrationContactsInvitesPageView]
// Type encoding: v16@0:8
// Implementation: 0x1053ee980

// -[SCDefaultPostRegistrationLogger logRegistrationContactsInvitesPageEndWithTimeSpent:contactsAvailable:contactsSeen:contactsSelected:contactsInviteShareAttempts:]
// Type encoding: v56@0:8d16Q24Q32Q40Q48
// Implementation: 0x1053ee9c4

// -[SCDefaultPostRegistrationLogger logRegistrationFindFriendsSuggestionRenderLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x1053eea7c

// -[SCDefaultPostRegistrationLogger logAllRecentlyActiveQuickAddCount:seenRecentlyActiveQuickAddCount:addedRecentlyActiveQuickAddCount:]
// Type encoding: v40@0:8Q16Q24Q32
// Implementation: 0x1053eeb14

// -[SCDefaultPostRegistrationLogger logRegistrationUserCompleteWithVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053eecd8

// -[SCDefaultPostRegistrationLogger logFollowCreatorsListView:flow:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x1053eedb4

// -[SCDefaultPostRegistrationLogger logFollowCreatorsSkip:flow:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1053eef50

// -[SCDefaultPostRegistrationLogger logFollowCreatorsSubscribe:flow:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x1053ef0ec

// -[SCDefaultPostRegistrationLogger _logGrapheneWithMetric:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053ef294

// -[SCDefaultPostRegistrationLogger _logResponseFindFriendsGrapheneMetric:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053ef3a0

// -[SCDefaultPostRegistrationLogger _logGraphenePageViewWithPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053ef410

// -[SCDefaultPostRegistrationLogger _newDeviceDimensionValue]
// Type encoding: @16@0:8
// Implementation: 0x1053ef578

// -[SCDefaultPostRegistrationLogger getLongClientId]
// Type encoding: @16@0:8
// Implementation: 0x1053ef5d4

// -[SCDefaultPostRegistrationLogger logRegistrationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053ef61c

// -[SCDefaultPostRegistrationLogger _logUserFindFriends:state:errorType:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x1053ef7d8

// -[SCDefaultPostRegistrationLogger _setHasLoggedInBeforeOnEvent:withValue:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1053ef898

// -[SCDefaultPostRegistrationLogger _setRegistrationSourceOnEvent:withValue:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1053ef964

// -[SCDefaultPostRegistrationLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053efa30

@end
