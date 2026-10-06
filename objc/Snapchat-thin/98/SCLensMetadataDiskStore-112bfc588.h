// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMetadataDiskStore
// Superclass: NSObject
// Address: 0x112bfc588

@interface SCLensMetadataDiskStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensMetadataDiskStore initWithDocObjectContext:lensMetadataTransformer:lensMetadataModelTransformer:centralizedDataStoreConfigProvider:timeProvider:includeExpired:resetExpirationDate:performer:]
// Type encoding: @72@0:8@16@24@32@40@48B56B60@64
// Implementation: 0x10aebce04

// -[SCLensMetadataDiskStore cachedLensMetadataForLensId:namespaces:mainNamespace:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aebcfac

// -[SCLensMetadataDiskStore cachedLensMetadataArrayForLensIds:namespaces:mainNamespace:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aebd110

// -[SCLensMetadataDiskStore addLensMetadata:namespaceName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10aebd12c

// -[SCLensMetadataDiskStore addLensMetadataArray:namespaceName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10aebd21c

// -[SCLensMetadataDiskStore cleanupExpiredItems]
// Type encoding: v16@0:8
// Implementation: 0x10aebd708

// -[SCLensMetadataDiskStore _lensMetadataForLensIds:namespaceNames:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aebdc44

// -[SCLensMetadataDiskStore _resetExpirationDateForLensMetadataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebe864

// -[SCLensMetadataDiskStore _expirationTimestampForNamespace:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10aebec30

// -[SCLensMetadataDiskStore _lensMetadataFromLensMetadataItemModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aebf224

// -[SCLensMetadataDiskStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aebf430

// +[SCLensMetadataDiskStore _resetLogStringForLensMetadata:successful:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10aebecd4

// +[SCLensMetadataDiskStore _updateLogStringForLensMetadata:successful:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10aebed78

// +[SCLensMetadataDiskStore _saveLogStringForLensMetadata:successful:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10aebee1c

// +[SCLensMetadataDiskStore _lensIdsStringFromLensMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aebeec0

// +[SCLensMetadataDiskStore _lensIdsStringFromLensMetadataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aebef50

// +[SCLensMetadataDiskStore _lensIdsAndNamespacesStringFromLensMetadataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aebefe0

// +[SCLensMetadataDiskStore _lensMetadataItemModelFromLensMetadata:namespaceName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aebf124

// +[SCLensMetadataDiskStore _updatedItemDataModel:expirationDate:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10aebf2f0

@end
