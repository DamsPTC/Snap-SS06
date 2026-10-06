// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPerfMetric
// Superclass: NSObject
// Address: 0x112c2b838

@interface SCPerfMetric

// Property: eventName; attributes: T@"NSString",R,C,N,V_eventName
// Property: metricType; attributes: Tq,R,N,V_metricType
// Property: metricValue; attributes: T@"NSDictionary",R,C,N,V_metricValue
// Property: params; attributes: T@"NSDictionary",R,C,N,V_params
// Property: ts; attributes: Td,R,N,V_ts

// -[SCPerfMetric initWithEventName:metricType:value:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10af859a4

// -[SCPerfMetric initWithEventName:metricType:metricValue:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10af85a64

// -[SCPerfMetric initWithEventName:metricType:metricValue:params:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x10af85b10

// -[SCPerfMetric initWithEventName:metricType:metricValue:params:ts:]
// Type encoding: @56@0:8@16q24@32@40d48
// Implementation: 0x10af85be4

// -[SCPerfMetric copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10af85cdc

// -[SCPerfMetric hash]
// Type encoding: Q16@0:8
// Implementation: 0x10af85d00

// -[SCPerfMetric isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10af85db0

// -[SCPerfMetric eventName]
// Type encoding: @16@0:8
// Implementation: 0x10af85eb4

// -[SCPerfMetric metricType]
// Type encoding: q16@0:8
// Implementation: 0x10af85ebc

// -[SCPerfMetric metricValue]
// Type encoding: @16@0:8
// Implementation: 0x10af85ec4

// -[SCPerfMetric params]
// Type encoding: @16@0:8
// Implementation: 0x10af85ecc

// -[SCPerfMetric ts]
// Type encoding: d16@0:8
// Implementation: 0x10af85ed4

// -[SCPerfMetric .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af85edc

@end
