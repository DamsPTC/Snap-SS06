// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMagicMomentLoggingSession
// Superclass: NSObject
// Address: 0x112be12d8

@interface SCMagicMomentLoggingSession

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMagicMomentLoggingSession initWithBlizzardLogger:snap:sessionId:source:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x109022c0c

// -[SCMagicMomentLoggingSession _newBaseMagicMomentEvent]
// Type encoding: @16@0:8
// Implementation: 0x109022ce8

// -[SCMagicMomentLoggingSession _logEventWithAction:frameTime:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x109022e08

// -[SCMagicMomentLoggingSession _logEventWithStep:]
// Type encoding: v24@0:8q16
// Implementation: 0x109022ee4

// -[SCMagicMomentLoggingSession resetTimers]
// Type encoding: v16@0:8
// Implementation: 0x109022f5c

// -[SCMagicMomentLoggingSession logMagicMomentDisabled]
// Type encoding: v16@0:8
// Implementation: 0x109022f9c

// -[SCMagicMomentLoggingSession logMagicMomentStartedEnabling]
// Type encoding: v16@0:8
// Implementation: 0x109023000

// -[SCMagicMomentLoggingSession logMagicMomentGeneratingDepth]
// Type encoding: v16@0:8
// Implementation: 0x10902305c

// -[SCMagicMomentLoggingSession logMagicMomentGeneratedDepth]
// Type encoding: v16@0:8
// Implementation: 0x1090230a0

// -[SCMagicMomentLoggingSession logMagicMomentApplyingEffect]
// Type encoding: v16@0:8
// Implementation: 0x1090230e4

// -[SCMagicMomentLoggingSession logMagicMomentEnabledWithFrameTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x109023128

// -[SCMagicMomentLoggingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090231b4

@end
