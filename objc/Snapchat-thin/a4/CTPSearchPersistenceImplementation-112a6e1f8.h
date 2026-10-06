// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPSearchPersistenceImplementation
// Superclass: NSObject
// Address: 0x112a6e1f8

@interface CTPSearchPersistenceImplementation

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPSearchPersistenceImplementation initWithSearchSectionPersistenceService:bitmojiAvatarProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105806b10

// -[CTPSearchPersistenceImplementation addPersistedSearchTerms:]
// Type encoding: v24@0:8@16
// Implementation: 0x105806c04

// -[CTPSearchPersistenceImplementation shouldChatSearchTermPersist:]
// Type encoding: B24@0:8@16
// Implementation: 0x105806d24

// -[CTPSearchPersistenceImplementation cacheChatSearchSectionResults:forSearchTerm:userHasCameo:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105806d70

// -[CTPSearchPersistenceImplementation fetchPersistedSearchSectionForTerm:userHasCameo:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105806e2c

// -[CTPSearchPersistenceImplementation _persistChatSearchSectionData:forSearchTerm:userHasCameo:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10580718c

// -[CTPSearchPersistenceImplementation _unarchiveSectionResultsData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058072b0

// -[CTPSearchPersistenceImplementation _isCachedSearchSectionValid:userHasCameo:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x10580738c

// -[CTPSearchPersistenceImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105807418

@end
