// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensInjectionDataProviderAssistant
// Superclass: NSObject
// Address: 0x112bf4388

@interface SCLensInjectionDataProviderAssistant

// Property: injectedLensesMetadataStore; attributes: T@"SCLazy",R,N,V_injectedLensesMetadataStore
// Property: injectedLensesPrefetchCapacity; attributes: TQ,R,N,V_injectedLensesPrefetchCapacity
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensInjectionDataProviderAssistant initWithLensInjectionServices:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091dc1ac

// -[SCLensInjectionDataProviderAssistant lensDataProvider:didAddLens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091dc408

// -[SCLensInjectionDataProviderAssistant lensDataProvider:didRemoveLens:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091dc488

// -[SCLensInjectionDataProviderAssistant lensDataProvider:didRemoveAllLensesWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091dc50c

// -[SCLensInjectionDataProviderAssistant prepareConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091dc58c

// -[SCLensInjectionDataProviderAssistant prepareMetadataStore:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091dc5b4

// -[SCLensInjectionDataProviderAssistant preparePrefetchMetadataStore:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091dc5dc

// -[SCLensInjectionDataProviderAssistant prepareSortStaregy:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091dc604

// -[SCLensInjectionDataProviderAssistant injectedLensesMetadataStore]
// Type encoding: @16@0:8
// Implementation: 0x1091dc718

// -[SCLensInjectionDataProviderAssistant injectedLensesPrefetchCapacity]
// Type encoding: Q16@0:8
// Implementation: 0x1091dc720

// -[SCLensInjectionDataProviderAssistant .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091dc728

@end
