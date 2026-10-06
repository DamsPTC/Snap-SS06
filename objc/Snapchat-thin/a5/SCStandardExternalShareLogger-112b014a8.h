// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStandardExternalShareLogger
// Superclass: NSObject
// Address: 0x112b014a8

@interface SCStandardExternalShareLogger


// -[SCStandardExternalShareLogger initWithShareSource:destinationsAvailable:shareUIType:eventSubject:userTrackedLogger:shareSessionId:sendToSessionId:captureSessionId:performerProvider:grapheneRegistry:dreamsMetadata:posterId:snapId:memoriesLogger:circumstanceEngine:sharingMetadata:]
// Type encoding: @144@0:8q16@24q32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x106835ad8

// -[SCStandardExternalShareLogger dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106835fd8

// -[SCStandardExternalShareLogger _respondToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10683601c

// -[SCStandardExternalShareLogger _handleDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1068364ac

// -[SCStandardExternalShareLogger _handleSelectShareWithMediaConfiguration:phoneNumber:destination:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106836554

// -[SCStandardExternalShareLogger _handleCompleteShareWithShareDestination:textConfiguration:mediaConfiguration:activityType:shortLinkURL:lensLoggingInfo:shareIdOverride:]
// Type encoding: v72@0:8q16@24@32@40@48@56@64
// Implementation: 0x10683682c

// -[SCStandardExternalShareLogger _resetLoggingParametersAfterCompleteShare]
// Type encoding: v16@0:8
// Implementation: 0x106836e88

// -[SCStandardExternalShareLogger _handleGenerateMediaWithShareDestination:duration:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x106836ea4

// -[SCStandardExternalShareLogger _handleGenerateMediaLinkWithShareDestination:duration:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x106836eb0

// -[SCStandardExternalShareLogger _emitGrapheneShareSheetContentGeneratedWithDestination:duration:type:]
// Type encoding: v40@0:8q16d24@32
// Implementation: 0x106836ebc

// -[SCStandardExternalShareLogger _emitGrapheneShareSheetSelectedWithShareDestination:activityType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106837060

// -[SCStandardExternalShareLogger _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10683723c

// -[SCStandardExternalShareLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106837298

@end
