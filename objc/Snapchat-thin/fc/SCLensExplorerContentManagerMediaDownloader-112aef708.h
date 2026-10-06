// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerContentManagerMediaDownloader
// Superclass: NSObject
// Address: 0x112aef708

@interface SCLensExplorerContentManagerMediaDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerContentManagerMediaDownloader initWithMediaDownloader:lensPerformerProvider:storiesThumbnailCoordinator:imageScale:]
// Type encoding: @48@0:8@16@24@32d40
// Implementation: 0x1066c7330

// -[SCLensExplorerContentManagerMediaDownloader dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1066c7448

// -[SCLensExplorerContentManagerMediaDownloader mediaDownloader]
// Type encoding: @16@0:8
// Implementation: 0x1066c748c

// -[SCLensExplorerContentManagerMediaDownloader lensPerformerProvider]
// Type encoding: @16@0:8
// Implementation: 0x1066c7494

// -[SCLensExplorerContentManagerMediaDownloader downloadAnimationForLensExplorerItem:preferredSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x1066c749c

// -[SCLensExplorerContentManagerMediaDownloader downloadImageWithURL:preferredSize:imageType:]
// Type encoding: @48@0:8@16{CGSize=dd}24q40
// Implementation: 0x1066c77fc

// -[SCLensExplorerContentManagerMediaDownloader downloadImageForStoryItem:preferredSize:imageType:]
// Type encoding: @48@0:8@16{CGSize=dd}24q40
// Implementation: 0x1066c79e0

// -[SCLensExplorerContentManagerMediaDownloader cancelDownloadForKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066c7c30

// -[SCLensExplorerContentManagerMediaDownloader cancelAllDownloads]
// Type encoding: v16@0:8
// Implementation: 0x1066c7c80

// -[SCLensExplorerContentManagerMediaDownloader _imageModelFromContentResult:cacheKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066c7cb0

// -[SCLensExplorerContentManagerMediaDownloader _mediaDownloaderContentTypeForImageType:]
// Type encoding: q24@0:8q16
// Implementation: 0x1066c7ebc

// -[SCLensExplorerContentManagerMediaDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066c7ec8

@end
