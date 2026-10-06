// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSmartSwipeFilterView
// Superclass: UIView
// Address: 0x112b903d8

@interface SCSmartSwipeFilterView

// Property: smartSwipeFilterViewLogger; attributes: T@"<SCSmartSwipeFilterViewLogger>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: filterArranger; attributes: T@"SCSmartCarouselFilterArranger",&,N,V_filterArranger
// Property: filterViewDict; attributes: T@"NSMutableDictionary",&,N,V_filterViewDict
// Property: unfilteredView; attributes: T@"SCFilterView",&,N,V_unfilteredView
// Property: commandConfigurationsForFiltersWithMediaCommands; attributes: T@"NSArray",&,N,V_commandConfigurationsForFiltersWithMediaCommands
// Property: swipeSequenceNumber; attributes: TQ,N,V_swipeSequenceNumber
// Property: spectaclesConfig; attributes: T{SCSmartSwipeSpectaclesMediaConfig=BBB},R,N,V_spectaclesConfig
// Property: rectificationConfig; attributes: T@"SCSpectaclesRectificationConfiguration",&,N,V_rectificationConfig
// Property: firstSwipeDirection; attributes: Tq,N,V_firstSwipeDirection
// Property: lastSwipeDirection; attributes: Tq,N,V_lastSwipeDirection
// Property: filterSwipeMetadata; attributes: T@"NSMutableDictionary",&,N,V_filterSwipeMetadata
// Property: userSession; attributes: T@"SCUserSession",&,N,V_userSession
// Property: unlockableGeoFilterTracker; attributes: T@"<SCUnlockableGeoFilterTracking>",&,N,V_unlockableGeoFilterTracker
// Property: geofilterLogger; attributes: T@"<SCPreviewGeoFilterLogging>",&,N,V_geofilterLogger
// Property: latencyLogger; attributes: T@"<SCPreviewLatencyLogging>",&,N,V_latencyLogger
// Property: userInteractionStateLogger; attributes: T@"<SCPreviewUserInteractionStateLogging>",&,N,V_userInteractionStateLogger
// Property: currentSection; attributes: Tq,N,V_currentSection
// Property: contextFilterIsSeen; attributes: TB,N,V_contextFilterIsSeen
// Property: visualFilterNames; attributes: T@"NSArray",&,N,V_visualFilterNames
// Property: visualFilterIsSeen; attributes: TB,N,V_visualFilterIsSeen
// Property: stickerContainer; attributes: T@"<SCPreviewFeatureStickerContainer>",W,N,V_stickerContainer
// Property: hasLoggedTTILatency; attributes: TB,N,V_hasLoggedTTILatency
// Property: videoPlaybackLogger; attributes: T@"<SCImageProcessVideoPlaybackLogging>",R,N,V_videoPlaybackLogger
// Property: imagePlaybackLogger; attributes: T@"<SCImageProcessVideoPlaybackLogging>",R,N,V_imagePlaybackLogger
// Property: previewABProvider; attributes: T@"<SCPreviewABProvider>",R,N,V_previewABProvider
// Property: ucoInfoViewsHidden; attributes: TB,R,N,V_ucoInfoViewsHidden
// Property: isVideoSnap; attributes: TB,N,V_isVideoSnap
// Property: isFromGallery; attributes: TB,R,N,V_isFromGallery
// Property: delegate; attributes: T@"<SCSmartSwipeFilterViewDelegate>",W,N,V_delegate
// Property: renderingSessionFactory; attributes: T@"SCLazy",R,N,V_renderingSessionFactory
// Property: imageProcessCommandProvider; attributes: T@"<SCImageProcessCommandProvider>",R,N,V_imageProcessCommandProvider
// Property: filterCollectionView; attributes: T@"UICollectionView",R,N,V_filterCollectionView
// Property: scrollViewPanGestureRecognizer; attributes: T@"UIPanGestureRecognizer",R,N,V_scrollViewPanGestureRecognizer
// Property: numberOfFilterChanges; attributes: TQ,R,N,V_numberOfFilterChanges
// Property: commonLoggingParameters; attributes: T@"SCSnapCommonLoggingParameters",&,N,V_commonLoggingParameters
// Property: currentViewportTransform; attributes: T{CGAffineTransform=dddddd},N,V_currentViewportTransform
// Property: lazyLensIconRepository; attributes: T@"SCLazy",&,N,V_lazyLensIconRepository
// Property: lensCommandMetadataProvider; attributes: T@"<SCImageProcessLensCommandMetadataProvider>",&,N,V_lensCommandMetadataProvider
// Property: ucoLogger; attributes: T@"SCLazy",R,W,N,V_ucoLogger
// Property: ucoInteractionTracker; attributes: T@"SCLazy",R,N,V_ucoInteractionTracker
// Property: lensCrashLogger; attributes: T@"SCLazy",R,W,N,V_lensCrashLogger
// Property: unifiedCameraObjectFilterViewFactory; attributes: T@"SCLazy",R,N,V_unifiedCameraObjectFilterViewFactory
// Property: swipeFilterViewLayoutGuide; attributes: T@"<SCSwipeFilterViewLayoutProviding>",&,N,V_swipeFilterViewLayoutGuide
// Property: lensCTAHandler; attributes: T@"SCLazy",R,N,V_lensCTAHandler
// Property: locationProvider; attributes: T@"SCLazy",R,N,V_locationProvider
// Property: backgroundGradientColors; attributes: T@"SCPreviewGradientColors",&,N,V_backgroundGradientColors
// Property: didSwipeFilterViewObservable; attributes: T@"SCObservable",R,N,V_didSwipeFilterViewObservable
// Property: filterViewDidEndDeceleratingObservable; attributes: T@"SCObservable",R,N,V_filterViewDidEndDeceleratingObservable
// Property: userBlizzardLogger; attributes: T@"SCLazy",&,N,V_userBlizzardLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: captionView; attributes: T@"UIView",R,N,V_captionView
// Property: didEndScrollingFilterViewObservable; attributes: T@"SCObservable",R,N,V_didEndScrollingFilterViewObservable
// Property: commonLoggingParamsBuilder; attributes: T@"SCSnapCommonLoggingParamsBuilder",&,N,V_commonLoggingParamsBuilder

