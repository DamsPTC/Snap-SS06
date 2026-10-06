// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScreenshopPersistenceServiceImpl
// Superclass: NSObject
// Address: 0x112a68a78

@interface SCScreenshopPersistenceServiceImpl

// Property: screenshopStore; attributes: T@"SCScreenshopDataModelsDocStore",&,N,V_screenshopStore

// -[SCScreenshopPersistenceServiceImpl initWithDocObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057a79d4

// -[SCScreenshopPersistenceServiceImpl storeAssetWithAssetId:tapped:localSimilarityScore:modelVersion:shoppable:categories:colors:patterns:categorized:completion:]
// Type encoding: v84@0:8@16B24d28@36B44@48@56@64B72@?76
// Implementation: 0x1057a7a58

// -[SCScreenshopPersistenceServiceImpl updateAssetWithAssetId:shoppable:categories:colors:patterns:modelVersion:completion:]
// Type encoding: v68@0:8@16B24@28@36@44@52@?60
// Implementation: 0x1057a7bd4

// -[SCScreenshopPersistenceServiceImpl getMetadataForAssetId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057a7dac

// -[SCScreenshopPersistenceServiceImpl fetchFashionAssetMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1057a7db4

// -[SCScreenshopPersistenceServiceImpl fetchNonFashionAssetMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1057a7dbc

// -[SCScreenshopPersistenceServiceImpl fetchUnprocessedFashionAssetMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1057a7dc4

// -[SCScreenshopPersistenceServiceImpl fetchUnprocessedFashionAndShoppableAssetMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1057a7e24

// -[SCScreenshopPersistenceServiceImpl fetchShoppableAssetMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1057a7ee0

// -[SCScreenshopPersistenceServiceImpl fetchNonShoppableAssetMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1057a7f2c

// -[SCScreenshopPersistenceServiceImpl fetchShoppableAssetMetadataWithVersionNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057a7f8c

// -[SCScreenshopPersistenceServiceImpl fetchNonShoppableAssetMetadataWithVersionNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057a7f94

// -[SCScreenshopPersistenceServiceImpl fetchCategorizedShoppableAssetMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1057a7f9c

// -[SCScreenshopPersistenceServiceImpl fetchUncategorizedShoppableAssetMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1057a8024

// -[SCScreenshopPersistenceServiceImpl _logErrorUpdatingAssetWithAssetId:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057a80ac

// -[SCScreenshopPersistenceServiceImpl screenshopStore]
// Type encoding: @16@0:8
// Implementation: 0x1057a80bc

// -[SCScreenshopPersistenceServiceImpl setScreenshopStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057a80c4

// -[SCScreenshopPersistenceServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057a80f4

@end
