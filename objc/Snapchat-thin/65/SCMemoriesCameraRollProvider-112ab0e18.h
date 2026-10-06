// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCameraRollProvider
// Superclass: NSObject
// Address: 0x112ab0e18

@interface SCMemoriesCameraRollProvider

// Property: currentAlbumObservable; attributes: T@"SCBridgeObservable",?,&,N
// Property: limitPhotoLibraryAccessObservable; attributes: T@"SCBridgeObservable",?,&,N
// Property: actionSheetPresenter; attributes: T@"<SCComposerFoundationActionSheetPresenting>",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesCameraRollProvider initWithMemoriesCameraRollPaginator:photoPermissionCoordinator:coreConfigProvider:photoLibraryFetcher:allowPhotoEntries:allowVideoEntries:]
// Type encoding: @56@0:8@16@24@32@40B48B52
// Implementation: 0x105f63148

// -[SCMemoriesCameraRollProvider createPaginator]
// Type encoding: @16@0:8
// Implementation: 0x105f63274

// -[SCMemoriesCameraRollProvider currentAlbumObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f63390

// -[SCMemoriesCameraRollProvider limitPhotoLibraryAccessObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f6344c

// -[SCMemoriesCameraRollProvider _updatePermissionStatusForAuthorizedState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f636e8

// -[SCMemoriesCameraRollProvider observeDataWithAlbumId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f637b4

// -[SCMemoriesCameraRollProvider shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x105f63c1c

// -[SCMemoriesCameraRollProvider pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105f63c24

// -[SCMemoriesCameraRollProvider _isCameraRollFullAccess]
// Type encoding: B16@0:8
// Implementation: 0x105f63c30

// -[SCMemoriesCameraRollProvider switchToRecentsAlbum]
// Type encoding: v16@0:8
// Implementation: 0x105f63ca8

// -[SCMemoriesCameraRollProvider switchToFavoritesAlbum]
// Type encoding: v16@0:8
// Implementation: 0x105f63d1c

// -[SCMemoriesCameraRollProvider switchToVideosAlbum]
// Type encoding: v16@0:8
// Implementation: 0x105f63d90

// -[SCMemoriesCameraRollProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f63e04

@end