// -[SCSmartSwipeFilterView filterViewForItem:filterViewDict:unfilteredView:bounds:filterArranger:userSession:]
// Type encoding: @88@0:8@16@24@32{CGRect={CGPoint=dd}{CGSize=dd}}40@72@80
// Implementation: 0x107f90808

// -[SCSmartSwipeFilterView zPositionForFilterItem:view:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x107f90cac

// -[SCSmartSwipeFilterView removeViewOfFilterItem:filterViewDict:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f90d08

// -[SCSmartSwipeFilterView geoFilterViewSponsoredSlugTapped:filterId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f90db4

// -[SCSmartSwipeFilterView geoFilterViewNeedsUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f90e10

// -[SCSmartSwipeFilterView venueFilterView:geoFilterViewWithGeoFilterID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f90e88

// -[SCSmartSwipeFilterView venueFilterViewDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f91008

// -[SCSmartSwipeFilterView venueFilterView:didChangeDisplayStatus:withBackgroundFilter:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x107f91058

// -[SCSmartSwipeFilterView venueFilterView:openPlacePickerTrayWithOnVenueTapped:suggestedVenuesFromFilter:venueIDToDistanceStringMap:]
// Type encoding: v48@0:8@16@?24@32@40
// Implementation: 0x107f910a8

// -[SCSmartSwipeFilterView _overlayFilterViewForFilter:frame:config:userSession:]
// Type encoding: @72@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@56@64
// Implementation: 0x107f91150

// -[SCSmartSwipeFilterView _canReuseFilterView:filterItem:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107f91490

// -[SCSmartSwipeFilterView updateFilterSourceForSwipeForFilter:filterSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107f8cbbc

// -[SCSmartSwipeFilterView logNameForCurrentFilters]
// Type encoding: @16@0:8
// Implementation: 0x107f8cc38

// -[SCSmartSwipeFilterView logNameForCurrentFilterOfType:mediaFilterSubtype:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x107f8ccd8

// -[SCSmartSwipeFilterView logVisualFilterIsSeen]
// Type encoding: B16@0:8
// Implementation: 0x107f8cdd8

// -[SCSmartSwipeFilterView attachmentWillOpenWithLensMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8cddc

// -[SCSmartSwipeFilterView logAttachmentOpenedWithAttachmentClosesLensCarousel:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f8ce6c

// -[SCSmartSwipeFilterView logAttachmentClosedWithAttachmentClosesLensCarousel:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f8ceb4

// -[SCSmartSwipeFilterView updateViewingItemIfNecessary:displayed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107f8cefc

// -[SCSmartSwipeFilterView updateFilterItemDownloaded:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8cf88

// -[SCSmartSwipeFilterView _startViewingIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8d168

// -[SCSmartSwipeFilterView _swipeMetadataForFilterItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f8d324

// -[SCSmartSwipeFilterView _createSwipeMetadataForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f8d41c

// -[SCSmartSwipeFilterView _stopViewingIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8d454

// -[SCSmartSwipeFilterView logViewingEnded]
// Type encoding: v16@0:8
// Implementation: 0x107f8d940

// -[SCSmartSwipeFilterView logViewingPaused]
// Type encoding: v16@0:8
// Implementation: 0x107f8dab4

