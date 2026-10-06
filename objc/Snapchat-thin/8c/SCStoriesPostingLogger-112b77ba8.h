// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesPostingLogger
// Superclass: NSObject
// Address: 0x112b77ba8

@interface SCStoriesPostingLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesPostingLogger initWithPreferences:performer:grapheneMetricsEmitter:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107c9d734

// -[SCStoriesPostingLogger checkStoryPostBeenLoggedForClientId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107c9d800

// -[SCStoriesPostingLogger _checkStoryClientIdInPreferences:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107c9d954

// -[SCStoriesPostingLogger clearStoryClientIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c9daa4

// -[SCStoriesPostingLogger _clearStoryClientIdsFromPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c9dbbc

// -[SCStoriesPostingLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107c9dcac

@end
