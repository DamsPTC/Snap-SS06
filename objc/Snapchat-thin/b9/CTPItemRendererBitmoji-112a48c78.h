// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPItemRendererBitmoji
// Superclass: NSObject
// Address: 0x112a48c78

@interface CTPItemRendererBitmoji

// Property: ctItemEntityCase; attributes: Ti,R,N
// Property: viewReuseIdentifier; attributes: T@"NSString",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPItemRendererBitmoji initWithBitmojiImageFetcher:customojiViewProvider:bitmoji3DStickerFetcher:configProvider:logger:simpleContentFetcher:stickerContentManager:customojiFetcher:clientRendererGatingProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x105596a24

// -[CTPItemRendererBitmoji dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105596be8

// -[CTPItemRendererBitmoji ctItemEntityCase]
// Type encoding: i16@0:8
// Implementation: 0x105596c30

// -[CTPItemRendererBitmoji viewReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105596c38

// -[CTPItemRendererBitmoji viewForItem:presentationModelProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105596c44

// -[CTPItemRendererBitmoji attemptToRecycleView:forUseWithItem:presentationModelProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105596e7c

// -[CTPItemRendererBitmoji _loadImageForBitmojiStickerItem:itemView:presentationModelProvider:completionBlock:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10559703c

// -[CTPItemRendererBitmoji _loadImageForItem:subject:itemView:bitmojiEntity:presentationModelProvider:completionBlock:]
// Type encoding: @64@0:8@16@24@32@40@48@?56
// Implementation: 0x105597220

// -[CTPItemRendererBitmoji _loadImageForPresentationModel:bitmojiSticker:item:itemView:request:subject:completionBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x105597894

// -[CTPItemRendererBitmoji _delayedPresentationModelFromModel:entity:delayMs:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x105597cbc

// -[CTPItemRendererBitmoji _bitmojiCustomojiStickerPresentationModelFromModel:text:type:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x105597ee0

// -[CTPItemRendererBitmoji _bitmojiStickerEntityFromEntity:text:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055980bc

// -[CTPItemRendererBitmoji _ctpItemFromItem:entity:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10559820c

// -[CTPItemRendererBitmoji _loadImageWithModifiedEntity:model:item:itemView:request:subject:completionBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x1055982fc

// -[CTPItemRendererBitmoji .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105598450

@end
