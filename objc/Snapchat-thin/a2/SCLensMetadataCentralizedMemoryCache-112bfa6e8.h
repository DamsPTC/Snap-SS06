// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMetadataCentralizedMemoryCache
// Superclass: NSObject
// Address: 0x112bfa6e8

@interface SCLensMetadataCentralizedMemoryCache

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensMetadataCentralizedMemoryCache initWithConfigProvider:nextCache:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10ae93464

// -[SCLensMetadataCentralizedMemoryCache cachedLensMetadataForLensId:namespaces:mainNamespace:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10ae93530

// -[SCLensMetadataCentralizedMemoryCache cachedLensMetadataArrayForLensIds:namespaces:mainNamespace:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10ae93608

// -[SCLensMetadataCentralizedMemoryCache addLensMetadata:namespaceName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10ae939b8

// -[SCLensMetadataCentralizedMemoryCache addLensMetadataArray:namespaceName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10ae93a38

// -[SCLensMetadataCentralizedMemoryCache clearMemory]
// Type encoding: v16@0:8
// Implementation: 0x10ae93ab8

// -[SCLensMetadataCentralizedMemoryCache _lensMetadataForLensId:namespaces:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10ae93bac

// -[SCLensMetadataCentralizedMemoryCache _addLensMetadataArrayIntoCache:namespaceName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10ae93d10

// -[SCLensMetadataCentralizedMemoryCache _addLensMetadataIntoCache:namespaceName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10ae93e28

// -[SCLensMetadataCentralizedMemoryCache _cacheForNamespace:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae93ec8

// -[SCLensMetadataCentralizedMemoryCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ae93f74

@end
