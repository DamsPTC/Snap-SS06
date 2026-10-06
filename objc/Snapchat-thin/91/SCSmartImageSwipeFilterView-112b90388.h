// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSmartImageSwipeFilterView
// Superclass: SCSmartSwipeFilterView
// Address: 0x112b90388

@interface SCSmartImageSwipeFilterView

// Property: image; attributes: T@"UIImage",&,N,V_image
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: imageProcessCommandsObservable; attributes: T@"SCObservable",R,N,V_imageProcessCommandsObservable
// Property: playbackEventsObservable; attributes: T@"SCObservable",R,N,V_playbackEventsSubject
// Property: isTranscoding; attributes: TB,N,V_isTranscoding
// Property: isPlaybackVisible; attributes: TB,N,V_isPlaybackVisible

// -[SCSmartImageSwipeFilterView initWithFrame:filterArranger:commonLoggingParamsBuilder:geoFilterLogger:latencyLogger:userInteractionStateLogger:imagePlaybackLogger:spectaclesConfig:rectificationConfig:shouldScaleImage:isCameraRollMedia:userSession:renderingSessionFactory:imageProcessCommandProvider:cropBackgroundAnimationImages:cropBackgroundAnimationColors:isFromGallery:isDirectlyFromCamera:commandMapper:ucoCarouselConfigProvider:lazyLensIconRepository:unifiedCameraObjectFilterViewFactory:previewABProvider:ucoLogger:ucoInteractionTracker:lensCrashLogger:filterViewLayoutGuide:lensCTAHandler:locationProvider:userBlizzardLogger:lensTranscodingProvider:]
// Type encoding: @267@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56@64@72@80@88{SCSmartSwipeSpectaclesMediaConfig=BBB}96@99B107B111@115@123@131@139@147B155B159@163@171@179@187@195@203@211@219@227@235@243@251@259
// Implementation: 0x107f92240

// -[SCSmartImageSwipeFilterView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107f9268c

// -[SCSmartImageSwipeFilterView updateMediaViewScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x107f926e0

// -[SCSmartImageSwipeFilterView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107f92734

// -[SCSmartImageSwipeFilterView _setupImageProcessSessionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107f927d4

// -[SCSmartImageSwipeFilterView setImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f92a78

// -[SCSmartImageSwipeFilterView _updateScaledImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f92bd8

// -[SCSmartImageSwipeFilterView filteredImageWithCroppingAspectRatio:transcodingTaskId:completionHandler:]
// Type encoding: v40@0:8d16@24@?32
// Implementation: 0x107f92df0

// -[SCSmartImageSwipeFilterView ucoImageWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107f930a4

// -[SCSmartImageSwipeFilterView _scaledImageWithAppliedCommands:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107f93138

// -[SCSmartImageSwipeFilterView setViewportTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x107f934f4

// -[SCSmartImageSwipeFilterView setCropBackgroundAnimating:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f93570

// -[SCSmartImageSwipeFilterView setBackgroundCommandWithColors:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f93574

// -[SCSmartImageSwipeFilterView selectFilterNames:forTypes:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107f93638

// -[SCSmartImageSwipeFilterView updateMediaFiltersAndCommands]
// Type encoding: v16@0:8
// Implementation: 0x107f93828

// -[SCSmartImageSwipeFilterView areResourcesDownloadedForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f938b8

// -[SCSmartImageSwipeFilterView updateMediaFilterMaskForItem:relativeOffset:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107f939d0

// -[SCSmartImageSwipeFilterView _makeMediaCommandsForCommandConfigurations:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f93a90

// -[SCSmartImageSwipeFilterView _updateCommands]
// Type encoding: v16@0:8
// Implementation: 0x107f93cc0

// -[SCSmartImageSwipeFilterView updateMediaFiltersAndOutputCommandsWithFilterItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f940b8

// -[SCSmartImageSwipeFilterView stopDisplay]
// Type encoding: v16@0:8
// Implementation: 0x107f9413c

// -[SCSmartImageSwipeFilterView startDisplay]
// Type encoding: v16@0:8
// Implementation: 0x107f94154

