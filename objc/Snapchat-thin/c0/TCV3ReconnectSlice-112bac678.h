// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: TCV3ReconnectSlice
// Superclass: NSObject
// Address: 0x112bac678

@interface TCV3ReconnectSlice

// Property: startTimeMs; attributes: Tq,R,N,V_startTimeMs
// Property: durationMs; attributes: Ti,R,N,V_durationMs
// Property: resolveRequestsSent; attributes: Ti,R,N,V_resolveRequestsSent
// Property: cachedResolverResults; attributes: Ti,R,N,V_cachedResolverResults
// Property: quicConnectionAttempts; attributes: Ti,R,N,V_quicConnectionAttempts
// Property: numReachabilityChanges; attributes: Ti,R,N,V_numReachabilityChanges

// -[TCV3ReconnectSlice initWithStartTimeMs:durationMs:resolveRequestsSent:cachedResolverResults:quicConnectionAttempts:numReachabilityChanges:]
// Type encoding: @44@0:8q16i24i28i32i36i40
// Implementation: 0x1089375cc

// -[TCV3ReconnectSlice startTimeMs]
// Type encoding: q16@0:8
// Implementation: 0x10893767c

// -[TCV3ReconnectSlice durationMs]
// Type encoding: i16@0:8
// Implementation: 0x108937684

// -[TCV3ReconnectSlice resolveRequestsSent]
// Type encoding: i16@0:8
// Implementation: 0x10893768c

// -[TCV3ReconnectSlice cachedResolverResults]
// Type encoding: i16@0:8
// Implementation: 0x108937694

// -[TCV3ReconnectSlice quicConnectionAttempts]
// Type encoding: i16@0:8
// Implementation: 0x10893769c

// -[TCV3ReconnectSlice numReachabilityChanges]
// Type encoding: i16@0:8
// Implementation: 0x1089376a4

// +[TCV3ReconnectSlice ReconnectSliceWithStartTimeMs:durationMs:resolveRequestsSent:cachedResolverResults:quicConnectionAttempts:numReachabilityChanges:]
// Type encoding: @44@0:8q16i24i28i32i36i40
// Implementation: 0x108937630

@end
