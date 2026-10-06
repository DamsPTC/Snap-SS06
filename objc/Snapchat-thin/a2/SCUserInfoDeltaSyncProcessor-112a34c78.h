// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserInfoDeltaSyncProcessor
// Superclass: NSObject
// Address: 0x112a34c78

@interface SCUserInfoDeltaSyncProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserInfoDeltaSyncProcessor initWithUserId:grapheneRegistry:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c05040

// -[SCUserInfoDeltaSyncProcessor type]
// Type encoding: @16@0:8
// Implementation: 0x1053fd0d8

// -[SCUserInfoDeltaSyncProcessor canProcessDeltaSyncWithGroupKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x100c15674

// -[SCUserInfoDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:]
// Type encoding: v52@0:8@16B24@28@36@44
// Implementation: 0x1053fd104

// -[SCUserInfoDeltaSyncProcessor logInDeltaSyncGroupKeys]
// Type encoding: @16@0:8
// Implementation: 0x1053fdeb8

// -[SCUserInfoDeltaSyncProcessor versionForGroupKey:]
// Type encoding: Q24@0:8@16
// Implementation: 0x100c16ec4

// -[SCUserInfoDeltaSyncProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053fe03c

@end
