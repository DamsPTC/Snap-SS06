// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersPinningMetadataDefaultRepository
// Superclass: NSObject
// Address: 0x112a32018

@interface SCSnapchattersPinningMetadataDefaultRepository

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapchattersPinningMetadataDefaultRepository initWithDocObjectContext:performerProvider:appStartExperimentReader:impressionThreshold:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x100a04594

// -[SCSnapchattersPinningMetadataDefaultRepository pinningMetadataObservableOfTopSuggestions]
// Type encoding: @16@0:8
// Implementation: 0x1053cf35c

// -[SCSnapchattersPinningMetadataDefaultRepository pinningMetadataObservableOfRecentlyJoiners]
// Type encoding: @16@0:8
// Implementation: 0x1053cf570

// -[SCSnapchattersPinningMetadataDefaultRepository userIdsUnderImpressionThresholdObservable]
// Type encoding: @16@0:8
// Implementation: 0x100a0826c

// -[SCSnapchattersPinningMetadataDefaultRepository incrementImpressionCountInPinningMetadataOfUserIds:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1053cff28

// -[SCSnapchattersPinningMetadataDefaultRepository _pinningMetadataFromTopSuggestions]
// Type encoding: @16@0:8
// Implementation: 0x1053d04f4

// -[SCSnapchattersPinningMetadataDefaultRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053d0be8

@end
