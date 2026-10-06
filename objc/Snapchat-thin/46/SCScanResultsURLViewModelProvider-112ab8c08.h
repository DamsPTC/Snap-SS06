// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanResultsURLViewModelProvider
// Superclass: NSObject
// Address: 0x112ab8c08

@interface SCScanResultsURLViewModelProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: scanResultViewModels; attributes: T@"SCObservable",R,N

// -[SCScanResultsURLViewModelProvider initWithContentDeliveryServices:deepLinkHandler:circumstanceEngine:logger:browserScopeExposer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105ff3370

// -[SCScanResultsURLViewModelProvider end]
// Type encoding: v16@0:8
// Implementation: 0x105ff34dc

// -[SCScanResultsURLViewModelProvider scanResultViewModels]
// Type encoding: @16@0:8
// Implementation: 0x105ff35c8

// -[SCScanResultsURLViewModelProvider configureWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff35f0

// -[SCScanResultsURLViewModelProvider _handleSnapcodeMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff38cc

// -[SCScanResultsURLViewModelProvider _handleBarcodeResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff3a30

// -[SCScanResultsURLViewModelProvider _handleURL:snapcodeUseCase:decodedUuid:scannableId:isScannedRealTime:resultType:isAutoOpened:]
// Type encoding: v64@0:8@16q24@32@40B48q52B60
// Implementation: 0x105ff3b04

// -[SCScanResultsURLViewModelProvider _openURL:isScannedRealTime:resultType:isAutoOpened:]
// Type encoding: v40@0:8@16B24q28B36
// Implementation: 0x105ff4230

// -[SCScanResultsURLViewModelProvider _openDeeplinkURLIfNecessary:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ff43ec

// -[SCScanResultsURLViewModelProvider _handleOpenEventForUseCase:]
// Type encoding: v24@0:8q16
// Implementation: 0x105ff4610

// -[SCScanResultsURLViewModelProvider _dismissBrowser]
// Type encoding: v16@0:8
// Implementation: 0x105ff46d8

// -[SCScanResultsURLViewModelProvider webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff4744

// -[SCScanResultsURLViewModelProvider urlInterceptorWillExternalDeeplink:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff4878

// -[SCScanResultsURLViewModelProvider urlInterceptorWillInternalDeeplink:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff4984

// -[SCScanResultsURLViewModelProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ff4aa0

@end
