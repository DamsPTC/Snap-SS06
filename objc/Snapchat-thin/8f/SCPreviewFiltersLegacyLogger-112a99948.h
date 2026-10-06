// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFiltersLegacyLogger
// Superclass: NSObject
// Address: 0x112a99948

@interface SCPreviewFiltersLegacyLogger

// Property: venueLoggingParameters; attributes: T@"SCPreviewFilterVenueLoggingParameters",R,N
// Property: filterCommonSendParameters; attributes: T@"NSDictionary",R,C,N
// Property: filterImageHealthCheckParameters; attributes: T@"NSDictionary",R,C,N

// -[SCPreviewFiltersLegacyLogger initWithConfiguration:swipeFiltersProvider:smartCarouselFilterArranger:infoStickerDataSource:lensExplorer:previewABProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105cdad94

// -[SCPreviewFiltersLegacyLogger _smartSwipeFilterViewLogger]
// Type encoding: @16@0:8
// Implementation: 0x105cdb03c

// -[SCPreviewFiltersLegacyLogger updateCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cdb084

// -[SCPreviewFiltersLegacyLogger _updatePostCaptureLensIDWithBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cdb650

// -[SCPreviewFiltersLegacyLogger _updateLoggingParametersForGeoFilterView:builder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cdb894

// -[SCPreviewFiltersLegacyLogger _updateLoggingParametersForVenueFilterView:builder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cdbaa4

// -[SCPreviewFiltersLegacyLogger _prepareTapCountForOverlayFilterView:filterType:builder:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x105cdbb20

// -[SCPreviewFiltersLegacyLogger _updateInteractionLoggingParametersWithBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cdbb60

// -[SCPreviewFiltersLegacyLogger venueLoggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x105cdbb88

// -[SCPreviewFiltersLegacyLogger _syntheticVenueLoggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x105cdbce4

// -[SCPreviewFiltersLegacyLogger filterCommonSendParameters]
// Type encoding: @16@0:8
// Implementation: 0x105cdbe04

// -[SCPreviewFiltersLegacyLogger filterImageHealthCheckParameters]
// Type encoding: @16@0:8
// Implementation: 0x105cdbe0c

// -[SCPreviewFiltersLegacyLogger _filterCommonSendParametersWithCanIncludeAltitude:]
// Type encoding: @20@0:8B16
// Implementation: 0x105cdbe14

// -[SCPreviewFiltersLegacyLogger _isAnyFilterAvailable]
// Type encoding: B16@0:8
// Implementation: 0x105cdc044

// -[SCPreviewFiltersLegacyLogger logViewingPaused]
// Type encoding: v16@0:8
// Implementation: 0x105cdc0a8

// -[SCPreviewFiltersLegacyLogger logViewingResumed]
// Type encoding: v16@0:8
// Implementation: 0x105cdc0d8

// -[SCPreviewFiltersLegacyLogger logViewingEnded]
// Type encoding: v16@0:8
// Implementation: 0x105cdc108

// -[SCPreviewFiltersLegacyLogger logSnapCreationFlowEnded]
// Type encoding: v16@0:8
// Implementation: 0x105cdc138

// -[SCPreviewFiltersLegacyLogger logStartTTIMeasurement]
// Type encoding: v16@0:8
// Implementation: 0x105cdc18c

// -[SCPreviewFiltersLegacyLogger logFilterSelectionReset]
// Type encoding: v16@0:8
// Implementation: 0x105cdc1bc

// -[SCPreviewFiltersLegacyLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105cdc1cc

@end
