// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraVerticalToolbar
// Superclass: SCFeature
// Address: 0x112ad27e8

@interface SCCameraVerticalToolbar

// Property: expandButton; attributes: T@"SCGrowingButton<SCCameraToolbarButton>",&,N,V_expandButton
// Property: collapseButton; attributes: T@"SCGrowingButton<SCCameraToolbarButton>",&,N,V_collapseButton
// Property: expandAndCollapseButton; attributes: T@"SCGrowingButton<SCCameraToolbarButton>",&,N,V_expandAndCollapseButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: toolbarView; attributes: T@"UIView",R,N
// Property: expanded; attributes: TB,R,N,GisExpanded
// Property: cameraToolbarExpandCollapse; attributes: T@"SCObservable",R,N,V_cameraToolbarSubject
// Property: cameraToolbarItemTapped; attributes: T@"SCObservable",R,N,V_cameraToolbarItemTappedSubject
// Property: cameraModeLabelsWillShowObservable; attributes: T@"SCObservable",R,N,V_cameraModeLabelsWillShowSubject
// Property: cameraToolbarVisibilityObservable; attributes: T@"SCObservable",R,N,V_cameraToolbarVisibilitySubject

// -[SCCameraVerticalToolbar initWithApplicationLifecycleEvents:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:cameraViewType:cameraUserActionLogger:verticalToolbarConfiguration:cameraHardwareResource:cameraConfiguration:afterCaptureActionTracker:multiCamModeConfig:userPreferences:cameraToolbarUIOrchestrator:appStartExperimentReader:circumstanceEngine:]
// Type encoding: @128@0:8@16@24@32q40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x10087efd8

// -[SCCameraVerticalToolbar dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061e4c6c

// -[SCCameraVerticalToolbar reloadToolbar:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008b4954

// -[SCCameraVerticalToolbar _reloadToolbar:duration:additionalAnimations:completion:]
// Type encoding: v44@0:8B16d20@?28@?36
// Implementation: 0x1008817bc

// -[SCCameraVerticalToolbar _reloadToolbar:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1008ad654

// -[SCCameraVerticalToolbar addToolbarItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x100892130

// -[SCCameraVerticalToolbar _changeToolbarItemPosition:newPosition:reloadToolbar:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x1061e4cc0

// -[SCCameraVerticalToolbar _addToolbarItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008924f0

// -[SCCameraVerticalToolbar showToolbarItem:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1008b4768

// -[SCCameraVerticalToolbar hideToolbarItem:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1008ad4d0

// -[SCCameraVerticalToolbar isExpanded]
// Type encoding: B16@0:8
// Implementation: 0x100881794

// -[SCCameraVerticalToolbar _expandToolbarAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1061e4e94

// -[SCCameraVerticalToolbar collapseToolbarAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061e4f28

// -[SCCameraVerticalToolbar _collapseToolbarAnimated:isSelectionChanged:completion:]
// Type encoding: v32@0:8B16B20@?24
// Implementation: 0x1061e4f34

// -[SCCameraVerticalToolbar isItemHidden:]
// Type encoding: B24@0:8@16
// Implementation: 0x1008a7498

// -[SCCameraVerticalToolbar indexOfItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1061e4f54

// -[SCCameraVerticalToolbar viewForToolbarItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061e4fbc

// -[SCCameraVerticalToolbar buttonForToolbarItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061e4fc0

// -[SCCameraVerticalToolbar _buttonForToolbarItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1008a7550

// -[SCCameraVerticalToolbar toolbarView]
// Type encoding: @16@0:8
// Implementation: 0x1061e4fcc

// -[SCCameraVerticalToolbar cancelActiveToolbarGestures]
// Type encoding: v16@0:8
// Implementation: 0x1061e4fdc

// -[SCCameraVerticalToolbar setAllItemsHidden:includingAlwaysShowItems:animated:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x1008c5f24

// -[SCCameraVerticalToolbar updateToolbarPositionAnimated:duration:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x100c29850

// -[SCCameraVerticalToolbar accessibilityElements]
// Type encoding: @16@0:8
// Implementation: 0x1061e51ac

// -[SCCameraVerticalToolbar setToolbarItem:selected:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1061e525c

// -[SCCameraVerticalToolbar tapToolbarItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e5264

// -[SCCameraVerticalToolbar setToolbarItemWithUIItem:selected:animatedScaling:]
// Type encoding: v32@0:8q16B24B28
// Implementation: 0x1061e530c

// -[SCCameraVerticalToolbar pinToolbarItemsToTopFromFeatures:requester:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061e5448

// -[SCCameraVerticalToolbar unpinToolbarItemsFromTopFromFeatures:requester:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061e56c8

// -[SCCameraVerticalToolbar setToolbarItem:selected:animatedScaling:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x1061e58c4

// -[SCCameraVerticalToolbar isNewRecentSlotEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1061e59ac

// -[SCCameraVerticalToolbar configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10087fd50

// -[SCCameraVerticalToolbar configureLayout:]
// Type encoding: v24@0:8@16
// Implementation: 0x10087fd3c

