// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaImportEditorViewController
// Superclass: UIViewController
// Address: 0x112b5ae68

@interface SCMediaImportEditorViewController

// Property: config; attributes: T@"SCMediaImportEditorConfig",&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCMediaImportEditorViewController initWithConfig:ngsmePlayerFactory:trimmingCompletionHandler:ngsmeSnapDocResolver:maxDurationSecondAllowed:]
// Type encoding: @56@0:8@16@24@?32@40d48
// Implementation: 0x107034ea8

// -[SCMediaImportEditorViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107035614

// -[SCMediaImportEditorViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x10703565c

// -[SCMediaImportEditorViewController shouldPopToRootViewController]
// Type encoding: B16@0:8
// Implementation: 0x1070356a4

// -[SCMediaImportEditorViewController shouldPopToRootViewControllerLater]
// Type encoding: B16@0:8
// Implementation: 0x1070356ac

// -[SCMediaImportEditorViewController config]
// Type encoding: @16@0:8
// Implementation: 0x1070356b4

// -[SCMediaImportEditorViewController setConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070356e4

// -[SCMediaImportEditorViewController showLoadingIndicator]
// Type encoding: v16@0:8
// Implementation: 0x107035724

// -[SCMediaImportEditorViewController _didTapCancel]
// Type encoding: v16@0:8
// Implementation: 0x107035898

// -[SCMediaImportEditorViewController _didTapConfirm]
// Type encoding: v16@0:8
// Implementation: 0x10703595c

// -[SCMediaImportEditorViewController _aspectRatioForPlayerViewIsCloseToAspectRatioForContentSize:]
// Type encoding: B32@0:8{CGSize=dd}16
// Implementation: 0x1070359a4

// -[SCMediaImportEditorViewController _completeTrimmingWithSuccess:userCancelled:trimmedTimeRange:error:]
// Type encoding: v80@0:8B16B20{?={?=qiIq}{?=qiIq}}24@72
// Implementation: 0x107035a20

// -[SCMediaImportEditorViewController _contentIsImage]
// Type encoding: B16@0:8
// Implementation: 0x107035b38

// -[SCMediaImportEditorViewController _contentIsVideo]
// Type encoding: B16@0:8
// Implementation: 0x107035b50

// -[SCMediaImportEditorViewController _contentIsMemoriesSnap]
// Type encoding: B16@0:8
// Implementation: 0x107035b68

// -[SCMediaImportEditorViewController _contentIsCameraRollVideo]
// Type encoding: B16@0:8
// Implementation: 0x107035b80

// -[SCMediaImportEditorViewController _createThumbnailFutures]
// Type encoding: v16@0:8
// Implementation: 0x107035bb0

// -[SCMediaImportEditorViewController _createThumbnailFuturesForViewWidth:image:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x107035cc4

// -[SCMediaImportEditorViewController _setupDownloadingModeControls]
// Type encoding: v16@0:8
// Implementation: 0x107035d70

// -[SCMediaImportEditorViewController _setupTrimmingModeControlsOnCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1070363ec

// -[SCMediaImportEditorViewController _onContructedCommonPlayerView]
// Type encoding: v16@0:8
// Implementation: 0x107036a54

// -[SCMediaImportEditorViewController _setupConfirmButton]
// Type encoding: v16@0:8
// Implementation: 0x107036ff4

// -[SCMediaImportEditorViewController _setupPlayPauseButton]
// Type encoding: v16@0:8
// Implementation: 0x1070371c8

// -[SCMediaImportEditorViewController _setupTrimmedDurationLabel]
// Type encoding: v16@0:8
// Implementation: 0x107037298

// -[SCMediaImportEditorViewController _setupTrimmerView]
// Type encoding: v16@0:8
// Implementation: 0x10703731c

// -[SCMediaImportEditorViewController _setupTMTrimmerView]
// Type encoding: v16@0:8
// Implementation: 0x107037510

// -[SCMediaImportEditorViewController _setupDMTrimmerView]
// Type encoding: v16@0:8
// Implementation: 0x10703753c

// -[SCMediaImportEditorViewController _setupProgressBarViewWithHasNotch:]
// Type encoding: v20@0:8B16
// Implementation: 0x107037588

