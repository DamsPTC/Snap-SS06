// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewDefaultFilterDataProviderImpl
// Superclass: NSObject
// Address: 0x112b8f988

@interface SCPreviewDefaultFilterDataProviderImpl

// Property: delegate; attributes: T@"<SCPreviewFilterDataProviderDelegate>",W,N,V_delegate
// Property: speedMotionFilterConfigs; attributes: T@"NSArray",R,C,N,V_speedMotionFilterConfigs
// Property: reverseMotionFilterConfig; attributes: T@"NSDictionary",R,C,N,V_reverseMotionFilterConfig
// Property: geoFilters; attributes: T@"NSArray",R,C,N,V_geoFilters
// Property: geoFilterImages; attributes: T@"NSArray",R,C,N
// Property: venueFilterSelector; attributes: T@"SCVenueFilterSelector",R,N,V_venueFilterSelector
// Property: venues; attributes: T@"NSArray",R,C,N
// Property: geoFilterAppearanceSettingsDictionary; attributes: T@"NSDictionary",R,C,N
// Property: streakCount; attributes: Tq,R,N,V_streakCount
// Property: selectedCommandConfiguration; attributes: T@"SCImageProcessCommandConfiguration",R,C,N,V_selectedCommandConfiguration
// Property: selectedContextFilterId; attributes: T@"NSString",R,C,N,V_selectedContextFilterId
// Property: selectedSmartFilterName; attributes: T@"NSString",R,C,N,V_selectedSmartFilterName
// Property: selectedSpeedMotionFilterName; attributes: T@"NSString",R,C,N,V_selectedSpeedMotionFilterName
// Property: selectedGeoFilterIds; attributes: T@"NSArray",R,C,N,V_selectedGeoFilterIds
// Property: selectedGeoFilterId; attributes: T@"NSString",R,C,N,V_selectedGeoFilterId
// Property: isReverseMotionFilterSelected; attributes: TB,R,N,V_isReverseMotionFilterSelected
// Property: isVenueFilterSelected; attributes: TB,R,N,V_isVenueFilterSelected
// Property: isStreakFilterSelected; attributes: TB,R,N,V_isStreakFilterSelected
// Property: geofilterContextBasedSelector; attributes: T@"SCUnlockablesContextBasedSelector",&,N,V_geofilterContextBasedSelector
// Property: commonLoggingParamsBuilder; attributes: T@"SCSnapCommonLoggingParamsBuilder",&,N,V_commonLoggingParamsBuilder
// Property: filterContextData; attributes: T@"SCPreviewFilterDataProviderContextData",&,N,V_filterContextData
// Property: previewLocationInfoServices; attributes: T@"SCPreviewLocationInfoServices",&,N,V_previewLocationInfoServices
// Property: carouselGroupConfigParser; attributes: T@"SCCarouselGroupConfigParser",R,N,V_carouselGroupConfigParser
// Property: friendmojiDataProvider; attributes: T@"SCLazy",&,N,V_friendmojiDataProvider
// Property: smartCarouselFilterArranger; attributes: T@"SCSmartCarouselFilterArranger",W,N,V_smartCarouselFilterArranger
// Property: mixerNamespaceServiceProvider; attributes: T@"SCLazy",&,N,V_mixerNamespaceServiceProvider
// Property: mixerCTPFilters; attributes: T@"NSArray",&,N,V_mixerCTPFilters
// Property: bundledLensProvider; attributes: T@"SCLazy",&,N,V_bundledLensProvider
// Property: ucoStudySettingsProvider; attributes: T@"SCLazy",&,N,V_ucoStudySettingsProvider
// Property: mapPersonLocationsProvider; attributes: T@"<SCMapPersonLocationsProviding>",&,N,V_mapPersonLocationsProvider
// Property: placeProfileDataFetcher; attributes: T@"SCLazy",&,N,V_placeProfileDataFetcher
// Property: configProvider; attributes: T@"<SCConfigProvider>",&,N,V_configProvider
// Property: visualFilterNames; attributes: T@"NSArray",R,C,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: location; attributes: T@"CLLocation",R,N,V_location
// Property: weather; attributes: T@"SCWeather",R,N,V_weather
// Property: timestamp; attributes: T@"SCTimestampMetadata",R,N,V_timestamp
// Property: batteryStatus; attributes: TQ,R,N,V_batteryStatus
// Property: altitude; attributes: T@"SCAltitudeInfo",R,N,V_altitude
// Property: venueInfo; attributes: T@"SCVenueInfoSticker",R,N,V_venueInfo

