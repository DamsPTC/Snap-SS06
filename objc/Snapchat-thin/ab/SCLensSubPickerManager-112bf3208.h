// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensSubPickerManager
// Superclass: NSObject
// Address: 0x112bf3208

@interface SCLensSubPickerManager

// Property: lens; attributes: T@"SCLens",&,V_lens
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isPhotoPickerShown; attributes: TB,R,N
// Property: selectedOptionIndex; attributes: Tq,R,N
// Property: isPickerOpen; attributes: TB,R,N

// -[SCLensSubPickerManager initWithExternalImageComponent:lensComponent:modalUIContainer:containerView:lensCrashLoggerFactory:lensLogger:photoPermissionCoordinator:lensVideoEditingLauncher:lensVideoEditingScopeServices:modalPresentationEnabled:lensOptionSourceType:inLensMediaPickerManager:lensApplicator:lensTinselExternalContentTracker:studySettingsProvider:applicationLifecycleEvents:fetchLimit:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88q96@104@112@120@128@136@144
// Implementation: 0x1091b3fc4

// -[SCLensSubPickerManager warmUpSubPickerWithMediaType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1091b4494

// -[SCLensSubPickerManager _createSubPickerWithSelectionLimit:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1091b4588

// -[SCLensSubPickerManager _mediaPickerControllerContainer]
// Type encoding: @16@0:8
// Implementation: 0x1091b4878

// -[SCLensSubPickerManager showSubPickerWithMediaType:selectionLimit:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1091b48b8

// -[SCLensSubPickerManager _resetMediaAssetResources]
// Type encoding: v16@0:8
// Implementation: 0x1091b4950

// -[SCLensSubPickerManager lensSubPickerController]
// Type encoding: @16@0:8
// Implementation: 0x1091b4980

// -[SCLensSubPickerManager _createMediaAssetProviderWithMediaType:mediaAssetManager:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x1091b49a8

// -[SCLensSubPickerManager isPickerOpen]
// Type encoding: B16@0:8
// Implementation: 0x1091b4a4c

// -[SCLensSubPickerManager hideSubPicker]
// Type encoding: v16@0:8
// Implementation: 0x1091b4a50

// -[SCLensSubPickerManager isPhotoPickerShown]
// Type encoding: B16@0:8
// Implementation: 0x1091b4ba4

// -[SCLensSubPickerManager pointInsideLensSubPicker:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x1091b4bb4

// -[SCLensSubPickerManager showPhotoPickerForLens:supportPhotos:supportVideos:supportFaceFiltering:supportMultipleFaceFiltering:selectionLimit:useLensCoreTinselTracking:completion:]
// Type encoding: v60@0:8@16B24B28B32B36Q40B48@?52
// Implementation: 0x1091b4c10

// -[SCLensSubPickerManager hidePhotoPickerWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091b4e58

// -[SCLensSubPickerManager selectedOptionIndex]
// Type encoding: q16@0:8
// Implementation: 0x1091b4f7c

// -[SCLensSubPickerManager _handleWillTurnOffEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091b4f90

// -[SCLensSubPickerManager suspendSceneUpdatesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091b50a4

// -[SCLensSubPickerManager resumeSceneUpdatesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091b513c

// -[SCLensSubPickerManager lensSubPickerController:didSelectImage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091b51d4

// -[SCLensSubPickerManager lensSubPickerController:didSelectVideo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091b51d8

// -[SCLensSubPickerManager lensSubPickerController:didSetExternalImageData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091b51dc

// -[SCLensSubPickerManager lens]
// Type encoding: @16@0:8
// Implementation: 0x1091b5294

// -[SCLensSubPickerManager setLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091b52a0

// -[SCLensSubPickerManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091b52a8

@end
