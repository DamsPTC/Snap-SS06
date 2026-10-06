// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatWallpaperCameraRollDataPaginator
// Superclass: NSObject
// Address: 0x112ae35e8

@interface SCChatWallpaperCameraRollDataPaginator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatWallpaperCameraRollDataPaginator initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:fetchLimit:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1064f3074

// -[SCChatWallpaperCameraRollDataPaginator pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1064f32b8

// -[SCChatWallpaperCameraRollDataPaginator hasReachedLastPage]
// Type encoding: B16@0:8
// Implementation: 0x1064f32c4

// -[SCChatWallpaperCameraRollDataPaginator loadNextPage]
// Type encoding: v16@0:8
// Implementation: 0x1064f3314

// -[SCChatWallpaperCameraRollDataPaginator getPageOfSize:currentIndex:results:]
// Type encoding: @40@0:8Q16^Q24@32
// Implementation: 0x1064f3364

// -[SCChatWallpaperCameraRollDataPaginator observe]
// Type encoding: @16@0:8
// Implementation: 0x1064f3490

// -[SCChatWallpaperCameraRollDataPaginator _getMediaItemFromPHAsset:thumbnailTargetSize:contentTargetSize:]
// Type encoding: @56@0:8@16{CGSize=dd}24{CGSize=dd}40
// Implementation: 0x1064f3498

// -[SCChatWallpaperCameraRollDataPaginator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064f35e8

@end
