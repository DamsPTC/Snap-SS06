// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerStoriesWatchStateStore
// Superclass: NSObject
// Address: 0x112a23018

@interface SCComposerStoriesWatchStateStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerStoriesWatchStateStore initWithStoryIdsToObserve:readReceiptCoordinator:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105217074

// -[SCComposerStoriesWatchStateStore dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10521713c

// -[SCComposerStoriesWatchStateStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1052171ac

// -[SCComposerStoriesWatchStateStore _removeWatchStoryUpdateCallback]
// Type encoding: v16@0:8
// Implementation: 0x1052171b8

// -[SCComposerStoriesWatchStateStore getWatchStatesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1052171f8

// -[SCComposerStoriesWatchStateStore onWatchStatesUpdatedWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x105217400

// -[SCComposerStoriesWatchStateStore _updateStoryDidGetGenerateNewReadReceipt:]
// Type encoding: v24@0:8@16
// Implementation: 0x1052174b4

// -[SCComposerStoriesWatchStateStore didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10521750c

// -[SCComposerStoriesWatchStateStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105217620

@end
