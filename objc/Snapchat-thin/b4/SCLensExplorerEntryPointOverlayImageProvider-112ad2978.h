// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerEntryPointOverlayImageProvider
// Superclass: NSObject
// Address: 0x112ad2978

@interface SCLensExplorerEntryPointOverlayImageProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerEntryPointOverlayImageProvider initWithFetcher:screenScale:mediaDownloader:performer:imageScalingPerformer:]
// Type encoding: @56@0:8@16d24@32@40@48
// Implementation: 0x1061eb22c

// -[SCLensExplorerEntryPointOverlayImageProvider lensImageWithSize:atIndex:]
// Type encoding: @40@0:8{CGSize=dd}16Q32
// Implementation: 0x1061eb354

// -[SCLensExplorerEntryPointOverlayImageProvider resetCache]
// Type encoding: v16@0:8
// Implementation: 0x1061eb4ac

// -[SCLensExplorerEntryPointOverlayImageProvider _provideImageWithSize:atIndex:promise:]
// Type encoding: v48@0:8{CGSize=dd}16Q32@40
// Implementation: 0x1061eb588

// -[SCLensExplorerEntryPointOverlayImageProvider _cacheKeyForSize:index:]
// Type encoding: @40@0:8{CGSize=dd}16Q32
// Implementation: 0x1061eb804

// -[SCLensExplorerEntryPointOverlayImageProvider _imageWithURLFuture:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061eb874

// -[SCLensExplorerEntryPointOverlayImageProvider _scaledImageWithImageFuture:size:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x1061eb998

// -[SCLensExplorerEntryPointOverlayImageProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061ebcb4

// +[SCLensExplorerEntryPointOverlayImageProvider _unknownError]
// Type encoding: @16@0:8
// Implementation: 0x1061ebaf4

// +[SCLensExplorerEntryPointOverlayImageProvider _imageDecodeError]
// Type encoding: @16@0:8
// Implementation: 0x1061ebbd4

@end