// -[SCMediaImportEditorViewController _setupTMProgressBarViewWithHasNotch:]
// Type encoding: v20@0:8B16
// Implementation: 0x10703761c

// -[SCMediaImportEditorViewController _setupDMProgressBarViewWithHasNotch:]
// Type encoding: v20@0:8B16
// Implementation: 0x107037654

// -[SCMediaImportEditorViewController _trimmerConstraintsWithHasNotch:footerHeight:]
// Type encoding: @28@0:8B16d20
// Implementation: 0x1070376e8

// -[SCMediaImportEditorViewController _trimmerDMConstraintsWithHasNotch:footerHeight:]
// Type encoding: @28@0:8B16d20
// Implementation: 0x107037dbc

// -[SCMediaImportEditorViewController _bringTrimmerElementsToFront]
// Type encoding: v16@0:8
// Implementation: 0x107038610

// -[SCMediaImportEditorViewController _setupSCPlayer]
// Type encoding: v16@0:8
// Implementation: 0x107038680

// -[SCMediaImportEditorViewController _setupNGSMEPlayerWithNGSMESnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070387a8

// -[SCMediaImportEditorViewController _updateConfigWithImportMediaContent:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1070388ec

// -[SCMediaImportEditorViewController _updateCurrentTrimmedTimeRange]
// Type encoding: v16@0:8
// Implementation: 0x107038dbc

// -[SCMediaImportEditorViewController _updateForTrimmingMode]
// Type encoding: v16@0:8
// Implementation: 0x107038e7c

// -[SCMediaImportEditorViewController _updateUsingConfig]
// Type encoding: v16@0:8
// Implementation: 0x1070390e0

// -[SCMediaImportEditorViewController _userDidUpdateTrimmedDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x107039160

// -[SCMediaImportEditorViewController _startPlaybackIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107039204

// -[SCMediaImportEditorViewController _enterTrimmerState:]
// Type encoding: v24@0:8q16
// Implementation: 0x107039278

// -[SCMediaImportEditorViewController _handleDisplayLinkCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x107039398

// -[SCMediaImportEditorViewController _handleSeekCompletion]
// Type encoding: v16@0:8
// Implementation: 0x1070396dc

// -[SCMediaImportEditorViewController _pausePlayer]
// Type encoding: v16@0:8
// Implementation: 0x1070397b8

// -[SCMediaImportEditorViewController _requestSeekToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x107039830

// -[SCMediaImportEditorViewController _setupDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x107039a8c

// -[SCMediaImportEditorViewController _teardownDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x107039b34

// -[SCMediaImportEditorViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x107039b7c

// -[SCMediaImportEditorViewController snapSegmentExpandedCell:didChangeEndTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107039b84

// -[SCMediaImportEditorViewController snapSegmentExpandedCell:didChangeStartTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107039bf4

// -[SCMediaImportEditorViewController snapSegmentExpandedCell:didSeekToTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x107039c64

// -[SCMediaImportEditorViewController snapSegmentExpandedCell:didTrimSegmentToRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x107039cf4

// -[SCMediaImportEditorViewController snapSegmentExpandedCellFinishedSeeking:]
// Type encoding: v24@0:8@16
// Implementation: 0x107039d3c

// -[SCMediaImportEditorViewController snapSegmentExpandedCellShouldHandleTouch:]
// Type encoding: B24@0:8@16
// Implementation: 0x107039d74

// -[SCMediaImportEditorViewController snapSegmentExpandedCellShouldShowDeleteButton:]
// Type encoding: B24@0:8@16
// Implementation: 0x107039d7c

// -[SCMediaImportEditorViewController snapSegmentExpandedCellDidPressDelete:]
// Type encoding: v24@0:8@16
// Implementation: 0x107039d84

// -[SCMediaImportEditorViewController snapSegmentExpandedCell:didChangeSelectedTimeRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x107039d88

// -[SCMediaImportEditorViewController snapSegmentExpandedCell:didChangeSelectedTimeSlice:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x107039d8c

// -[SCMediaImportEditorViewController didTapOnThumbnailsActionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107039d90

// -[SCMediaImportEditorViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107039de8

@end
