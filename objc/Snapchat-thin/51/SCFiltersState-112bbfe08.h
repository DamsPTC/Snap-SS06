// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFiltersState
// Superclass: NSObject
// Address: 0x112bbfe08

@interface SCFiltersState

// Property: contextFilterSelectedId; attributes: T@"NSString",C,N,V_contextFilterSelectedId
// Property: visualFilters; attributes: T@"NSArray",C,N,V_visualFilters
// Property: visualFilterSelected; attributes: TQ,N,V_visualFilterSelected
// Property: lensCommand; attributes: T@"<SCImageProcessCommand>",&,N,V_lensCommand
// Property: defaultLensCommand; attributes: T@"<SCImageProcessCommand>",&,N,V_defaultLensCommand
// Property: currentLensCommand; attributes: T@"<SCImageProcessCommand>",R,N
// Property: smartFilters; attributes: T@"NSArray",C,N,V_smartFilters
// Property: smartFilterSelected; attributes: TQ,N,V_smartFilterSelected
// Property: geoFilters; attributes: T@"NSArray",C,N,V_geoFilters
// Property: geoFiltersSelected; attributes: T@"NSArray",C,N,V_geoFiltersSelected
// Property: toolFilterIds; attributes: T@"NSArray",C,N,V_toolFilterIds
// Property: speedMotionFilters; attributes: T@"NSArray",C,N,V_speedMotionFilters
// Property: speedMotionFilterSelected; attributes: TQ,N,V_speedMotionFilterSelected
// Property: venueFilterSelector; attributes: T@"SCVenueFilterSelector",C,N,V_venueFilterSelector
// Property: isVenueFilterSelected; attributes: TB,N,V_isVenueFilterSelected
// Property: reverseMotionFilterEnabled; attributes: TB,N,V_reverseMotionFilterEnabled
// Property: reverseMotionFilterSelected; attributes: TB,N,V_reverseMotionFilterSelected
// Property: streakCount; attributes: Tq,N,V_streakCount
// Property: streakFilterSelected; attributes: TB,N,V_streakFilterSelected
// Property: contextData; attributes: T@"SCPreviewFilterDataProviderContextData",&,N,V_contextData
// Property: anyFilterApplied; attributes: TB,R,N
// Property: ucoFilterIDs; attributes: T@"NSArray",R,N
// Property: isUncroppableGeoFilterSelected; attributes: TB,R,N
// Property: nonUcoFilterIDs; attributes: T@"NSArray",R,N

// -[SCFiltersState init]
// Type encoding: @16@0:8
// Implementation: 0x108d095d0

// -[SCFiltersState currentLensCommand]
// Type encoding: @16@0:8
// Implementation: 0x108d0963c

// -[SCFiltersState anyFilterApplied]
// Type encoding: B16@0:8
// Implementation: 0x108d0969c

// -[SCFiltersState ucoFilterIDs]
// Type encoding: @16@0:8
// Implementation: 0x108d09798

// -[SCFiltersState isUncroppableGeoFilterSelected]
// Type encoding: B16@0:8
// Implementation: 0x108d09870

// -[SCFiltersState nonUcoFilterIDs]
// Type encoding: @16@0:8
// Implementation: 0x108d098b0

// -[SCFiltersState isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d0994c

// -[SCFiltersState hash]
// Type encoding: Q16@0:8
// Implementation: 0x108d09b28

// -[SCFiltersState copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108d09c48

// -[SCFiltersState contextFilterSelectedId]
// Type encoding: @16@0:8
// Implementation: 0x108d09d58

// -[SCFiltersState setContextFilterSelectedId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09d60

// -[SCFiltersState visualFilters]
// Type encoding: @16@0:8
// Implementation: 0x108d09d68

// -[SCFiltersState setVisualFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09d70

// -[SCFiltersState visualFilterSelected]
// Type encoding: Q16@0:8
// Implementation: 0x108d09d78

// -[SCFiltersState setVisualFilterSelected:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108d09d80

// -[SCFiltersState lensCommand]
// Type encoding: @16@0:8
// Implementation: 0x108d09d88

// -[SCFiltersState setLensCommand:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09d90

// -[SCFiltersState defaultLensCommand]
// Type encoding: @16@0:8
// Implementation: 0x108d09dc0

// -[SCFiltersState setDefaultLensCommand:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09dc8

// -[SCFiltersState smartFilters]
// Type encoding: @16@0:8
// Implementation: 0x108d09df8

// -[SCFiltersState setSmartFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09e00

// -[SCFiltersState smartFilterSelected]
// Type encoding: Q16@0:8
// Implementation: 0x108d09e08

// -[SCFiltersState setSmartFilterSelected:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108d09e10

// -[SCFiltersState geoFilters]
// Type encoding: @16@0:8
// Implementation: 0x108d09e18

// -[SCFiltersState setGeoFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09e20

// -[SCFiltersState geoFiltersSelected]
// Type encoding: @16@0:8
// Implementation: 0x108d09e28

// -[SCFiltersState setGeoFiltersSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09e30

// -[SCFiltersState toolFilterIds]
// Type encoding: @16@0:8
// Implementation: 0x108d09e38

// -[SCFiltersState setToolFilterIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09e40

// -[SCFiltersState speedMotionFilters]
// Type encoding: @16@0:8
// Implementation: 0x108d09e48

// -[SCFiltersState setSpeedMotionFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09e50

// -[SCFiltersState speedMotionFilterSelected]
// Type encoding: Q16@0:8
// Implementation: 0x108d09e58

// -[SCFiltersState setSpeedMotionFilterSelected:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108d09e60

// -[SCFiltersState venueFilterSelector]
// Type encoding: @16@0:8
// Implementation: 0x108d09e68

// -[SCFiltersState setVenueFilterSelector:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09e70

// -[SCFiltersState isVenueFilterSelected]
// Type encoding: B16@0:8
// Implementation: 0x108d09e78

// -[SCFiltersState setIsVenueFilterSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d09e80

// -[SCFiltersState reverseMotionFilterEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108d09e88

// -[SCFiltersState setReverseMotionFilterEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d09e90

// -[SCFiltersState reverseMotionFilterSelected]
// Type encoding: B16@0:8
// Implementation: 0x108d09e98

// -[SCFiltersState setReverseMotionFilterSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d09ea0

// -[SCFiltersState streakCount]
// Type encoding: q16@0:8
// Implementation: 0x108d09ea8

// -[SCFiltersState setStreakCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x108d09eb0

// -[SCFiltersState streakFilterSelected]
// Type encoding: B16@0:8
// Implementation: 0x108d09eb8

// -[SCFiltersState setStreakFilterSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d09ec0

// -[SCFiltersState contextData]
// Type encoding: @16@0:8
// Implementation: 0x108d09ec8

// -[SCFiltersState setContextData:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09ed0

// -[SCFiltersState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d09f00

@end
