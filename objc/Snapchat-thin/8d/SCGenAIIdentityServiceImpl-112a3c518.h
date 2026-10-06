// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGenAIIdentityServiceImpl
// Superclass: NSObject
// Address: 0x112a3c518

@interface SCGenAIIdentityServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGenAIIdentityServiceImpl initWithUNISCPbGenAIIdentityService:genAIProtoModelsConverter:featureSettingsService:primaryIdentityCache:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1054a91a4

// -[SCGenAIIdentityServiceImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1054a93a0

// -[SCGenAIIdentityServiceImpl isGenAIIdentityFeatureRestricted]
// Type encoding: B16@0:8
// Implementation: 0x1054a94b0

// -[SCGenAIIdentityServiceImpl isGenAIIdentityOnboarded]
// Type encoding: B16@0:8
// Implementation: 0x1054a94f0

// -[SCGenAIIdentityServiceImpl genAIIdentityOnboarded]
// Type encoding: @16@0:8
// Implementation: 0x1054a9530

// -[SCGenAIIdentityServiceImpl uploadIdentity:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054a9588

// -[SCGenAIIdentityServiceImpl getPrimaryIdentity]
// Type encoding: @16@0:8
// Implementation: 0x1054a96d8

// -[SCGenAIIdentityServiceImpl getCachedPrimaryIdentity]
// Type encoding: @16@0:8
// Implementation: 0x1054a96e0

// -[SCGenAIIdentityServiceImpl getPrimaryIdentityWithCache:]
// Type encoding: @20@0:8B16
// Implementation: 0x1054a9728

// -[SCGenAIIdentityServiceImpl getAllIdentites]
// Type encoding: @16@0:8
// Implementation: 0x1054a98b0

// -[SCGenAIIdentityServiceImpl deleteIdentityById:isPrimary:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1054a99c0

// -[SCGenAIIdentityServiceImpl deleteAllIdentities]
// Type encoding: @16@0:8
// Implementation: 0x1054a9b1c

// -[SCGenAIIdentityServiceImpl deletePrimaryIdentity]
// Type encoding: @16@0:8
// Implementation: 0x1054a9c2c

// -[SCGenAIIdentityServiceImpl startObserveGenAIIdentityOnboarded]
// Type encoding: v16@0:8
// Implementation: 0x1054a9d3c

// -[SCGenAIIdentityServiceImpl _getErrorFromServiceStatusResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054a9f90

// -[SCGenAIIdentityServiceImpl _uploadIdentity:observer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054aa10c

// -[SCGenAIIdentityServiceImpl _getPrimaryIdentityWithObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054aa428

// -[SCGenAIIdentityServiceImpl _getAllIdentitesWithObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054aa718

// -[SCGenAIIdentityServiceImpl _deleteIdentityById:isPrimary:observer:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1054aaad4

// -[SCGenAIIdentityServiceImpl _deleteAllIdentitiesWithObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054aadbc

// -[SCGenAIIdentityServiceImpl _deletePrimaryIdentityWithObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054ab07c

// -[SCGenAIIdentityServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054ab33c

@end
