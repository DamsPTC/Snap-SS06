// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesThumbnailCoordinatorMock
// Superclass: NSObject
// Address: 0x112af0bd0

@interface SCStoriesThumbnailCoordinatorMock

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesThumbnailCoordinatorMock addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x1066ee0ec

// -[SCStoriesThumbnailCoordinatorMock addThumbnail:thumbnailMedia:expirationDate:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1066ee0f4

// -[SCStoriesThumbnailCoordinatorMock addThumbnailFromImage:thumbnailInfo:expirationDate:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1066ee108

// -[SCStoriesThumbnailCoordinatorMock queryThumbnailForThumbnailInfo:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1066ee11c

// -[SCStoriesThumbnailCoordinatorMock removeAllThumbnailsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1066ee1d8

// -[SCStoriesThumbnailCoordinatorMock removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066ee1ec

// -[SCStoriesThumbnailCoordinatorMock removeThumbnailsForSnapMediaCacheKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066ee1f0

// -[SCStoriesThumbnailCoordinatorMock retrieveThumbnailFromContentDelivery:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1066ee1f4

// -[SCStoriesThumbnailCoordinatorMock updateWithMediaProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066ee220

// +[SCStoriesThumbnailCoordinatorMock isAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1066ee0e4

@end
