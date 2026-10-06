// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureLensExplorerImpl
// Superclass: NSObject
// Address: 0x112a9d598

@interface SCPreviewFeatureLensExplorerImpl

// Property: toolbarItemViewModel; attributes: T@"SCPreviewToolbarItemViewModel",&,N,V_toolbarItemViewModel
// Property: lensExplorerEventObservable; attributes: T@"SCObservable",R,N,V_eventSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: toolbarItemViewModelObservable; attributes: T@"SCObservable",R,N

// -[SCPreviewFeatureLensExplorerImpl initWithUcoDataFetcher:carouselController:stackingController:previewGeoFilterPicker:lensIconRepository:userSession:previewConfiguration:previewScopeServices:previewABServices:ucoLensScheduleService:lensSharedServices:geoFilterImagesFetcher:mainQueuePerformer:arBar:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x105d5e29c

// -[SCPreviewFeatureLensExplorerImpl lensModeProvider]
// Type encoding: @16@0:8
// Implementation: 0x105d5e710

// -[SCPreviewFeatureLensExplorerImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d5e758

// -[SCPreviewFeatureLensExplorerImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x105d5e798

// -[SCPreviewFeatureLensExplorerImpl reloadToolbarItemViewModel]
// Type encoding: v16@0:8
// Implementation: 0x105d5e914

// -[SCPreviewFeatureLensExplorerImpl _toolbarItemIcon]
// Type encoding: @16@0:8
// Implementation: 0x105d5e9d8

// -[SCPreviewFeatureLensExplorerImpl toolbarItemConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105d5eaa8

// -[SCPreviewFeatureLensExplorerImpl allPickedLenses]
// Type encoding: @16@0:8
// Implementation: 0x105d5eb78

// -[SCPreviewFeatureLensExplorerImpl presentLensExplorerFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d5eba0

// -[SCPreviewFeatureLensExplorerImpl restoreFilterInDirectorModeWithLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d5ebe8

// -[SCPreviewFeatureLensExplorerImpl _setupToolbarItemWithLensID:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d5ebf0

// -[SCPreviewFeatureLensExplorerImpl _fetchLensForFilterID:lens:withPerformer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105d5ec98

// -[SCPreviewFeatureLensExplorerImpl _handleLensSelectionWith:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d5ee54

// -[SCPreviewFeatureLensExplorerImpl _fetchGeoFilterImageInfoForLens:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105d5f32c

// -[SCPreviewFeatureLensExplorerImpl _iconImageFutureForLens:iconURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d5f794

// -[SCPreviewFeatureLensExplorerImpl _handleLensSelectionWithLensID:iconImage:config:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d5f85c

// -[SCPreviewFeatureLensExplorerImpl _configureSwipeFilterViewWithLensID:selectionIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105d5faf4

// -[SCPreviewFeatureLensExplorerImpl _removeCurrentLensAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d5fbe0

// -[SCPreviewFeatureLensExplorerImpl _cleanUpWithError:shouldResetCurrentLens:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d5fc5c

// -[SCPreviewFeatureLensExplorerImpl _showLoadingIndicator]
// Type encoding: v16@0:8
// Implementation: 0x105d5fdf0

// -[SCPreviewFeatureLensExplorerImpl _hideLoadingIndicator]
// Type encoding: v16@0:8
// Implementation: 0x105d5ffec

// -[SCPreviewFeatureLensExplorerImpl _handleDidPickLensWithLensId:lens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d60020

// -[SCPreviewFeatureLensExplorerImpl applyLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d602c0

// -[SCPreviewFeatureLensExplorerImpl removeCurrentLens]
// Type encoding: v16@0:8
// Implementation: 0x105d60320

// -[SCPreviewFeatureLensExplorerImpl _handleCurrentLensIdFromTweakIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105d60378

// -[SCPreviewFeatureLensExplorerImpl _setupMockLensSelection]
// Type encoding: v16@0:8
// Implementation: 0x105d60500

// -[SCPreviewFeatureLensExplorerImpl setToolbarItemViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d60504

// -[SCPreviewFeatureLensExplorerImpl _updateToolbarButtonWithImage:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d605a4

// -[SCPreviewFeatureLensExplorerImpl _updateLegacyToolbarButtonWithImage:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105d6060c

// -[SCPreviewFeatureLensExplorerImpl toolbarItemViewModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d606d4

// -[SCPreviewFeatureLensExplorerImpl lensExplorerEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d606fc

// -[SCPreviewFeatureLensExplorerImpl toolbarItemViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105d60704

// -[SCPreviewFeatureLensExplorerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d6070c

@end
