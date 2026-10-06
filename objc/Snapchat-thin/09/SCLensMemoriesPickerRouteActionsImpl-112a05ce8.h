// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMemoriesPickerRouteActionsImpl
// Superclass: NSObject
// Address: 0x112a05ce8

@interface SCLensMemoriesPickerRouteActionsImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensMemoriesPickerRouteActionsImpl initWithUIContainer:memoriesPickerScopeExposer:memoriesPickerScopeServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104ebd0c0

// -[SCLensMemoriesPickerRouteActionsImpl presentLensMemoriesPickerWithScopeDelegate:actionHandler:lensMemoriesLogger:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104ebd1a8

// -[SCLensMemoriesPickerRouteActionsImpl persistSelectedMedia:contentDeliveryServices:lensPerformerProvider:lensMemoriesLogger:uiContainer:actionHandlerDelegate:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x104ebd2dc

// -[SCLensMemoriesPickerRouteActionsImpl resetWithContentDeliveryServices:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104ebdb50

// -[SCLensMemoriesPickerRouteActionsImpl importSelectedAsset:videoImportServices:lensPerformerProvider:uiContainer:actionHandlerDelegate:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104ebdba0

// -[SCLensMemoriesPickerRouteActionsImpl _dismissLensMemoriesPickerWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104ebdc90

// -[SCLensMemoriesPickerRouteActionsImpl _saveContentWithDeliveryServices:image:video:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104ebdde0

// -[SCLensMemoriesPickerRouteActionsImpl _handleSaveContentCompletionWithSuccess:type:contentKey:mediaId:promise:]
// Type encoding: v52@0:8B16@20@28@36@44
// Implementation: 0x104ebe0c8

// -[SCLensMemoriesPickerRouteActionsImpl _serializeMediaPayload:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ebe240

// -[SCLensMemoriesPickerRouteActionsImpl _clearMemoriesFromStorageWithDeliveryServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ebe2a8

// -[SCLensMemoriesPickerRouteActionsImpl _handleImportCameraRollImage:videoImportServices:lensPerformerProvider:uiContainer:actionHandlerDelegate:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104ebe330

// -[SCLensMemoriesPickerRouteActionsImpl _handleImportCameraRollVideo:videoImportServices:lensPerformerProvider:uiContainer:actionHandlerDelegate:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104ebe708

// -[SCLensMemoriesPickerRouteActionsImpl _setupLoadingIndicatorViewController]
// Type encoding: @16@0:8
// Implementation: 0x104ebead8

// -[SCLensMemoriesPickerRouteActionsImpl _presentLoadingIndicatorViewControllerWithUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ebed6c

// -[SCLensMemoriesPickerRouteActionsImpl _dismissLoadingIndicatorViewController]
// Type encoding: v16@0:8
// Implementation: 0x104ebeea4

// -[SCLensMemoriesPickerRouteActionsImpl _presentImportErrorThenCleanUp]
// Type encoding: v16@0:8
// Implementation: 0x104ebeee0

// -[SCLensMemoriesPickerRouteActionsImpl _presentImportErrorDialog]
// Type encoding: v16@0:8
// Implementation: 0x104ebefb4

// -[SCLensMemoriesPickerRouteActionsImpl _cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x104ebf1bc

// -[SCLensMemoriesPickerRouteActionsImpl _logMemoriesSelectedEventFromMedia:logger:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ebf1c0

// -[SCLensMemoriesPickerRouteActionsImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ebf360

@end
