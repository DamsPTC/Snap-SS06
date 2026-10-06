// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExtensionEventConfigurer
// Superclass: NSObject
// Address: 0xada440

@interface SCExtensionEventConfigurer

// Property: sessionId; attributes: T@"NSString",C,N,V_sessionId
// Property: timeProvider; attributes: T@"<SCTimeProviding>",R,N,V_timeProvider
// Property: eventFieldProvider; attributes: T@"<SCBlizzardEventFieldProviderBase>",R,N,V_eventFieldProvider

// -[SCExtensionEventConfigurer initWithEventFieldProvider:timeProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x591560

// -[SCExtensionEventConfigurer configureAndSerializeEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x591604

// -[SCExtensionEventConfigurer _serializeEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x59176c

// -[SCExtensionEventConfigurer sessionId]
// Type encoding: @16@0:8
// Implementation: 0x5918b8

// -[SCExtensionEventConfigurer setSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x5918c0

// -[SCExtensionEventConfigurer timeProvider]
// Type encoding: @16@0:8
// Implementation: 0x5918c8

// -[SCExtensionEventConfigurer eventFieldProvider]
// Type encoding: @16@0:8
// Implementation: 0x5918d0

// -[SCExtensionEventConfigurer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x5918d8

@end
