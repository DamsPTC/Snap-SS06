// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlayerStateObserver
// Superclass: NSObject
// Address: 0x112be53d8

@interface SCPlayerStateObserver

// Property: sc_status; attributes: Tq,R,N
// Property: sc_timeControlStatus; attributes: Tq,R,N
// Property: sc_rate; attributes: Tf,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: sc_statusObservable; attributes: T@"SCObservable",R,N
// Property: sc_timeControlStatusObservable; attributes: T@"SCObservable",R,N
// Property: sc_rateObservable; attributes: T@"SCObservable",R,N

// -[SCPlayerStateObserver initWithPlayer:]
// Type encoding: @24@0:8@16
// Implementation: 0x10908f5e8

// -[SCPlayerStateObserver detach]
// Type encoding: v16@0:8
// Implementation: 0x10908f770

// -[SCPlayerStateObserver sc_status]
// Type encoding: q16@0:8
// Implementation: 0x10908f778

// -[SCPlayerStateObserver sc_timeControlStatus]
// Type encoding: q16@0:8
// Implementation: 0x10908f7f4

// -[SCPlayerStateObserver sc_rate]
// Type encoding: f16@0:8
// Implementation: 0x10908f870

// -[SCPlayerStateObserver sc_statusObservable]
// Type encoding: @16@0:8
// Implementation: 0x10908f8ec

// -[SCPlayerStateObserver sc_timeControlStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x10908f914

// -[SCPlayerStateObserver sc_rateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10908f93c

// -[SCPlayerStateObserver _registerKVOForPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10908f964

// -[SCPlayerStateObserver _observePlayerStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x10908f9b4

// -[SCPlayerStateObserver _observeTimeControlStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x10908fcf0

// -[SCPlayerStateObserver _observeRate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10909002c

// -[SCPlayerStateObserver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109090368

@end
