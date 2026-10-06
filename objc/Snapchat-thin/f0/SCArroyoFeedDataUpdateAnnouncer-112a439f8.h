// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArroyoFeedDataUpdateAnnouncer
// Superclass: NSObject
// Address: 0x112a439f8

@interface SCArroyoFeedDataUpdateAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: feedEntriesUpdateEvent; attributes: T@"SCObservable",R,N,V_feedEntriesUpdatePublisher

// -[SCArroyoFeedDataUpdateAnnouncer init]
// Type encoding: @16@0:8
// Implementation: 0x10044a07c

// -[SCArroyoFeedDataUpdateAnnouncer addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100606110

// -[SCArroyoFeedDataUpdateAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105521ce0

// -[SCArroyoFeedDataUpdateAnnouncer onFeedEntriesUpdated:multiRecipientEntries:feedEntriesDeleted:multiRecipientEntriesDeleted:updateMetadata:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10063719c

// -[SCArroyoFeedDataUpdateAnnouncer onFeedRequestError:status:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105521ce8

// -[SCArroyoFeedDataUpdateAnnouncer feedEntriesUpdateEvent]
// Type encoding: @16@0:8
// Implementation: 0x105521cf0

// -[SCArroyoFeedDataUpdateAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105521cf8

@end
