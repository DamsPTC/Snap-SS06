// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNoDepSpectrumImpl
// Superclass: NSObject
// Address: 0x112b11178

@interface SCNoDepSpectrumImpl

// Property: logger; attributes: T@"SCLogger",R,C,N,V_logger
// Property: graphene; attributes: T@"SCGrapheneBlizzardMetric2",R,C,N,V_graphene
// Property: spectrumEvents; attributes: T@"NSMutableArray",R,N,V_spectrumEvents
// Property: spectrumRegionalizedEvents; attributes: T@"NSMutableDictionary",R,N,V_spectrumRegionalizedEvents
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNoDepSpectrumImpl init]
// Type encoding: @16@0:8
// Implementation: 0x100263310

// -[SCNoDepSpectrumImpl setGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x100281aa0

// -[SCNoDepSpectrumImpl setLoggerAndSendQueuedEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x100281ae0

// -[SCNoDepSpectrumImpl _drainSpectrumEventsQueue]
// Type encoding: v16@0:8
// Implementation: 0x100281c40

// -[SCNoDepSpectrumImpl streamEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002c4ba0

// -[SCNoDepSpectrumImpl _streamEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002c4c00

// -[SCNoDepSpectrumImpl streamEvent:region:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ad1e38

// -[SCNoDepSpectrumImpl _streamEvent:region:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ad1f9c

// -[SCNoDepSpectrumImpl logger]
// Type encoding: @16@0:8
// Implementation: 0x106ad2140

// -[SCNoDepSpectrumImpl graphene]
// Type encoding: @16@0:8
// Implementation: 0x1002c4d80

// -[SCNoDepSpectrumImpl spectrumEvents]
// Type encoding: @16@0:8
// Implementation: 0x106ad2148

// -[SCNoDepSpectrumImpl spectrumRegionalizedEvents]
// Type encoding: @16@0:8
// Implementation: 0x106ad2150

// -[SCNoDepSpectrumImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad2158

@end
