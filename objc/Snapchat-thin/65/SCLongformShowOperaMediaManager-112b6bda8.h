// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLongformShowOperaMediaManager
// Superclass: NSObject
// Address: 0x112b6bda8

@interface SCLongformShowOperaMediaManager

// Property: chapterIdToFirstFrameContentObject; attributes: T@"NSMutableDictionary",&,N,V_chapterIdToFirstFrameContentObject
// Property: chapterIdToOverlayImageContentObject; attributes: T@"NSMutableDictionary",&,N,V_chapterIdToOverlayImageContentObject
// Property: contentDelivery; attributes: T@"SCLazy",&,N,V_contentDelivery
// Property: imageDownloader; attributes: T@"<SCImageDownloading>",W,N,V_imageDownloader
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLongformShowOperaMediaManager initWithImageDownloader:contentDelivery:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107a45818

// -[SCLongformShowOperaMediaManager imageForKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a458e8

// -[SCLongformShowOperaMediaManager videoAssetFutureForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a45b40

// -[SCLongformShowOperaMediaManager videoAssetForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a45b90

// -[SCLongformShowOperaMediaManager resetVideoAssetForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a45b98

// -[SCLongformShowOperaMediaManager registerFristFrameContentObject:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a45b9c

// -[SCLongformShowOperaMediaManager registerOverlayImageContentObject:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a45c0c

// -[SCLongformShowOperaMediaManager _retrieveContentDataForContentKey:pageInfo:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107a45c7c

// -[SCLongformShowOperaMediaManager _shouldDownloadContentObjectWithKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a45e60

// -[SCLongformShowOperaMediaManager _downloadImageWithKey:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a45f24

// -[SCLongformShowOperaMediaManager chapterIdToFirstFrameContentObject]
// Type encoding: @16@0:8
// Implementation: 0x107a462c4

// -[SCLongformShowOperaMediaManager setChapterIdToFirstFrameContentObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a462cc

// -[SCLongformShowOperaMediaManager chapterIdToOverlayImageContentObject]
// Type encoding: @16@0:8
// Implementation: 0x107a462fc

// -[SCLongformShowOperaMediaManager setChapterIdToOverlayImageContentObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a46304

// -[SCLongformShowOperaMediaManager contentDelivery]
// Type encoding: @16@0:8
// Implementation: 0x107a46334

// -[SCLongformShowOperaMediaManager setContentDelivery:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4633c

// -[SCLongformShowOperaMediaManager imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x107a4636c

// -[SCLongformShowOperaMediaManager setImageDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a46384

// -[SCLongformShowOperaMediaManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a46390

@end
