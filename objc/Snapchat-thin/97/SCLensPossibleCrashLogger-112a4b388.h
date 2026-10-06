// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensPossibleCrashLogger
// Superclass: NSObject
// Address: 0x112a4b388

@interface SCLensPossibleCrashLogger

// Property: lastAppliedEffectIds; attributes: T@"NSArray",&,N,G_lastAppliedEffectIds,S_setLastAppliedEffectIds:

// -[SCLensPossibleCrashLogger initWithCrashedEffectIdsObservable:userPreferences:blizzardLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1055cb640

// -[SCLensPossibleCrashLogger checkPossibleCrashAndReportIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1055cb728

// -[SCLensPossibleCrashLogger _blizzardLogPossibleCrashEventWithEffectId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055cb85c

// -[SCLensPossibleCrashLogger _lastAppliedEffectIds]
// Type encoding: @16@0:8
// Implementation: 0x1055cb8f0

// -[SCLensPossibleCrashLogger _setLastAppliedEffectIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055cb970

// -[SCLensPossibleCrashLogger _subscribeOnEffectIdsObservable]
// Type encoding: v16@0:8
// Implementation: 0x1055cb9c8

// -[SCLensPossibleCrashLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055cbae4

@end
