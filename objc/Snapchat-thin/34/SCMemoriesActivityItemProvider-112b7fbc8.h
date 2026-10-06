// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesActivityItemProvider
// Superclass: UIActivityItemProvider
// Address: 0x112b7fbc8

@interface SCMemoriesActivityItemProvider

// Property: userContext; attributes: Tq,N,V_userContext
// Property: userSession; attributes: T@"SCUserSession",&,N,V_userSession
// Property: delegate; attributes: T@"<SCGalleryActivityItemProviderDelegate>",W,N,V_delegate
// Property: progressWeight; attributes: Tf,N,V_progressWeight
// Property: itemCount; attributes: Tq,N,V_itemCount
// Property: estimatedMediaSize; attributes: TQ,N,V_estimatedMediaSize
// Property: skippedActivityTypes; attributes: T@"NSArray",C,N,V_skippedActivityTypes
// Property: spectaclesExportFormat; attributes: Tq,N,V_spectaclesExportFormat
// Property: uploadToYouTube; attributes: TB,N,V_uploadToYouTube
// Property: customFilename; attributes: T@"NSString",C,N,V_customFilename
// Property: spectaclesAuxiliaryContentServices; attributes: T@"SCSpectaclesAuxiliaryContentServices",&,N,V_spectaclesAuxiliaryContentServices
// Property: previewAssetVideoProviderFactory; attributes: T@"<SCPreviewAssetVideoProviderFactory>",&,N,V_previewAssetVideoProviderFactory
// Property: targetTrajectoryFactory; attributes: T@"SCLazy",&,N,V_targetTrajectoryFactory
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesActivityItemProvider initWithPlaceholderItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d929f4

// -[SCMemoriesActivityItemProvider generateItemWithProgressHandler:completionHandler:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x107d92a74

// -[SCMemoriesActivityItemProvider createNewGenerator]
// Type encoding: @16@0:8
// Implementation: 0x107d92c40

// -[SCMemoriesActivityItemProvider isStory]
// Type encoding: B16@0:8
// Implementation: 0x107d92c94

// -[SCMemoriesActivityItemProvider snapMediaTypes]
// Type encoding: @16@0:8
// Implementation: 0x107d92c9c

// -[SCMemoriesActivityItemProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107d92cf0

// -[SCMemoriesActivityItemProvider item]
// Type encoding: @16@0:8
// Implementation: 0x107d92dcc

// -[SCMemoriesActivityItemProvider activityViewControllerLinkMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d931d0

// -[SCMemoriesActivityItemProvider didGenerateItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d93468

// -[SCMemoriesActivityItemProvider activityItemGenerator:didGenerateItem:itemId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107d934cc

// -[SCMemoriesActivityItemProvider activityItemGenerator:didFailGeneratingItemWithError:itemId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107d935c4

// -[SCMemoriesActivityItemProvider activityItemGenerator:didUpdateProgress:]
// Type encoding: v28@0:8@16f24
// Implementation: 0x107d936bc

// -[SCMemoriesActivityItemProvider _generateUniqueURLInTemporaryDirectoryForFilename:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d93740

// -[SCMemoriesActivityItemProvider _hardLinkFromURL:toURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107d93920

// -[SCMemoriesActivityItemProvider userContext]
// Type encoding: q16@0:8
// Implementation: 0x107d939b8

// -[SCMemoriesActivityItemProvider setUserContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x107d939c8

// -[SCMemoriesActivityItemProvider userSession]
// Type encoding: @16@0:8
// Implementation: 0x107d939d8

// -[SCMemoriesActivityItemProvider setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d939e8

// -[SCMemoriesActivityItemProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x107d93a28

// -[SCMemoriesActivityItemProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d93a48

// -[SCMemoriesActivityItemProvider progressWeight]
// Type encoding: f16@0:8
// Implementation: 0x107d93a5c

// -[SCMemoriesActivityItemProvider setProgressWeight:]
// Type encoding: v20@0:8f16
// Implementation: 0x107d93a6c

// -[SCMemoriesActivityItemProvider itemCount]
// Type encoding: q16@0:8
// Implementation: 0x107d93a7c

// -[SCMemoriesActivityItemProvider setItemCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x107d93a8c

// -[SCMemoriesActivityItemProvider estimatedMediaSize]
// Type encoding: Q16@0:8
// Implementation: 0x107d93a9c

// -[SCMemoriesActivityItemProvider setEstimatedMediaSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107d93aac

// -[SCMemoriesActivityItemProvider skippedActivityTypes]
// Type encoding: @16@0:8
// Implementation: 0x107d93abc

// -[SCMemoriesActivityItemProvider setSkippedActivityTypes:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d93acc

// -[SCMemoriesActivityItemProvider spectaclesExportFormat]
// Type encoding: q16@0:8
// Implementation: 0x107d93ad8

// -[SCMemoriesActivityItemProvider setSpectaclesExportFormat:]
// Type encoding: v24@0:8q16
// Implementation: 0x107d93ae8

// -[SCMemoriesActivityItemProvider uploadToYouTube]
// Type encoding: B16@0:8
// Implementation: 0x107d93af8

// -[SCMemoriesActivityItemProvider setUploadToYouTube:]
// Type encoding: v20@0:8B16
// Implementation: 0x107d93b08

// -[SCMemoriesActivityItemProvider customFilename]
// Type encoding: @16@0:8
// Implementation: 0x107d93b18

// -[SCMemoriesActivityItemProvider setCustomFilename:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d93b28

// -[SCMemoriesActivityItemProvider spectaclesAuxiliaryContentServices]
// Type encoding: @16@0:8
// Implementation: 0x107d93b34

// -[SCMemoriesActivityItemProvider setSpectaclesAuxiliaryContentServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d93b44

// -[SCMemoriesActivityItemProvider previewAssetVideoProviderFactory]
// Type encoding: @16@0:8
// Implementation: 0x107d93b84

// -[SCMemoriesActivityItemProvider setPreviewAssetVideoProviderFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d93b94

// -[SCMemoriesActivityItemProvider targetTrajectoryFactory]
// Type encoding: @16@0:8
// Implementation: 0x107d93bd4

// -[SCMemoriesActivityItemProvider setTargetTrajectoryFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d93be4

// -[SCMemoriesActivityItemProvider circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x107d93c24

// -[SCMemoriesActivityItemProvider setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d93c34

// -[SCMemoriesActivityItemProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d93c74

@end
