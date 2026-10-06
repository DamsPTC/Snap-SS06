// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRenderPassPixelSession
// Superclass: NSObject
// Address: 0x112be3cb8

@interface SCRenderPassPixelSession

// Property: useTransparentBackground; attributes: TB,N,V_useTransparentBackground

// -[SCRenderPassPixelSession initWithQueue:image:outputSize:inputId:renderPasses:orientation:viewportTransform:cpuTransform:circumstanceEngine:]
// Type encoding: @176@0:8@16@24{CGSize=dd}32@48@56q64{CGAffineTransform=dddddd}72{CGAffineTransform=dddddd}120@168
// Implementation: 0x10906fb8c

// -[SCRenderPassPixelSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10906fd2c

// -[SCRenderPassPixelSession startRunningWithCompletionHandler:atPresentationTime:]
// Type encoding: v48@0:8@?16{?=qiIq}24
// Implementation: 0x10906fdcc

// -[SCRenderPassPixelSession _processImageWithUpgradedIpp:atPresentationTime:]
// Type encoding: @48@0:8@16{?=qiIq}24
// Implementation: 0x10906ff44

// -[SCRenderPassPixelSession useTransparentBackground]
// Type encoding: B16@0:8
// Implementation: 0x10907076c

// -[SCRenderPassPixelSession setUseTransparentBackground:]
// Type encoding: v20@0:8B16
// Implementation: 0x109070774

// -[SCRenderPassPixelSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10907077c

@end
