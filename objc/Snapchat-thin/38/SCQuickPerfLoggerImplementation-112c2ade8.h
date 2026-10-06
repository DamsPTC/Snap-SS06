// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCQuickPerfLoggerImplementation
// Superclass: NSObject
// Address: 0x112c2ade8

@interface SCQuickPerfLoggerImplementation

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCQuickPerfLoggerImplementation initWithLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x1006f0b64

// -[SCQuickPerfLoggerImplementation startTopicWithTopic:backgroundPolicy:]
// Type encoding: i32@0:8q16q24
// Implementation: 0x10af719e4

// -[SCQuickPerfLoggerImplementation dropTopicWithTopic:instanceKey:]
// Type encoding: v28@0:8q16i24
// Implementation: 0x10af71a24

// -[SCQuickPerfLoggerImplementation isTopicOnWithTopic:instanceKey:]
// Type encoding: B28@0:8q16i24
// Implementation: 0x10af71a2c

// -[SCQuickPerfLoggerImplementation addPointWithTopic:instanceKey:pointId:]
// Type encoding: v36@0:8q16i24q28
// Implementation: 0x10af71a34

// -[SCQuickPerfLoggerImplementation endTopicWithTopic:instanceKey:state:errorCode:]
// Type encoding: v44@0:8q16i24q28@36
// Implementation: 0x10af71a7c

// -[SCQuickPerfLoggerImplementation addAnnotationWithTopic:instanceKey:annotationKey:annotationValue:]
// Type encoding: v44@0:8q16i24q28@36
// Implementation: 0x10af71b64

// -[SCQuickPerfLoggerImplementation applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10af71b6c

// -[SCQuickPerfLoggerImplementation _logEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af71c14

// -[SCQuickPerfLoggerImplementation _convertToBlizzardEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af71c68

// -[SCQuickPerfLoggerImplementation _constructPlatformLoggerEvent:rawEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af71cdc

// -[SCQuickPerfLoggerImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af72060

@end
