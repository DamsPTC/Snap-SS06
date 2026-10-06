// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardSamplingRateResolver
// Superclass: NSObject
// Address: 0x112b122f8

@interface SCBlizzardSamplingRateResolver

// Property: graphene; attributes: T@"SCGrapheneBlizzardMetric2",&,N,V_graphene

// -[SCBlizzardSamplingRateResolver initWithCms:fallbackSamplingConfig:policyCache:graphene:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106ae28dc

// -[SCBlizzardSamplingRateResolver initWithGraphene:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10028063c

// -[SCBlizzardSamplingRateResolver resolvePerUserSamplingRate:]
// Type encoding: d24@0:8@16
// Implementation: 0x100282994

// -[SCBlizzardSamplingRateResolver resolvePerEventSamplingRate:]
// Type encoding: d24@0:8@16
// Implementation: 0x100285564

// -[SCBlizzardSamplingRateResolver _getSamplingPolicyForEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x1002829e4

// -[SCBlizzardSamplingRateResolver _retrieveSamplingPolicySync:event:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1004a070c

// -[SCBlizzardSamplingRateResolver _retrieveSamplingConfigurationSync]
// Type encoding: @16@0:8
// Implementation: 0x100282da4

// -[SCBlizzardSamplingRateResolver _overrideExistsForKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x100282c78

// -[SCBlizzardSamplingRateResolver _initializeFallbackSamplingConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x100280718

// -[SCBlizzardSamplingRateResolver _schemaPolicyForEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x100283b24

// -[SCBlizzardSamplingRateResolver _createFallbackSamplingPolicy:eventSampleRate:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x100283ed4

// -[SCBlizzardSamplingRateResolver graphene]
// Type encoding: @16@0:8
// Implementation: 0x106ae29cc

// -[SCBlizzardSamplingRateResolver setGraphene:]
// Type encoding: v24@0:8@16
// Implementation: 0x10028086c

// -[SCBlizzardSamplingRateResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ae29d4

@end
