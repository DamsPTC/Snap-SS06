// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMediaAndPresetPickerController
// Superclass: SCLensSubPickerController
// Address: 0x112bf35c8

@interface SCLensMediaAndPresetPickerController

// Property: imageProvider; attributes: T@"<SCLensMediaAssetProviderProtocol>",&,D,N
// Property: warningMessageLabel; attributes: T@"UILabel",&,N,V_warningMessageLabel
// Property: photoAccessPromptView; attributes: T@"UIView",&,N,V_photoAccessPromptView
// Property: selectedOptionRequestId; attributes: T@"NSString",&,N,V_selectedOptionRequestId

// -[SCLensMediaAndPresetPickerController initWithBottomViewContainer:lensLogger:presetsComponent:externalImageComponent:effectSuspendable:photoFaceImageProvider:lensCrashLogger:photoPermissionCoordinator:standardPickerUIContainer:videoEditingUIContainer:standardMediaPickerMediaTypes:mediaAssetManager:videoEditingLauncher:videoEditingScopeServices:videoEditingEnabled:modalPresentationEnabled:batchSize:hideArrow:lensOptionSourceType:imageTrackingCompressionLevel:selectionLimit:didEnterBackgroundObservable:studySettingsProvider:]
// Type encoding: @192@0:8@16@24@32@40@48@56@64@72@80@88Q96@104@112@120B128@132Q140B148q152d160Q168@176@184
// Implementation: 0x1091c1694

// -[SCLensMediaAndPresetPickerController initializePickerFeature:resultFeature:modalPresentationEnabled:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091c1adc

// -[SCLensMediaAndPresetPickerController safeCollectionUpdate:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091c2564

// -[SCLensMediaAndPresetPickerController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091c25d8

// -[SCLensMediaAndPresetPickerController setUpWarningMessageLabel]
// Type encoding: v16@0:8
// Implementation: 0x1091c263c

// -[SCLensMediaAndPresetPickerController setUpPhotoAccessPromptView]
// Type encoding: v16@0:8
// Implementation: 0x1091c2aa8

// -[SCLensMediaAndPresetPickerController showAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091c3460

// -[SCLensMediaAndPresetPickerController hideAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1091c37f4

// -[SCLensMediaAndPresetPickerController innerSelectOptionAtIndexPath:cellToSelect:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091c3904

// -[SCLensMediaAndPresetPickerController _receivedImage:forItemAtIndexPath:loadingId:imageId:normalizedFaceRects:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1091c3f00

// -[SCLensMediaAndPresetPickerController _receiveVideoURL:forItemAtIndexPath:loadingId:videoId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1091c4498

// -[SCLensMediaAndPresetPickerController _failToReceiveVideoForIndexPath:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091c45d8

// -[SCLensMediaAndPresetPickerController _presentVideoEditingForURL:forItemAtIndexPath:videoId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091c45f0

// -[SCLensMediaAndPresetPickerController _setExternalVideoForURL:forItemAtIndexPath:videoId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091c48ac

// -[SCLensMediaAndPresetPickerController showNoImagesWarningIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091c4d58

// -[SCLensMediaAndPresetPickerController hideNoImagesWarning]
// Type encoding: v16@0:8
// Implementation: 0x1091c4e38

// -[SCLensMediaAndPresetPickerController currentMediaTypes]
// Type encoding: Q16@0:8
// Implementation: 0x1091c4e90

// -[SCLensMediaAndPresetPickerController videoEditingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1091c4ecc

// -[SCLensMediaAndPresetPickerController showWarningWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c4f00

// -[SCLensMediaAndPresetPickerController setPhotoPermissionsPromptHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091c4fd8

// -[SCLensMediaAndPresetPickerController _didTapAllowButton]
// Type encoding: v16@0:8
// Implementation: 0x1091c5118

// -[SCLensMediaAndPresetPickerController _hideLoadingForCellAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c5154

// -[SCLensMediaAndPresetPickerController _contentUriForImage:withAssetIdentifier:indexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1091c52c8

// -[SCLensMediaAndPresetPickerController lensSubPickerImageProvider:didUpdateWithImageCount:canProcessMore:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x1091c546c

// -[SCLensMediaAndPresetPickerController videoCellDidTapEditButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c5538

// -[SCLensMediaAndPresetPickerController warningMessageLabel]
// Type encoding: @16@0:8
// Implementation: 0x1091c55fc

// -[SCLensMediaAndPresetPickerController setWarningMessageLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c560c

// -[SCLensMediaAndPresetPickerController photoAccessPromptView]
// Type encoding: @16@0:8
// Implementation: 0x1091c564c

// -[SCLensMediaAndPresetPickerController setPhotoAccessPromptView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c565c

// -[SCLensMediaAndPresetPickerController selectedOptionRequestId]
// Type encoding: @16@0:8
// Implementation: 0x1091c569c

// -[SCLensMediaAndPresetPickerController setSelectedOptionRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091c56ac

// -[SCLensMediaAndPresetPickerController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091c56ec

@end
