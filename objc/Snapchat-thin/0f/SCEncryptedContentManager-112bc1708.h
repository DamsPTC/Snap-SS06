// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCEncryptedContentManager
// Superclass: NSObject
// Address: 0x112bc1708

@interface SCEncryptedContentManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCEncryptedContentManager initWithEncryptedDatabase:keyService:dataObjectContext:overlayFormatServices:memoriesExperimentService:memoriesVideoDecryptionEventPublisher:encryptionDetector:grapheneRegistry:memoriesS2RLogger:userBlizzard:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x108d42ffc

// -[SCEncryptedContentManager secureEncryptData:key:IV:masterKey:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108d4346c

// -[SCEncryptedContentManager requestDecryptedDataForSnap:cloudFile:synchronous:queue:resultHandler:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x108d435d0

// -[SCEncryptedContentManager requestDecryptedDataForSnap:cloudFile:representation:synchronous:queue:resultHandler:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x108d43724

// -[SCEncryptedContentManager requestAVAssetForSnap:automaticallyLoadedAssetKeys:cloudFile:encryptedContentManagerCallSite:synchronous:queue:resultHandler:]
// Type encoding: v68@0:8@16@24@32@40B48@52@?60
// Implementation: 0x108d43a7c

// -[SCEncryptedContentManager requestAVAssetForSnap:automaticallyLoadedAssetKeys:cloudFile:representation:encryptedContentManagerCallSite:synchronous:queue:resultHandler:]
// Type encoding: v76@0:8@16@24@32@40@48B56@60@?68
// Implementation: 0x108d43ab8

// -[SCEncryptedContentManager requestImageForSnap:cloudFile:encryptedContentManagerCallSite:synchronous:queue:resultHandler:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x108d43abc

// -[SCEncryptedContentManager requestImageSynchronouslyForSnap:cloudFile:encryptedContentManagerCallSite:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108d43ad4

// -[SCEncryptedContentManager requestImageAsynchronouslyForSnap:cloudFile:encryptedContentManagerCallSite:queue:resultHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108d4434c

// -[SCEncryptedContentManager requestOverlayFormatForSnap:cloudFile:encryptedContentManagerCallSite:synchronous:queue:resultHandler:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x108d44c98

// -[SCEncryptedContentManager requestOverlayFormatSynchronouslyForSnap:cloudFile:encryptedContentManagerCallSite:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108d44cb0

// -[SCEncryptedContentManager requestOverlayFormatAsynchronouslyForSnap:cloudFile:encryptedContentManagerCallSite:queue:resultHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108d454b4

// -[SCEncryptedContentManager requestDecryptedDataForSnap:cloudFile:synchronous:representation:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v68@0:8@16@24B32@36@44@52@?60
// Implementation: 0x108d45e1c

// -[SCEncryptedContentManager requestDecryptedDataForSnap:cloudFile:synchronous:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v60@0:8@16@24B32@36@44@?52
// Implementation: 0x108d460cc

// -[SCEncryptedContentManager _requestDecryptedDataForSnap:fileURL:encryptionHint:synchronous:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v68@0:8@16@24q32B40@44@52@?60
// Implementation: 0x108d46104

// -[SCEncryptedContentManager requestKeyIVForSnap:encryptedContentManagerCallSite:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108d46128

// -[SCEncryptedContentManager requestOverlayFormatForSnap:encryptedOverlayBlob:encryptedContentManagerCallSite:queue:resultHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108d462f8

// -[SCEncryptedContentManager _decryptData:key:IV:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108d46a9c

// -[SCEncryptedContentManager _requestKeyIVForSnap:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108d4723c

// -[SCEncryptedContentManager _requestDecryptedMediaDataForSnapId:duplicateSnapId:cloudFile:representation:key:IV:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x108d47468

// -[SCEncryptedContentManager _requestDecryptedMediaDataForSnapId:fileURL:key:IV:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108d47520

// -[SCEncryptedContentManager _canAccessWithoutDecryptionForContent:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d47758

// -[SCEncryptedContentManager _requestOverlayFormatWithoutDecryptionForSnapId:cloudFile:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d477d8

// -[SCEncryptedContentManager _requestImageWithoutDecryptionForSnapId:duplicateSnapId:cloudFile:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108d478e4

// -[SCEncryptedContentManager _requestImageForSnapId:duplicateSnapId:cloudFile:key:IV:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x108d47a00

// -[SCEncryptedContentManager _overlayFormatFromUnencryptedOverlayBlob:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d47b50

// -[SCEncryptedContentManager _overlayFormatFromEncryptedOverlayBlob:key:IV:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108d47b5c

// -[SCEncryptedContentManager _AVAssetWithoutDecryptionForSnap:cloudFile:representation:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108d47d4c

// -[SCEncryptedContentManager _avAssetFromDataToErrorPair:videoDecryptionEventToReport:snap:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108d47ec0

// -[SCEncryptedContentManager _AVAssetForSnap:cloudFile:representation:encryptedContentManagerCallSite:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108d48054

// -[SCEncryptedContentManager _requestAVAssetForSnap:automaticallyLoadedAssetKeys:cloudFile:representation:encryptedContentManagerCallSite:synchronous:queue:resultHandler:]
// Type encoding: v76@0:8@16@24@32@40@48B56@60@?68
// Implementation: 0x108d485b0

// -[SCEncryptedContentManager _requestAVAssetSynchronouslyForSnap:cloudFile:representation:encryptedContentManagerCallSite:resultHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108d485d8

// -[SCEncryptedContentManager _requestAVAssetAsynchronouslyForSnap:automaticallyLoadedAssetKeys:cloudFile:representation:encryptedContentManagerCallSite:queue:resultHandler:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x108d48a74

// -[SCEncryptedContentManager _requestDataWithoutDecryptionForSnapId:fileURL:encryptionHint:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x108d497ac

// -[SCEncryptedContentManager _requestDecryptedDataSynchronouslyForSnap:fileURL:encryptionHint:memoriesGrapheneContext:resultHandler:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x108d498a4

// -[SCEncryptedContentManager _requestDecryptedDataAsynchronouslyForSnap:fileURL:encryptionHint:memoriesGrapheneContext:queue:resultHandler:]
// Type encoding: v64@0:8@16@24q32@40@48@?56
// Implementation: 0x108d49fe0

// -[SCEncryptedContentManager _incrementEncryptionErrorGrapheneWithErrorCode:snapId:optionalMessage:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x108d4a89c

// -[SCEncryptedContentManager _getErrorInfoFromErrorCode:]
// Type encoding: @24@0:8q16
// Implementation: 0x108d4aaa8

// -[SCEncryptedContentManager _buildExceptionParams:withCloudFile:representation:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108d4aad0

// -[SCEncryptedContentManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d4ac84

// +[SCEncryptedContentManager _handleEncryptionRequestForSnapId:key:IV:isEncrypted:keyService:userBlizzard:queue:resultHandler:]
// Type encoding: v76@0:8@16@24@32B40@44@52@60@?68
// Implementation: 0x108d46aac

@end
