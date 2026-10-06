// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessPixelSession
// Superclass: NSObject
// Address: 0x112be3b78

@interface SCImageProcessPixelSession

// Property: useTransparentBackground; attributes: TB,N,V_useTransparentBackground

// -[SCImageProcessPixelSession initWithQueue:image:outputSize:backgroundAnimationCommand:commands:orientation:viewportTransform:]
// Type encoding: @120@0:8@16@24{CGSize=dd}32@48@56q64{CGAffineTransform=dddddd}72
// Implementation: 0x10906b16c

// -[SCImageProcessPixelSession initWithQueue:image:outputSize:backgroundAnimationCommand:commands:orientation:viewportTransform:commandMapper:useOutputTextureEnable:]
// Type encoding: @132@0:8@16@24{CGSize=dd}32@48@56q64{CGAffineTransform=dddddd}72@120B128
// Implementation: 0x10906b1a4

// -[SCImageProcessPixelSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10906b334

// -[SCImageProcessPixelSession startRunningWithCompletionHandler:atPresentationTime:]
// Type encoding: v48@0:8@?16{?=qiIq}24
// Implementation: 0x10906b3d4

// -[SCImageProcessPixelSession useTransparentBackground]
// Type encoding: B16@0:8
// Implementation: 0x10906b944

// -[SCImageProcessPixelSession setUseTransparentBackground:]
// Type encoding: v20@0:8B16
// Implementation: 0x10906b94c

// -[SCImageProcessPixelSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10906b954

@end
