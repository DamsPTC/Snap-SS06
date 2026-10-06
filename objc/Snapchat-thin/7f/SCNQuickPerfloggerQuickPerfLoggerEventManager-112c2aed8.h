// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNQuickPerfloggerQuickPerfLoggerEventManager
// Superclass: NSObject
// Address: 0x112c2aed8

@interface SCNQuickPerfloggerQuickPerfLoggerEventManager


// -[SCNQuickPerfloggerQuickPerfLoggerEventManager initWithCpp:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x1006f0fcc

// -[SCNQuickPerfloggerQuickPerfLoggerEventManager startTopic:topicStartTimestampInMicroSeconds:backgroundPolicy:]
// Type encoding: i36@0:8i16q20q28
// Implementation: 0x10af72aac

// -[SCNQuickPerfloggerQuickPerfLoggerEventManager dropTopic:instanceKey:]
// Type encoding: v24@0:8i16i20
// Implementation: 0x10af72b04

// -[SCNQuickPerfloggerQuickPerfLoggerEventManager isTopicOn:instanceKey:]
// Type encoding: B24@0:8i16i20
// Implementation: 0x10af72b58

// -[SCNQuickPerfloggerQuickPerfLoggerEventManager endTopic:instanceKey:topicEndTimestampInMicroSeconds:endState:errorCode:eventEndCallback:]
// Type encoding: v56@0:8i16i20q24q32@40@48
// Implementation: 0x10af72bac

// -[SCNQuickPerfloggerQuickPerfLoggerEventManager addPoint:instanceKey:pointId:pointStartTimestampInMicroSeconds:]
// Type encoding: v36@0:8i16i20i24q28
// Implementation: 0x10af72cc0

// -[SCNQuickPerfloggerQuickPerfLoggerEventManager addAnnotation:instanceKey:annotationKey:annotationValue:]
// Type encoding: v36@0:8i16i20i24@28
// Implementation: 0x10af72d1c

// -[SCNQuickPerfloggerQuickPerfLoggerEventManager cancelEventsOnBackground:eventEndCallback:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af72df0

// -[SCNQuickPerfloggerQuickPerfLoggerEventManager getEvent:instanceKey:]
// Type encoding: @24@0:8i16i20
// Implementation: 0x10af72ea4

// -[SCNQuickPerfloggerQuickPerfLoggerEventManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af72f30

// -[SCNQuickPerfloggerQuickPerfLoggerEventManager .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1006f0f88

@end
