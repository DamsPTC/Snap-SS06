// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceDiscoverySessionIdsProvider
// Superclass: NSObject
// Address: 0x112a06a08

@interface SCMapPlaceDiscoverySessionIdsProvider

// Property: sessionIds; attributes: T@"SCPlacesVisualTraySessionIds",R,N,V_sessionIds
// Property: isTrayActive; attributes: TB,N,V_isTrayActive
// Property: blizzardLogger; attributes: T@"<SCCBlizzardLogging>",&,N,V_blizzardLogger
// Property: onMetricDataEvent; attributes: T@"SCBridgeObservable",?,&,N
// Property: onEnterSearchSubject; attributes: T@"SCBridgeSubject",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlaceDiscoverySessionIdsProvider initWithMapSession:blizzardLogger:openSource:sourceSessionId:parentTraySessionId:footerActionId:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104edad40

// -[SCMapPlaceDiscoverySessionIdsProvider updateVisualTrayNetworkSessionIdWithSessionId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104edaf68

// -[SCMapPlaceDiscoverySessionIdsProvider updateVisualTrayViewportSessionIdWithSessionId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104edafdc

// -[SCMapPlaceDiscoverySessionIdsProvider onMapVisualTrayActionTapPlacePoiForPlaceID:placePivotNames:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104edb044

// -[SCMapPlaceDiscoverySessionIdsProvider onMapVisualTrayOpen]
// Type encoding: v16@0:8
// Implementation: 0x104edb154

// -[SCMapPlaceDiscoverySessionIdsProvider onMapVisualTrayClose:]
// Type encoding: v24@0:8q16
// Implementation: 0x104edb214

// -[SCMapPlaceDiscoverySessionIdsProvider onMapVisualTrayLoaded]
// Type encoding: v16@0:8
// Implementation: 0x104edb304

// -[SCMapPlaceDiscoverySessionIdsProvider onMapVisualTrayStoriesLoadedWithEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104edb348

// -[SCMapPlaceDiscoverySessionIdsProvider blizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x104edb358

// -[SCMapPlaceDiscoverySessionIdsProvider getSessionIdsHolderObservable]
// Type encoding: @16@0:8
// Implementation: 0x104edb380

// -[SCMapPlaceDiscoverySessionIdsProvider onEnterSearchSubject]
// Type encoding: @16@0:8
// Implementation: 0x104edb388

// -[SCMapPlaceDiscoverySessionIdsProvider onMetricDataEvent]
// Type encoding: @16@0:8
// Implementation: 0x104edb390

// -[SCMapPlaceDiscoverySessionIdsProvider shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x104edb398

// -[SCMapPlaceDiscoverySessionIdsProvider pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x104edb3a0

// -[SCMapPlaceDiscoverySessionIdsProvider _createSessionIdsHolderWithParentTraySessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x104edb3ac

// -[SCMapPlaceDiscoverySessionIdsProvider _setupMapViewportSessionIdObservable]
// Type encoding: v16@0:8
// Implementation: 0x104edb480

// -[SCMapPlaceDiscoverySessionIdsProvider _updateMapViewportSessionIdWithSessionId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104edb5e0

// -[SCMapPlaceDiscoverySessionIdsProvider _setupOnEnterSearchObserver]
// Type encoding: v16@0:8
// Implementation: 0x104edb648

// -[SCMapPlaceDiscoverySessionIdsProvider sessionIds]
// Type encoding: @16@0:8
// Implementation: 0x104edb75c

// -[SCMapPlaceDiscoverySessionIdsProvider setBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x104edb764

// -[SCMapPlaceDiscoverySessionIdsProvider isTrayActive]
// Type encoding: B16@0:8
// Implementation: 0x104edb794

// -[SCMapPlaceDiscoverySessionIdsProvider setIsTrayActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x104edb79c

// -[SCMapPlaceDiscoverySessionIdsProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104edb7a4

@end
