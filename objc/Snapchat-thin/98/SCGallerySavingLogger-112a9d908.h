// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGallerySavingLogger
// Superclass: NSObject
// Address: 0x112a9d908

@interface SCGallerySavingLogger

// Property: listenerAnnouncer; attributes: T@"SCMemoriesSaveLoggingListenerAnnouncer",R,N,V_listenerAnnouncer
// Property: previewVisibleSaveLatencyLogger; attributes: T@"<SCMemoriesPreviewVisibleSaveLatencyLogging>",R,N,V_previewVisibleSaveLatencyLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGallerySavingLogger initWithUserTrackedLogger:lazyLensLogger:graphene:galleryLogger:contentDelivery:memoriesStorageQuotaManager:editContentDivergenceServices:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105d776ec

// -[SCGallerySavingLogger _logAttemptToSaveSnapEvent:savingSessionId:saveToGallery:saveToCameraRoll:manualSave:]
// Type encoding: v44@0:8@16@24B32B36B40
// Implementation: 0x105d778c8

// -[SCGallerySavingLogger attemptToSaveSnapFromPreview:saveToGallery:saveToCameraRoll:saveToDraft:edited:savingSource:gallerySnapCount:logDirectSnapAction:manualSave:savingSessionId:]
// Type encoding: @72@0:8@16B24B28B32B36q40q48B56B60@64
// Implementation: 0x105d77a1c

// -[SCGallerySavingLogger didCancelSavingToGalleryWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d780b8

// -[SCGallerySavingLogger didCompleteSavingToGalleryFromPreviewWithSessionId:success:error:entryId:galleryType:snapId:captureSessionId:mediaId:mediaType:isSpectacles:snapCount:hasCameos:shouldPersistSaveSessionStatus:savingType:]
// Type encoding: v104@0:8@16B24@28@36i44@48@56@64@72B80i84B88B92q96
// Implementation: 0x105d78180

// -[SCGallerySavingLogger logCameraRollTranscodingWithPersistedSessionStatus:sessionId:error:latency:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x105d78948

// -[SCGallerySavingLogger didCompleteSavingToCameraRollWithPersistedSessionStatus:sessionId:success:error:latency:]
// Type encoding: v52@0:8@16@24B32@36q44
// Implementation: 0x105d78b78

// -[SCGallerySavingLogger retrievePersistedSaveSessionStatusForId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105d78da8

// -[SCGallerySavingLogger didCompleteSavingToCameraRollFromPreviewWithSessionId:galleryType:success:error:hasCameos:]
// Type encoding: v44@0:8@16i24B28@32B40
// Implementation: 0x105d79064

// -[SCGallerySavingLogger startSaveSnapTranscodeWithSessionId:type:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105d792dc

// -[SCGallerySavingLogger didCompleteSaveSnapTranscodeWithSessionId:type:success:error:]
// Type encoding: v44@0:8@16q24B32@36
// Implementation: 0x105d793fc

// -[SCGallerySavingLogger savingSessionParamsFromSessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d796b0

// -[SCGallerySavingLogger logSavingDuplicateSnapWithSaveSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d797e0

// -[SCGallerySavingLogger _logGallerySaveToMemories:isSuccessful:saveLatencyMs:isUserCancel:]
// Type encoding: v40@0:8q16B24d28B36
// Implementation: 0x105d79874

// -[SCGallerySavingLogger logGallerySaveToCameraRollStartCameraSaving]
// Type encoding: v16@0:8
// Implementation: 0x105d799c8

// -[SCGallerySavingLogger logGallerySaveToCameraRollDidFinishTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x105d79a0c

// -[SCGallerySavingLogger logGallerySaveToCamerarollDidCompleted]
// Type encoding: v16@0:8
// Implementation: 0x105d79a50

// -[SCGallerySavingLogger logSavingMediaSizeWithSessionId:mediaSize:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105d79a94

// -[SCGallerySavingLogger _logGallerySaveEventWithSessionId:step:entryId:snapId:mediaId:]
// Type encoding: v56@0:8@16q24@32@40@48
// Implementation: 0x105d79d18

// -[SCGallerySavingLogger _updateSessionStatus:sessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d79ffc

// -[SCGallerySavingLogger _logSnapSaveEvents:snapIdInSnapchatGallery:mediaIdInSnapchatGallery:entryIdInSnapchatGallery:savingSessionId:totalMediaSize:saveToCameraRoll:manualSave:hasCameos:saveToDraft:]
// Type encoding: v80@0:8@16@24@32@40@48Q56B64B68B72B76
// Implementation: 0x105d7a334

// -[SCGallerySavingLogger _setupDirectSnapSaveEvent:snapCommonLoggingParams:saveToSnapchatGallery:saveSource:snapIdInSnapchatGallery:mediaIdInSnapchatGallery:entryIdInSnapchatGallery:savingSessionId:notificationId:totalMediaSize:saveToCameraRoll:hasCameos:saveToDraft:isTemporaryStorage:isPaywallDisplayed:]
// Type encoding: v112@0:8@16@24B32q36@44@52@60@68@76Q84B92B96B100B104B108
// Implementation: 0x105d7aa74

// -[SCGallerySavingLogger _setupGeofilterDirectSnapSaveEvent:snapCommonLoggingParams:saveToSnapchatGallery:saveSource:saveToCameraRoll:saveToDraft:]
// Type encoding: v52@0:8@16@24B32q36B44B48
// Implementation: 0x105d7c5bc

// -[SCGallerySavingLogger _setupDirectSnapSaveBaseEvent:loggingParameters:saveSource:saveToSnapchatGallery:saveToCameraRoll:saveToDraft:]
// Type encoding: v52@0:8@16@24q32B40B44B48
// Implementation: 0x105d7c850

// -[SCGallerySavingLogger _currentSavingSessionForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d7cf24

// -[SCGallerySavingLogger _cacheSessionStatus:sessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d7cfb8

// -[SCGallerySavingLogger _logSaveSnapTranscodeGrapheneWithStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d7d020

// -[SCGallerySavingLogger _dataFromSessionStatus:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d7d29c

// -[SCGallerySavingLogger listenerAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x105d7d320

// -[SCGallerySavingLogger previewVisibleSaveLatencyLogger]
// Type encoding: @16@0:8
// Implementation: 0x105d7d328

// -[SCGallerySavingLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d7d330

@end
