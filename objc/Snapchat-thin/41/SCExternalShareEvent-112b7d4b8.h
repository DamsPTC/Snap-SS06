// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExternalShareEvent
// Superclass: NSObject
// Address: 0x112b7d4b8

@interface SCExternalShareEvent


// -[SCExternalShareEvent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107d524ac

// -[SCExternalShareEvent hash]
// Type encoding: Q16@0:8
// Implementation: 0x107d524d0

// -[SCExternalShareEvent internalInit]
// Type encoding: @16@0:8
// Implementation: 0x107d52720

// -[SCExternalShareEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d52764

// -[SCExternalShareEvent matchRequestShareSheet:shareSheetRenderComplete:selectShareDestination:handleShare:generateMediaComplete:mediaExportComplete:generateMediaLinkComplete:watermarkingComplete:completeShare:]
// Type encoding: v88@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80
// Implementation: 0x107d52b54

// -[SCExternalShareEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d52d90

// +[SCExternalShareEvent completeShareWithDestination:shareResult:textConfiguration:mediaConfiguration:activityType:shortLinkURLToShare:lensLoggingInfo:shareIdOverride:completedTimestamp:]
// Type encoding: @88@0:8q16Q24@32@40@48@56@64@72d80
// Implementation: 0x107d51fa8

// +[SCExternalShareEvent generateMediaCompleteWithDestination:startTimestamp:endTimestamp:]
// Type encoding: @40@0:8q16d24d32
// Implementation: 0x107d52120

// +[SCExternalShareEvent generateMediaLinkCompleteWithDidSucceed:destination:startTimestamp:endTimestamp:]
// Type encoding: @44@0:8B16q20d28d36
// Implementation: 0x107d52190

// +[SCExternalShareEvent handleShareWithDestination:mediaConfiguration:textConfiguration:phoneNumber:]
// Type encoding: @48@0:8q16@24@32@40
// Implementation: 0x107d52208

// +[SCExternalShareEvent mediaExportCompleteWithDidSucceed:startTimestamp:endTimestamp:]
// Type encoding: @36@0:8B16d20d28
// Implementation: 0x107d522d8

// +[SCExternalShareEvent requestShareSheet]
// Type encoding: @16@0:8
// Implementation: 0x107d52348

// +[SCExternalShareEvent selectShareDestination]
// Type encoding: @16@0:8
// Implementation: 0x107d52390

// +[SCExternalShareEvent shareSheetRenderComplete]
// Type encoding: @16@0:8
// Implementation: 0x107d523dc

// +[SCExternalShareEvent watermarkingCompleteWithDestination:lensId:startTimestamp:endTimestamp:]
// Type encoding: @48@0:8q16@24d32d40
// Implementation: 0x107d52428

@end