// -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:userSession:previewABProvider:checkInOptionFetcher:ucoDataStore:userLocationPermissionManager:locationProvider:ucoServices:]
// Type encoding: @80@0:8q16@24@32@40@48@56@64@72
// Implementation: 0x107f73424

// -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:streakCount:userSession:fullScreenImageFuture:mediaOrientation:filterContextData:previewABProvider:checkInOptionFetcher:ucoDataStore:userLocationPermissionManager:locationProvider:ucoServices:]
// Type encoding: @112@0:8q16q24@32@40q48@56@64@72@80@88@96@104
// Implementation: 0x107f73468

// -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:snapPageSource:userSession:fullScreenImageFuture:mediaOrientation:mediaType:previewABProvider:ucoDataStore:userLocationPermissionManager:locationProvider:ucoServices:]
// Type encoding: @104@0:8q16q24@32@40q48q56@64@72@80@88@96
// Implementation: 0x107f734b0

// -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:snapPageSource:streakCount:userSession:fullScreenImageFuture:mediaOrientation:initialInfoStickerData:previewABProvider:checkInOptionFetcher:contextFilteredImage:venueFilterSelector:weather:altitude:timestamp:batteryStatus:selectedCommandConfiguration:selectedContextFilterId:selectedSmartFilterName:selectedSpeedMotionFilterName:speedMotionFilterConfigs:selectedGeoFilterId:selectedGeoFilterIds:selectedGeoFilters:isReverseMotionFilterSelected:isVenueFilterSelected:isStreakCountSelected:mediaType:cameraType:lensInPreviewContexts:preCaptureLensId:hideAnimatedGeofilters:ucoDataStore:userLocationPermissionManager:locationProvider:ucoServices:]
// Type encoding: @280@0:8q16q24q32@40@48q56@64@72@80@88@96@104@112@120Q128@136@144@152@160@168@176@184@192B200B204B208q212q220@228@236B244@248@256@264@272
// Implementation: 0x107f7350c

// -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:snapPageSource:streakCount:userSession:fullScreenImageFuture:mediaOrientation:filterContextData:initialInfoStickerData:previewABProvider:checkInOptionFetcher:ucoDataStore:userLocationPermissionManager:locationProvider:snapDocFiltersEditor:ucoServices:]
// Type encoding: @136@0:8q16q24q32@40@48q56@64@72@80@88@96@104@112@120@128
// Implementation: 0x107f7395c

// -[SCPreviewDefaultFilterDataProviderImpl initWithSnapSource:snapPageSource:streakCount:userSession:fullScreenImageFuture:mediaOrientation:filterContextData:initialInfoStickerData:previewABProvider:checkInOptionFetcher:ucoDataStore:userLocationPermissionManager:locationProvider:ucoServices:]
// Type encoding: @128@0:8q16q24q32@40@48q56@64@72@80@88@96@104@112@120
// Implementation: 0x107f73a2c

// -[SCPreviewDefaultFilterDataProviderImpl clear]
// Type encoding: v16@0:8
// Implementation: 0x107f73f54

// -[SCPreviewDefaultFilterDataProviderImpl _addStreakFilter]
// Type encoding: v16@0:8
// Implementation: 0x107f73f88

// -[SCPreviewDefaultFilterDataProviderImpl insertFilter:geoFilterImage:geoFilterAppearanceSetting:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f74090

// -[SCPreviewDefaultFilterDataProviderImpl removeFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f74160