// -[SCSmartSwipeFilterView logViewingResumed]
// Type encoding: v16@0:8
// Implementation: 0x107f8dbc0

// -[SCSmartSwipeFilterView _logSwipeEventForFilterItem:atIndex:filterType:metadata:carouselGroupName:requestId:]
// Type encoding: v64@0:8@16q24q32@40@48@56
// Implementation: 0x107f8dc44

// -[SCSmartSwipeFilterView _logSwipeEventForGeoFilter:atIndex:metadata:isBackgroundFilter:carouselGroupName:requestId:]
// Type encoding: v60@0:8@16q24@32B40@44@52
// Implementation: 0x107f8e078

// -[SCSmartSwipeFilterView _adGeofilterTypeGtomGeofilterType:]
// Type encoding: q24@0:8q16
// Implementation: 0x107f8e8d8

// -[SCSmartSwipeFilterView _logSwipeEventForVenueFilter:atIndex:metadata:requestId:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x107f8e918

// -[SCSmartSwipeFilterView _logSwipeEvent:atIndex:metadata:requestId:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x107f8ed14

// -[SCSmartSwipeFilterView _logUcoEventsForItem:atIndex:metadata:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x107f8ef64

// -[SCSmartSwipeFilterView logCarouselArrangeHasNewFilter:config:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f8f3fc

// -[SCSmartSwipeFilterView logIndexTotal]
// Type encoding: q16@0:8
// Implementation: 0x107f8f49c

// -[SCSmartSwipeFilterView logTapCountForCurrentFilterWithType:]
// Type encoding: q24@0:8q16
// Implementation: 0x107f8f4d8

// -[SCSmartSwipeFilterView logSeenTotal]
// Type encoding: q16@0:8
// Implementation: 0x107f8f59c

// -[SCSmartSwipeFilterView logIndexForCurrentFilterOfType:]
// Type encoding: q24@0:8q16
// Implementation: 0x107f8f6c4

// -[SCSmartSwipeFilterView logIndexForFilterID:]
// Type encoding: q24@0:8@16
// Implementation: 0x107f8f738

// -[SCSmartSwipeFilterView filterSourceForCurrentFilterOfType:]
// Type encoding: q24@0:8q16
// Implementation: 0x107f8f7c8

// -[SCSmartSwipeFilterView logFirstSwipeDirection]
// Type encoding: q16@0:8
// Implementation: 0x107f8f854

// -[SCSmartSwipeFilterView logFilterInfoValue]
// Type encoding: @16@0:8
// Implementation: 0x107f8f858

// -[SCSmartSwipeFilterView logFilterStreakValue]
// Type encoding: @16@0:8
// Implementation: 0x107f8f928

// -[SCSmartSwipeFilterView logFilterStreakType]
// Type encoding: q16@0:8
// Implementation: 0x107f8fa14

// -[SCSmartSwipeFilterView logSnapCreationEnded]
// Type encoding: v16@0:8
// Implementation: 0x107f8fadc

// -[SCSmartSwipeFilterView logCarouselFilterOrder]
// Type encoding: v16@0:8
// Implementation: 0x107f8fc1c

// -[SCSmartSwipeFilterView determineInitialSwipeDirectionForGeofilterMissLoggingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107f9028c

// -[SCSmartSwipeFilterView geofilterMissLoggingDetermineIfNewSession]
// Type encoding: v16@0:8
// Implementation: 0x107f903cc

// -[SCSmartSwipeFilterView _fiterSwipeCameraType]
// Type encoding: q16@0:8
// Implementation: 0x107f904f0

// -[SCSmartSwipeFilterView geofilterMissLoggingDetermineIfSessionOver:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f90548

// -[SCSmartSwipeFilterView logStartTTIMeasurement]
// Type encoding: v16@0:8
// Implementation: 0x107f9064c

// -[SCSmartSwipeFilterView geocellForLocation:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f9069c

// -[SCSmartSwipeFilterView smartSwipeFilterViewLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f8cbb8

// -[SCSmartSwipeFilterView initWithFrame:filterArranger:commonLoggingParamsBuilder:geoFilterLogger:latencyLogger:userInteractionStateLogger:spectaclesConfig:rectificationConfig:userSession:renderingSessionFactory:imageProcessCommandProvider:cropBackgroundAnimationImages:cropBackgroundAnimationColors:isFromGallery:lazyLensIconRepository:unifiedCameraObjectFilterViewFactory:ucoLogger:ucoInteractionTracker:lensCrashLogger:filterViewLayoutGuide:previewABProvider:lensCTAHandler:locationProvider:userBlizzardLogger:]
// Type encoding: @223@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56@64@72@80{SCSmartSwipeSpectaclesMediaConfig=BBB}88@91@99@107@115@123@131B139@143@151@159@167@175@183@191@199@207@215
// Implementation: 0x107f95294

