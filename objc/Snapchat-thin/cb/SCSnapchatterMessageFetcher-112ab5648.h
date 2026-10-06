// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchatterMessageFetcher
// Superclass: NSObject
// Address: 0x112ab5648

@interface SCSnapchatterMessageFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapchatterMessageFetcher initSnapchatterObservableRepository:snapchattersDataMutator:snapchatterPublicInfoFetcher:snapchatterFriendStatusManager:friendmojiPresenter:performer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105fb74a4

// -[SCSnapchatterMessageFetcher initWithFriendStatusManagerCreator:snapchatterObservableRepository:snapchattersDataMutator:snapchatterPublicInfoFetcher:friendmojiPresenter:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105fb763c

// -[SCSnapchatterMessageFetcher clearCache]
// Type encoding: v16@0:8
// Implementation: 0x105fb7768

// -[SCSnapchatterMessageFetcher addSnapchatterWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb77bc

// -[SCSnapchatterMessageFetcher _addSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb79d0

// -[SCSnapchatterMessageFetcher snapchatterObservableForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb7a5c

// -[SCSnapchatterMessageFetcher addButtonStatusForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb7d40

// -[SCSnapchatterMessageFetcher _addButtonStatusForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb7d44

// -[SCSnapchatterMessageFetcher _chatSnapchatterDisplayInfoFromSnapchatter:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fb7de0

// -[SCSnapchatterMessageFetcher _updateFriendStatusForUserWithId:friendStatus:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105fb8078

// -[SCSnapchatterMessageFetcher didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fb80f4

// -[SCSnapchatterMessageFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fb8268

@end
