// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceFavoritesCoordinator
// Superclass: NSObject
// Address: 0x1129f9b28

@interface SCCommerceFavoritesCoordinator

// Property: configProvider; attributes: T@"<SCCommerceConfigProviding>",&,N,V_configProvider
// Property: deltaSyncClient; attributes: T@"<SCDeltaSyncUploadService>",&,N,V_deltaSyncClient
// Property: favoritesStore; attributes: T@"SCFavoritesDataModelsDocStore",&,N,V_favoritesStore
// Property: userPreferences; attributes: T@"SCPreferences",&,N,V_userPreferences
// Property: ifsWriter; attributes: T@"SCCommerceIFSWriter",&,N,V_ifsWriter
// Property: userId; attributes: T@"NSString",&,N,V_userId

// -[SCCommerceFavoritesCoordinator initWithDocObjectContext:userPreferences:grapheneRegistry:deltaSyncClient:grpcClientFactory:commerceConfigProvider:countryCodeProvider:userId:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104d93d48

// -[SCCommerceFavoritesCoordinator fetchFavoriteItems]
// Type encoding: @16@0:8
// Implementation: 0x104d93f04

// -[SCCommerceFavoritesCoordinator fetchFavoriteItemsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104d93f0c

// -[SCCommerceFavoritesCoordinator storeFavoriteItemWithId:entrySource:completion:]
// Type encoding: v40@0:8Q16q24@?32
// Implementation: 0x104d93fa4

// -[SCCommerceFavoritesCoordinator removeFavoriteItemWithId:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x104d94164

// -[SCCommerceFavoritesCoordinator checkIsFavoritedWithId:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x104d942b4

// -[SCCommerceFavoritesCoordinator toggleFavoriteStateForProduct:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x104d94474

// -[SCCommerceFavoritesCoordinator favoriteStatusForProduct:]
// Type encoding: @24@0:8Q16
// Implementation: 0x104d94610

// -[SCCommerceFavoritesCoordinator _triggerSync]
// Type encoding: @16@0:8
// Implementation: 0x104d9472c

// -[SCCommerceFavoritesCoordinator _canSync]
// Type encoding: B16@0:8
// Implementation: 0x104d94990

// -[SCCommerceFavoritesCoordinator _toggleFavoriteStateForProduct:favoriteIds:completion:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x104d94a2c

// -[SCCommerceFavoritesCoordinator _clearDeltaSyncTimestamp]
// Type encoding: v16@0:8
// Implementation: 0x104d94b9c

// -[SCCommerceFavoritesCoordinator _deltaSyncCompletedWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d94ba4

// -[SCCommerceFavoritesCoordinator _locallyStoreFavoriteItem:success:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x104d94bb4

// -[SCCommerceFavoritesCoordinator _locallyRemoveFavoriteItemWithProductId:success:completion:]
// Type encoding: v36@0:8Q16B24@?28
// Implementation: 0x104d94d10

// -[SCCommerceFavoritesCoordinator configProvider]
// Type encoding: @16@0:8
// Implementation: 0x104d94e5c

// -[SCCommerceFavoritesCoordinator setConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d94e64

// -[SCCommerceFavoritesCoordinator deltaSyncClient]
// Type encoding: @16@0:8
// Implementation: 0x104d94e94

// -[SCCommerceFavoritesCoordinator setDeltaSyncClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d94e9c

// -[SCCommerceFavoritesCoordinator favoritesStore]
// Type encoding: @16@0:8
// Implementation: 0x104d94ecc

// -[SCCommerceFavoritesCoordinator setFavoritesStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d94ed4

// -[SCCommerceFavoritesCoordinator userPreferences]
// Type encoding: @16@0:8
// Implementation: 0x104d94f04

// -[SCCommerceFavoritesCoordinator setUserPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d94f0c

// -[SCCommerceFavoritesCoordinator ifsWriter]
// Type encoding: @16@0:8
// Implementation: 0x104d94f3c

// -[SCCommerceFavoritesCoordinator setIfsWriter:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d94f44

// -[SCCommerceFavoritesCoordinator userId]
// Type encoding: @16@0:8
// Implementation: 0x104d94f74

// -[SCCommerceFavoritesCoordinator setUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d94f7c

// -[SCCommerceFavoritesCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d94fac

@end