// -[SCSmartSwipeFilterView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107f95d48

// -[SCSmartSwipeFilterView hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x107f95e44

// -[SCSmartSwipeFilterView touchTargetForGesture:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f95f08

// -[SCSmartSwipeFilterView touchTargetForType:gesture:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x107f95f88

// -[SCSmartSwipeFilterView setViewportTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x107f96038

// -[SCSmartSwipeFilterView setCropBackgroundAnimating:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f96058

// -[SCSmartSwipeFilterView setBackgroundCommandWithColors:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f960ac

// -[SCSmartSwipeFilterView setCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9610c

// -[SCSmartSwipeFilterView updateMediaViewScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x107f96144

// -[SCSmartSwipeFilterView addCaptionViewBelowFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f96198

// -[SCSmartSwipeFilterView setFiltersUserInteractionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f962b4

// -[SCSmartSwipeFilterView setFiltersEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f963cc

// -[SCSmartSwipeFilterView numberOfFilterChanges]
// Type encoding: Q16@0:8
// Implementation: 0x107f963d0

// -[SCSmartSwipeFilterView isScrolling]
// Type encoding: B16@0:8
// Implementation: 0x107f963e0

// -[SCSmartSwipeFilterView filterItemForCurrentSection]
// Type encoding: @16@0:8
// Implementation: 0x107f96428

// -[SCSmartSwipeFilterView currentFilterItems]
// Type encoding: @16@0:8
// Implementation: 0x107f96438

// -[SCSmartSwipeFilterView selectedFiltersCount]
// Type encoding: q16@0:8
// Implementation: 0x107f96544

// -[SCSmartSwipeFilterView currentFilterNamesForType:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f96580

// -[SCSmartSwipeFilterView currentUCOFilterNames]
// Type encoding: @16@0:8
// Implementation: 0x107f965cc

// -[SCSmartSwipeFilterView currentToolFilterIds]
// Type encoding: @16@0:8
// Implementation: 0x107f9665c

// -[SCSmartSwipeFilterView toolLensesMap]
// Type encoding: @16@0:8
// Implementation: 0x107f966d0

// -[SCSmartSwipeFilterView selectedExportableGeofilterNames]
// Type encoding: @16@0:8
// Implementation: 0x107f96714

// -[SCSmartSwipeFilterView currentFilterItemsForType:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f9681c

// -[SCSmartSwipeFilterView currentFilterNameForType:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f968a4

// -[SCSmartSwipeFilterView currentFilterItemForType:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f968e8

// -[SCSmartSwipeFilterView currentFilterConfigsForType:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f96a90

// -[SCSmartSwipeFilterView currentUcoFilterConfigs]
// Type encoding: @16@0:8
// Implementation: 0x107f96c34

// -[SCSmartSwipeFilterView _currentFilterItemMatchingBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x107f96cc4

// -[SCSmartSwipeFilterView nameForFilterWithActiveMediaCommand]
// Type encoding: @16@0:8
// Implementation: 0x107f96e54

// -[SCSmartSwipeFilterView isCurrentItemMediaFilter]
// Type encoding: B16@0:8
// Implementation: 0x107f97130

// -[SCSmartSwipeFilterView currentFilterViewForType:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f971e0

// -[SCSmartSwipeFilterView currentFilterViewsForType:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f9725c

// -[SCSmartSwipeFilterView _currentOverlayFilterViews]
// Type encoding: @16@0:8
// Implementation: 0x107f9739c

// -[SCSmartSwipeFilterView currentFilterNameForTypeOrUnfiltered:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f974dc

// -[SCSmartSwipeFilterView currentFilterViewForTypeOrUnfiltered:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f9752c

// -[SCSmartSwipeFilterView currentBackgroundGradientColors]
// Type encoding: @16@0:8
// Implementation: 0x107f97588

// -[SCSmartSwipeFilterView currentSwipeState]
// Type encoding: {?=dBqqQQ}16@0:8
// Implementation: 0x107f975b8

// -[SCSmartSwipeFilterView swipeOffset]
// Type encoding: d16@0:8
// Implementation: 0x107f97668

// -[SCSmartSwipeFilterView updateVenueFilterViewFromFiltersState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f97710

// -[SCSmartSwipeFilterView selectFilterNames:forTypes:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107f9786c

// -[SCSmartSwipeFilterView setHiddenStateForOverlayFilters:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f97f24

// -[SCSmartSwipeFilterView updateMediaFiltersAndCommands]
// Type encoding: v16@0:8
// Implementation: 0x107f9801c

// -[SCSmartSwipeFilterView mediaFilterIndexForFilter:]
// Type encoding: q24@0:8@16
// Implementation: 0x107f98070

// -[SCSmartSwipeFilterView areResourcesDownloadedForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f98208

