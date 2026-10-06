// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserSession
// Superclass: NSObject
// Address: 0x112d2c8b8

@interface SCUserSession

// Property: customStickerOwner; attributes: T@"<SCCustomStickerOwner>",R,C,N
// Property: dynamicCaptionFetcher; attributes: T@"<SCDynamicCaptionFetcher>",R,N
// Property: captionStyleResourceProvider; attributes: T@"<SCCaptionStyleResourceProvider>",R,N
// Property: dataSaverModePromptCoordinator; attributes: T@"SCDataSaverModePromptCoordinator",R,N
// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: username; attributes: T@"NSString",R,C,N,V_username
// Property: authToken; attributes: T@"NSString",R,C,N,V_authToken
// Property: lagunaId; attributes: T@"NSString",R,C,N,V_lagunaId

// -[SCUserSession _associated_storage]
// Type encoding: @16@0:8
// Implementation: 0x1002655e8

// -[SCUserSession objectForKey:initializer:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x100265474

// -[SCUserSession invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10bc86534

// -[SCUserSession isInvalidated]
// Type encoding: B16@0:8
// Implementation: 0x100a041b8

// -[SCUserSession cacheDirectory:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x10bc7d02c

// -[SCUserSession documentDirectory:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x100264f80

// -[SCUserSession unmanaged_cacheDirectory:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x100447f34

// -[SCUserSession unmanaged_documentDirectory:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x100264f84

// -[SCUserSession cacheWithNoEviction:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7ccc94

// -[SCUserSession cache:diskSizeLimitConfig:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100447d34

// -[SCUserSession cache:diskSizeLimitConfig:useMemoryCache:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10b7ccca8

// -[SCUserSession cache:metricsName:diskSizeLimitConfig:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100447d40

// -[SCUserSession cache:metricsName:diskSizeLimitConfig:useMemoryCache:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x100447d48

// -[SCUserSession cache:metricsName:diskSizeLimitConfig:useMemoryCache:skipEviction:]
// Type encoding: @48@0:8@16@24@32B40B44
// Implementation: 0x100447d50

// -[SCUserSession temporaryDatastoreNamed:type:defaultDaysForExpiry:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x10b7ccaec

// -[SCUserSession requestManager]
// Type encoding: @16@0:8
// Implementation: 0x10043de8c

// -[SCUserSession dataSaverModePromptCoordinatorWithUserBlizzardLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b254508

// -[SCUserSession locationServicesDataStore]
// Type encoding: @16@0:8
// Implementation: 0x100b777fc

// -[SCUserSession impalaPreferences]
// Type encoding: @16@0:8
// Implementation: 0x108f15b74

// -[SCUserSession setImpalaPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x100818ae4

// -[SCUserSession userPreferences]
// Type encoding: @16@0:8
// Implementation: 0x108e497f0

// -[SCUserSession captionStyleResourceProvider]
// Type encoding: @16@0:8
// Implementation: 0x108e377dc

// -[SCUserSession dynamicCaptionFetcher]
// Type encoding: @16@0:8
// Implementation: 0x108e0863c

// -[SCUserSession stickerTagFuzzySearch]
// Type encoding: @16@0:8
// Implementation: 0x108d16b64

// -[SCUserSession customStickerOwner]
// Type encoding: @16@0:8
// Implementation: 0x108d13530

// -[SCUserSession imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x1085a5ff4

// -[SCUserSession businessProfileManager]
// Type encoding: @16@0:8
// Implementation: 0x107d6fcf4

// -[SCUserSession publisherIconImageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x107afb760

// -[SCUserSession unlockableSensitivityControllerWithAppStartExperimentReader:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c09fbc

// -[SCUserSession cognacDataStorage]
// Type encoding: @16@0:8
// Implementation: 0x105795bf8

// -[SCUserSession initWithUserId:username:authToken:lagunaId:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100165070

// -[SCUserSession copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10bc87020

// -[SCUserSession hash]
// Type encoding: Q16@0:8
// Implementation: 0x10bc87044

// -[SCUserSession isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10018d61c

// -[SCUserSession userId]
// Type encoding: @16@0:8
// Implementation: 0x10018dc80

// -[SCUserSession username]
// Type encoding: @16@0:8
// Implementation: 0x10018dc88

// -[SCUserSession authToken]
// Type encoding: @16@0:8
// Implementation: 0x10043dfdc

// -[SCUserSession lagunaId]
// Type encoding: @16@0:8
// Implementation: 0x100c59770

// -[SCUserSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bc870d0

// +[SCUserSession cleanUpOutOfScopeDocumentFilesExceptForUser:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc7d030

// +[SCUserSession _cleanUpOutOfScopeDirectoriesIn:forUserIdHash:trash:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10bc7d134

// +[SCUserSession userScopedCachePathRootForUser:]
// Type encoding: @24@0:8@16
// Implementation: 0x100448268

// +[SCUserSession userScopedDocumentPathRootForUser:]
// Type encoding: @24@0:8@16
// Implementation: 0x1002651c0

// +[SCUserSession userScopedApplicationSupportPathRootForUser:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc7d37c

@end
