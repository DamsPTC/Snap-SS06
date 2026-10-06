// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFiltersLegacyController
// Superclass: NSObject
// Address: 0x112a999e8

@interface SCPreviewFiltersLegacyController

// Property: toolbarItemViewModel; attributes: T@"SCPreviewToolbarItemViewModel",&,N,V_toolbarItemViewModel
// Property: configuration; attributes: T@"SCPreviewConfiguration",R,N,V_configuration
// Property: carousel; attributes: T@"SCLazy",R,N,V_carousel
// Property: features_DEPRECATED; attributes: T@"SCPreviewFeaturesServices",R,N,V_features_DEPRECATED
// Property: previewLogging; attributes: T@"SCLazy",R,N,V_previewLogging
// Property: previewScopeServices; attributes: T@"SCPreviewScopeServices",R,N,V_previewScopeServices
// Property: adReportScopeServices; attributes: T@"_TtC15SCAdReportScope23SCAdReportScopeServices",R,N,V_adReportScopeServices
// Property: previewABProvider; attributes: T@"<SCPreviewABProvider>",R,N,V_previewABProvider
// Property: bundledLensProvider; attributes: T@"SCLazy",R,N,V_bundledLensProvider
// Property: featureSettingsService; attributes: T@"SCLazy",R,N,V_featureSettingsService
// Property: swipeFiltersProvider; attributes: T@"SCLazy",R,N,V_swipeFiltersProvider
// Property: swipeFilters; attributes: T@"<SCSwipeFiltersInternal>",R,N,V_swipeFilters
// Property: smartCarouselFilterArranger; attributes: T@"SCSmartCarouselFilterArranger",R,N,V_smartCarouselFilterArranger
// Property: userTrackedLogger; attributes: T@"SCLazy",R,N,V_userTrackedLogger
// Property: memoriesReverseAudioCache; attributes: T@"SCLazy",R,N,V_memoriesReverseAudioCache
// Property: audioProcessingSessionFactory; attributes: T@"SCLazy",R,N,V_audioProcessingSessionFactory
// Property: previewLatencyLogger; attributes: T@"<SCPreviewLatencyLogging>",R,N,V_previewLatencyLogger
// Property: geoFilterLogger; attributes: T@"<SCPreviewGeoFilterLogging>",R,N,V_geoFilterLogger
// Property: previewTooltipsProvider; attributes: T@"SCLazy",R,N,V_previewTooltipsProvider
// Property: ucoDependencyFactory; attributes: T@"SCLazy",R,N,V_ucoDependencyFactory
// Property: specsRenderingMetadataProvider; attributes: T@"SCLazy",R,N,V_specsRenderingMetadataProvider
// Property: actionInterceptor; attributes: T@"SCLazy",R,N,V_actionInterceptor
// Property: filterStackingUIHelper; attributes: T@"SCPreviewFilterStackingUIHelper",&,N,V_filterStackingUIHelper
// Property: filterStackingUITooltipLabel; attributes: T@"SCPreviewTooltipLabel",&,N,V_filterStackingUITooltipLabel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCPreviewFiltersLegacyControllerDelegate>",W,N,V_delegate
// Property: selectedGeofilter; attributes: T@"SCGeoFilter",R,N
// Property: selectedGeofilters; attributes: T@"NSArray",R,C,N
// Property: anyFilterAvailable; attributes: TB,R,N
// Property: isUncroppableGeoFilterSelected; attributes: TB,R,N
// Property: isAnyUcoSelected; attributes: TB,R,N
// Property: smartAndVisualFilterEnabled; attributes: TB,N
// Property: toolbarItemViewModelObservable; attributes: T@"SCObservable",R,N

