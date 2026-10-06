// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCentralizedDataStoreFactoryV2
// Superclass: NSObject
// Address: 0x112bfa968

@interface SCLensCentralizedDataStoreFactoryV2

// Property: defaultCentralizedDataStore; attributes: T@"SCLazy",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensCentralizedDataStoreFactoryV2 initWithLensMetadataFetcher:scheduleServiceProvider:customNamespaceNames:additionalCacheNamespaces:applicationLifecycleEvents:lensDataConfig:graphene:docObjectContext:performerProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10ae96ef8

// -[SCLensCentralizedDataStoreFactoryV2 defaultCentralizedDataStore]
// Type encoding: @16@0:8
// Implementation: 0x10ae97560

// -[SCLensCentralizedDataStoreFactoryV2 centralizedDataStoreForCustomNamespace:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae975bc

// -[SCLensCentralizedDataStoreFactoryV2 _centralizedDataStoreForCustomNamespace:useCache:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10ae975c4

// -[SCLensCentralizedDataStoreFactoryV2 _createCentralizedDataStoreForCustomNamespace:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae976cc

// -[SCLensCentralizedDataStoreFactoryV2 _additionalRegularNamespaceServicesForCustomNamespace:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae97ce0

// -[SCLensCentralizedDataStoreFactoryV2 _subscribeOnAppLifecycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ae9804c

// -[SCLensCentralizedDataStoreFactoryV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ae982cc

// +[SCLensCentralizedDataStoreFactoryV2 _centralizedDataStorePerformerWithProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae98004

@end
