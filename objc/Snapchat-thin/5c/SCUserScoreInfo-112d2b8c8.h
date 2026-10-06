// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserScoreInfo
// Superclass: NSObject
// Address: 0x112d2b8c8

@interface SCUserScoreInfo

// Property: sentCount; attributes: TQ,R,N,V_sentCount
// Property: receivedCount; attributes: TQ,R,N,V_receivedCount
// Property: totalScore; attributes: TQ,R,N,V_totalScore
// Property: storiesPosted; attributes: TQ,R,N,V_storiesPosted

// -[SCUserScoreInfo initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc6b3cc

// -[SCUserScoreInfo initWithSentCount:receivedCount:totalScore:storiesPosted:]
// Type encoding: @48@0:8Q16Q24Q32Q40
// Implementation: 0x1007f99b8

// -[SCUserScoreInfo copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10bc6b47c

// -[SCUserScoreInfo encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc6b4a0

// -[SCUserScoreInfo hash]
// Type encoding: Q16@0:8
// Implementation: 0x10bc6b528

// -[SCUserScoreInfo isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10bc6b584

// -[SCUserScoreInfo sentCount]
// Type encoding: Q16@0:8
// Implementation: 0x1007f9c40

// -[SCUserScoreInfo receivedCount]
// Type encoding: Q16@0:8
// Implementation: 0x10bc6b63c

// -[SCUserScoreInfo totalScore]
// Type encoding: Q16@0:8
// Implementation: 0x1007f9a18

// -[SCUserScoreInfo storiesPosted]
// Type encoding: Q16@0:8
// Implementation: 0x10bc6b644

@end
