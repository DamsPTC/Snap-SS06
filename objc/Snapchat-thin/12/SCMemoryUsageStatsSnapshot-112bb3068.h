// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoryUsageStatsSnapshot
// Superclass: NSObject
// Address: 0x112bb3068

@interface SCMemoryUsageStatsSnapshot

// Property: memoryUsageXcodeInBytes; attributes: Tq,R,N,V_memoryUsageXcodeInBytes
// Property: memoryUsageInstrumentsInBytes; attributes: Tq,R,N,V_memoryUsageInstrumentsInBytes
// Property: memoryUsageMallocatedInBytes; attributes: Tq,R,N,V_memoryUsageMallocatedInBytes
// Property: memoryUsageLegacyUsedInBytes; attributes: Tq,R,N,V_memoryUsageLegacyUsedInBytes
// Property: memoryUsageFreeInBytes; attributes: Tq,R,N,V_memoryUsageFreeInBytes
// Property: availableMemory; attributes: Tq,R,N,V_availableMemory
// Property: allowComposerMemoryUsageUpdate; attributes: TB,R,N,V_allowComposerMemoryUsageUpdate

// -[SCMemoryUsageStatsSnapshot initWithMemoryUsageXcodeInBytes:memoryUsageInstrumentsInBytes:memoryUsageMallocatedInBytes:memoryUsageLegacyUsedInBytes:memoryUsageFreeInBytes:availableMemory:allowComposerMemoryUsageUpdate:]
// Type encoding: @68@0:8q16q24q32q40q48q56B64
// Implementation: 0x108bba52c

// -[SCMemoryUsageStatsSnapshot copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108bba5a8

// -[SCMemoryUsageStatsSnapshot hash]
// Type encoding: Q16@0:8
// Implementation: 0x108bba5cc

// -[SCMemoryUsageStatsSnapshot isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108bba640

// -[SCMemoryUsageStatsSnapshot memoryUsageXcodeInBytes]
// Type encoding: q16@0:8
// Implementation: 0x108bba728

// -[SCMemoryUsageStatsSnapshot memoryUsageInstrumentsInBytes]
// Type encoding: q16@0:8
// Implementation: 0x108bba730

// -[SCMemoryUsageStatsSnapshot memoryUsageMallocatedInBytes]
// Type encoding: q16@0:8
// Implementation: 0x108bba738

// -[SCMemoryUsageStatsSnapshot memoryUsageLegacyUsedInBytes]
// Type encoding: q16@0:8
// Implementation: 0x108bba740

// -[SCMemoryUsageStatsSnapshot memoryUsageFreeInBytes]
// Type encoding: q16@0:8
// Implementation: 0x108bba748

// -[SCMemoryUsageStatsSnapshot availableMemory]
// Type encoding: q16@0:8
// Implementation: 0x108bba750

// -[SCMemoryUsageStatsSnapshot allowComposerMemoryUsageUpdate]
// Type encoding: B16@0:8
// Implementation: 0x108bba758

@end
