// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKSwizzler
// Superclass: NSObject
// Address: 0x1129e73c8

@interface FBSDKSwizzler


// +[FBSDKSwizzler initialize]
// Type encoding: v16@0:8
// Implementation: 0x104988b20

// +[FBSDKSwizzler resolveConflict]
// Type encoding: v16@0:8
// Implementation: 0x104988bb4

// +[FBSDKSwizzler printSwizzles]
// Type encoding: v16@0:8
// Implementation: 0x104988c24

// +[FBSDKSwizzler swizzleForMethod:]
// Type encoding: @24@0:8^{objc_method=}16
// Implementation: 0x104988cb4

// +[FBSDKSwizzler removeSwizzleForMethod:]
// Type encoding: v24@0:8^{objc_method=}16
// Implementation: 0x104988cc0

// +[FBSDKSwizzler setSwizzle:forMethod:]
// Type encoding: v32@0:8@16^{objc_method=}24
// Implementation: 0x104988ccc

// +[FBSDKSwizzler isLocallyDefinedMethod:onClass:]
// Type encoding: B32@0:8^{objc_method=}16#24
// Implementation: 0x104988cd8

// +[FBSDKSwizzler swizzleSelector:onClass:withBlock:named:]
// Type encoding: v48@0:8:16#24@?32@40
// Implementation: 0x104988d5c

// +[FBSDKSwizzler swizzleSelector:onClass:withBlock:named:async:]
// Type encoding: v52@0:8:16#24@?32@40B48
// Implementation: 0x104988d64

// +[FBSDKSwizzler unswizzleSelector:onClass:named:]
// Type encoding: v40@0:8:16#24@32
// Implementation: 0x1049892c4

// +[FBSDKSwizzler object:ofClass:addSelector:]
// Type encoding: v40@0:8@16#24:32
// Implementation: 0x104989420

// +[FBSDKSwizzler object:ofClass:removeSelector:]
// Type encoding: v40@0:8@16#24:32
// Implementation: 0x104989518

// +[FBSDKSwizzler object:ofClass:isCallingSelector:]
// Type encoding: B40@0:8@16#24:32
// Implementation: 0x104989610

// +[FBSDKSwizzler swizzleSelectorWithBlock:async:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x1049896d8

@end
