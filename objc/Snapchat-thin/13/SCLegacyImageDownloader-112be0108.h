// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyImageDownloader
// Superclass: SCLegacyItemDownloader
// Address: 0x112be0108

@interface SCLegacyImageDownloader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyImageDownloader initWithRequestManager:avatarDownloader:storiesThumbnailDownloader:contentDelivery:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x109001340

// -[SCLegacyImageDownloader loadNetworkImage:completion:failure:callbackQueue:]
// Type encoding: @48@0:8@16@?24@?32@40
// Implementation: 0x109001498

// -[SCLegacyImageDownloader loadItem:completion:failure:callbackQueue:]
// Type encoding: @48@0:8@16@?24@?32@40
// Implementation: 0x109001730

// -[SCLegacyImageDownloader isItemValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x109001d34

// -[SCLegacyImageDownloader resultFromData:withItem:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109001da8

// -[SCLegacyImageDownloader cacheKeyForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x109001db4

// -[SCLegacyImageDownloader shouldCache:]
// Type encoding: B24@0:8@16
// Implementation: 0x109001e30

// -[SCLegacyImageDownloader requestContexts:]
// Type encoding: @24@0:8@16
// Implementation: 0x109001ea4

// -[SCLegacyImageDownloader requestForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x109001f18

// -[SCLegacyImageDownloader requestManager]
// Type encoding: @16@0:8
// Implementation: 0x109001fbc

// -[SCLegacyImageDownloader contentDelivery]
// Type encoding: @16@0:8
// Implementation: 0x109001fec

// -[SCLegacyImageDownloader cache]
// Type encoding: @16@0:8
// Implementation: 0x109001ffc

// -[SCLegacyImageDownloader downloadPerformer]
// Type encoding: @16@0:8
// Implementation: 0x10900200c

// -[SCLegacyImageDownloader mediaContextTypeForItem:]
// Type encoding: q24@0:8@16
// Implementation: 0x10900207c

// -[SCLegacyImageDownloader debugLogForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x109002204

// -[SCLegacyImageDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090025b0

@end
