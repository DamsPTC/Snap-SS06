// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShoppingLensGrapheneLogger
// Superclass: NSObject
// Address: 0x112acb588

@interface SCShoppingLensGrapheneLogger

// Property: graphene; attributes: T@"SCGraphene",&,N,V_graphene

// -[SCShoppingLensGrapheneLogger initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060fca5c

// -[SCShoppingLensGrapheneLogger logGetLensItemsSuccessStatus:optionsBuilder:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1060fcadc

// -[SCShoppingLensGrapheneLogger logGetLensItemsLatency:isSuccess:optionsBuilder:]
// Type encoding: v36@0:8d16B24@28
// Implementation: 0x1060fcb7c

// -[SCShoppingLensGrapheneLogger logGetShowcaseSuccessStatus:optionsBuilder:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1060fcc58

// -[SCShoppingLensGrapheneLogger logGetShowcaseLatency:isSuccess:optionsBuilder:]
// Type encoding: v36@0:8d16B24@28
// Implementation: 0x1060fccf8

// -[SCShoppingLensGrapheneLogger logRemoteAssetLoadingIndicatorLatency:result:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x1060fcdd4

// -[SCShoppingLensGrapheneLogger logProductSelectorInitializedWithOptionsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060fce84

// -[SCShoppingLensGrapheneLogger logProductSelectorActivatedWithLatency:result:optionsBuilder:]
// Type encoding: v40@0:8d16Q24@32
// Implementation: 0x1060fcf3c

// -[SCShoppingLensGrapheneLogger _addDimensionsProductSelectorActivatedWithMetric:result:optionsBuilder:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x1060fd034

// -[SCShoppingLensGrapheneLogger logProductSelectorLoadedWithLatency:result:optionsBuilder:]
// Type encoding: v40@0:8d16Q24@32
// Implementation: 0x1060fd120

// -[SCShoppingLensGrapheneLogger _addDimensionsProductSelectorLoadedWithMetric:fromCache:result:optionsBuilder:]
// Type encoding: @44@0:8@16B24Q28@36
// Implementation: 0x1060fd220

// -[SCShoppingLensGrapheneLogger logProductSelectorDisplayedWithLatency:optionsBuilder:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1060fd368

// -[SCShoppingLensGrapheneLogger _addDimensionsProductSelectorDisplayedWithMetric:optionsBuilder:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060fd454

// -[SCShoppingLensGrapheneLogger _resultStringFromActivatedResult:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1060fd4e4

// -[SCShoppingLensGrapheneLogger _resultStringFromLoadResult:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1060fd520

// -[SCShoppingLensGrapheneLogger _resultStringFromLoadingIndicatorResult:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1060fd55c

// -[SCShoppingLensGrapheneLogger logPrefetchProductsInitializedWithOptionsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060fd598

// -[SCShoppingLensGrapheneLogger logPrefetchProductsActivatedWithLatency:result:optionsBuilder:]
// Type encoding: v40@0:8d16Q24@32
// Implementation: 0x1060fd650

// -[SCShoppingLensGrapheneLogger logPrefetchProductsLoadedWithLatency:result:optionsBuilder:]
// Type encoding: v40@0:8d16Q24@32
// Implementation: 0x1060fd748

// -[SCShoppingLensGrapheneLogger logProductVisualizationDidTapTryOn]
// Type encoding: v16@0:8
// Implementation: 0x1060fd848

// -[SCShoppingLensGrapheneLogger logProductVisualizationDidTapBackButton]
// Type encoding: v16@0:8
// Implementation: 0x1060fd88c

// -[SCShoppingLensGrapheneLogger logProductVisualizationLensModeChangedCounter:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1060fd8d0

// -[SCShoppingLensGrapheneLogger logProductVisualizationLensModeLatency:newMode:latency:]
// Type encoding: v40@0:8Q16Q24d32
// Implementation: 0x1060fd95c

// -[SCShoppingLensGrapheneLogger _modeStringFromProductVisualizationMode:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1060fda50

// -[SCShoppingLensGrapheneLogger graphene]
// Type encoding: @16@0:8
// Implementation: 0x1060fda8c

// -[SCShoppingLensGrapheneLogger setGraphene:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060fda94

// -[SCShoppingLensGrapheneLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060fdac4

@end