// -[SCPreviewFiltersLegacyController initWithConfiguration:previewLogging:swipeFiltersProvider:carousel:deprecatedFeaturesServices:previewScopeServices:adReportScopeServices:previewABProvider:bundledLensProvider:featureSettingsService:smartCarouselFilterArranger:userTrackedLogger:memoriesReverseAudioCache:audioProcessingSessionFactory:previewLatencyLogger:geoFilterLogger:previewTooltipsProvider:ucoDependencyFactory:specsRenderingMetadataProvider:actionInterceptor:]
// Type encoding: @176@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168
// Implementation: 0x105cdc3e0

// -[SCPreviewFiltersLegacyController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105cdc8dc

// -[SCPreviewFiltersLegacyController previewView]
// Type encoding: @16@0:8
// Implementation: 0x105cdc90c

// -[SCPreviewFiltersLegacyController batchCaptureStateHandler]
// Type encoding: @16@0:8
// Implementation: 0x105cdc988

// -[SCPreviewFiltersLegacyController multiSnapStateHandler]
// Type encoding: @16@0:8
// Implementation: 0x105cdca04

// -[SCPreviewFiltersLegacyController timelineSnapStateHandler]
// Type encoding: @16@0:8
// Implementation: 0x105cdca80

// -[SCPreviewFiltersLegacyController infoStickerDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x105cdcae8

// -[SCPreviewFiltersLegacyController previewGallery]
// Type encoding: @16@0:8
// Implementation: 0x105cdcb2c

// -[SCPreviewFiltersLegacyController _swipeFilterView]
// Type encoding: @16@0:8
// Implementation: 0x105cdcb70

// -[SCPreviewFiltersLegacyController prepareFiltersForActivation]
// Type encoding: v16@0:8
// Implementation: 0x105cdcbb4

// -[SCPreviewFiltersLegacyController activateFilters]
// Type encoding: v16@0:8
// Implementation: 0x105cdd438

// -[SCPreviewFiltersLegacyController cleanupFilters]
// Type encoding: v16@0:8
// Implementation: 0x105cdd468

// -[SCPreviewFiltersLegacyController setupFiltersView]
// Type encoding: v16@0:8
// Implementation: 0x105cdd520

// -[SCPreviewFiltersLegacyController _addSmartFilters]
// Type encoding: v16@0:8
// Implementation: 0x105cdd6e4

// -[SCPreviewFiltersLegacyController _addSmartFiltersForTimelineOrDirectorMode]
// Type encoding: v16@0:8
// Implementation: 0x105cdd9a8

// -[SCPreviewFiltersLegacyController _addOrUpdateInfoFilters]
// Type encoding: v16@0:8
// Implementation: 0x105cddb74

// -[SCPreviewFiltersLegacyController _addStreakFilter]
// Type encoding: v16@0:8
// Implementation: 0x105cddc84

// -[SCPreviewFiltersLegacyController _removePromptFilter]
// Type encoding: v16@0:8
// Implementation: 0x105cddeac

// -[SCPreviewFiltersLegacyController addMotionFilters]
// Type encoding: v16@0:8
// Implementation: 0x105cde024

// -[SCPreviewFiltersLegacyController _reverseMotionFilterAvailable]
// Type encoding: B16@0:8
// Implementation: 0x105cde1a8

// -[SCPreviewFiltersLegacyController _addReverseMotionFilterWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105cde364

// -[SCPreviewFiltersLegacyController _generateReverseAudioCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105cde940

// -[SCPreviewFiltersLegacyController removeMotionFilters]
// Type encoding: v16@0:8
// Implementation: 0x105cdeea4

// -[SCPreviewFiltersLegacyController previewFilterDataProviderDidReceiveNewMixerOrderingFromCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cdf250

// -[SCPreviewFiltersLegacyController previewFilterDataProviderDidRemoveFilter:filterType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105cdf288

// -[SCPreviewFiltersLegacyController _addOrUpdateFilters:withAppearanceSettings:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cdf33c

// -[SCPreviewFiltersLegacyController selectInitialFilters]
// Type encoding: v16@0:8
// Implementation: 0x105cdf900

