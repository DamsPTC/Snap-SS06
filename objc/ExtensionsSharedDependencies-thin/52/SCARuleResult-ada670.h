// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCARuleResult
// Superclass: NSObject
// Address: 0xada670

@interface SCARuleResult

// Property: ruleName; attributes: T@"NSString",&,V_ruleName
// Property: failCondition; attributes: T@"NSString",&,V_failCondition
// Property: ruleTier; attributes: T@"NSString",&,V_ruleTier
// Property: enableCrash; attributes: TB,V_enableCrash

// -[SCARuleResult init:failCondition:ruleTier:enableCrash:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x59776c

// -[SCARuleResult init:failCondition:ruleTier:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x597838

// -[SCARuleResult init:failCondition:enableCrash:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x5978f8

// -[SCARuleResult init:failCondition:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x5979b0

// -[SCARuleResult ruleName]
// Type encoding: @16@0:8
// Implementation: 0x597a60

// -[SCARuleResult setRuleName:]
// Type encoding: v24@0:8@16
// Implementation: 0x597a6c

// -[SCARuleResult failCondition]
// Type encoding: @16@0:8
// Implementation: 0x597a74

// -[SCARuleResult setFailCondition:]
// Type encoding: v24@0:8@16
// Implementation: 0x597a80

// -[SCARuleResult ruleTier]
// Type encoding: @16@0:8
// Implementation: 0x597a88

// -[SCARuleResult setRuleTier:]
// Type encoding: v24@0:8@16
// Implementation: 0x597a94

// -[SCARuleResult enableCrash]
// Type encoding: B16@0:8
// Implementation: 0x597a9c

// -[SCARuleResult setEnableCrash:]
// Type encoding: v20@0:8B16
// Implementation: 0x597aa8

// -[SCARuleResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x597ab0

@end
