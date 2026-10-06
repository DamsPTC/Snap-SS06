// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPCustomojiRenderProvider
// Superclass: NSObject
// Address: 0x112a48d68

@interface CTPCustomojiRenderProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPCustomojiRenderProvider initWithCustomojiViewProvider:simpleContentFetcher:stickerContentManager:customojiFetcher:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105598fdc

// -[CTPCustomojiRenderProvider renderRequestWithParams:item:feature:itemView:subject:isReaction:completion:]
// Type encoding: @64@0:8@16@24i32@36@44B52@?56
// Implementation: 0x1055990d8

// -[CTPCustomojiRenderProvider _loadCustomojiFromURL:item:itemView:subject:completion:]
// Type encoding: @56@0:8@16@24@32@40@?48
// Implementation: 0x10559945c

// -[CTPCustomojiRenderProvider _handleContentResult:item:itemView:subject:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1055996c0

// -[CTPCustomojiRenderProvider _renderCustomojiWithParams:item:feature:itemView:subject:isReaction:text:rendererId:completion:]
// Type encoding: @80@0:8@16@24i32@36@44B52@56@64@?72
// Implementation: 0x1055998ec

// -[CTPCustomojiRenderProvider _imageLoadedForItem:itemView:subject:image:fromCache:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x10559a238

// -[CTPCustomojiRenderProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10559a3bc

@end
