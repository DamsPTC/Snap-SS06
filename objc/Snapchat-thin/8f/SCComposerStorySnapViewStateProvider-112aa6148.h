// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerStorySnapViewStateProvider
// Superclass: NSObject
// Address: 0x112aa6148

@interface SCComposerStorySnapViewStateProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerStorySnapViewStateProvider initWithStoriesSnapReadReceiptService:dataFetcher:storiesConfigProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105e90e20

// -[SCComposerStorySnapViewStateProvider getViewStatesWithSnapIds:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105e90ef0

// -[SCComposerStorySnapViewStateProvider observeViewStateWithOrganicStoryIdSnapIdPairs:promotedStoryIdSnapCountPairs:callback:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x105e91184

// -[SCComposerStorySnapViewStateProvider shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x105e91958

// -[SCComposerStorySnapViewStateProvider pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105e91960

// -[SCComposerStorySnapViewStateProvider _setOrganicSnapViewStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e9196c

// -[SCComposerStorySnapViewStateProvider _getOrganicSnapViewStates]
// Type encoding: @16@0:8
// Implementation: 0x105e919ac

// -[SCComposerStorySnapViewStateProvider _setPromotedStoryViewStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e919e8

// -[SCComposerStorySnapViewStateProvider _getPromotedStoryViewStates]
// Type encoding: @16@0:8
// Implementation: 0x105e91a28

// -[SCComposerStorySnapViewStateProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e91a64

@end
