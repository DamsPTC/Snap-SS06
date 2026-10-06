// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArroyoConversationDataUpdateAnnouncer
// Superclass: NSObject
// Address: 0x112a439a8

@interface SCArroyoConversationDataUpdateAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: conversationCreatedEvent; attributes: T@"SCObservable",R,N,V_conversationCreatedPublisher
// Property: conversationUpdateEvent; attributes: T@"SCObservable",R,N,V_conversationUpdatePublisher
// Property: conversationRemovalEvent; attributes: T@"SCObservable",R,N,V_conversationRemovalPublisher
// Property: sendStartEvent; attributes: T@"SCObservable",R,N,V_sendStartPublisher
// Property: sendCompletedEvent; attributes: T@"SCObservable",R,N,V_sendCompletedPublisher
// Property: conversationServerCreationConfirmationEvent; attributes: T@"SCObservable",R,N,V_conversationServerCreationConfirmationPublisher
// Property: loggingMessagesReceivedEvent; attributes: T@"SCObservable",R,N,V_loggingMessagesReceivedEventsObservable
// Property: conversationUpdateEventStreamForLastInteraction; attributes: T@"SCObservable",R,N

// -[SCArroyoConversationDataUpdateAnnouncer initWithCurrentUserId:loggingMessagesReceivedEventsObservable:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100415f70

// -[SCArroyoConversationDataUpdateAnnouncer addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004163f4

// -[SCArroyoConversationDataUpdateAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105521540

// -[SCArroyoConversationDataUpdateAnnouncer onConversationCreated:]
// Type encoding: v24@0:8@16
// Implementation: 0x105521548

// -[SCArroyoConversationDataUpdateAnnouncer onConversationUpdated:conversation:updatedMessages:removedMessages:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105521598

// -[SCArroyoConversationDataUpdateAnnouncer onConversationRemoved:]
// Type encoding: v24@0:8@16
// Implementation: 0x105521664

// -[SCArroyoConversationDataUpdateAnnouncer onSendStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055216b4

// -[SCArroyoConversationDataUpdateAnnouncer onSendComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x105521704

// -[SCArroyoConversationDataUpdateAnnouncer onConversationCreationServerConfirmed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105521754

// -[SCArroyoConversationDataUpdateAnnouncer onConversationReset:messages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055217a4

// -[SCArroyoConversationDataUpdateAnnouncer conversationUpdateEventStreamForLastInteraction]
// Type encoding: @16@0:8
// Implementation: 0x105521868

// -[SCArroyoConversationDataUpdateAnnouncer _publishConversationUpdateEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055219d8

// -[SCArroyoConversationDataUpdateAnnouncer _handleConversationUpdateEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105521a4c

// -[SCArroyoConversationDataUpdateAnnouncer _emitBufferedUpdatesWithObserver:lifecycle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105521b34

// -[SCArroyoConversationDataUpdateAnnouncer conversationCreatedEvent]
// Type encoding: @16@0:8
// Implementation: 0x10055aca4

// -[SCArroyoConversationDataUpdateAnnouncer conversationUpdateEvent]
// Type encoding: @16@0:8
// Implementation: 0x10055ac9c

// -[SCArroyoConversationDataUpdateAnnouncer conversationRemovalEvent]
// Type encoding: @16@0:8
// Implementation: 0x10055acac

// -[SCArroyoConversationDataUpdateAnnouncer sendStartEvent]
// Type encoding: @16@0:8
// Implementation: 0x105521c14

// -[SCArroyoConversationDataUpdateAnnouncer sendCompletedEvent]
// Type encoding: @16@0:8
// Implementation: 0x10049747c

// -[SCArroyoConversationDataUpdateAnnouncer conversationServerCreationConfirmationEvent]
// Type encoding: @16@0:8
// Implementation: 0x105521c1c

// -[SCArroyoConversationDataUpdateAnnouncer loggingMessagesReceivedEvent]
// Type encoding: @16@0:8
// Implementation: 0x105521c24

// -[SCArroyoConversationDataUpdateAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105521c2c

@end