// -[SCSmartSwipeFilterView updateMediaFilterMaskForItem:relativeOffset:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107f98268

// -[SCSmartSwipeFilterView updateCurrentSectionAndMediaFilterOffset]
// Type encoding: v16@0:8
// Implementation: 0x107f982c8

// -[SCSmartSwipeFilterView setUCOInfoViewsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f98368

// -[SCSmartSwipeFilterView _updateCurrentSectionWithContentOffset:pageLength:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x107f98458

// -[SCSmartSwipeFilterView filterViewDidReplaceVisibleFilters]
// Type encoding: v16@0:8
// Implementation: 0x107f98544

// -[SCSmartSwipeFilterView scrollToInitSectionAndReloadToIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x107f98548

// -[SCSmartSwipeFilterView willBeginExternalSourcedScrolling]
// Type encoding: v16@0:8
// Implementation: 0x107f98694

// -[SCSmartSwipeFilterView didFinishExternalSourcedScrolling]
// Type encoding: v16@0:8
// Implementation: 0x107f986f8

// -[SCSmartSwipeFilterView scrollToFilterItemOffset:page:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x107f987f0

// -[SCSmartSwipeFilterView currentFilterOffset]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x107f988d8

// -[SCSmartSwipeFilterView stackCurrentCollectionViewFilterIfAny]
// Type encoding: B16@0:8
// Implementation: 0x107f98974

// -[SCSmartSwipeFilterView clearStackedFiltersIsMultiSnapCleanUp:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f98be8

// -[SCSmartSwipeFilterView stackedFiltersInfo]
// Type encoding: @16@0:8
// Implementation: 0x107f98df8

// -[SCSmartSwipeFilterView _stackedFiltersInfoFromItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f98e74

// -[SCSmartSwipeFilterView _stackedFilterDisplayNameForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f990b0

// -[SCSmartSwipeFilterView removeStackedFilterForType:filterName:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107f992b4

// -[SCSmartSwipeFilterView shouldUnstackWhenExitingDoubleSwipe]
// Type encoding: B16@0:8
// Implementation: 0x107f99590

// -[SCSmartSwipeFilterView _updateStackedOverlayViewsFrame]
// Type encoding: v16@0:8
// Implementation: 0x107f9963c

// -[SCSmartSwipeFilterView updateViewPosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f997f0

// -[SCSmartSwipeFilterView filterArranger:didUpdateFilterName:config:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f998d4

// -[SCSmartSwipeFilterView filterArranger:didInsertFilterAtIndex:filterItem:swipeState:]
// Type encoding: v88@0:8@16q24@32{?=dBqqQQ}40
// Implementation: 0x107f999b8

// -[SCSmartSwipeFilterView filterArranger:didRemoveFilter:atIndex:swipeState:]
// Type encoding: v88@0:8@16@24q32{?=dBqqQQ}40
// Implementation: 0x107f99ac4

// -[SCSmartSwipeFilterView filterArranger:didReplaceFilterAtIndex:oldFilter:newFilter:swipeState:]
// Type encoding: v96@0:8@16q24@32@40{?=dBqqQQ}48
// Implementation: 0x107f99ba4

// -[SCSmartSwipeFilterView filterArrangerWillReloadSwipeOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f99ce4

// -[SCSmartSwipeFilterView filterArrangerDidReloadSwipeOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f99d2c

// -[SCSmartSwipeFilterView filterArrangerDidChangeVisualFilterNamesProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f99f40

// -[SCSmartSwipeFilterView filterArranger:didApplyToolFilterName:config:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f99f88

// -[SCSmartSwipeFilterView filterArranger:didUnapplyToolFilterName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f9a00c

// -[SCSmartSwipeFilterView numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x107f9a05c

// -[SCSmartSwipeFilterView collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x107f9a064

// -[SCSmartSwipeFilterView collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f9a06c

// -[SCSmartSwipeFilterView collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x107f9a084

// -[SCSmartSwipeFilterView scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9a0d8

// -[SCSmartSwipeFilterView scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x107f9a274

// -[SCSmartSwipeFilterView scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9a278

// -[SCSmartSwipeFilterView scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9a434

// -[SCSmartSwipeFilterView scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107f9a4b4

// -[SCSmartSwipeFilterView storeCurrentFilterInfo]
// Type encoding: v16@0:8
// Implementation: 0x107f9a514

// -[SCSmartSwipeFilterView restoreFilterInfo]
// Type encoding: v16@0:8
// Implementation: 0x107f9a5c4

// -[SCSmartSwipeFilterView _clearStoredFilterInfo]
// Type encoding: v16@0:8
// Implementation: 0x107f9a61c

// -[SCSmartSwipeFilterView filterViewForCurrentSection]
// Type encoding: @16@0:8
// Implementation: 0x107f9a660

