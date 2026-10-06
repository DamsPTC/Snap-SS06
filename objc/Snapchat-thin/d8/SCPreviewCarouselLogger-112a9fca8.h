// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewCarouselLogger
// Superclass: NSObject
// Address: 0x112a9fca8

@interface SCPreviewCarouselLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewCarouselLogger initWithBlizzardServices:latencyLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105dea0c0

// -[SCPreviewCarouselLogger onItemChangedAtIndex:totalCount:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105dea16c

// -[SCPreviewCarouselLogger logPreviewCarouselUpdateWithSessionId:snapSessionId:snapSource:mediaType:locationEnabled:]
// Type encoding: v52@0:8@16@24q32q40B48
// Implementation: 0x105dea1a0

// -[SCPreviewCarouselLogger onCarouselUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105dea364

// -[SCPreviewCarouselLogger isPositionVisible:totalCount:]
// Type encoding: B32@0:8q16q24
// Implementation: 0x105dea3b0

// -[SCPreviewCarouselLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105dea3d0

@end