// -[SCPreviewDefaultFilterDataProviderImpl geoFilters]
// Type encoding: @16@0:8
// Implementation: 0x107f742b8

// -[SCPreviewDefaultFilterDataProviderImpl geoFilterImages]
// Type encoding: @16@0:8
// Implementation: 0x107f742f8

// -[SCPreviewDefaultFilterDataProviderImpl geoFilterAppearanceSettingsDictionary]
// Type encoding: @16@0:8
// Implementation: 0x107f744a8

// -[SCPreviewDefaultFilterDataProviderImpl venues]
// Type encoding: @16@0:8
// Implementation: 0x107f744d0

// -[SCPreviewDefaultFilterDataProviderImpl currentVenueFilterInfo]
// Type encoding: @16@0:8
// Implementation: 0x107f744d8

// -[SCPreviewDefaultFilterDataProviderImpl speedMotionFilterConfigs]
// Type encoding: @16@0:8
// Implementation: 0x107f745a8

// -[SCPreviewDefaultFilterDataProviderImpl _speedMotionFiltersConfigMap]
// Type encoding: @16@0:8
// Implementation: 0x107f74674

// -[SCPreviewDefaultFilterDataProviderImpl reverseMotionFilterConfig]
// Type encoding: @16@0:8
// Implementation: 0x107f747c8

// -[SCPreviewDefaultFilterDataProviderImpl updateInfoStickerData]
// Type encoding: v16@0:8
// Implementation: 0x107f748b8

// -[SCPreviewDefaultFilterDataProviderImpl startUpdatingFilterData]
// Type encoding: v16@0:8
// Implementation: 0x107f74a3c

// -[SCPreviewDefaultFilterDataProviderImpl stopUpdatingFilterData]
// Type encoding: v16@0:8
// Implementation: 0x107f74a8c

// -[SCPreviewDefaultFilterDataProviderImpl updateVenueFilterData]
// Type encoding: v16@0:8
// Implementation: 0x107f74b28

// -[SCPreviewDefaultFilterDataProviderImpl updateVenueStickerData]
// Type encoding: v16@0:8
// Implementation: 0x107f74b2c

// -[SCPreviewDefaultFilterDataProviderImpl _getBatteryStatus]
// Type encoding: Q16@0:8
// Implementation: 0x107f74b30

// -[SCPreviewDefaultFilterDataProviderImpl _generateArSegmentationImageForGeofilterImage:appearanceSetting:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f74b3c

// -[SCPreviewDefaultFilterDataProviderImpl updateGeoFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f75010

// -[SCPreviewDefaultFilterDataProviderImpl geofilterByFilterId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f7532c

// -[SCPreviewDefaultFilterDataProviderImpl _restoreSavedFiltersFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f75334

// -[SCPreviewDefaultFilterDataProviderImpl ucoIntegrationToolbox]
// Type encoding: @16@0:8
// Implementation: 0x107f75ab4

// -[SCPreviewDefaultFilterDataProviderImpl _mixerNamespaceServiceManager]
// Type encoding: @16@0:8
// Implementation: 0x107f75b60

// -[SCPreviewDefaultFilterDataProviderImpl _updateNamespace]
// Type encoding: v16@0:8
// Implementation: 0x107f75bd0

// -[SCPreviewDefaultFilterDataProviderImpl _getMixerItems]
// Type encoding: v16@0:8
// Implementation: 0x107f75c74

// -[SCPreviewDefaultFilterDataProviderImpl _handleEmptyState]
// Type encoding: v16@0:8
// Implementation: 0x107f760fc

// -[SCPreviewDefaultFilterDataProviderImpl _comparePreviewFilterItems:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f7649c

// -[SCPreviewDefaultFilterDataProviderImpl _shouldOnlyUseSavedSnapLocation]
// Type encoding: B16@0:8
// Implementation: 0x107f76650

// -[SCPreviewDefaultFilterDataProviderImpl _shouldAddVenueFilter]
// Type encoding: B16@0:8
// Implementation: 0x107f76660