// -[SCPreviewFiltersLegacyController _addGeoOrUCOFilterIdIfApplicable:selectedFilterNames:selectedFilterTypes:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105ce0200

// -[SCPreviewFiltersLegacyController filtersStateWithStripsUnselectedSponsoredFilters]
// Type encoding: @16@0:8
// Implementation: 0x105ce0354

// -[SCPreviewFiltersLegacyController _updateFiltersInSnapDocEditorWithFiltersState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce0ea8

// -[SCPreviewFiltersLegacyController _filtersFromFilterState:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ce10d4

// -[SCPreviewFiltersLegacyController removeFilterStackingUITooltipLabel]
// Type encoding: v16@0:8
// Implementation: 0x105ce1880

// -[SCPreviewFiltersLegacyController updateStackingButtonWithStackedFiltersCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105ce1924

// -[SCPreviewFiltersLegacyController isAnyUcoSelected]
// Type encoding: B16@0:8
// Implementation: 0x105ce1a1c

// -[SCPreviewFiltersLegacyController previewFilterDataProviderInsertPromptFilterInVenueFilterPosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce1a78

// -[SCPreviewFiltersLegacyController previewFilterDataProviderInsertBroadLocationPromptFilterInVenueFilterPosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce1b44

// -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateVenueFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce1c10

// -[SCPreviewFiltersLegacyController previewFilterDataProviderShouldUseVenueFilterInsteadOfLens]
// Type encoding: B16@0:8
// Implementation: 0x105ce1cf8

// -[SCPreviewFiltersLegacyController previewFilterDataProviderCanUseUCO]
// Type encoding: B16@0:8
// Implementation: 0x105ce1dbc

// -[SCPreviewFiltersLegacyController shouldDisableMotionFilters]
// Type encoding: B16@0:8
// Implementation: 0x105ce1f54

// -[SCPreviewFiltersLegacyController previewFilterDataProviderCanUseColorLenses]
// Type encoding: B16@0:8
// Implementation: 0x105ce2124

// -[SCPreviewFiltersLegacyController _enableUCOFiltersForMultiMediaCases]
// Type encoding: B16@0:8
// Implementation: 0x105ce213c

// -[SCPreviewFiltersLegacyController _enableColorLensesForMultiMediaCases]
// Type encoding: B16@0:8
// Implementation: 0x105ce2198

// -[SCPreviewFiltersLegacyController previewFilterDataProviderCanUseReverseMotionFilter:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ce220c

// -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateUnlockable:unlockable:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ce2210

// -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateGeoFilterImages:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2298

// -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateSpeed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2314

// -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateAltitude:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2318

// -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateWeather:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2394

// -[SCPreviewFiltersLegacyController previewFilterDataProviderDidUpdateVenues:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2450

// -[SCPreviewFiltersLegacyController previewFilterDataProviderWillStartUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105ce24e0

// -[SCPreviewFiltersLegacyController previewFilterDataProviderDidCompleteUpdates:succeeded:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105ce2528

// -[SCPreviewFiltersLegacyController previewFilterDataProviderDidCompleteUpdates:isGeoFilterListUpdatedDuringLoading:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105ce2578

// -[SCPreviewFiltersLegacyController cacheCurrentFilterSelection]
// Type encoding: v16@0:8
// Implementation: 0x105ce26d4

// -[SCPreviewFiltersLegacyController restoreFilterSelection]
// Type encoding: v16@0:8
// Implementation: 0x105ce271c

// -[SCPreviewFiltersLegacyController stopPreviewCarouselUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105ce2764

// -[SCPreviewFiltersLegacyController previewFilterStackingUIHelperDidPressStackingButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce27ac

// -[SCPreviewFiltersLegacyController previewFilterStackingUIHelperDidUpdateToolbarPayload:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2a10

// -[SCPreviewFiltersLegacyController smartSwipeFilterViewDidTapSponsoredSlug:filterId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ce2aa0

// -[SCPreviewFiltersLegacyController geoFilterViewNeedsUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2aa8

