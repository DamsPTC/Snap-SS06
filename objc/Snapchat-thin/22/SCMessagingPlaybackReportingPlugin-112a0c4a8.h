// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagingPlaybackReportingPlugin
// Superclass: NSObject
// Address: 0x112a0c4a8

@interface SCMessagingPlaybackReportingPlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessagingPlaybackReportingPlugin initWithConversationId:conversationActionHandler:messagingExperimentService:source:delegate:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32q40@48@56
// Implementation: 0x104f84194

// -[SCMessagingPlaybackReportingPlugin setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f842c0

// -[SCMessagingPlaybackReportingPlugin registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x104f842cc

// -[SCMessagingPlaybackReportingPlugin operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104f84388

// -[SCMessagingPlaybackReportingPlugin _handleReportSnapForPageId:blockFirst:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104f84458

// -[SCMessagingPlaybackReportingPlugin _reportSnapForServerMessageId:clientMessageId:serverConversationId:playbackOperaItem:playbackMessage:blockFirst:]
// Type encoding: v60@0:8@16@24@32@40@48B56
// Implementation: 0x104f846dc

// -[SCMessagingPlaybackReportingPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f856e4

@end
