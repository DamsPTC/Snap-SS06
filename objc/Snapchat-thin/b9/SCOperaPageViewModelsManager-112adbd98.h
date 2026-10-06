// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPageViewModelsManager
// Superclass: NSObject
// Address: 0x112adbd98

@interface SCOperaPageViewModelsManager

// Property: delegate; attributes: T@"NSObject<SCOperaPageViewModelsManagerDelegate>",W,N,V_delegate
// Property: currentViewModel; attributes: T@"SCOperaPageViewModel",&,N,V_currentViewModel
// Property: loadedPageIDToModelMap; attributes: T@"NSDictionary",R,C,N,V_loadedPageIDToModelMap
// Property: preloadedViewModels; attributes: T@"NSArray",R,C,N,V_preloadedViewModels
// Property: viewModelsToPreload; attributes: T@"NSArray",C,N,V_viewModelsToPreload

// -[SCOperaPageViewModelsManager initWithStartingViewModel:modelManipulator:configProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10635fe58

// -[SCOperaPageViewModelsManager initWithStartingViewModel:modelManipulator:kvoController:configProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10635fe64

// -[SCOperaPageViewModelsManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106360008

// -[SCOperaPageViewModelsManager setViewModelsToPreload:]
// Type encoding: v24@0:8@16
// Implementation: 0x106360050

// -[SCOperaPageViewModelsManager setCurrentViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106360304

// -[SCOperaPageViewModelsManager preloadedNeighbourSnapshotsOfViewModel:preloadDistance:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106360384

// -[SCOperaPageViewModelsManager _viewModels:withinDistance:ofViewModel:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106360450

// -[SCOperaPageViewModelsManager _observeViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063605ec

// -[SCOperaPageViewModelsManager _viewModelConnectionDidChange]
// Type encoding: v16@0:8
// Implementation: 0x106360a44

// -[SCOperaPageViewModelsManager _schedulePendingPreloadRebuildFlushAtEndOfTurn]
// Type encoding: v16@0:8
// Implementation: 0x106360b88

// -[SCOperaPageViewModelsManager _flushPendingPreloadRebuild]
// Type encoding: v16@0:8
// Implementation: 0x106360ca4

// -[SCOperaPageViewModelsManager _didChangePageForPageViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106360d00

// -[SCOperaPageViewModelsManager didLandOnViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106360e84

// -[SCOperaPageViewModelsManager loadedViewModelsForDimension:]
// Type encoding: @24@0:8q16
// Implementation: 0x106360f20

// -[SCOperaPageViewModelsManager _updateLoadedViewModelsBasedOnCurrentViewModel]
// Type encoding: v16@0:8
// Implementation: 0x106360f78

// -[SCOperaPageViewModelsManager _loadedViewModelsForDimension:]
// Type encoding: @24@0:8q16
// Implementation: 0x1063610bc

// -[SCOperaPageViewModelsManager _loadedViewModelsForDimension:direction:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x106361184

// -[SCOperaPageViewModelsManager _updateLoadedViewModelsForAllDimensions:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063613d8

// -[SCOperaPageViewModelsManager _updateLoadedViewModelsForViewModelsToPreload:]
// Type encoding: v24@0:8@16
// Implementation: 0x106361660

// -[SCOperaPageViewModelsManager _addViewModelsWithInitialModel:maxModelsToAdd:nextModelGenerator:callback:]
// Type encoding: v44@0:8@16i24@?28@?36
// Implementation: 0x106361814

// -[SCOperaPageViewModelsManager _addViewModelsWithInitialModel:pageIDToViewModelToPreload:pageIDToViewModelsWithinPreloadDistance:callback:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106361944

// -[SCOperaPageViewModelsManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x106361a90

// -[SCOperaPageViewModelsManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106361aa8

// -[SCOperaPageViewModelsManager currentViewModel]
// Type encoding: @16@0:8
// Implementation: 0x106361ab4

// -[SCOperaPageViewModelsManager loadedPageIDToModelMap]
// Type encoding: @16@0:8
// Implementation: 0x106361abc

// -[SCOperaPageViewModelsManager preloadedViewModels]
// Type encoding: @16@0:8
// Implementation: 0x106361ac4

// -[SCOperaPageViewModelsManager viewModelsToPreload]
// Type encoding: @16@0:8
// Implementation: 0x106361acc

// -[SCOperaPageViewModelsManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106361ad4

@end