// -[SCCameraVerticalToolbar handleLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e59b4

// -[SCCameraVerticalToolbar activate]
// Type encoding: v16@0:8
// Implementation: 0x1061e59f4

// -[SCCameraVerticalToolbar _setupDebug]
// Type encoding: v16@0:8
// Implementation: 0x10088d740

// -[SCCameraVerticalToolbar resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1061e5a30

// -[SCCameraVerticalToolbar usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1061e5a40

// -[SCCameraVerticalToolbar _upsellSlotContentForLogging]
// Type encoding: @16@0:8
// Implementation: 0x1061e5b24

// -[SCCameraVerticalToolbar shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x1061e5d20

// -[SCCameraVerticalToolbar _expandIconImageName]
// Type encoding: @16@0:8
// Implementation: 0x1008ad668

// -[SCCameraVerticalToolbar _updateExpandAndCollapseButton]
// Type encoding: v16@0:8
// Implementation: 0x1008818e8

// -[SCCameraVerticalToolbar _lazyLoadExpandedItems]
// Type encoding: v16@0:8
// Implementation: 0x1061e6078

// -[SCCameraVerticalToolbar _areBackgroundViewsVisibleForVisibilityStatus:]
// Type encoding: B24@0:8Q16
// Implementation: 0x100881efc

// -[SCCameraVerticalToolbar _didUpdateUIVisibilityState:animated:didSelectionChange:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x100881384

// -[SCCameraVerticalToolbar _isItemVisibilityAllowedForVisibilityStatus:item:isSelected:]
// Type encoding: B36@0:8Q16@24B32
// Implementation: 0x1008922e4

// -[SCCameraVerticalToolbar _fixedTopItemsForVisibilityStatus:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1008824d8

// -[SCCameraVerticalToolbar _runtimePinnedTopItemTypes]
// Type encoding: @16@0:8
// Implementation: 0x1008825c4

// -[SCCameraVerticalToolbar _effectiveFixedTopItemsForVisibilityStatus:]
// Type encoding: @24@0:8Q16
// Implementation: 0x100882420

// -[SCCameraVerticalToolbar _observeUIStateOrchestrator]
// Type encoding: v16@0:8
// Implementation: 0x100881194

// -[SCCameraVerticalToolbar _beginToolbarBulkLoad]
// Type encoding: v16@0:8
// Implementation: 0x10088dbbc

// -[SCCameraVerticalToolbar _endToolbarBulkLoad]
// Type encoding: v16@0:8
// Implementation: 0x1008b4940

// -[SCCameraVerticalToolbar _createAndSetupView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10087fdc4

// -[SCCameraVerticalToolbar _createToolbarView]
// Type encoding: @16@0:8
// Implementation: 0x100880b5c

// -[SCCameraVerticalToolbar _createToolbarBackgroundView:]
// Type encoding: @24@0:8@16
// Implementation: 0x10088011c

// -[SCCameraVerticalToolbar _setBackgroundViewsVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x10088306c

// -[SCCameraVerticalToolbar _setupToolbarViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10088d61c

// -[SCCameraVerticalToolbar _requestOrchestratorStateChangeWithState:animated:didSelectionChange:requester:completion:]
// Type encoding: v48@0:8@16B24B28@32@?40
// Implementation: 0x1008c5fa4

// -[SCCameraVerticalToolbar _updateVisiblityOfChildItemOfItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e626c

// -[SCCameraVerticalToolbar _setChildItemVisible:forItem:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1061e63bc

// -[SCCameraVerticalToolbar _isChildItemVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061e6420

// -[SCCameraVerticalToolbar _actionTypeIsPositive:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061e6480

// -[SCCameraVerticalToolbar _willReturnToCamera:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061e64a0

// -[SCCameraVerticalToolbar _onCameraToolbarButtonTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e64c4

// -[SCCameraVerticalToolbar _shouldDelesectSelectedButtonsForToolbarItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061e657c

// -[SCCameraVerticalToolbar _isFreeToSelectToolbarItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061e66f0

// -[SCCameraVerticalToolbar _cameraToolbarItemDidChangeSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e66f8

// -[SCCameraVerticalToolbar _cameraToolbarItemDidChangeShowingWidget:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e6800

// -[SCCameraVerticalToolbar _updateNewBadgeStatus]
// Type encoding: v16@0:8
// Implementation: 0x1061e688c

// -[SCCameraVerticalToolbar _updateLayout]
// Type encoding: v16@0:8
// Implementation: 0x100881f1c

// -[SCCameraVerticalToolbar _layoutButtons:currentY:]
// Type encoding: d32@0:8@?16d24
// Implementation: 0x1008822ac

// -[SCCameraVerticalToolbar _positionButtons:startingAtY:visibleItemProcessingBlock:]
// Type encoding: d40@0:8@16d24@?32
// Implementation: 0x100882b0c

// -[SCCameraVerticalToolbar _positionExpandAndCollapseButtonIfNeededAtY:haveToolbarButtonsBeenLaidOut:]
// Type encoding: d28@0:8d16B24
// Implementation: 0x100882208

