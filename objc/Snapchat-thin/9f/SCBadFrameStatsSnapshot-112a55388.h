// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBadFrameStatsSnapshot
// Superclass: NSObject
// Address: 0x112a55388

@interface SCBadFrameStatsSnapshot

// Property: badFrameBuckets; attributes: T@"NSArray",R,C,N,V_badFrameBuckets
// Property: badFrameDurationMs; attributes: Td,R,N,V_badFrameDurationMs
// Property: hangFrameDurationMs; attributes: Td,R,N,V_hangFrameDurationMs
// Property: eventTime; attributes: Td,R,N,V_eventTime
// Property: totalFrameCount; attributes: Tq,R,N,V_totalFrameCount
// Property: totalBadFrameCount; attributes: Tq,R,N,V_totalBadFrameCount
// Property: totalHangsCount; attributes: Tq,R,N,V_totalHangsCount
// Property: mainThreadCpuTimeMs; attributes: Td,R,N,V_mainThreadCpuTimeMs

// -[SCBadFrameStatsSnapshot initWithBadFrameBuckets:badFrameDurationMs:hangFrameDurationMs:eventTime:totalFrameCount:totalBadFrameCount:totalHangsCount:mainThreadCpuTimeMs:]
// Type encoding: @80@0:8@16d24d32d40q48q56q64d72
// Implementation: 0x10569233c

// -[SCBadFrameStatsSnapshot copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x105692404

// -[SCBadFrameStatsSnapshot hash]
// Type encoding: Q16@0:8
// Implementation: 0x105692428

// -[SCBadFrameStatsSnapshot isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10569252c

// -[SCBadFrameStatsSnapshot badFrameBuckets]
// Type encoding: @16@0:8
// Implementation: 0x1056926bc

// -[SCBadFrameStatsSnapshot badFrameDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x1056926c4

// -[SCBadFrameStatsSnapshot hangFrameDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x1056926cc

// -[SCBadFrameStatsSnapshot eventTime]
// Type encoding: d16@0:8
// Implementation: 0x1056926d4

// -[SCBadFrameStatsSnapshot totalFrameCount]
// Type encoding: q16@0:8
// Implementation: 0x1056926dc

// -[SCBadFrameStatsSnapshot totalBadFrameCount]
// Type encoding: q16@0:8
// Implementation: 0x1056926e4

// -[SCBadFrameStatsSnapshot totalHangsCount]
// Type encoding: q16@0:8
// Implementation: 0x1056926ec

// -[SCBadFrameStatsSnapshot mainThreadCpuTimeMs]
// Type encoding: d16@0:8
// Implementation: 0x1056926f4

// -[SCBadFrameStatsSnapshot .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056926fc

@end
