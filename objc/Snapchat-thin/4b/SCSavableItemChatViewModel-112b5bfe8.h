// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSavableItemChatViewModel
// Superclass: SCMessageChatViewModel
// Address: 0x112b5bfe8

@interface SCSavableItemChatViewModel

// Property: messageState; attributes: T@"SCNMessagingMessage",R,C,N,V_messageState
// Property: isSaved; attributes: TB,R,N,V_isSaved
// Property: savedByCurrentUser; attributes: TB,R,N,V_savedByCurrentUser
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: identifier; attributes: T@"<NSObject>",R,N
// Property: topRightCornerIsRounded; attributes: TB,N
// Property: bottomRightCornerIsRounded; attributes: TB,N
// Property: bottomLeftCornerIsRounded; attributes: TB,N
// Property: headerIndex; attributes: Ti,N
// Property: height; attributes: Td,N
// Property: topMargin; attributes: Td,R,N
// Property: hidden; attributes: TB,R,N
// Property: conversationId; attributes: T@"NSString",R,N
// Property: isGroupConversation; attributes: TB,R,N
// Property: recipientUserId; attributes: T@"NSString",R,N
// Property: senderUserId; attributes: T@"NSString",R,N
// Property: analyticsMessageId; attributes: T@"NSString",R,N
// Property: reactableViewModel; attributes: T@"SCChatReactableViewModel",R,C,N
// Property: isFirstViewModel; attributes: TB,N
// Property: isLastViewModel; attributes: TB,N
// Property: isLastMessage; attributes: TB,N
// Property: prefetchPluginIdentifier; attributes: T@"NSString",R,N
// Property: reusableCellIdentifier; attributes: T@"NSString",R,N
// Property: shouldDisplayBelowFoldInChat; attributes: TB,R,N
// Property: isUnseenMessageInChat; attributes: TB,R,N
// Property: shouldShowFoldIndicator; attributes: TB,R,N
// Property: shouldShowDateHeader; attributes: TB,R,N
// Property: shouldShowSenderHeader; attributes: TB,R,N
// Property: shouldShowTimestamp; attributes: TB,R,N
// Property: shouldShowSenderLine; attributes: TB,R,N

// -[SCSavableItemChatViewModel initWithMessage:props:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107056590

// -[SCSavableItemChatViewModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107056628

// -[SCSavableItemChatViewModel isSavedByParticipant:]
// Type encoding: B24@0:8@16
// Implementation: 0x107056700

// -[SCSavableItemChatViewModel updateMessageState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107056764

// -[SCSavableItemChatViewModel savedByUsers:snapchattersData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10705681c

// -[SCSavableItemChatViewModel payloadContainerCornerRadii]
// Type encoding: @16@0:8
// Implementation: 0x1070568b4

// -[SCSavableItemChatViewModel cornerRadiusForSenderLine]
// Type encoding: d16@0:8
// Implementation: 0x107056960

// -[SCSavableItemChatViewModel colorForBackground]
// Type encoding: @16@0:8
// Implementation: 0x1070569b0

// -[SCSavableItemChatViewModel widthForSenderLine]
// Type encoding: d16@0:8
// Implementation: 0x107056a0c

// -[SCSavableItemChatViewModel shouldShowSavedLabel]
// Type encoding: B16@0:8
// Implementation: 0x107056a6c

// -[SCSavableItemChatViewModel shouldShowChatLabel]
// Type encoding: B16@0:8
// Implementation: 0x107056a70

// -[SCSavableItemChatViewModel shouldShowSaveOrUnsaveAnimation]
// Type encoding: B16@0:8
// Implementation: 0x107056a78

// -[SCSavableItemChatViewModel containsAllSavedMessages]
// Type encoding: B16@0:8
// Implementation: 0x107056ab0

// -[SCSavableItemChatViewModel savedColorForBackground]
// Type encoding: @16@0:8
// Implementation: 0x107056ab4

// -[SCSavableItemChatViewModel saveAnimationFromViewModel:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107056ad4

// -[SCSavableItemChatViewModel isSaved]
// Type encoding: B16@0:8
// Implementation: 0x107056bb0

// -[SCSavableItemChatViewModel savedByCurrentUser]
// Type encoding: B16@0:8
// Implementation: 0x107056bc0

// -[SCSavableItemChatViewModel messageState]
// Type encoding: @16@0:8
// Implementation: 0x107056bd0

// -[SCSavableItemChatViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107056be0

// +[SCSavableItemChatViewModel unsavedColorForBackground:]
// Type encoding: @20@0:8B16
// Implementation: 0x107056acc

@end
