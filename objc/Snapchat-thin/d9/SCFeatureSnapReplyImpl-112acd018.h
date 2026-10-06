// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureSnapReplyImpl
// Superclass: SCFeature
// Address: 0x112acd018

@interface SCFeatureSnapReplyImpl

// Property: snapReplyStickerView; attributes: T@"UIView",R,N
// Property: quickStickerViewProvider; attributes: T@"<SCQuickStickerViewProviding>",R,N,V_quickStickerViewProvider

// -[SCFeatureSnapReplyImpl initWithQuickStickerViewProvider:conversationId:userSession:conversationManager:conversationIdResolver:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10612d8cc

// -[SCFeatureSnapReplyImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10612da18

// -[SCFeatureSnapReplyImpl snapReplyStickerView]
// Type encoding: @16@0:8
// Implementation: 0x10612da78

// -[SCFeatureSnapReplyImpl addScreenCaptureNotificationObserver]
// Type encoding: v16@0:8
// Implementation: 0x10612daa8

// -[SCFeatureSnapReplyImpl _didScreenShot]
// Type encoding: v16@0:8
// Implementation: 0x10612db44

// -[SCFeatureSnapReplyImpl _didScreenRecord]
// Type encoding: v16@0:8
// Implementation: 0x10612db4c

// -[SCFeatureSnapReplyImpl removeScreenCaptureNotificationObserver]
// Type encoding: v16@0:8
// Implementation: 0x10612db54

// -[SCFeatureSnapReplyImpl setReplyConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10612dbe0

// -[SCFeatureSnapReplyImpl _sendScreenCaptureNotificationWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10612dc18

// -[SCFeatureSnapReplyImpl _sendScreenCaptureNotificationToUserId:type:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10612f624

// -[SCFeatureSnapReplyImpl quickStickerViewProvider]
// Type encoding: @16@0:8
// Implementation: 0x10612f894

// -[SCFeatureSnapReplyImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10612f8a4

@end