// -[SCSmartSwipeFilterView existingFilterViews]
// Type encoding: @16@0:8
// Implementation: 0x107f9a700

// -[SCSmartSwipeFilterView collectionView:willDisplayCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f9a710

// -[SCSmartSwipeFilterView collectionView:didEndDisplayingCell:forItemAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f9aaa0

// -[SCSmartSwipeFilterView scrollViewPanGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x107f9abb0

// -[SCSmartSwipeFilterView shouldRespondToTap:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f9abc0

// -[SCSmartSwipeFilterView tap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9ad50

// -[SCSmartSwipeFilterView _tapEligibleFilterTypes]
// Type encoding: @16@0:8
// Implementation: 0x107f9aee4

// -[SCSmartSwipeFilterView gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f9aef0

// -[SCSmartSwipeFilterView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107f9af08

// -[SCSmartSwipeFilterView _scrollToCurrentSection]
// Type encoding: v16@0:8
// Implementation: 0x107f9af10

// -[SCSmartSwipeFilterView _scrollToSection:animated:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x107f9af24

// -[SCSmartSwipeFilterView filterItemForSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f9afd4

// -[SCSmartSwipeFilterView currentFilterIndex]
// Type encoding: q16@0:8
// Implementation: 0x107f9b004

// -[SCSmartSwipeFilterView _filterIndexFromSection:]
// Type encoding: q24@0:8q16
// Implementation: 0x107f9b014

// -[SCSmartSwipeFilterView _filterSectionFromIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x107f9b070

// -[SCSmartSwipeFilterView _reloadCollectionView]
// Type encoding: v16@0:8
// Implementation: 0x107f9b0e4

// -[SCSmartSwipeFilterView _reloadCollectionViewWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107f9b0ec

// -[SCSmartSwipeFilterView _filterItemAtCenterPoint]
// Type encoding: @16@0:8
// Implementation: 0x107f9b224

// -[SCSmartSwipeFilterView _isItemVisibleAtIndex:]
// Type encoding: B24@0:8q16
// Implementation: 0x107f9b2a0

// -[SCSmartSwipeFilterView _updateDisplayStatusForSection:displayed:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x107f9b3d0

// -[SCSmartSwipeFilterView _updateDisplayStatusForItem:displayed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107f9b424

// -[SCSmartSwipeFilterView _shouldDrawOverlayFilterView:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f9b4ec

// -[SCSmartSwipeFilterView _indexForTopMostAnimatedFilterInCurrentOverlayFilterViews:]
// Type encoding: q24@0:8@16
// Implementation: 0x107f9b548

// -[SCSmartSwipeFilterView drawStaticOverlayFiltersForAlternativeSuperview:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f9b5c4

// -[SCSmartSwipeFilterView hasStaticOverlayFilters]
// Type encoding: B16@0:8
// Implementation: 0x107f9b6a0

// -[SCSmartSwipeFilterView overlayFiltersImage]
// Type encoding: @16@0:8
// Implementation: 0x107f9b750

// -[SCSmartSwipeFilterView videoTrackedImages]
// Type encoding: @16@0:8
// Implementation: 0x107f9b83c

// -[SCSmartSwipeFilterView geoFilterIfOnlyDrawnFilter]
// Type encoding: @16@0:8
// Implementation: 0x107f9b958

// -[SCSmartSwipeFilterView hasAnimatedFilters]
// Type encoding: B16@0:8
// Implementation: 0x107f9ba78

// -[SCSmartSwipeFilterView hasUcoAnimatedFilters]
// Type encoding: B16@0:8
// Implementation: 0x107f9bb9c

// -[SCSmartSwipeFilterView _isUcoFilterView:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f9bcc0

// -[SCSmartSwipeFilterView appliedUCOLensIds]
// Type encoding: @16@0:8
// Implementation: 0x107f9bd28

// -[SCSmartSwipeFilterView hasGenerativeAiUcoFilters]
// Type encoding: B16@0:8
// Implementation: 0x107f9bdcc

// -[SCSmartSwipeFilterView canStackMoreFilters]
// Type encoding: B16@0:8
// Implementation: 0x107f9bf84

// -[SCSmartSwipeFilterView loadingAnimationCommand]
// Type encoding: @16@0:8
// Implementation: 0x107f9bf94

// -[SCSmartSwipeFilterView _subscribeToAttachmentPresentationEventObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9c028

// -[SCSmartSwipeFilterView _stashCurrentFilterItem]
// Type encoding: v16@0:8
// Implementation: 0x107f9c218

// -[SCSmartSwipeFilterView _restoreStashedFilterItem]
// Type encoding: @16@0:8
// Implementation: 0x107f9c260

