// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGeoFilterLoadingMetaData
// Superclass: NSObject
// Address: 0x112be8718

@interface SCGeoFilterLoadingMetaData

// Property: isSponsored; attributes: TB,R,N,V_isSponsored
// Property: fenceArea; attributes: Td,R,N,V_fenceArea
// Property: downloadLatencySeconds; attributes: Td,N,V_downloadLatencySeconds
// Property: targetingType; attributes: TQ,R,N,V_targetingType
// Property: numDynamicItems; attributes: Tq,N,V_numDynamicItems
// Property: lastUpdateDate; attributes: T@"NSDate",R,N,V_lastUpdateDate
// Property: cacheTTLMinutes; attributes: Tq,R,N,V_cacheTTLMinutes
// Property: dynamicContextSources; attributes: T@"NSString",C,N,V_dynamicContextSources
// Property: geofilterMissLoggingType; attributes: T@"NSString",R,C,N,V_geofilterMissLoggingType
// Property: compositeTimeSeconds; attributes: Td,N,V_compositeTimeSeconds
// Property: isCacheHit; attributes: TB,N,V_isCacheHit
// Property: carouselGroup; attributes: T@"SOJUUnlockablesCarouselGroup",C,N,V_carouselGroup
// Property: filterId; attributes: T@"NSString",R,C,N,V_filterId
// Property: loadingStage; attributes: Tq,R,N,V_loadingStage
// Property: isPrecached; attributes: TB,R,N,V_isPrecached
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGeoFilterLoadingMetaData initWithFilterId:isSponsored:targetingType:fenceArea:cacheTTLMinutes:isPrecached:geofilterMissLoggingType:]
// Type encoding: @64@0:8@16B24Q28d36q44B52@56
// Implementation: 0x109140620

// -[SCGeoFilterLoadingMetaData initWithFilterId:isSponsored:targetingType:fenceArea:isPrecached:geofilterMissLoggingType:]
// Type encoding: @56@0:8@16B24Q28d36B44@48
// Implementation: 0x109140778

// -[SCGeoFilterLoadingMetaData initWithFilterId:isSponsored:targetingType:fenceArea:cacheTTLMinutes:geofilterMissLoggingType:]
// Type encoding: @60@0:8@16B24Q28d36q44@52
// Implementation: 0x109140788

// -[SCGeoFilterLoadingMetaData initWithFilterId:isSponsored:targetingType:fenceArea:geofilterMissLoggingType:]
// Type encoding: @52@0:8@16B24Q28d36@44
// Implementation: 0x109140794

// -[SCGeoFilterLoadingMetaData getLogParametersWithReferenceTime:]
// Type encoding: @24@0:8d16
// Implementation: 0x1091407a0

// -[SCGeoFilterLoadingMetaData updateWithStage:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091409e4

// -[SCGeoFilterLoadingMetaData updateIfNotSetWithStage:]
// Type encoding: B24@0:8q16
// Implementation: 0x109140a64

// -[SCGeoFilterLoadingMetaData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x109140ad8

// -[SCGeoFilterLoadingMetaData filterId]
// Type encoding: @16@0:8
// Implementation: 0x109140ca8

// -[SCGeoFilterLoadingMetaData loadingStage]
// Type encoding: q16@0:8
// Implementation: 0x109140cb0

// -[SCGeoFilterLoadingMetaData isPrecached]
// Type encoding: B16@0:8
// Implementation: 0x109140cb8

// -[SCGeoFilterLoadingMetaData isSponsored]
// Type encoding: B16@0:8
// Implementation: 0x109140cc0

// -[SCGeoFilterLoadingMetaData fenceArea]
// Type encoding: d16@0:8
// Implementation: 0x109140cc8

// -[SCGeoFilterLoadingMetaData downloadLatencySeconds]
// Type encoding: d16@0:8
// Implementation: 0x109140cd0

// -[SCGeoFilterLoadingMetaData setDownloadLatencySeconds:]
// Type encoding: v24@0:8d16
// Implementation: 0x109140cd8

// -[SCGeoFilterLoadingMetaData targetingType]
// Type encoding: Q16@0:8
// Implementation: 0x109140ce0

// -[SCGeoFilterLoadingMetaData numDynamicItems]
// Type encoding: q16@0:8
// Implementation: 0x109140ce8

// -[SCGeoFilterLoadingMetaData setNumDynamicItems:]
// Type encoding: v24@0:8q16
// Implementation: 0x109140cf0

// -[SCGeoFilterLoadingMetaData lastUpdateDate]
// Type encoding: @16@0:8
// Implementation: 0x109140cf8

// -[SCGeoFilterLoadingMetaData cacheTTLMinutes]
// Type encoding: q16@0:8
// Implementation: 0x109140d00

// -[SCGeoFilterLoadingMetaData dynamicContextSources]
// Type encoding: @16@0:8
// Implementation: 0x109140d08

// -[SCGeoFilterLoadingMetaData setDynamicContextSources:]
// Type encoding: v24@0:8@16
// Implementation: 0x109140d10

// -[SCGeoFilterLoadingMetaData geofilterMissLoggingType]
// Type encoding: @16@0:8
// Implementation: 0x109140d18

// -[SCGeoFilterLoadingMetaData compositeTimeSeconds]
// Type encoding: d16@0:8
// Implementation: 0x109140d20

// -[SCGeoFilterLoadingMetaData setCompositeTimeSeconds:]
// Type encoding: v24@0:8d16
// Implementation: 0x109140d28

// -[SCGeoFilterLoadingMetaData isCacheHit]
// Type encoding: B16@0:8
// Implementation: 0x109140d30

// -[SCGeoFilterLoadingMetaData setIsCacheHit:]
// Type encoding: v20@0:8B16
// Implementation: 0x109140d38

// -[SCGeoFilterLoadingMetaData carouselGroup]
// Type encoding: @16@0:8
// Implementation: 0x109140d40

// -[SCGeoFilterLoadingMetaData setCarouselGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x109140d48

// -[SCGeoFilterLoadingMetaData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109140d50

// +[SCGeoFilterLoadingMetaData loadingStageToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x109140a98

// +[SCGeoFilterLoadingMetaData loadStageToLoggingKey:]
// Type encoding: @24@0:8q16
// Implementation: 0x109140ab8

@end
