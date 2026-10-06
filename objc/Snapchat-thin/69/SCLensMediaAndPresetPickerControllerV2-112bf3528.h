// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMediaAndPresetPickerControllerV2
// Superclass: SCLensSubPickerControllerV2
// Address: 0x112bf3528

@interface SCLensMediaAndPresetPickerControllerV2

// Property: imageProvider; attributes: T@"<SCLensMediaAssetProviderProtocol>",&,D,N
// Property: warningMessageLabel; attributes: T@"UILabel",&,N,V_warningMessageLabel
// Property: photoAccessPromptView; attributes: T@"UIView",&,N,V_photoAccessPromptView
// Property: selectedOptionRequestId; attributes: T@"NSString",&,N,V_selectedOptionRequestId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensMediaAndPresetPickerControllerV2 initWithBottomViewContainer:lensLogger:presetsComponent:externalImageComponent:effectSuspendable:photoFaceImageProvider:lensCrashLogger:photoPermissionCoordinator:standardPickerUIContainer:videoEditingUIContainer:standardMediaPickerMediaTypes:mediaAssetManager:videoEditingLauncher:videoEditingScopeServices:videoEditingEnabled:modalPresentationEnabled:batchSize:hideArrow:lensOptionSourceType:imageTrackingCompressionLevel:selectionLimit:didEnterBackgroundObservable:studySettingsProvider:]
// Type encoding: @192@0:8@16@24@32@40@48@56@64@72@80@88Q96@104@112@120B128@132Q140B148q152d160Q168@176@184
// Implementation: 0x1091ba2a0

// -[SCLensMediaAndPresetPickerControllerV2 initializePickerFeature:resultFeatures:modalPresentationEnabled:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091ba6e4

// -[SCLensMediaAndPresetPickerControllerV2 safeCollectionUpdate:completion:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1091bb244

// -[SCLensMediaAndPresetPickerControllerV2 dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091bb2e8

// -[SCLensMediaAndPresetPickerControllerV2 setUpWarningMessageLabel]
// Type encoding: v16@0:8
// Implementation: 0x1091bb34c

// -[SCLensMediaAndPresetPickerControllerV2 setUpPhotoAccessPromptView]
// Type encoding: v16@0:8
// Implementation: 0x1091bb7b8

// -[SCLensMediaAndPresetPickerControllerV2 showAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091bc170

// -[SCLensMediaAndPresetPickerControllerV2 hideAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1091bc504

// -[SCLensMediaAndPresetPickerControllerV2 innerSelectOptionAtIndexPath:cellToSelect:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091bc614

// -[SCLensMediaAndPresetPickerControllerV2 _receivedImage:forItemAtIndexPath:loadingId:imageId:normalizedFaceRects:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1091bcc10

// -[SCLensMediaAndPresetPickerControllerV2 _receiveVideoURL:forItemAtIndexPath:loadingId:videoId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1091bd19c

// -[SCLensMediaAndPresetPickerControllerV2 _failToReceiveVideoForIndexPath:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091bd2dc

// -[SCLensMediaAndPresetPickerControllerV2 _presentVideoEditingForURL:forItemAtIndexPath:videoId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091bd328

// -[SCLensMediaAndPresetPickerControllerV2 _setExternalVideoForURL:forItemAtIndexPath:videoId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091bd5e4

// -[SCLensMediaAndPresetPickerControllerV2 showNoImagesWarningIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091bda9c

// -[SCLensMediaAndPresetPickerControllerV2 hideNoImagesWarning]
// Type encoding: v16@0:8
// Implementation: 0x1091bdb7c

// -[SCLensMediaAndPresetPickerControllerV2 currentMediaTypes]
// Type encoding: Q16@0:8
// Implementation: 0x1091bdbd4

// -[SCLensMediaAndPresetPickerControllerV2 showWarningWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091bdc10

// -[SCLensMediaAndPresetPickerControllerV2 setPhotoPermissionsPromptHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091bdce8

// -[SCLensMediaAndPresetPickerControllerV2 _didTapAllowButton]
// Type encoding: v16@0:8
// Implementation: 0x1091bde28

// -[SCLensMediaAndPresetPickerControllerV2 _hideLoadingForCellAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091bde64

// -[SCLensMediaAndPresetPickerControllerV2 _contentUriForImage:withAssetIdentifier:indexPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1091bdfd8

// -[SCLensMediaAndPresetPickerControllerV2 lensSubPickerImageProvider:didUpdateWithImageCount:canProcessMore:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x1091be17c

// -[SCLensMediaAndPresetPickerControllerV2 videoCellDidTapEditButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091be248

// -[SCLensMediaAndPresetPickerControllerV2 mediaPickerDidUnselectIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091be3bc

// -[SCLensMediaAndPresetPickerControllerV2 previouslySelectedAssetIdentifiersMap]
// Type encoding: @16@0:8
// Implementation: 0x1091be3c0

// -[SCLensMediaAndPresetPickerControllerV2 warningMessageLabel]
// Type encoding: @16@0:8
// Implementation: 0x1091be704

// -[SCLensMediaAndPresetPickerControllerV2 setWarningMessageLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091be714

// -[SCLensMediaAndPresetPickerControllerV2 photoAccessPromptView]
// Type encoding: @16@0:8
// Implementation: 0x1091be754

// -[SCLensMediaAndPresetPickerControllerV2 setPhotoAccessPromptView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091be764

// -[SCLensMediaAndPresetPickerControllerV2 selectedOptionRequestId]
// Type encoding: @16@0:8
// Implementation: 0x1091be7a4

// -[SCLensMediaAndPresetPickerControllerV2 setSelectedOptionRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091be7b4

// -[SCLensMediaAndPresetPickerControllerV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091be7f4

@end
