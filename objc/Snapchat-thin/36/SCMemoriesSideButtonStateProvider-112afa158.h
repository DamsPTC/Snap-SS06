// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSideButtonStateProvider
// Superclass: NSObject
// Address: 0x112afa158

@interface SCMemoriesSideButtonStateProvider

// Property: userSession; attributes: T@"SCUserSession",&,N,V_userSession
// Property: currentSpectaclesState; attributes: Tq,N,V_currentSpectaclesState
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: showBadgeObservable; attributes: T@"SCObservable",R,N,V_showBadgeObservable
// Property: tooltipTextObservable; attributes: T@"SCObservable",R,N,V_tooltipTextObservable
// Property: memoriesSideButtonSpectaclesStateObservable; attributes: T@"SCObservable",R,N,V_memoriesSideButtonSpectaclesStateObservable

// -[SCMemoriesSideButtonStateProvider initWithUserSession:navigationLogger:featureSettingsService:spectaclesAppStatusProvider:userTrackedLogger:legacySpectaclesTooltipsService:memoriesMergedDataSource:memoriesHighlightDataSource:circumstanceEngine:dreamsServices:memoriesSnapFeedManager:systemScopedExtensionStorageServices:memoriesExperimentService:memoriesUserDefaultsManager:badgeRanker:registrationInfoProvider:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x100b67be4

// -[SCMemoriesSideButtonStateProvider observeSpectaclesAppStatusChanges]
// Type encoding: v16@0:8
// Implementation: 0x106791574

// -[SCMemoriesSideButtonStateProvider setupObservableIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1067915b0

// -[SCMemoriesSideButtonStateProvider observeNextAvailableSnapFeedItem]
// Type encoding: @16@0:8
// Implementation: 0x100b6a274

// -[SCMemoriesSideButtonStateProvider snapFeedAppearingObservable]
// Type encoding: @16@0:8
// Implementation: 0x100b6e164

// -[SCMemoriesSideButtonStateProvider updateMemoriesEntriesWithMemoriesVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x10679172c

// -[SCMemoriesSideButtonStateProvider _hasSnapchatRecapEntryInEntries:]
// Type encoding: B24@0:8@16
// Implementation: 0x106791738

// -[SCMemoriesSideButtonStateProvider _shouldShowBadgeForPendingNotification]
// Type encoding: B16@0:8
// Implementation: 0x106791848

// -[SCMemoriesSideButtonStateProvider _setFeaturedEntriesSeen]
// Type encoding: v16@0:8
// Implementation: 0x1067918cc

// -[SCMemoriesSideButtonStateProvider _updateFeaturedBadge]
// Type encoding: v16@0:8
// Implementation: 0x106791a10

// -[SCMemoriesSideButtonStateProvider _determineBadgeType:hasPendingNotification:]
// Type encoding: @24@0:8B16B20
// Implementation: 0x106791d58

// -[SCMemoriesSideButtonStateProvider _logBadgeEvent:hasSnapchatRecapEntry:hasPendingNotification:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x106791d84

// -[SCMemoriesSideButtonStateProvider _hasSavedSnapsInEntries:]
// Type encoding: B24@0:8@16
// Implementation: 0x106791f48

// -[SCMemoriesSideButtonStateProvider _setUpBadgeObservable]
// Type encoding: v16@0:8
// Implementation: 0x100b68280

// -[SCMemoriesSideButtonStateProvider _spectaclesStatusDidUpdateForDevice:forceUpdate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106792294

// -[SCMemoriesSideButtonStateProvider _memoriesStateForSpectaclesState:]
// Type encoding: Q24@0:8q16
// Implementation: 0x10679241c

// -[SCMemoriesSideButtonStateProvider checkDreamsBadge]
// Type encoding: v16@0:8
// Implementation: 0x106792490

// -[SCMemoriesSideButtonStateProvider _observeFeaturedEntryDataModels]
// Type encoding: v16@0:8
// Implementation: 0x106792650

// -[SCMemoriesSideButtonStateProvider yearEndRecapIsAvailable]
// Type encoding: @16@0:8
// Implementation: 0x1067927c0

// -[SCMemoriesSideButtonStateProvider _updateYearEndRecapAvailabilityWithDataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067927e8

// -[SCMemoriesSideButtonStateProvider dismissYearEndRecapBadge]
// Type encoding: v16@0:8
// Implementation: 0x106792e40

// -[SCMemoriesSideButtonStateProvider statusCoordinatorBluetoothTurnedOn:]
// Type encoding: v24@0:8@16
// Implementation: 0x106792ec4

// -[SCMemoriesSideButtonStateProvider statusCoordinatorBluetoothTurnedOff:]
// Type encoding: v24@0:8@16
// Implementation: 0x106792f0c

// -[SCMemoriesSideButtonStateProvider statusCoordinatorNumberOfDevicesUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x106792f54

// -[SCMemoriesSideButtonStateProvider statusCoordinator:needsToUpdateStateForDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106792f9c

// -[SCMemoriesSideButtonStateProvider statusCoordinator:updateMemoriesSideButtonTooltipVisibility:tooltipText:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106792fa8

// -[SCMemoriesSideButtonStateProvider dataSource:didChangeEntries:failedEntries:fetchEntryError:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106792fc0

// -[SCMemoriesSideButtonStateProvider showBadgeObservable]
// Type encoding: @16@0:8
// Implementation: 0x106793234

// -[SCMemoriesSideButtonStateProvider tooltipTextObservable]
// Type encoding: @16@0:8
// Implementation: 0x10679323c

// -[SCMemoriesSideButtonStateProvider memoriesSideButtonSpectaclesStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x106793244

// -[SCMemoriesSideButtonStateProvider userSession]
// Type encoding: @16@0:8
// Implementation: 0x10679324c

// -[SCMemoriesSideButtonStateProvider setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x106793254

// -[SCMemoriesSideButtonStateProvider currentSpectaclesState]
// Type encoding: q16@0:8
// Implementation: 0x106793284

// -[SCMemoriesSideButtonStateProvider setCurrentSpectaclesState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10679328c

// -[SCMemoriesSideButtonStateProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106793294

@end
