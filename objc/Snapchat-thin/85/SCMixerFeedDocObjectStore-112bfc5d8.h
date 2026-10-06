// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMixerFeedDocObjectStore
// Superclass: NSObject
// Address: 0x112bfc5d8

@interface SCMixerFeedDocObjectStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMixerFeedDocObjectStore initWithDocObjectContext:performer:lensDataConfigProvider:feedDataTransformer:timeProvider:feedContextProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100b81b38

// -[SCMixerFeedDocObjectStore feedDataForGroupId:]
// Type encoding: @24@0:8q16
// Implementation: 0x10aebf490

// -[SCMixerFeedDocObjectStore groupDataForGroupId:]
// Type encoding: @24@0:8q16
// Implementation: 0x10aebf578

// -[SCMixerFeedDocObjectStore feedDataObservableForGroupId:]
// Type encoding: @24@0:8q16
// Implementation: 0x10aebf614

// -[SCMixerFeedDocObjectStore saveFeedData:groupId:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x10aebf674

// -[SCMixerFeedDocObjectStore cleanDataInPersistence:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10aebf7f4

// -[SCMixerFeedDocObjectStore warmupGroupIdIfNeeded:]
// Type encoding: v24@0:8q16
// Implementation: 0x10aebf7f8

// -[SCMixerFeedDocObjectStore _cleanDataInPersistence:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10aebf88c

// -[SCMixerFeedDocObjectStore _warmupGroupId:]
// Type encoding: v24@0:8q16
// Implementation: 0x10aebffc8

// -[SCMixerFeedDocObjectStore _updateMemoryCacheWithFeedData:groupId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10aec09e8

// -[SCMixerFeedDocObjectStore _saveFeedData:groupId:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x10aec0ce4

// -[SCMixerFeedDocObjectStore _subjectForGroupId:]
// Type encoding: @24@0:8q16
// Implementation: 0x10aec120c

// -[SCMixerFeedDocObjectStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aec12cc

@end