// -[SCPreviewDefaultFilterDataProviderImpl _handleMixerItems:fromCache:venueLensId:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107f7668c

// -[SCPreviewDefaultFilterDataProviderImpl _addVenueFilterIfNeededToPreviewItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f77ae0

// -[SCPreviewDefaultFilterDataProviderImpl _fetchFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f77ca0

// -[SCPreviewDefaultFilterDataProviderImpl _notFetchedFiltersFromFilters:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f78014

// -[SCPreviewDefaultFilterDataProviderImpl shouldAddReverseMotionFilter]
// Type encoding: B16@0:8
// Implementation: 0x107f780d4

// -[SCPreviewDefaultFilterDataProviderImpl _resetFiltersWithFilterInfoList:backfillFilters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f780dc

// -[SCPreviewDefaultFilterDataProviderImpl _addColorFilters]
// Type encoding: v16@0:8
// Implementation: 0x107f78418

// -[SCPreviewDefaultFilterDataProviderImpl _addColorFilterWithName:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f78540

// -[SCPreviewDefaultFilterDataProviderImpl _addSpeedMotionFilterWithName:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f78618

// -[SCPreviewDefaultFilterDataProviderImpl _addPlaceholdersForGeoFilters:filterItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f78694

// -[SCPreviewDefaultFilterDataProviderImpl _addPlaceholderWithFilterName:type:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107f7887c

// -[SCPreviewDefaultFilterDataProviderImpl _setupLocalFiltersWithItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7895c

// -[SCPreviewDefaultFilterDataProviderImpl fetchGeoFilterImagesFinished:cancelled:sponsoredFilterStartCount:]
// Type encoding: v32@0:8B16B20Q24
// Implementation: 0x107f78c64

// -[SCPreviewDefaultFilterDataProviderImpl _currentContextualInfo]
// Type encoding: @16@0:8
// Implementation: 0x107f79074

// -[SCPreviewDefaultFilterDataProviderImpl _attemptStartUpdatingVenueData]
// Type encoding: v16@0:8
// Implementation: 0x107f7913c

// -[SCPreviewDefaultFilterDataProviderImpl _handleVenueDataUpdateAfterLocationPermissionFetch:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107f792d0

// -[SCPreviewDefaultFilterDataProviderImpl _attemptStartUpdatingVenueStickerData]
// Type encoding: v16@0:8
// Implementation: 0x107f793cc

// -[SCPreviewDefaultFilterDataProviderImpl _handleVenueStickerUpdateAfterLocationPermissionFetch:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107f7951c

// -[SCPreviewDefaultFilterDataProviderImpl _startUpdatingVenueStickerData]
// Type encoding: v16@0:8
// Implementation: 0x107f795ec

// -[SCPreviewDefaultFilterDataProviderImpl _dispatchVenueStickerFetchOnIdle]
// Type encoding: v16@0:8
// Implementation: 0x107f79800

// -[SCPreviewDefaultFilterDataProviderImpl _startUpdatingVenueData]
// Type encoding: v16@0:8
// Implementation: 0x107f799a4

// -[SCPreviewDefaultFilterDataProviderImpl _needsRetrieveLocation]
// Type encoding: B16@0:8
// Implementation: 0x107f79b8c

// -[SCPreviewDefaultFilterDataProviderImpl _updateVenueAndStickerMetadata]
// Type encoding: v16@0:8
// Implementation: 0x107f79bec

// -[SCPreviewDefaultFilterDataProviderImpl _startUpdatingVenueFilter]
// Type encoding: v16@0:8
// Implementation: 0x107f79c10

// -[SCPreviewDefaultFilterDataProviderImpl startUpdatingVenueStickerData]
// Type encoding: v16@0:8
// Implementation: 0x107f79dd8

// -[SCPreviewDefaultFilterDataProviderImpl _updateWeatherData]
// Type encoding: v16@0:8
// Implementation: 0x107f79fc0

// -[SCPreviewDefaultFilterDataProviderImpl _updateWeatherWithInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7a238

