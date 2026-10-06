// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewUserInteractionStateLogger
// Superclass: NSObject
// Address: 0x112a9ff78

@interface SCPreviewUserInteractionStateLogger


// -[SCPreviewUserInteractionStateLogger initWithPreviewConfiguration:latencyLogger:blizzardServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105deeaf0

// -[SCPreviewUserInteractionStateLogger creativeToolsEditSessionId]
// Type encoding: @16@0:8
// Implementation: 0x105deec64

// -[SCPreviewUserInteractionStateLogger userStartedEnteringInteractionState:openAction:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105deec8c

// -[SCPreviewUserInteractionStateLogger userFinishedEnteringInteractionState:]
// Type encoding: v24@0:8q16
// Implementation: 0x105deef70

// -[SCPreviewUserInteractionStateLogger userInteractedOnInteractionState:]
// Type encoding: v24@0:8q16
// Implementation: 0x105def00c

// -[SCPreviewUserInteractionStateLogger userExitedInteractionState:]
// Type encoding: v24@0:8q16
// Implementation: 0x105def0c0

// -[SCPreviewUserInteractionStateLogger userExitedInteractionState:mentionUserIds:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105def0c8

// -[SCPreviewUserInteractionStateLogger userExitedInteractionState:exitType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105def0d8

// -[SCPreviewUserInteractionStateLogger userExitedInteractionState:exitType:cropToolLoggingParams:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x105def0e4

// -[SCPreviewUserInteractionStateLogger userExitedInteractionState:exitType:cropToolLoggingParams:mentionUserIds:]
// Type encoding: v48@0:8q16q24@32@40
// Implementation: 0x105def0ec

// -[SCPreviewUserInteractionStateLogger logPreviewToolReadyLatency:]
// Type encoding: v24@0:8q16
// Implementation: 0x105def554

// -[SCPreviewUserInteractionStateLogger reportPreviewToolReadyLatencyWithMediaType:locationEnabled:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x105def640

// -[SCPreviewUserInteractionStateLogger onPreviewStarted]
// Type encoding: v16@0:8
// Implementation: 0x105def998

// -[SCPreviewUserInteractionStateLogger _interactionState:canBeEnteredDuringExistingInteractionState:]
// Type encoding: B32@0:8q16q24
// Implementation: 0x105def9bc

// -[SCPreviewUserInteractionStateLogger _latencyLoggerToolTypeForInteractionState:]
// Type encoding: q24@0:8q16
// Implementation: 0x105def9d0

// -[SCPreviewUserInteractionStateLogger _editToolNameForInteractionState:]
// Type encoding: q24@0:8q16
// Implementation: 0x105def9f4

// -[SCPreviewUserInteractionStateLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105defa14

@end
