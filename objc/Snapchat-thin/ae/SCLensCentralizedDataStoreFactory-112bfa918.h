// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCentralizedDataStoreFactory
// Superclass: NSObject
// Address: 0x112bfa918

@interface SCLensCentralizedDataStoreFactory

// Property: defaultCentralizedDataStore; attributes: T@"SCLazy",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensCentralizedDataStoreFactory initWithLensMetadataFetcher:metadataStoreProvider:scheduleServiceProvider:customNamespaceNames:additionalCacheNamespaces:applicationLifecycleEvents:lensDataConfig:graphene:performerProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x100ba9898

// -[SCLensCentralizedDataStoreFactory defaultCentralizedDataStore]
// Type encoding: @16@0:8
// Implementation: 0x100baa374

// -[SCLensCentralizedDataStoreFactory centralizedDataStoreForCustomNamespace:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae967a8

// -[SCLensCentralizedDataStoreFactory _centralizedDataStoreForCustomNamespace:useCache:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x100baa3fc

// -[SCLensCentralizedDataStoreFactory _subscribeOnAppLifecycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x100baa1d4

// -[SCLensCentralizedDataStoreFactory _saveDataOnDisk]
// Type encoding: v16@0:8
// Implementation: 0x10ae967dc

// -[SCLensCentralizedDataStoreFactory _createCentralizedDataStoreForCustomNamespace:]
// Type encoding: @24@0:8@16
// Implementation: 0x100baa504

// -[SCLensCentralizedDataStoreFactory _customServiceWithNamespaceName:metadataStoreProvider:namespaceConfig:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100baa8bc

// -[SCLensCentralizedDataStoreFactory _additionalCacheServicesForCustomNamespace:]
// Type encoding: @24@0:8@16
// Implementation: 0x100baaa38

// -[SCLensCentralizedDataStoreFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ae96e44

@end