// -[SCSmartSwipeFilterView currentLensCommand]
// Type encoding: @16@0:8
// Implementation: 0x107f9c2a8

// -[SCSmartSwipeFilterView defaultLensCommand]
// Type encoding: @16@0:8
// Implementation: 0x107f9c2ac

// -[SCSmartSwipeFilterView imageProcessCommandForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f9c300

// -[SCSmartSwipeFilterView updateMediaFiltersAndOutputCommandsWithFilterItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9c360

// -[SCSmartSwipeFilterView didProcessTapInPreviewContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9c3c0

// -[SCSmartSwipeFilterView shouldBlockGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f9c4fc

// -[SCSmartSwipeFilterView commonLoggingParamsBuilder]
// Type encoding: @16@0:8
// Implementation: 0x107f9c65c

// -[SCSmartSwipeFilterView currentViewportTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x107f9c66c

// -[SCSmartSwipeFilterView setCurrentViewportTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x107f9c68c

// -[SCSmartSwipeFilterView filterCollectionView]
// Type encoding: @16@0:8
// Implementation: 0x107f9c6ac

// -[SCSmartSwipeFilterView captionView]
// Type encoding: @16@0:8
// Implementation: 0x107f9c6bc

// -[SCSmartSwipeFilterView previewABProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f9c6cc

// -[SCSmartSwipeFilterView locationProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f9c6dc

// -[SCSmartSwipeFilterView didEndScrollingFilterViewObservable]
// Type encoding: @16@0:8
// Implementation: 0x107f9c6ec

// -[SCSmartSwipeFilterView isVideoSnap]
// Type encoding: B16@0:8
// Implementation: 0x107f9c6fc

// -[SCSmartSwipeFilterView setIsVideoSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f9c70c

// -[SCSmartSwipeFilterView isFromGallery]
// Type encoding: B16@0:8
// Implementation: 0x107f9c71c

// -[SCSmartSwipeFilterView delegate]
// Type encoding: @16@0:8
// Implementation: 0x107f9c72c

// -[SCSmartSwipeFilterView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9c74c

// -[SCSmartSwipeFilterView renderingSessionFactory]
// Type encoding: @16@0:8
// Implementation: 0x107f9c760

// -[SCSmartSwipeFilterView imageProcessCommandProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f9c770

// -[SCSmartSwipeFilterView commonLoggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x107f9c780

// -[SCSmartSwipeFilterView setCommonLoggingParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9c790

// -[SCSmartSwipeFilterView lazyLensIconRepository]
// Type encoding: @16@0:8
// Implementation: 0x107f9c7d0

// -[SCSmartSwipeFilterView setLazyLensIconRepository:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9c7e0

// -[SCSmartSwipeFilterView lensCommandMetadataProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f9c820

// -[SCSmartSwipeFilterView setLensCommandMetadataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9c830

// -[SCSmartSwipeFilterView ucoLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f9c870

// -[SCSmartSwipeFilterView ucoInteractionTracker]
// Type encoding: @16@0:8
// Implementation: 0x107f9c890

// -[SCSmartSwipeFilterView lensCrashLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f9c8a0

// -[SCSmartSwipeFilterView unifiedCameraObjectFilterViewFactory]
// Type encoding: @16@0:8
// Implementation: 0x107f9c8c0

// -[SCSmartSwipeFilterView swipeFilterViewLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x107f9c8d0

// -[SCSmartSwipeFilterView setSwipeFilterViewLayoutGuide:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9c8e0

// -[SCSmartSwipeFilterView lensCTAHandler]
// Type encoding: @16@0:8
// Implementation: 0x107f9c920

// -[SCSmartSwipeFilterView backgroundGradientColors]
// Type encoding: @16@0:8
// Implementation: 0x107f9c930

// -[SCSmartSwipeFilterView setBackgroundGradientColors:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9c940

// -[SCSmartSwipeFilterView didSwipeFilterViewObservable]
// Type encoding: @16@0:8
// Implementation: 0x107f9c980

// -[SCSmartSwipeFilterView filterViewDidEndDeceleratingObservable]
// Type encoding: @16@0:8
// Implementation: 0x107f9c990

// -[SCSmartSwipeFilterView userBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f9c9a0

// -[SCSmartSwipeFilterView setUserBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9c9b0

// -[SCSmartSwipeFilterView filterArranger]
// Type encoding: @16@0:8
// Implementation: 0x107f9c9f0

// -[SCSmartSwipeFilterView setFilterArranger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9ca00

// -[SCSmartSwipeFilterView filterViewDict]
// Type encoding: @16@0:8
// Implementation: 0x107f9ca40

// -[SCSmartSwipeFilterView setFilterViewDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9ca50

// -[SCSmartSwipeFilterView unfilteredView]
// Type encoding: @16@0:8
// Implementation: 0x107f9ca90

