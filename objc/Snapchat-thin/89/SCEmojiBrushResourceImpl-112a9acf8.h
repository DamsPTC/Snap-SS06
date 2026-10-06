// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCEmojiBrushResourceImpl
// Superclass: NSObject
// Address: 0x112a9acf8

@interface SCEmojiBrushResourceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCEmojiBrushResourceImpl init]
// Type encoding: @16@0:8
// Implementation: 0x105d03cbc

// -[SCEmojiBrushResourceImpl getCurrentAvailableEmojiList]
// Type encoding: @16@0:8
// Implementation: 0x105d03d68

// -[SCEmojiBrushResourceImpl getCurrentAvailableEmojiListVersion]
// Type encoding: @16@0:8
// Implementation: 0x105d03db0

// -[SCEmojiBrushResourceImpl checkEmojiBrushListWithFetcher:updateIfNecessaryWithCompleteBlock:shouldSkipVersionCheck:]
// Type encoding: v36@0:8@16@?24B32
// Implementation: 0x105d03dd8

// -[SCEmojiBrushResourceImpl displayedNewEmojiBrushListForVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d04024

// -[SCEmojiBrushResourceImpl hasSeenNewEmojiList]
// Type encoding: B16@0:8
// Implementation: 0x105d0406c

// -[SCEmojiBrushResourceImpl _isEmojiListTTLExpired]
// Type encoding: B16@0:8
// Implementation: 0x105d04074

// -[SCEmojiBrushResourceImpl _updateEmojiBrushEmojiList:withVersion:shouldSkipVersionCheck:]
// Type encoding: B36@0:8@16@24B32
// Implementation: 0x105d040e0

// -[SCEmojiBrushResourceImpl _updateLastCheckingEmojiListTimestamp]
// Type encoding: v16@0:8
// Implementation: 0x105d04298

// -[SCEmojiBrushResourceImpl initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d042d4

// -[SCEmojiBrushResourceImpl encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d0440c

// -[SCEmojiBrushResourceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d044c4

// +[SCEmojiBrushResourceImpl defaultEmojiArray]
// Type encoding: @16@0:8
// Implementation: 0x105d044b8

@end