// -[SCCameraVerticalToolbar _positionView:atY:]
// Type encoding: d32@0:8@16d24
// Implementation: 0x1008addf4

// -[SCCameraVerticalToolbar _updateAlpha]
// Type encoding: v16@0:8
// Implementation: 0x100881cfc

// -[SCCameraVerticalToolbar _configureButtonsAndTitlesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x100882efc

// -[SCCameraVerticalToolbar _showTitlesAfterCaptureIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1061e6a88

// -[SCCameraVerticalToolbar _showTitlesForTimer:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061e6ac0

// -[SCCameraVerticalToolbar _updateTitleVisibility]
// Type encoding: v16@0:8
// Implementation: 0x1008a0650

// -[SCCameraVerticalToolbar _resetTitleVisibilityTimer]
// Type encoding: v16@0:8
// Implementation: 0x1061e6b70

// -[SCCameraVerticalToolbar _shouldHideToolbarItem:withButton:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1008a016c

// -[SCCameraVerticalToolbar startAnimation:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1061e6bd0

// -[SCCameraVerticalToolbar _isItemAvailableForUpsellSlot:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061e6c34

// -[SCCameraVerticalToolbar _updateUpsellSlotCandidates]
// Type encoding: v16@0:8
// Implementation: 0x1061e6d00

// -[SCCameraVerticalToolbar _selectUpsellSlotCandidateFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x1008d1390

// -[SCCameraVerticalToolbar _updateUpsellSlotLastUsedDate]
// Type encoding: v16@0:8
// Implementation: 0x1061e6f20

// -[SCCameraVerticalToolbar _setUpsellSlotLastUsedDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e7084

// -[SCCameraVerticalToolbar _shouldShowUpsellSlot]
// Type encoding: q16@0:8
// Implementation: 0x1008d1284

// -[SCCameraVerticalToolbar _updateUpsellSlotIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1008d0e5c

// -[SCCameraVerticalToolbar _removeFromUpsellSlot]
// Type encoding: v16@0:8
// Implementation: 0x1061e7114

// -[SCCameraVerticalToolbar _moveToolbarItemOrChild:toPosition:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1061e7404

// -[SCCameraVerticalToolbar _isCameraModeExcludedFromUpsellSlot:]
// Type encoding: B24@0:8q16
// Implementation: 0x1061e7480

// -[SCCameraVerticalToolbar _shouldShowCameraLabelsOnLaunch:]
// Type encoding: B24@0:8@16
// Implementation: 0x10087f86c

// -[SCCameraVerticalToolbar _shouldShowCameraLabelsAfterCapture]
// Type encoding: B16@0:8
// Implementation: 0x1061e7494

// -[SCCameraVerticalToolbar startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10087f98c

// -[SCCameraVerticalToolbar stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1061e7800

// -[SCCameraVerticalToolbar _willBeginVideoRecording:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e7834

// -[SCCameraVerticalToolbar _didFinishRecording:session:recordedVideo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061e7844

// -[SCCameraVerticalToolbar _didFailRecording:session:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061e7854

// -[SCCameraVerticalToolbar _didCancelRecording:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061e7864

// -[SCCameraVerticalToolbar cameraToolbarButtonCanChangeSelected:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061e7874

// -[SCCameraVerticalToolbar cameraToolbarButtonDeselectCurrentButtonIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e7adc

// -[SCCameraVerticalToolbar _deselectIncompatibleSelectedButtonsForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e7cb0

// -[SCCameraVerticalToolbar configureWithCameraToolbarProviders:shouldLoadDuringStartup:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10088d8f8

// -[SCCameraVerticalToolbar _configureStartupToolbarFeatures:]
// Type encoding: v24@0:8@16
// Implementation: 0x10088d960

// -[SCCameraVerticalToolbar _configureNonStartupToolbarFeaturesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1061e7e14

// -[SCCameraVerticalToolbar cameraToolbarVisibilityObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061e7f54

// -[SCCameraVerticalToolbar cameraToolbarItemTapped]
// Type encoding: @16@0:8
// Implementation: 0x1008b1f08

// -[SCCameraVerticalToolbar cameraModeLabelsWillShowObservable]
// Type encoding: @16@0:8
// Implementation: 0x1008b2974

// -[SCCameraVerticalToolbar cameraToolbarExpandCollapse]
// Type encoding: @16@0:8
// Implementation: 0x1008b1ef8

// -[SCCameraVerticalToolbar expandButton]
// Type encoding: @16@0:8
// Implementation: 0x1061e7f64

// -[SCCameraVerticalToolbar setExpandButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e7f74

// -[SCCameraVerticalToolbar collapseButton]
// Type encoding: @16@0:8
// Implementation: 0x1061e7fb4

// -[SCCameraVerticalToolbar setCollapseButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e7fc4

// -[SCCameraVerticalToolbar expandAndCollapseButton]
// Type encoding: @16@0:8
// Implementation: 0x1061e8004

// -[SCCameraVerticalToolbar setExpandAndCollapseButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e8014

// -[SCCameraVerticalToolbar .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061e8054

@end
