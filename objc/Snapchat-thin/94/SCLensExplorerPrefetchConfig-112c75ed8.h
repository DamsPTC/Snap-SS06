// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerPrefetchConfig
// Superclass: NSObject
// Address: 0x112c75ed8

@interface SCLensExplorerPrefetchConfig

// Property: prefetchArchive; attributes: TB,R,N,V_prefetchArchive
// Property: prefetchMode; attributes: TQ,R,N,V_prefetchMode
// Property: lensesCount; attributes: TQ,R,N,V_lensesCount
// Property: lastUserActivityPeriod; attributes: TQ,R,N,V_lastUserActivityPeriod
// Property: backgroundPrefetchConfig; attributes: T@"BackgroundPrefetchConfig",R,C,N,V_backgroundPrefetchConfig
// Property: feedIds; attributes: T@"NSArray",R,C,N,V_feedIds
// Property: prefetchLensAnimationsCount; attributes: TQ,R,N,V_prefetchLensAnimationsCount
// Property: containerPrefetchLensesCount; attributes: TQ,R,N,V_containerPrefetchLensesCount

// -[SCLensExplorerPrefetchConfig initWithPrefetchArchive:prefetchMode:lensesCount:lastUserActivityPeriod:backgroundPrefetchConfig:feedIds:prefetchLensAnimationsCount:containerPrefetchLensesCount:]
// Type encoding: @76@0:8B16Q20Q28Q36@44@52Q60Q68
// Implementation: 0x10b5db66c

// -[SCLensExplorerPrefetchConfig copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b5db754

// -[SCLensExplorerPrefetchConfig hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b5db778

// -[SCLensExplorerPrefetchConfig isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b5db808

// -[SCLensExplorerPrefetchConfig prefetchArchive]
// Type encoding: B16@0:8
// Implementation: 0x10b5db910

// -[SCLensExplorerPrefetchConfig prefetchMode]
// Type encoding: Q16@0:8
// Implementation: 0x10b5db918

// -[SCLensExplorerPrefetchConfig lensesCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b5db920

// -[SCLensExplorerPrefetchConfig lastUserActivityPeriod]
// Type encoding: Q16@0:8
// Implementation: 0x10b5db928

// -[SCLensExplorerPrefetchConfig backgroundPrefetchConfig]
// Type encoding: @16@0:8
// Implementation: 0x10b5db930

// -[SCLensExplorerPrefetchConfig feedIds]
// Type encoding: @16@0:8
// Implementation: 0x10b5db938

// -[SCLensExplorerPrefetchConfig prefetchLensAnimationsCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b5db940

// -[SCLensExplorerPrefetchConfig containerPrefetchLensesCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b5db948

// -[SCLensExplorerPrefetchConfig .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b5db950

// +[SCLensExplorerPrefetchConfig configFromProto:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a8cbe0

// +[SCLensExplorerPrefetchConfig defaultConfig]
// Type encoding: @16@0:8
// Implementation: 0x107a8cd08

// +[SCLensExplorerPrefetchConfig tweaksConfig]
// Type encoding: @16@0:8
// Implementation: 0x107a8cd80

// +[SCLensExplorerPrefetchConfig _prefetchModeFromProto:]
// Type encoding: Q20@0:8i16
// Implementation: 0x107a8ce44

// +[SCLensExplorerPrefetchConfig _prefetchModeFromTweaks]
// Type encoding: Q16@0:8
// Implementation: 0x107a8ce54

@end
