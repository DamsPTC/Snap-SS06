// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaVideoStall
// Superclass: NSObject
// Address: 0x112b83818

@interface SCOperaVideoStall

// Property: type; attributes: TQ,R,N,V_type
// Property: stallMediaTime; attributes: Td,R,N,V_stallMediaTime
// Property: downloadBandwidthClass; attributes: T@"NSString",R,C,N,V_downloadBandwidthClass
// Property: absoluteTimestamp; attributes: Td,R,N,V_absoluteTimestamp
// Property: isActive; attributes: TB,R,N
// Property: duration; attributes: Td,R,N
// Property: bandwidthBps; attributes: Tq,R,N,V_bandwidthBps
// Property: hasVideoStartedPlaying; attributes: TB,R,N,V_hasVideoStartedPlaying
// Property: exitOnStall; attributes: TB,R,N,V_exitOnStall
// Property: networkSnapshot; attributes: T@"SCNNetworkTypesNetworkQueueState",&,N,V_networkSnapshot

// -[SCOperaVideoStall initWithType:mediaTime:timeProvider:downloadBandwidth:bandwidthBps:hasVideoStartedPlaying:]
// Type encoding: @60@0:8Q16d24@32q40q48B56
// Implementation: 0x107de9010

// -[SCOperaVideoStall finish]
// Type encoding: v16@0:8
// Implementation: 0x107de90f8

// -[SCOperaVideoStall terminate]
// Type encoding: v16@0:8
// Implementation: 0x107de9120

// -[SCOperaVideoStall reopen]
// Type encoding: v16@0:8
// Implementation: 0x107de912c

// -[SCOperaVideoStall isActive]
// Type encoding: B16@0:8
// Implementation: 0x107de9164

// -[SCOperaVideoStall duration]
// Type encoding: d16@0:8
// Implementation: 0x107de919c

// -[SCOperaVideoStall type]
// Type encoding: Q16@0:8
// Implementation: 0x107de9204

// -[SCOperaVideoStall stallMediaTime]
// Type encoding: d16@0:8
// Implementation: 0x107de920c

// -[SCOperaVideoStall downloadBandwidthClass]
// Type encoding: @16@0:8
// Implementation: 0x107de9214

// -[SCOperaVideoStall absoluteTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x107de921c

// -[SCOperaVideoStall bandwidthBps]
// Type encoding: q16@0:8
// Implementation: 0x107de9224

// -[SCOperaVideoStall hasVideoStartedPlaying]
// Type encoding: B16@0:8
// Implementation: 0x107de922c

// -[SCOperaVideoStall exitOnStall]
// Type encoding: B16@0:8
// Implementation: 0x107de9234

// -[SCOperaVideoStall networkSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x107de923c

// -[SCOperaVideoStall setNetworkSnapshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de9244

// -[SCOperaVideoStall .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107de9274

@end
