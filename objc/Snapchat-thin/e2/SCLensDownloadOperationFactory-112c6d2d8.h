// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDownloadOperationFactory
// Superclass: NSObject
// Address: 0x112c6d2d8

@interface SCLensDownloadOperationFactory

// Property: contentDataFetcher; attributes: T@"SCLazy",&,N,V_contentDataFetcher
// Property: contentManagerBlobDataFetcher; attributes: T@"<SCLensBlobDataFetching>",&,N,V_contentManagerBlobDataFetcher
// Property: bitmojiImageFetcher; attributes: T@"<SCBitmojiImageFetcher>",&,N,V_bitmojiImageFetcher
// Property: bitmojiListManager; attributes: T@"SCLensBitmojiListManager",&,N,V_bitmojiListManager
// Property: bitmojiAssetDataFetcher; attributes: T@"<SCLensBitmojiAssetDataFetching>",&,N,V_bitmojiAssetDataFetcher
// Property: externalLensDataFetcher; attributes: T@"<SCLensExternalDataFetching>",&,N,V_externalLensDataFetcher
// Property: signatureValidator; attributes: T@"SCLensSecurity",&,N,V_signatureValidator
// Property: lensPreferences; attributes: T@"<SCLensPreferences>",&,N,V_lensPreferences
// Property: lensDownloadLogger; attributes: T@"SCLazy",&,N,V_lensDownloadLogger
// Property: assetLensResourceResolver; attributes: T@"<SCLensRemoteAssetsLensResourceResolver>",&,N,V_assetLensResourceResolver

// -[SCLensDownloadOperationFactory initWithContentDataFetcher:bitmojiImageFetcher:lensBitmojiListManager:bitmojiAssetDataFetcher:externalLensDataFetcher:signatureValidator:lensPreferences:lensUserProvider:lensDownloadLogger:lensRemoteAssetLogger:lensResourceDownloadLogger:assetLensResourceResolver:lensIconRepository:contentManagerBlobDataFetcher:resourceResolver:lensDataConfigProvider:deviceDependentAssetAnalyticsReporter:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x100ba37fc

// -[SCLensDownloadOperationFactory contentDownloadOperationForLens:requestTiming:userInitiated:fetchType:]
// Type encoding: @44@0:8@16q24B32q36
// Implementation: 0x10b0cdbbc

// -[SCLensDownloadOperationFactory imageDownloadOperationForLens:requestTiming:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b0cdd94

// -[SCLensDownloadOperationFactory assetDownloadOperationForAsset:contextLens:requestTiming:fetchType:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x10b0cdefc

// -[SCLensDownloadOperationFactory externalDataDownloadOperationForLens:requestTiming:fetchType:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10b0ce424

// -[SCLensDownloadOperationFactory iconDownloadOperationForLens:requestTiming:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b0ce4e8

// -[SCLensDownloadOperationFactory bitmojiIconDownloadOperationForLens:requestTiming:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b0ce5dc

// -[SCLensDownloadOperationFactory _operationForDynamicRemoteAsset:contextLens:requestTiming:fetchType:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x10b0ce708

// -[SCLensDownloadOperationFactory contentDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0ce9d8

// -[SCLensDownloadOperationFactory setContentDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ce9e0

// -[SCLensDownloadOperationFactory contentManagerBlobDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0cea10

// -[SCLensDownloadOperationFactory setContentManagerBlobDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cea18

// -[SCLensDownloadOperationFactory bitmojiImageFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0cea48

// -[SCLensDownloadOperationFactory setBitmojiImageFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cea50

// -[SCLensDownloadOperationFactory bitmojiListManager]
// Type encoding: @16@0:8
// Implementation: 0x10b0cea80

// -[SCLensDownloadOperationFactory setBitmojiListManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cea88

// -[SCLensDownloadOperationFactory bitmojiAssetDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0ceab8

// -[SCLensDownloadOperationFactory setBitmojiAssetDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ceac0

// -[SCLensDownloadOperationFactory externalLensDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0ceaf0

// -[SCLensDownloadOperationFactory setExternalLensDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ceaf8

// -[SCLensDownloadOperationFactory signatureValidator]
// Type encoding: @16@0:8
// Implementation: 0x10b0ceb28

// -[SCLensDownloadOperationFactory setSignatureValidator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ceb30

// -[SCLensDownloadOperationFactory lensPreferences]
// Type encoding: @16@0:8
// Implementation: 0x10b0ceb60

// -[SCLensDownloadOperationFactory setLensPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ceb68

// -[SCLensDownloadOperationFactory lensDownloadLogger]
// Type encoding: @16@0:8
// Implementation: 0x10b0ceb98

// -[SCLensDownloadOperationFactory setLensDownloadLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ceba0

// -[SCLensDownloadOperationFactory assetLensResourceResolver]
// Type encoding: @16@0:8
// Implementation: 0x10b0cebd0

// -[SCLensDownloadOperationFactory setAssetLensResourceResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cebd8

// -[SCLensDownloadOperationFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0cec08

@end
