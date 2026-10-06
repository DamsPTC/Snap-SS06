// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewCameraRollSnapSavingCoordinatorImpl
// Superclass: NSObject
// Address: 0x112a7c848

@interface SCPreviewCameraRollSnapSavingCoordinatorImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewCameraRollSnapSavingCoordinatorImpl initWithJobScheduler:cameraRollSnapSaver:snapVideoFilterCoordinator:contentDelivery:notificationPool:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105917568

// -[SCPreviewCameraRollSnapSavingCoordinatorImpl saveVideo:saveSessionId:uiOnError:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059176b4

// -[SCPreviewCameraRollSnapSavingCoordinatorImpl saveImage:saveSessionId:exportPolicy:watermarkProfile:watermarkLayout:isWatermarkingEnabledForImages:uiOnError:]
// Type encoding: v68@0:8@16@24@32@40q48B56@?60
// Implementation: 0x10591781c

// -[SCPreviewCameraRollSnapSavingCoordinatorImpl jobProcessorSaveSnapWithMediaId:snapSavingData:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105917ab8

// -[SCPreviewCameraRollSnapSavingCoordinatorImpl _jobProcessorSaveSnapWithMediaId:snapSavingData:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105917abc

// -[SCPreviewCameraRollSnapSavingCoordinatorImpl _submitSaveSnapJobWithMediaId:saveSessionId:isImageSnap:exportPolicy:watermarkProfile:watermarkLayout:isWatermarkingEnabledForImages:]
// Type encoding: v64@0:8@16@24B32@36@44q52B60
// Implementation: 0x105917b50

// -[SCPreviewCameraRollSnapSavingCoordinatorImpl _jobProcessorSaveVideoWithMediaId:snapSavingData:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105917d5c

// -[SCPreviewCameraRollSnapSavingCoordinatorImpl _jobProcessorSaveImageWithMediaId:snapSavingData:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059183b4

// -[SCPreviewCameraRollSnapSavingCoordinatorImpl _errorDescriptionForSnapVideoFilterRetrieveError:]
// Type encoding: @24@0:8q16
// Implementation: 0x105918c2c

// -[SCPreviewCameraRollSnapSavingCoordinatorImpl _presentDebugViewWithMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105918c54

// -[SCPreviewCameraRollSnapSavingCoordinatorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105918d90

@end
