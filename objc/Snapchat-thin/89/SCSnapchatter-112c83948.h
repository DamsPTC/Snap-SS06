// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchatter
// Superclass: SCDocObject
// Address: 0x112c83948

@interface SCSnapchatter

// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: username; attributes: T@"NSString",R,C,N,V_username
// Property: displayName; attributes: T@"NSString",R,C,N,V_displayName
// Property: isPopular; attributes: TB,R,N,V_isPopular
// Property: friendmojis; attributes: T@"NSArray",R,C,N,V_friendmojis
// Property: bitmojiInfo; attributes: T@"SCSnapchattersBitmojiInfo",R,C,N,V_bitmojiInfo
// Property: emojiSymbol; attributes: T@"NSString",R,C,N,V_emojiSymbol
// Property: isBlocked; attributes: TB,R,N,V_isBlocked
// Property: friendInfo; attributes: T@"SCSnapchattersFriendInfo",R,C,N,V_friendInfo
// Property: incomingFriendInfo; attributes: T@"SCSnapchattersIncomingFriendInfo",R,C,N,V_incomingFriendInfo
// Property: suggestedSnapchatterInfo; attributes: T@"SCSnapchattersSuggestedSnapchatterInfo",R,C,N,V_suggestedSnapchatterInfo
// Property: contactSnapchatterInfo; attributes: T@"SCSnapchattersContactSnapchatterInfo",R,C,N,V_contactSnapchatterInfo
// Property: snapProId; attributes: T@"NSString",R,C,N,V_snapProId
// Property: mutableUsername; attributes: T@"NSString",R,C,N,V_mutableUsername
// Property: legacyUsername; attributes: T@"NSString",R,C,N,V_legacyUsername
// Property: plusBadgeVisibility; attributes: TI,R,N,V_plusBadgeVisibility
// Property: postViewEmoji; attributes: T@"NSString",R,C,N,V_postViewEmoji
// Property: creatorSnapchatterInfo; attributes: T@"SCSnapchattersCreatorSnapchatterInfo",R,C,N,V_creatorSnapchatterInfo
// Property: actionmojiInfo; attributes: T@"SCSnapchattersActionmojiInfo",R,C,N,V_actionmojiInfo
// Property: postSendEmoji; attributes: T@"NSString",R,C,N,V_postSendEmoji
// Property: plusInfo; attributes: T@"SCSnapchattersPlusInfo",R,C,N,V_plusInfo
// Property: saturnInfo; attributes: T@"SCSnapchattersSaturnInfo",R,C,N,V_saturnInfo
// Property: isAiChatbot; attributes: TB,R,N,V_isAiChatbot

// -[SCSnapchatter _swizzled_getUsername]
// Type encoding: @16@0:8
// Implementation: 0x100bf0e94

// -[SCSnapchatter _cleanupUsername:]
// Type encoding: @24@0:8@16
// Implementation: 0x109019c14

// -[SCSnapchatter initWithSCCUser:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f40794

// -[SCSnapchatter initWithUserId:username:displayName:isPopular:friendmojis:bitmojiInfo:emojiSymbol:isBlocked:friendInfo:incomingFriendInfo:suggestedSnapchatterInfo:contactSnapchatterInfo:snapProId:mutableUsername:legacyUsername:plusBadgeVisibility:postViewEmoji:creatorSnapchatterInfo:actionmojiInfo:postSendEmoji:plusInfo:saturnInfo:isAiChatbot:]
// Type encoding: @184@0:8@16@24@32B40@44@52@60B68@72@80@88@96@104@112@120I128@132@140@148@156@164@172B180
// Implementation: 0x100bf0080

// -[SCSnapchatter copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b653080

// -[SCSnapchatter hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6530a4

// -[SCSnapchatter isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x100c57ce4

// -[SCSnapchatter userId]
// Type encoding: @16@0:8
// Implementation: 0x100bf0570

// -[SCSnapchatter username]
// Type encoding: @16@0:8
// Implementation: 0x10b65324c

// -[SCSnapchatter displayName]
// Type encoding: @16@0:8
// Implementation: 0x100c369b8

// -[SCSnapchatter isPopular]
// Type encoding: B16@0:8
// Implementation: 0x100c369c8

// -[SCSnapchatter friendmojis]
// Type encoding: @16@0:8
// Implementation: 0x100c369d8

// -[SCSnapchatter bitmojiInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c369e8

// -[SCSnapchatter emojiSymbol]
// Type encoding: @16@0:8
// Implementation: 0x100c369f8

// -[SCSnapchatter isBlocked]
// Type encoding: B16@0:8
// Implementation: 0x100bf0c50

// -[SCSnapchatter friendInfo]
// Type encoding: @16@0:8
// Implementation: 0x100bf1208

// -[SCSnapchatter incomingFriendInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c36a08

// -[SCSnapchatter suggestedSnapchatterInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c36a18

// -[SCSnapchatter contactSnapchatterInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c36a28

// -[SCSnapchatter snapProId]
// Type encoding: @16@0:8
// Implementation: 0x100bf118c

// -[SCSnapchatter mutableUsername]
// Type encoding: @16@0:8
// Implementation: 0x100bf117c

// -[SCSnapchatter legacyUsername]
// Type encoding: @16@0:8
// Implementation: 0x100c36a38

// -[SCSnapchatter plusBadgeVisibility]
// Type encoding: I16@0:8
// Implementation: 0x100c36a48

// -[SCSnapchatter postViewEmoji]
// Type encoding: @16@0:8
// Implementation: 0x100c36a58

// -[SCSnapchatter creatorSnapchatterInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c36a68

// -[SCSnapchatter actionmojiInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c36a78

// -[SCSnapchatter postSendEmoji]
// Type encoding: @16@0:8
// Implementation: 0x100c36a88

// -[SCSnapchatter plusInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c36a98

// -[SCSnapchatter saturnInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c36aa8

// -[SCSnapchatter isAiChatbot]
// Type encoding: B16@0:8
// Implementation: 0x100c36ab8

// -[SCSnapchatter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100c464b8

// +[SCSnapchatter UseMockMutation]
// Type encoding: B16@0:8
// Implementation: 0x100bf10a4

// +[SCSnapchatter UseMutationTestIcon]
// Type encoding: B16@0:8
// Implementation: 0x100bf1110

// +[SCSnapchatter changeUsernameSwizzle]
// Type encoding: v16@0:8
// Implementation: 0x1003e2740

// +[SCSnapchatter table]
// Type encoding: r*16@0:8
// Implementation: 0x1008a9940

// +[SCSnapchatter immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x100bed830

// +[SCSnapchatter objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x108c2fd88

@end
