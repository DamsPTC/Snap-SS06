// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendmojiPresenter
// Superclass: NSObject
// Address: 0x112a42b48

@interface SCFriendmojiPresenter


// -[SCFriendmojiPresenter initWithFriendmojiRegistry:currentDateProvider:friendmojiDataProvider:streakProvider:messagingExperimentService:decoratorsFuture:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1055020f0

// -[SCFriendmojiPresenter displayStringForSnapchatter:friendmojiFilterType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1055025d0

// -[SCFriendmojiPresenter displayStringForFriendmojis:streakLength:friendUserId:friendmojiFilterType:isAiChatBot:]
// Type encoding: @52@0:8@16q24@32Q40B48
// Implementation: 0x10550275c

// -[SCFriendmojiPresenter displayStringWithStreakExpirationForFriendmojis:streakLength:friendUserId:friendmojiFilterType:isAiChatBot:]
// Type encoding: @52@0:8@16q24@32Q40B48
// Implementation: 0x105502768

// -[SCFriendmojiPresenter friendmojiDisplayStringForGroup:friendmojiFilterType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105502774

// -[SCFriendmojiPresenter friendmojiDisplayStringForGroupId:friendmojis:friendmojiFilterType:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x1055029e8

// -[SCFriendmojiPresenter observeDisplayStringsForFriendmojis:friendmojiFilterType:isAiChatBotByUserId:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x105502b28

// -[SCFriendmojiPresenter observeDisplayStringsForGroupFriendmojis:friendmojiFilterType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105502b2c

// -[SCFriendmojiPresenter _observeDisplayStringsForIdentifierFriendmojis:friendmojiFilterType:isAiChatBotByIdentifier:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x105502b38

// -[SCFriendmojiPresenter _displayStringsObservableForIdentifiers:friendmojisByIdentifier:isAiChatBotByIdentifier:friendmojiFilterType:decoratorsByPosition:emojiObservable:]
// Type encoding: @64@0:8@16@24@32Q40@48@56
// Implementation: 0x105502f84

// -[SCFriendmojiPresenter _accumulatedDisplayStringMapFromUpdates:]
// Type encoding: @24@0:8@16
// Implementation: 0x105503878

// -[SCFriendmojiPresenter _observeAssembledFriendmojisForIdentifier:friendmojis:isAiChatBot:friendmojiFilterType:decoratorsByPosition:]
// Type encoding: @52@0:8@16@24B32Q36@44
// Implementation: 0x105503930

// -[SCFriendmojiPresenter _assembledFriendmojisFromCategoryOptionals:flatPositions:identifier:friendmojis:isAiChatBot:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x105503da4

// -[SCFriendmojiPresenter _displayStringsForIdentifiers:allIdentifierData:preResolvedEmojis:friendmojiFilterType:]
// Type encoding: @48@0:8@16@24@32Q40
// Implementation: 0x105503fbc

// -[SCFriendmojiPresenter _emojiForFriendmojiType:preResolvedEmojis:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105504214

// -[SCFriendmojiPresenter _categoriesByPositionForIdentifier:friendmojiFilterType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1055042ac

// -[SCFriendmojiPresenter _assembledFriendmojisForIdentifier:friendmojis:categoriesByPosition:isAiChatBot:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1055044a8

// -[SCFriendmojiPresenter _friendmojisForIdentifier:friendmojis:friendmojiFilterType:isAiChatBot:]
// Type encoding: @44@0:8@16@24Q32B40
// Implementation: 0x105504834

// -[SCFriendmojiPresenter _displayStringForFriendmojis:streakLength:friendUserId:friendmojiFilterType:showExpiryTimeForDebugging:isAiChatBot:]
// Type encoding: @56@0:8@16q24@32Q40B48B52
// Implementation: 0x1055048dc

// -[SCFriendmojiPresenter _displayStringWithFriendmojis:streakLength:streakExpiration:isFrozen:friendmojiFilterType:showExpiryTimeForDebugging:preResolvedEmojis:]
// Type encoding: @64@0:8@16q24d32B40Q44B52@56
// Implementation: 0x105504b8c

// -[SCFriendmojiPresenter _streakStringWithLength:expiration:isFrozen:shouldDisplayStreakCounter:showExpiryTimeForDebugging:preResolvedEmojis:]
// Type encoding: @52@0:8q16d24B32B36B40@44
// Implementation: 0x105505234

// -[SCFriendmojiPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105505584

@end