// -[SCPreviewDefaultFilterDataProviderImpl _didUpdateWeather:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7a374

// -[SCPreviewDefaultFilterDataProviderImpl _startUpdatingWeatherData]
// Type encoding: v16@0:8
// Implementation: 0x107f7a3dc

// -[SCPreviewDefaultFilterDataProviderImpl _startUpdatingVenueInferredData]
// Type encoding: v16@0:8
// Implementation: 0x107f7a53c

// -[SCPreviewDefaultFilterDataProviderImpl _updateVenueStickerWithInferredVenueName:venueId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f7a790

// -[SCPreviewDefaultFilterDataProviderImpl _currentLocation]
// Type encoding: @16@0:8
// Implementation: 0x107f7a8ec

// -[SCPreviewDefaultFilterDataProviderImpl _updateAltitude:]
// Type encoding: v24@0:8d16
// Implementation: 0x107f7abfc

// -[SCPreviewDefaultFilterDataProviderImpl _canUseUco]
// Type encoding: B16@0:8
// Implementation: 0x107f7acfc

// -[SCPreviewDefaultFilterDataProviderImpl _shouldReplaceVenueLensWithFilter]
// Type encoding: B16@0:8
// Implementation: 0x107f7ad4c

// -[SCPreviewDefaultFilterDataProviderImpl _canUseColorLenses]
// Type encoding: B16@0:8
// Implementation: 0x107f7ad84

// -[SCPreviewDefaultFilterDataProviderImpl _canUseReverseMotionForCurrentVideo]
// Type encoding: B16@0:8
// Implementation: 0x107f7add0

// -[SCPreviewDefaultFilterDataProviderImpl _locationAltitude]
// Type encoding: Q16@0:8
// Implementation: 0x107f7ae48

// -[SCPreviewDefaultFilterDataProviderImpl visualFilterNames]
// Type encoding: @16@0:8
// Implementation: 0x107f7aeb8

// -[SCPreviewDefaultFilterDataProviderImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x107f7afa4

// -[SCPreviewDefaultFilterDataProviderImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7afbc

// -[SCPreviewDefaultFilterDataProviderImpl timestamp]
// Type encoding: @16@0:8
// Implementation: 0x107f7afc8

// -[SCPreviewDefaultFilterDataProviderImpl weather]
// Type encoding: @16@0:8
// Implementation: 0x107f7afd0

// -[SCPreviewDefaultFilterDataProviderImpl venueInfo]
// Type encoding: @16@0:8
// Implementation: 0x107f7afd8

// -[SCPreviewDefaultFilterDataProviderImpl batteryStatus]
// Type encoding: Q16@0:8
// Implementation: 0x107f7afe0

// -[SCPreviewDefaultFilterDataProviderImpl altitude]
// Type encoding: @16@0:8
// Implementation: 0x107f7afe8

// -[SCPreviewDefaultFilterDataProviderImpl selectedCommandConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x107f7aff0

// -[SCPreviewDefaultFilterDataProviderImpl selectedSmartFilterName]
// Type encoding: @16@0:8
// Implementation: 0x107f7aff8

// -[SCPreviewDefaultFilterDataProviderImpl selectedContextFilterId]
// Type encoding: @16@0:8
// Implementation: 0x107f7b000

// -[SCPreviewDefaultFilterDataProviderImpl selectedSpeedMotionFilterName]
// Type encoding: @16@0:8
// Implementation: 0x107f7b008

// -[SCPreviewDefaultFilterDataProviderImpl selectedGeoFilterId]
// Type encoding: @16@0:8
// Implementation: 0x107f7b010

// -[SCPreviewDefaultFilterDataProviderImpl selectedGeoFilterIds]
// Type encoding: @16@0:8
// Implementation: 0x107f7b018

// -[SCPreviewDefaultFilterDataProviderImpl isReverseMotionFilterSelected]
// Type encoding: B16@0:8
// Implementation: 0x107f7b020

// -[SCPreviewDefaultFilterDataProviderImpl streakCount]
// Type encoding: q16@0:8
// Implementation: 0x107f7b028