// -[SCPreviewFiltersLegacyController swipeFilterViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2af8

// -[SCPreviewFiltersLegacyController _udpateStackingToolWithSwipeFilterView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2b58

// -[SCPreviewFiltersLegacyController swipeFilterViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2f04

// -[SCPreviewFiltersLegacyController swipeFilterViewWillEndDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2f34

// -[SCPreviewFiltersLegacyController swipeViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce2f64

// -[SCPreviewFiltersLegacyController swipeViewDidEndExternalSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce3290

// -[SCPreviewFiltersLegacyController venueFilterView:openPlacePickerTrayWithOnVenueTapped:suggestedVenuesFromFilter:venueIDToDistanceStringMap:]
// Type encoding: v48@0:8@16@?24@32@40
// Implementation: 0x105ce3358

// -[SCPreviewFiltersLegacyController swipeViewDidRemoveStackedFilterView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce33e0

// -[SCPreviewFiltersLegacyController swipeViewDidStackFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce3500

// -[SCPreviewFiltersLegacyController swipeFilterView:endedSwipeSessionNumber:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105ce3604

// -[SCPreviewFiltersLegacyController venueFilterViewDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce3668

// -[SCPreviewFiltersLegacyController turnOnFiltersButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x105ce36fc

// -[SCPreviewFiltersLegacyController turnOnPreciseLocationButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x105ce3784

// -[SCPreviewFiltersLegacyController smartAndVisualFilterEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105ce37bc

// -[SCPreviewFiltersLegacyController setSmartAndVisualFilterEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ce3868

// -[SCPreviewFiltersLegacyController anyFilterAvailable]
// Type encoding: B16@0:8
// Implementation: 0x105ce394c

// -[SCPreviewFiltersLegacyController featureSwipeFiltersAddMotionFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce3a08

// -[SCPreviewFiltersLegacyController featureSwipeFiltersShouldIncludePromptFilterView:]
// Type encoding: B24@0:8@16
// Implementation: 0x105ce3a9c

// -[SCPreviewFiltersLegacyController featureSwipeFiltersAddSmartFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce3af0

// -[SCPreviewFiltersLegacyController featureSwipeFiltersAddStreakFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce3af4

// -[SCPreviewFiltersLegacyController featureSwipeFiltersRemovePromptFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce3af8

// -[SCPreviewFiltersLegacyController featureSwipeFiltersDidTurnOnFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce3afc

// -[SCPreviewFiltersLegacyController featureSwipeFiltersDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce3b00

// -[SCPreviewFiltersLegacyController filterStackingUIHelperForFeatureSwipeFilters:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ce3b7c

// -[SCPreviewFiltersLegacyController _enableFilterStackingUIIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105ce3b80

// -[SCPreviewFiltersLegacyController shouldEnableFilterStacking]
// Type encoding: B16@0:8
// Implementation: 0x105ce3f04

// -[SCPreviewFiltersLegacyController _getGeoFilterId]
// Type encoding: @16@0:8
// Implementation: 0x105ce3f0c

// -[SCPreviewFiltersLegacyController isUncroppableGeoFilterSelected]
// Type encoding: B16@0:8
// Implementation: 0x105ce3fc0

// -[SCPreviewFiltersLegacyController selectedGeofilter]
// Type encoding: @16@0:8
// Implementation: 0x105ce4000

// -[SCPreviewFiltersLegacyController _exportableGeoFiltersForSnap]
// Type encoding: @16@0:8
// Implementation: 0x105ce4160

// -[SCPreviewFiltersLegacyController _exportableGeoFiltersForSnapWithGeoFilterIdsSelected:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ce41b0

// -[SCPreviewFiltersLegacyController selectedGeofilters]
// Type encoding: @16@0:8
// Implementation: 0x105ce43ac

// -[SCPreviewFiltersLegacyController _filterDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x105ce4598

