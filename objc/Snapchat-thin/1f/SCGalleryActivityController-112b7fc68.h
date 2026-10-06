// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryActivityController
// Superclass: NSObject
// Address: 0x112b7fc68

@interface SCGalleryActivityController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryActivityController initWithUserTrackedLogger:photoPermissionCoordinator:spectaclesAppLogger:memoriesActivityItemProvidingServices:dataObjectContext:galleryLogger:grapheneRegistry:circumstanceEngine:fetchLimit:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x107d93dc0

// -[SCGalleryActivityController presentWithItemProviders:fromViewController:completionWithActivityType:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107d93f90

// -[SCGalleryActivityController presentWithoutExportingWithItemProviders:fromViewController:cancelHandler:completionWithItems:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x107d941d4

// -[SCGalleryActivityController exportWithActivityType:itemProviders:completed:activityError:exportSessionId:memoriesSessionId:currentMemoriesTab:completionWithActivityType:]
// Type encoding: v76@0:8@16@24B32@36@44@52Q60@?68
// Implementation: 0x107d94b68

// -[SCGalleryActivityController presentFromViewController:forGalleryItems:snaps:allSnapsCount:userContext:completion:]
// Type encoding: v64@0:8@16@24@32Q40q48@?56
// Implementation: 0x107d95220

// -[SCGalleryActivityController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107d954c4

// -[SCGalleryActivityController activityItemProviderRequestsItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d95558

// -[SCGalleryActivityController activityItemProviderIsFirstItemProvider:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d95964

// -[SCGalleryActivityController activityItemProviderRequestsThumbnail:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107d959bc

// -[SCGalleryActivityController activityItemProviderRequestsItemCount]
// Type encoding: q16@0:8
// Implementation: 0x107d95de8

// -[SCGalleryActivityController shouldPopToRootViewController]
// Type encoding: B16@0:8
// Implementation: 0x107d95df0

// -[SCGalleryActivityController shouldPopToRootViewControllerLater]
// Type encoding: B16@0:8
// Implementation: 0x107d95df8

// -[SCGalleryActivityController _showDropdownForSavedToCameraRoll]
// Type encoding: v16@0:8
// Implementation: 0x107d95e00

// -[SCGalleryActivityController _cleanupActivityViewController]
// Type encoding: v16@0:8
// Implementation: 0x107d95ea4

// -[SCGalleryActivityController _cleanupAndDismissActivityViewController]
// Type encoding: v16@0:8
// Implementation: 0x107d95ee4

// -[SCGalleryActivityController _cleanupActivityProgressController]
// Type encoding: v16@0:8
// Implementation: 0x107d95f64

// -[SCGalleryActivityController saveToCameraRollWithItemProviders:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107d95fc8

// -[SCGalleryActivityController _saveToCameraRollWithItemProviders:exportSessionId:activityType:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107d96060

// -[SCGalleryActivityController _cleanupSaveToCameraRollActivityController]
// Type encoding: v16@0:8
// Implementation: 0x107d96420

// -[SCGalleryActivityController _batchExportToCameraRollWithItemProviders:exportSessionId:activityType:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107d96438

// -[SCGalleryActivityController _multiExportToCameraRollWithItemProviders:exportSessionId:activityType:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107d965e8

// -[SCGalleryActivityController _cleanupMultiExportActivityController]
// Type encoding: v16@0:8
// Implementation: 0x107d969c0

// -[SCGalleryActivityController _getTotalMediaSizeWithItemProviders:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107d969d8

// -[SCGalleryActivityController _getMemoriesActivityItemProviderBuilder]
// Type encoding: @16@0:8
// Implementation: 0x107d96adc

// -[SCGalleryActivityController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d96b24

@end
