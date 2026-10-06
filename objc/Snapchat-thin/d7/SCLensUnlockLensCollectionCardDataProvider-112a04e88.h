// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUnlockLensCollectionCardDataProvider
// Superclass: NSObject
// Address: 0x112a04e88

@interface SCLensUnlockLensCollectionCardDataProvider

// Property: dataObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensUnlockLensCollectionCardDataProvider initWithLensCollectionId:lensCollectionDataProvider:mediaDownloader:performerProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104eaaebc

// -[SCLensUnlockLensCollectionCardDataProvider lensCollectionDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x104eaafc0

// -[SCLensUnlockLensCollectionCardDataProvider mediaDownloader]
// Type encoding: @16@0:8
// Implementation: 0x104eaafc8

// -[SCLensUnlockLensCollectionCardDataProvider dataObservable]
// Type encoding: @16@0:8
// Implementation: 0x104eaafd0

// -[SCLensUnlockLensCollectionCardDataProvider loadUnlockCardData]
// Type encoding: v16@0:8
// Implementation: 0x104eaaff8

// -[SCLensUnlockLensCollectionCardDataProvider unlockCardIconForURL:scaledToSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x104eab284

// -[SCLensUnlockLensCollectionCardDataProvider _imageFutureForURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x104eab478

// -[SCLensUnlockLensCollectionCardDataProvider _handleMetadataLoaded:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eab4ec

// -[SCLensUnlockLensCollectionCardDataProvider _completeLoadDataWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eab69c

// -[SCLensUnlockLensCollectionCardDataProvider _actionsForLensCollection:lensCollectionImageFuture:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104eab6e0

// -[SCLensUnlockLensCollectionCardDataProvider _unlockCollectionActionWithHandler:]
// Type encoding: @24@0:8@?16
// Implementation: 0x104eab8d0

// -[SCLensUnlockLensCollectionCardDataProvider _collectionSendToActionWithHandler:]
// Type encoding: @24@0:8@?16
// Implementation: 0x104eab954

// -[SCLensUnlockLensCollectionCardDataProvider _cancelAction]
// Type encoding: @16@0:8
// Implementation: 0x104eab9d8

// -[SCLensUnlockLensCollectionCardDataProvider _collectionUnlockHandlerForCollectionId:lensId:]
// Type encoding: @?32@0:8@16@24
// Implementation: 0x104eaba4c

// -[SCLensUnlockLensCollectionCardDataProvider _collectionSendToHandlerForCollectionId:attachedImageFuture:]
// Type encoding: @?32@0:8@16@24
// Implementation: 0x104eabb10

// -[SCLensUnlockLensCollectionCardDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104eabbd4

@end