// -[SCPreviewDefaultFilterDataProviderImpl isStreakFilterSelected]
// Type encoding: B16@0:8
// Implementation: 0x107f7b030

// -[SCPreviewDefaultFilterDataProviderImpl venueFilterSelector]
// Type encoding: @16@0:8
// Implementation: 0x107f7b038

// -[SCPreviewDefaultFilterDataProviderImpl isVenueFilterSelected]
// Type encoding: B16@0:8
// Implementation: 0x107f7b040

// -[SCPreviewDefaultFilterDataProviderImpl geofilterContextBasedSelector]
// Type encoding: @16@0:8
// Implementation: 0x107f7b048

// -[SCPreviewDefaultFilterDataProviderImpl setGeofilterContextBasedSelector:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b050

// -[SCPreviewDefaultFilterDataProviderImpl commonLoggingParamsBuilder]
// Type encoding: @16@0:8
// Implementation: 0x107f7b080

// -[SCPreviewDefaultFilterDataProviderImpl setCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b088

// -[SCPreviewDefaultFilterDataProviderImpl filterContextData]
// Type encoding: @16@0:8
// Implementation: 0x107f7b0b8

// -[SCPreviewDefaultFilterDataProviderImpl setFilterContextData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b0c0

// -[SCPreviewDefaultFilterDataProviderImpl carouselGroupConfigParser]
// Type encoding: @16@0:8
// Implementation: 0x107f7b0f0

// -[SCPreviewDefaultFilterDataProviderImpl friendmojiDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f7b0f8

// -[SCPreviewDefaultFilterDataProviderImpl setFriendmojiDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b100

// -[SCPreviewDefaultFilterDataProviderImpl previewLocationInfoServices]
// Type encoding: @16@0:8
// Implementation: 0x107f7b130

// -[SCPreviewDefaultFilterDataProviderImpl setPreviewLocationInfoServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b138

// -[SCPreviewDefaultFilterDataProviderImpl smartCarouselFilterArranger]
// Type encoding: @16@0:8
// Implementation: 0x107f7b168

// -[SCPreviewDefaultFilterDataProviderImpl setSmartCarouselFilterArranger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b180

// -[SCPreviewDefaultFilterDataProviderImpl mixerNamespaceServiceProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f7b18c

// -[SCPreviewDefaultFilterDataProviderImpl setMixerNamespaceServiceProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b194

// -[SCPreviewDefaultFilterDataProviderImpl mixerCTPFilters]
// Type encoding: @16@0:8
// Implementation: 0x107f7b1c4

// -[SCPreviewDefaultFilterDataProviderImpl setMixerCTPFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b1cc

// -[SCPreviewDefaultFilterDataProviderImpl location]
// Type encoding: @16@0:8
// Implementation: 0x107f7b1fc

// -[SCPreviewDefaultFilterDataProviderImpl bundledLensProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f7b204

// -[SCPreviewDefaultFilterDataProviderImpl setBundledLensProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b20c

// -[SCPreviewDefaultFilterDataProviderImpl ucoStudySettingsProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f7b23c

// -[SCPreviewDefaultFilterDataProviderImpl setUcoStudySettingsProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b244

// -[SCPreviewDefaultFilterDataProviderImpl mapPersonLocationsProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f7b274

// -[SCPreviewDefaultFilterDataProviderImpl setMapPersonLocationsProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b27c

// -[SCPreviewDefaultFilterDataProviderImpl placeProfileDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x107f7b2ac

// -[SCPreviewDefaultFilterDataProviderImpl setPlaceProfileDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b2b4

// -[SCPreviewDefaultFilterDataProviderImpl configProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f7b2e4

// -[SCPreviewDefaultFilterDataProviderImpl setConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7b2ec

// -[SCPreviewDefaultFilterDataProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f7b31c

// +[SCPreviewDefaultFilterDataProviderImpl _addColorLensWithName:ucoDataStore:previewItems:ucoLenses:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107f77bcc

@end