// -[SCSmartImageSwipeFilterView markCurrentFrameAsDirty]
// Type encoding: v16@0:8
// Implementation: 0x107f941a4

// -[SCSmartImageSwipeFilterView setShouldRenderContinuously:isExportMode:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x107f941b4

// -[SCSmartImageSwipeFilterView pendingUnloadCommandCleanup]
// Type encoding: v16@0:8
// Implementation: 0x107f94204

// -[SCSmartImageSwipeFilterView releaseUnloadCommandCleanup]
// Type encoding: v16@0:8
// Implementation: 0x107f94214

// -[SCSmartImageSwipeFilterView holdExistingLensCommandsExcept:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f94224

// -[SCSmartImageSwipeFilterView restorePreviousLensCommand]
// Type encoding: v16@0:8
// Implementation: 0x107f94294

// -[SCSmartImageSwipeFilterView removeAllowlistedCommand]
// Type encoding: v16@0:8
// Implementation: 0x107f942fc

// -[SCSmartImageSwipeFilterView _commandsForFilteredImageInLaguna]
// Type encoding: @16@0:8
// Implementation: 0x107f9430c

// -[SCSmartImageSwipeFilterView _filteredImageWithImage:outputSize:commands:orientation:completion:]
// Type encoding: v64@0:8@16{CGSize=dd}24@40q48@?56
// Implementation: 0x107f943c8

// -[SCSmartImageSwipeFilterView _stackedCommandsWithCommandAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107f94634

// -[SCSmartImageSwipeFilterView _lensIdsFromCommands:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f94708

// -[SCSmartImageSwipeFilterView _makeUCOCommandGenerationRulesProvider]
// Type encoding: @16@0:8
// Implementation: 0x107f947ac

// -[SCSmartImageSwipeFilterView removeStackedFilterForType:filterName:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107f9483c

// -[SCSmartImageSwipeFilterView filterArrangerDidChangeVisualFilterNamesProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f9488c

// -[SCSmartImageSwipeFilterView filterArranger:didApplyToolFilterName:config:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f948f0

// -[SCSmartImageSwipeFilterView filterArranger:didUnapplyToolFilterName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f94940

// -[SCSmartImageSwipeFilterView colorFilterSessionDidRenderImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f94990

// -[SCSmartImageSwipeFilterView colorFilterSessionImageRenderFailedWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f94a60

// -[SCSmartImageSwipeFilterView commandManager:didUpdateMappedCommands:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f94aac

// -[SCSmartImageSwipeFilterView defaultLensCommand]
// Type encoding: @16@0:8
// Implementation: 0x107f94cc8

// -[SCSmartImageSwipeFilterView imageProcessCommandForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f94d60

// -[SCSmartImageSwipeFilterView _isCommandCacheNeeded]
// Type encoding: B16@0:8
// Implementation: 0x107f94d64

// -[SCSmartImageSwipeFilterView _processCommandsFromCommands:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f94ecc

// -[SCSmartImageSwipeFilterView imageProcessCommandsObservable]
// Type encoding: @16@0:8
// Implementation: 0x107f95104

// -[SCSmartImageSwipeFilterView playbackEventsObservable]
// Type encoding: @16@0:8
// Implementation: 0x107f95114

// -[SCSmartImageSwipeFilterView imagePlaybackLogger]
// Type encoding: @16@0:8
// Implementation: 0x107f95124

// -[SCSmartImageSwipeFilterView isPlaybackVisible]
// Type encoding: B16@0:8
// Implementation: 0x107f95134

// -[SCSmartImageSwipeFilterView setIsPlaybackVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f95144

// -[SCSmartImageSwipeFilterView isTranscoding]
// Type encoding: B16@0:8
// Implementation: 0x107f95154

// -[SCSmartImageSwipeFilterView setIsTranscoding:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f95164

// -[SCSmartImageSwipeFilterView image]
// Type encoding: @16@0:8
// Implementation: 0x107f95174

// -[SCSmartImageSwipeFilterView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f95184

@end
