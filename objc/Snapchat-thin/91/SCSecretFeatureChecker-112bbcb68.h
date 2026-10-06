// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSecretFeatureChecker
// Superclass: NSObject
// Address: 0x112bbcb68

@interface SCSecretFeatureChecker

// Property: mode; attributes: Tq,V_mode
// Property: timeInterval; attributes: Td,V_timeInterval

// -[SCSecretFeatureChecker init]
// Type encoding: @16@0:8
// Implementation: 0x108caf068

// -[SCSecretFeatureChecker initWithTimeInterval:]
// Type encoding: @24@0:8d16
// Implementation: 0x108caf070

// -[SCSecretFeatureChecker initWithQueue:timeInterval:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x108caf11c

// -[SCSecretFeatureChecker start]
// Type encoding: v16@0:8
// Implementation: 0x108caf208

// -[SCSecretFeatureChecker _scheduleTimer]
// Type encoding: v16@0:8
// Implementation: 0x108caf274

// -[SCSecretFeatureChecker stop]
// Type encoding: v16@0:8
// Implementation: 0x108caf308

// -[SCSecretFeatureChecker addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x108caf39c

// -[SCSecretFeatureChecker removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108caf3a4

// -[SCSecretFeatureChecker mode]
// Type encoding: q16@0:8
// Implementation: 0x108caf930

// -[SCSecretFeatureChecker setMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x108caf938

// -[SCSecretFeatureChecker timeInterval]
// Type encoding: d16@0:8
// Implementation: 0x108caf940

// -[SCSecretFeatureChecker setTimeInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x108caf948

// -[SCSecretFeatureChecker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108caf950

// +[SCSecretFeatureChecker checkSecretFeatureModeWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108caf98c

// +[SCSecretFeatureChecker checkSecretFeatureModeWithCompletion:completionQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x108caf994

// +[SCSecretFeatureChecker _checkSecretFeatureMode]
// Type encoding: q16@0:8
// Implementation: 0x108caf3ac

// +[SCSecretFeatureChecker _checkSecretFeatureWithOldAPI]
// Type encoding: q16@0:8
// Implementation: 0x108caf3ec

// +[SCSecretFeatureChecker _checkSecretFeatureWithOldAPIHelper]
// Type encoding: @16@0:8
// Implementation: 0x108caf44c

// +[SCSecretFeatureChecker _checkSecretFeatureWithNewAPI]
// Type encoding: q16@0:8
// Implementation: 0x108caf4f4

// +[SCSecretFeatureChecker _checkSecretFeatureWithNewAPIHelper]
// Type encoding: @16@0:8
// Implementation: 0x108caf55c

// +[SCSecretFeatureChecker _checkSecretFeatureWithLatestAPI]
// Type encoding: q16@0:8
// Implementation: 0x108caf5fc

// +[SCSecretFeatureChecker _checkSecretFeatureWithLatestAPIHelper]
// Type encoding: @16@0:8
// Implementation: 0x108caf664

// +[SCSecretFeatureChecker _secretStateWithTargetBuffer:selectorBuffer:propertyBuffer:]
// Type encoding: @40@0:8*16*24*32
// Implementation: 0x108caf704

@end
