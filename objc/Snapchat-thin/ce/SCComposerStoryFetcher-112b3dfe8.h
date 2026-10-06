// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerStoryFetcher
// Superclass: NSObject
// Address: 0x112b3dfe8

@interface SCComposerStoryFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerStoryFetcher initWithStoriesDataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e5fe14

// -[SCComposerStoryFetcher getNativeUserStoryWithUserId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106e5fe88

// -[SCComposerStoryFetcher shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x106e600f4

// -[SCComposerStoryFetcher pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106e600fc

// -[SCComposerStoryFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e60108

// +[SCComposerStoryFetcher _playbackStoryTypeFromSummaryType:]
// Type encoding: q24@0:8q16
// Implementation: 0x106e60028

// +[SCComposerStoryFetcher _operaPlayableDataModelFromSummary:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e60048

@end
