// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFavoritesDataModelsDocStore
// Superclass: NSObject
// Address: 0x1129f9c68

@interface SCFavoritesDataModelsDocStore

// Property: docObjectContext; attributes: T@"SCDocObjectContext",&,N,V_docObjectContext

// -[SCFavoritesDataModelsDocStore initWithDocObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c04e98

// -[SCFavoritesDataModelsDocStore fetchFavoriteItems]
// Type encoding: @16@0:8
// Implementation: 0x104d964d0

// -[SCFavoritesDataModelsDocStore fetchObservableFavoriteItems]
// Type encoding: @16@0:8
// Implementation: 0x104d96658

// -[SCFavoritesDataModelsDocStore fetchFavoriteItemsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104d967ac

// -[SCFavoritesDataModelsDocStore storeFavoriteItem:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104d96ac0

// -[SCFavoritesDataModelsDocStore removeFavoriteItemWithProductId:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x104d96c94

// -[SCFavoritesDataModelsDocStore removeAllFavoritesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104d96e8c

// -[SCFavoritesDataModelsDocStore _sortFavoriteItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x104d97160

// -[SCFavoritesDataModelsDocStore docObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x104d97218

// -[SCFavoritesDataModelsDocStore setDocObjectContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d97220

// -[SCFavoritesDataModelsDocStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d97250

@end
