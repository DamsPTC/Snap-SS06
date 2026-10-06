// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataProviderContextRegistryImpl
// Superclass: NSObject
// Address: 0x112bf43d8

@interface SCLensDataProviderContextRegistryImpl


// -[SCLensDataProviderContextRegistryImpl initWithDataProviderFactory:unlockableDataProviderFactory:predefinedDataProviderFactory:bundledLensProvider:centralizedMetadataStoreProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1007fc360

// -[SCLensDataProviderContextRegistryImpl registerDataProviderWithContextId:contextConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091dc758

// -[SCLensDataProviderContextRegistryImpl registerDataProviderWithContextId:dataProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1007fe334

// -[SCLensDataProviderContextRegistryImpl deregisterDataProviderWithContextId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091dc88c

// -[SCLensDataProviderContextRegistryImpl contextConfigWithContextId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091dc8dc

// -[SCLensDataProviderContextRegistryImpl dataProviderWithContextId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1007fe32c

// -[SCLensDataProviderContextRegistryImpl registeredContextIds]
// Type encoding: @16@0:8
// Implementation: 0x1091dc8e4

// -[SCLensDataProviderContextRegistryImpl _registerPredefinedDataProviderWithContextId:carouselType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1091dc8ec

// -[SCLensDataProviderContextRegistryImpl _registerDataProviderWithContextId:activationSource:lensesObservable:contextUpdater:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x1091dc9a0

// -[SCLensDataProviderContextRegistryImpl _setDataForContextId:dataProvider:contextConfig:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1007fe3b4

// -[SCLensDataProviderContextRegistryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091dccf4

@end
