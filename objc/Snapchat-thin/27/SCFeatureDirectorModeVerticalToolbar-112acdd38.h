// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureDirectorModeVerticalToolbar
// Superclass: SCFeature
// Address: 0x112acdd38

@interface SCFeatureDirectorModeVerticalToolbar

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: toolbarView; attributes: T@"UIView",R,N,VtoolbarView
// Property: expanded; attributes: TB,R,N,GisExpanded,Vexpanded
// Property: cameraToolbarExpandCollapse; attributes: T@"SCObservable",R,N,VcameraToolbarExpandCollapse
// Property: cameraToolbarItemTapped; attributes: T@"SCObservable",R,N,VcameraToolbarItemTapped
// Property: cameraModeLabelsWillShowObservable; attributes: T@"SCObservable",R,N,VcameraModeLabelsWillShowObservable
// Property: cameraToolbarVisibilityObservable; attributes: T@"SCObservable",R,N,VcameraToolbarVisibilityObservable

// -[SCFeatureDirectorModeVerticalToolbar initWithModeManager:cameraUIServices:valdiRuntimeProvider:cameraConfiguration:cameraUserActionLogger:featureUpdateEventObservable:musicExperiments:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1061631b8

// -[SCFeatureDirectorModeVerticalToolbar configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106163548

// -[SCFeatureDirectorModeVerticalToolbar activate]
// Type encoding: v16@0:8
// Implementation: 0x106163580

// -[SCFeatureDirectorModeVerticalToolbar toolbarView]
// Type encoding: @16@0:8
// Implementation: 0x106163584

// -[SCFeatureDirectorModeVerticalToolbar resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1061635b4

// -[SCFeatureDirectorModeVerticalToolbar usageMetrics]
// Type encoding: @16@0:8
// Implementation: 0x1061635b8

// -[SCFeatureDirectorModeVerticalToolbar prepareForTransitionIn]
// Type encoding: v16@0:8
// Implementation: 0x1061635c0

// -[SCFeatureDirectorModeVerticalToolbar beginTransitionIn]
// Type encoding: v16@0:8
// Implementation: 0x106163638

// -[SCFeatureDirectorModeVerticalToolbar prepareForTransitionOut]
// Type encoding: v16@0:8
// Implementation: 0x106163678

// -[SCFeatureDirectorModeVerticalToolbar beginTransitionOut]
// Type encoding: v16@0:8
// Implementation: 0x10616367c

// -[SCFeatureDirectorModeVerticalToolbar shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x1061636c0

// -[SCFeatureDirectorModeVerticalToolbar _isTouchAtPoint:withinSubview:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x1061636d0

// -[SCFeatureDirectorModeVerticalToolbar dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061637ac

// -[SCFeatureDirectorModeVerticalToolbar addToolbarItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061637fc

// -[SCFeatureDirectorModeVerticalToolbar buttonForToolbarItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x106163800

// -[SCFeatureDirectorModeVerticalToolbar cancelActiveToolbarGestures]
// Type encoding: v16@0:8
// Implementation: 0x106163808

// -[SCFeatureDirectorModeVerticalToolbar collapseToolbarAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10616380c

// -[SCFeatureDirectorModeVerticalToolbar hideToolbarItem:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106163810

// -[SCFeatureDirectorModeVerticalToolbar isItemHidden:]
// Type encoding: B24@0:8@16
// Implementation: 0x106163814

// -[SCFeatureDirectorModeVerticalToolbar reloadToolbar:]
// Type encoding: v20@0:8B16
// Implementation: 0x10616381c

// -[SCFeatureDirectorModeVerticalToolbar setAllItemsHidden:includingAlwaysShowItems:animated:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x106163820

// -[SCFeatureDirectorModeVerticalToolbar setToolbarItem:selected:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106163824

// -[SCFeatureDirectorModeVerticalToolbar setToolbarItem:selected:animatedScaling:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x106163828

// -[SCFeatureDirectorModeVerticalToolbar showToolbarItem:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10616382c

// -[SCFeatureDirectorModeVerticalToolbar tapToolbarItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106163830

// -[SCFeatureDirectorModeVerticalToolbar updateToolbarPositionAnimated:duration:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x106163834

// -[SCFeatureDirectorModeVerticalToolbar viewForToolbarItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x106163838

// -[SCFeatureDirectorModeVerticalToolbar setToolbarItemWithUIItem:selected:animatedScaling:]
// Type encoding: v32@0:8q16B24B28
// Implementation: 0x106163840

// -[SCFeatureDirectorModeVerticalToolbar pinToolbarItemsToTopFromFeatures:requester:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106163844

// -[SCFeatureDirectorModeVerticalToolbar unpinToolbarItemsFromTopFromFeatures:requester:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106163848

// -[SCFeatureDirectorModeVerticalToolbar startAnimation:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10616384c

// -[SCFeatureDirectorModeVerticalToolbar indexOfItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106163850

// -[SCFeatureDirectorModeVerticalToolbar isNewRecentSlotEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106163858

// -[SCFeatureDirectorModeVerticalToolbar _didReceiveFeatureUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106163860

// -[SCFeatureDirectorModeVerticalToolbar _setupToolbar]
// Type encoding: v16@0:8
// Implementation: 0x106163954

// -[SCFeatureDirectorModeVerticalToolbar _alwaysHideFlipLabel]
// Type encoding: B16@0:8
// Implementation: 0x106163f88

// -[SCFeatureDirectorModeVerticalToolbar isExpanded]
// Type encoding: B16@0:8
// Implementation: 0x106163fd0

// -[SCFeatureDirectorModeVerticalToolbar cameraToolbarExpandCollapse]
// Type encoding: @16@0:8
// Implementation: 0x106163fe0

// -[SCFeatureDirectorModeVerticalToolbar cameraToolbarItemTapped]
// Type encoding: @16@0:8
// Implementation: 0x106163ff0

// -[SCFeatureDirectorModeVerticalToolbar cameraModeLabelsWillShowObservable]
// Type encoding: @16@0:8
// Implementation: 0x106164000

// -[SCFeatureDirectorModeVerticalToolbar cameraToolbarVisibilityObservable]
// Type encoding: @16@0:8
// Implementation: 0x106164010

// -[SCFeatureDirectorModeVerticalToolbar .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106164020

@end
