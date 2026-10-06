// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchatEventLogger
// Superclass: NSObject
// Address: 0x112b10430

@interface SCSnapchatEventLogger


// +[SCSnapchatEventLogger setBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aad744

// +[SCSnapchatEventLogger logShakeSendEvent:retryCount:isV2:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x106aad754

// +[SCSnapchatEventLogger logShakeUploadEvent:retryCout:totalFileSize:individualFileSize:isV2:]
// Type encoding: v52@0:8@16q24q32@40B48
// Implementation: 0x106aad838

// +[SCSnapchatEventLogger logShakeErrorEvent:message:failStep:isV2:]
// Type encoding: v44@0:8@16@24q32B40
// Implementation: 0x106aad83c

@end
