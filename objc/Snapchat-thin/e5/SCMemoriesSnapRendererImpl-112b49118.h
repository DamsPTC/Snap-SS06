// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapRendererImpl
// Superclass: NSObject
// Address: 0x112b49118

@interface SCMemoriesSnapRendererImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesSnapRendererImpl initWithSnapRendererServices:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c5769c

// -[SCMemoriesSnapRendererImpl registerPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c57798

// -[SCMemoriesSnapRendererImpl unregisterPlugins]
// Type encoding: v16@0:8
// Implementation: 0x106f284e0

// -[SCMemoriesSnapRendererImpl resetPlugins]
// Type encoding: v16@0:8
// Implementation: 0x106f2854c

// -[SCMemoriesSnapRendererImpl resetPluginsForDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x106f2863c

// -[SCMemoriesSnapRendererImpl warmContentForSnapDoc:destination:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106f287a0

// -[SCMemoriesSnapRendererImpl preparePlaybackModel:destination:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106f28a94

// -[SCMemoriesSnapRendererImpl preparePlaybackModel:destination:withPlugins:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x106f28e3c

// -[SCMemoriesSnapRendererImpl _refusalErrorForPlaybackSnapDoc:destination:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106f28ee8

// -[SCMemoriesSnapRendererImpl render:watermarkProfile:toDestination:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x106f29034

// -[SCMemoriesSnapRendererImpl render:watermarkProfile:toDestination:snapSource:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x106f2903c

// -[SCMemoriesSnapRendererImpl render:watermarkProfile:toDestination:withPlugins:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x106f293a4

// -[SCMemoriesSnapRendererImpl render:watermarkProfile:toDestination:snapSource:withPlugins:]
// Type encoding: @56@0:8@16@24q32q40@48
// Implementation: 0x106f29468

// -[SCMemoriesSnapRendererImpl clearCachedRenderResources]
// Type encoding: v16@0:8
// Implementation: 0x106f2953c

// -[SCMemoriesSnapRendererImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f29588

@end
