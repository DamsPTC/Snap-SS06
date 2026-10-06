// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCHermodDuplexServiceImplementation
// Superclass: NSObject
// Address: 0x112afe208

@interface SCHermodDuplexServiceImplementation

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCHermodDuplexServiceImplementation initWithDuplexClient:performerProvider:grpcClientFactory:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1067d21ec

// -[SCHermodDuplexServiceImplementation registerPayloadType:handler:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x1067d24a8

// -[SCHermodDuplexServiceImplementation unregisterPayloadType:handler:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x1067d2604

// -[SCHermodDuplexServiceImplementation sendHermodPayload:taskId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067d26b8

// -[SCHermodDuplexServiceImplementation beginSubscribing]
// Type encoding: v16@0:8
// Implementation: 0x1067d27c4

// -[SCHermodDuplexServiceImplementation endSubscribing]
// Type encoding: v16@0:8
// Implementation: 0x1067d2834

// -[SCHermodDuplexServiceImplementation onReceive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067d2870

// -[SCHermodDuplexServiceImplementation _sendHermodAck:taskId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1067d2c80

// -[SCHermodDuplexServiceImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067d2d10

@end
