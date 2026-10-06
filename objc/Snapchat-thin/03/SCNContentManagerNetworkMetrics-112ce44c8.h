// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNContentManagerNetworkMetrics
// Superclass: NSObject
// Address: 0x112ce44c8

@interface SCNContentManagerNetworkMetrics

// Property: requestStartTimestamp; attributes: Tq,R,N,V_requestStartTimestamp
// Property: requestEndTimestamp; attributes: Tq,R,N,V_requestEndTimestamp
// Property: payloadSize; attributes: Tq,R,N,V_payloadSize
// Property: responseCode; attributes: Ti,R,N,V_responseCode

// -[SCNContentManagerNetworkMetrics initWithRequestStartTimestamp:requestEndTimestamp:payloadSize:responseCode:]
// Type encoding: @44@0:8q16q24q32i40
// Implementation: 0x10b7f7304

// -[SCNContentManagerNetworkMetrics requestStartTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10b7f7368

// -[SCNContentManagerNetworkMetrics requestEndTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10b7f7370

// -[SCNContentManagerNetworkMetrics payloadSize]
// Type encoding: q16@0:8
// Implementation: 0x10b7f7378

// -[SCNContentManagerNetworkMetrics responseCode]
// Type encoding: i16@0:8
// Implementation: 0x10b7f7380

@end
