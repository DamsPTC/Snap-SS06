// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider
// Superclass: NSObject
// Address: 0x112ab8ac8

@interface SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider

// Property: lensCarouselManager; attributes: T@"SCLazy",&,V_lensCarouselManager
// Property: snapcodeMetadata; attributes: T@"SCSnapcodeMetadata",&,V_snapcodeMetadata
// Property: scanResultViewModels; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider initWithLensMetadataFetcher:mainLensCarouselManagerStream:cameraHardwareServices:contentDelivery:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105ff0600

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider scanResultViewModels]
// Type encoding: @16@0:8
// Implementation: 0x105ff075c

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider configureWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff0784

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _handleLensCarouselManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff09c4

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _handleSnapcodeMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff0a30

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _handleSnapcodeMetadata:lensCarouselManager:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ff0a9c

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _fetchLensMetadataWithFetchIdentifier:lensCarouselManager:decodedUuid:scannableId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105ff0da8

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _addMetadataToScanResultsAndAdjustDevicePosition:lensCarouselManager:decodedUuid:scannableId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105ff10b0

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _deflateResultsAndDisplayLensMetadata:lensCarouselManager:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ff1428

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _presentLensCarouselWithLensesObservable:lensCarouselManager:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ff1548

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _deleteLoadingCard]
// Type encoding: v16@0:8
// Implementation: 0x105ff185c

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _adjustDevicePositionForLensMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff1864

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider lensCarouselManager]
// Type encoding: @16@0:8
// Implementation: 0x105ff1880

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider setLensCarouselManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff188c

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider snapcodeMetadata]
// Type encoding: @16@0:8
// Implementation: 0x105ff1894

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider setSnapcodeMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff18a0

// -[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ff18a8

// +[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _rowViewModelWithTitle:buttonTitle:decodedUuid:scannableId:image:actionHandler:]
// Type encoding: @64@0:8@16@24@32@40@48@?56
// Implementation: 0x105ff15ec

// +[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _previewString]
// Type encoding: @16@0:8
// Implementation: 0x105ff1878

// +[SCScanResultsSnapcodeSponsoredLensPreviewViewModelProvider _loadingString]
// Type encoding: @16@0:8
// Implementation: 0x105ff187c

@end
