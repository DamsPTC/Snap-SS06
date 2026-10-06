// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBillboardCooldownCapManager
// Superclass: NSObject
// Address: 0x1129eec78

@interface SCBillboardCooldownCapManager


// -[SCBillboardCooldownCapManager initWithCircumstanceEngine:preferences:featureSettingsService:grapheneRegistry:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104c6c7cc

// -[SCBillboardCooldownCapManager isEligibleFromCooldownCapRules:readOnlyBillboardSignals:identifier:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104c6c8c8

// -[SCBillboardCooldownCapManager _isEligibleFromCooldownCapRule:readOnlyBillboardSignals:identifier:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104c6ca30

// -[SCBillboardCooldownCapManager _isEligibleFromCooldownCapRuleInternal:modifiableBillboardSignals:identifier:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104c6cc58

// -[SCBillboardCooldownCapManager _getRecycleBasedStorageUnitWithRule:identifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104c6d2b8

// -[SCBillboardCooldownCapManager _getRecycleBasedTimeWithRule:baseStorageUnit:identifier:]
// Type encoding: q40@0:8@16@24@32
// Implementation: 0x104c6d3d8

// -[SCBillboardCooldownCapManager _recycleStorageUnitWithRule:storageMetadata:identifier:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104c6da08

// -[SCBillboardCooldownCapManager _recycleStorageForRule:identifier:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x104c6dbc8

// -[SCBillboardCooldownCapManager getClientStorageUnit:identifier:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x104c6dd5c

// -[SCBillboardCooldownCapManager saveClientStorageUnit:withStorageId:identifier:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x104c6de80

// -[SCBillboardCooldownCapManager getServerStorageUnit:identifier:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x104c6df38

// -[SCBillboardCooldownCapManager _initializeServerStorage:identifier:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x104c6e11c

// -[SCBillboardCooldownCapManager saveServerStorageUnit:withStorageId:identifier:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x104c6e1ec

// -[SCBillboardCooldownCapManager updateImpressionPropertiesWithStorageId:campaignCOFName:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104c6e3c4

// -[SCBillboardCooldownCapManager updateClickPropertiesWithStorageId:campaignCOFName:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104c6e548

// -[SCBillboardCooldownCapManager updateDismissPropertiesWithStorageId:campaignCOFName:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104c6e6d8

// -[SCBillboardCooldownCapManager _logUnexpectedStorageIdWithStorageType:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104c6e870

// -[SCBillboardCooldownCapManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104c6e880

@end
