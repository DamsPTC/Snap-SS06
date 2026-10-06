// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTConversationParticipantsSubject
// Superclass: SCBehaviorSubject
// Address: 0x112baa508

@interface SCTConversationParticipantsSubject

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTConversationParticipantsSubject initWithUserId:convoId:metadata:identityServices:snapchattersDataTracker:groupsDataFetcher:groupsDataTracker:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1085fdab0

// -[SCTConversationParticipantsSubject initWithUserId:convoId:metadata:identityServices:snapchattersDataTracker:groupsDataFetcher:groupsDataTracker:performer:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1085fdbe0

// -[SCTConversationParticipantsSubject dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1085fde08

// -[SCTConversationParticipantsSubject observableWithInjectBots:]
// Type encoding: @20@0:8B16
// Implementation: 0x1085fde9c

// -[SCTConversationParticipantsSubject _combineParticipants:withInjectedBot:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1085fdff4

// -[SCTConversationParticipantsSubject didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fe2f0

// -[SCTConversationParticipantsSubject didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1085fe2f4

// -[SCTConversationParticipantsSubject _startObserving]
// Type encoding: v16@0:8
// Implementation: 0x1085fe938

// -[SCTConversationParticipantsSubject _updateTrackedSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fef20

// -[SCTConversationParticipantsSubject _notifyAboutUpdatedSnapchatterIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085fef88

// -[SCTConversationParticipantsSubject _notifyAboutUpdatedGroupIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ff0cc

// -[SCTConversationParticipantsSubject _notify]
// Type encoding: v16@0:8
// Implementation: 0x1085ff20c

// -[SCTConversationParticipantsSubject .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085ff3b8

@end