// -[SCSmartSwipeFilterView setUnfilteredView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9caa0

// -[SCSmartSwipeFilterView commandConfigurationsForFiltersWithMediaCommands]
// Type encoding: @16@0:8
// Implementation: 0x107f9cae0

// -[SCSmartSwipeFilterView setCommandConfigurationsForFiltersWithMediaCommands:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9caf0

// -[SCSmartSwipeFilterView swipeSequenceNumber]
// Type encoding: Q16@0:8
// Implementation: 0x107f9cb30

// -[SCSmartSwipeFilterView setSwipeSequenceNumber:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107f9cb40

// -[SCSmartSwipeFilterView spectaclesConfig]
// Type encoding: {SCSmartSwipeSpectaclesMediaConfig=BBB}16@0:8
// Implementation: 0x107f9cb50

// -[SCSmartSwipeFilterView rectificationConfig]
// Type encoding: @16@0:8
// Implementation: 0x107f9cb6c

// -[SCSmartSwipeFilterView setRectificationConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9cb7c

// -[SCSmartSwipeFilterView firstSwipeDirection]
// Type encoding: q16@0:8
// Implementation: 0x107f9cbbc

// -[SCSmartSwipeFilterView setFirstSwipeDirection:]
// Type encoding: v24@0:8q16
// Implementation: 0x107f9cbcc

// -[SCSmartSwipeFilterView lastSwipeDirection]
// Type encoding: q16@0:8
// Implementation: 0x107f9cbdc

// -[SCSmartSwipeFilterView setLastSwipeDirection:]
// Type encoding: v24@0:8q16
// Implementation: 0x107f9cbec

// -[SCSmartSwipeFilterView filterSwipeMetadata]
// Type encoding: @16@0:8
// Implementation: 0x107f9cbfc

// -[SCSmartSwipeFilterView setFilterSwipeMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9cc0c

// -[SCSmartSwipeFilterView userSession]
// Type encoding: @16@0:8
// Implementation: 0x107f9cc4c

// -[SCSmartSwipeFilterView setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9cc5c

// -[SCSmartSwipeFilterView unlockableGeoFilterTracker]
// Type encoding: @16@0:8
// Implementation: 0x107f9cc9c

// -[SCSmartSwipeFilterView setUnlockableGeoFilterTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9ccac

// -[SCSmartSwipeFilterView geofilterLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f9ccec

// -[SCSmartSwipeFilterView setGeofilterLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9ccfc

// -[SCSmartSwipeFilterView latencyLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f9cd3c

// -[SCSmartSwipeFilterView setLatencyLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9cd4c

// -[SCSmartSwipeFilterView userInteractionStateLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f9cd8c

// -[SCSmartSwipeFilterView setUserInteractionStateLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9cd9c

// -[SCSmartSwipeFilterView currentSection]
// Type encoding: q16@0:8
// Implementation: 0x107f9cddc

// -[SCSmartSwipeFilterView setCurrentSection:]
// Type encoding: v24@0:8q16
// Implementation: 0x107f9cdec

// -[SCSmartSwipeFilterView contextFilterIsSeen]
// Type encoding: B16@0:8
// Implementation: 0x107f9cdfc

// -[SCSmartSwipeFilterView setContextFilterIsSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f9ce0c

// -[SCSmartSwipeFilterView visualFilterNames]
// Type encoding: @16@0:8
// Implementation: 0x107f9ce1c

// -[SCSmartSwipeFilterView setVisualFilterNames:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9ce2c

// -[SCSmartSwipeFilterView visualFilterIsSeen]
// Type encoding: B16@0:8
// Implementation: 0x107f9ce6c

// -[SCSmartSwipeFilterView setVisualFilterIsSeen:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f9ce7c

// -[SCSmartSwipeFilterView stickerContainer]
// Type encoding: @16@0:8
// Implementation: 0x107f9ce8c

// -[SCSmartSwipeFilterView setStickerContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9ceac

// -[SCSmartSwipeFilterView hasLoggedTTILatency]
// Type encoding: B16@0:8
// Implementation: 0x107f9cec0

// -[SCSmartSwipeFilterView setHasLoggedTTILatency:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f9ced0

// -[SCSmartSwipeFilterView videoPlaybackLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f9cee0

// -[SCSmartSwipeFilterView imagePlaybackLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f9cef0

// -[SCSmartSwipeFilterView ucoInfoViewsHidden]
// Type encoding: B16@0:8
// Implementation: 0x107f9cf00

// -[SCSmartSwipeFilterView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f9cf10

// +[SCSmartSwipeFilterView _filterNameToViewClassMap]
// Type encoding: @16@0:8
// Implementation: 0x107f91304

// +[SCSmartSwipeFilterView _logNameForFilterName:filterView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f900f8

@end