// -[SCPreviewFiltersLegacyController _geoFilterIdsSelected]
// Type encoding: @16@0:8
// Implementation: 0x105ce4604

// -[SCPreviewFiltersLegacyController _showAdReportWithFilterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce4694

// -[SCPreviewFiltersLegacyController _adReportEventTrackerWithUnlockableId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ce4900

// -[SCPreviewFiltersLegacyController _logFilterTooltipShownWithOneAttempt]
// Type encoding: v16@0:8
// Implementation: 0x105ce49d4

// -[SCPreviewFiltersLegacyController _logFilterTooltipCompleteWithOneAttempt]
// Type encoding: v16@0:8
// Implementation: 0x105ce4a50

// -[SCPreviewFiltersLegacyController _syntheticVenueFilterSelector]
// Type encoding: @16@0:8
// Implementation: 0x105ce4acc

// -[SCPreviewFiltersLegacyController setToolbarItemViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce4c58

// -[SCPreviewFiltersLegacyController toolbarItemViewModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105ce4cf8

// -[SCPreviewFiltersLegacyController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce4d20

// -[SCPreviewFiltersLegacyController toolbarItemViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d2c

// -[SCPreviewFiltersLegacyController configuration]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d34

// -[SCPreviewFiltersLegacyController carousel]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d3c

// -[SCPreviewFiltersLegacyController features_DEPRECATED]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d44

// -[SCPreviewFiltersLegacyController previewLogging]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d4c

// -[SCPreviewFiltersLegacyController previewScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d54

// -[SCPreviewFiltersLegacyController adReportScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d5c

// -[SCPreviewFiltersLegacyController previewABProvider]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d64

// -[SCPreviewFiltersLegacyController bundledLensProvider]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d6c

// -[SCPreviewFiltersLegacyController featureSettingsService]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d74

// -[SCPreviewFiltersLegacyController swipeFiltersProvider]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d7c

// -[SCPreviewFiltersLegacyController swipeFilters]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d84

// -[SCPreviewFiltersLegacyController smartCarouselFilterArranger]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d8c

// -[SCPreviewFiltersLegacyController userTrackedLogger]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d94

// -[SCPreviewFiltersLegacyController memoriesReverseAudioCache]
// Type encoding: @16@0:8
// Implementation: 0x105ce4d9c

// -[SCPreviewFiltersLegacyController audioProcessingSessionFactory]
// Type encoding: @16@0:8
// Implementation: 0x105ce4da4

// -[SCPreviewFiltersLegacyController previewLatencyLogger]
// Type encoding: @16@0:8
// Implementation: 0x105ce4dac

// -[SCPreviewFiltersLegacyController geoFilterLogger]
// Type encoding: @16@0:8
// Implementation: 0x105ce4db4

// -[SCPreviewFiltersLegacyController previewTooltipsProvider]
// Type encoding: @16@0:8
// Implementation: 0x105ce4dbc

// -[SCPreviewFiltersLegacyController ucoDependencyFactory]
// Type encoding: @16@0:8
// Implementation: 0x105ce4dc4

// -[SCPreviewFiltersLegacyController specsRenderingMetadataProvider]
// Type encoding: @16@0:8
// Implementation: 0x105ce4dcc

// -[SCPreviewFiltersLegacyController actionInterceptor]
// Type encoding: @16@0:8
// Implementation: 0x105ce4dd4

// -[SCPreviewFiltersLegacyController filterStackingUIHelper]
// Type encoding: @16@0:8
// Implementation: 0x105ce4ddc

// -[SCPreviewFiltersLegacyController setFilterStackingUIHelper:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce4de4

// -[SCPreviewFiltersLegacyController filterStackingUITooltipLabel]
// Type encoding: @16@0:8
// Implementation: 0x105ce4e14

// -[SCPreviewFiltersLegacyController setFilterStackingUITooltipLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce4e1c

// -[SCPreviewFiltersLegacyController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ce4e4c

@end
