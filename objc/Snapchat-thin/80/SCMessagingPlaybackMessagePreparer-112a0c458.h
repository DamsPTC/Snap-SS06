// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagingPlaybackMessagePreparer
// Superclass: NSObject
// Address: 0x112a0c458

@interface SCMessagingPlaybackMessagePreparer


// -[SCMessagingPlaybackMessagePreparer initWithConversationId:userId:isGroupConversation:chatMessageActionHandler:messagingExperimentService:contentDelivery:]
// Type encoding: @60@0:8@16@24B32@36@44@52
// Implementation: 0x104f82e58

// -[SCMessagingPlaybackMessagePreparer contentStateForMediaContent:]
// Type encoding: q24@0:8@16
// Implementation: 0x104f83018

// -[SCMessagingPlaybackMessagePreparer loadContentForMessageId:mediaContent:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104f830e4

// -[SCMessagingPlaybackMessagePreparer postProcessChatMedia:messageId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104f83128

// -[SCMessagingPlaybackMessagePreparer _postProcessChatMedia:messageId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104f833a8

// -[SCMessagingPlaybackMessagePreparer playbackMessageFromMediaContent:nativeMessage:contentState:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x104f83538

// -[SCMessagingPlaybackMessagePreparer playbackMessageFromMediaContent:nativeMessage:oldMessage:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104f83544

// -[SCMessagingPlaybackMessagePreparer _playbackMessageFromMediaContent:nativeMessage:oldMessage:contentState:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x104f835d4

// -[SCMessagingPlaybackMessagePreparer readyToDisplayPlaybackMessageFromPlaybackMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f83afc

// -[SCMessagingPlaybackMessagePreparer _overlayCacheKeyWithMedia:contentState:oldMessage:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x104f83cac

// -[SCMessagingPlaybackMessagePreparer _shouldRegisterMediaContent:]
// Type encoding: B24@0:8@16
// Implementation: 0x104f83dc0

// -[SCMessagingPlaybackMessagePreparer _shouldPostProcessForMediaContent:]
// Type encoding: B24@0:8@16
// Implementation: 0x104f83e64

// -[SCMessagingPlaybackMessagePreparer _didRegisterMediaId:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104f84004

// -[SCMessagingPlaybackMessagePreparer _didPostProcessMessageId:success:error:completion:]
// Type encoding: v44@0:8@16B24q28@?36
// Implementation: 0x104f84070

// -[SCMessagingPlaybackMessagePreparer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f84134

@end
