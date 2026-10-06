// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardNativeLogger
// Superclass: NSObject
// Address: 0x112b11088

@interface SCBlizzardNativeLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBlizzardNativeLogger initWithBlizzardLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x10044f770

// -[SCBlizzardNativeLogger logEvent:protoSerializationCallback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ad18ec

// -[SCBlizzardNativeLogger _getNativeUserTrackedEvent:protoSerializationCallback:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106ad19cc

// -[SCBlizzardNativeLogger _getNativeUserNotTrackedEvent:protoSerializationCallback:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106ad1afc

// -[SCBlizzardNativeLogger _getQosFromNativeQosEnum:]
// Type encoding: q24@0:8q16
// Implementation: 0x106ad1c2c

// -[SCBlizzardNativeLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad1c4c

@end
