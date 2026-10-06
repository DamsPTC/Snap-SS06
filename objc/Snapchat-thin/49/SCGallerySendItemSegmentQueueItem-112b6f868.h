// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGallerySendItemSegmentQueueItem
// Superclass: NSObject
// Address: 0x112b6f868

@interface SCGallerySendItemSegmentQueueItem

// Property: phAsset; attributes: T@"PHAsset",R,N,V_phAsset
// Property: snap; attributes: T@"<SCGallerySnap>",R,N,V_snap
// Property: didStart; attributes: TB,N,V_didStart
// Property: identifier; attributes: T@"NSString",R,N

// -[SCGallerySendItemSegmentQueueItem initWithVideoAsset:shouldSegment:videoImporter:userTrackedLogger:circumstanceEngine:]
// Type encoding: @52@0:8@16B24@28@36@44
// Implementation: 0x107adb648

// -[SCGallerySendItemSegmentQueueItem initWithVideoSnap:encryptedContentManager:cloudFile:videoImporter:userTrackedLogger:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107adb768

// -[SCGallerySendItemSegmentQueueItem startSegmentWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107adb8d8

// -[SCGallerySendItemSegmentQueueItem queueCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107adc220

// -[SCGallerySendItemSegmentQueueItem identifier]
// Type encoding: @16@0:8
// Implementation: 0x107adc258

// -[SCGallerySendItemSegmentQueueItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x107adc298

// -[SCGallerySendItemSegmentQueueItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107adc2d4

// -[SCGallerySendItemSegmentQueueItem _sendItemsShouldUseVisFromCof]
// Type encoding: B16@0:8
// Implementation: 0x107adc370

// -[SCGallerySendItemSegmentQueueItem phAsset]
// Type encoding: @16@0:8
// Implementation: 0x107adc388

// -[SCGallerySendItemSegmentQueueItem snap]
// Type encoding: @16@0:8
// Implementation: 0x107adc390

// -[SCGallerySendItemSegmentQueueItem didStart]
// Type encoding: B16@0:8
// Implementation: 0x107adc398

// -[SCGallerySendItemSegmentQueueItem setDidStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x107adc3a0

// -[SCGallerySendItemSegmentQueueItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107adc3a8

@end
