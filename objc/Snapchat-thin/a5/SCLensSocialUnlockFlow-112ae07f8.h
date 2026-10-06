// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensSocialUnlockFlow
// Superclass: NSObject
// Address: 0x112ae07f8

@interface SCLensSocialUnlockFlow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensSocialUnlockFlow initWithLensUnlocker:cameraPresenter:collectionsCameraPresenter:snapSource:cameraBIPAConfiguration:cameraBIPAScopeExposer:cameraBIPAScopeServices:lensReplyCameraPresenter:inLensCreationDataProvider:centralizedLensMetadataStoreProvider:playGamesPresenter:playGamesStudySettings:musicApplicationData:]
// Type encoding: @120@0:8@16@24@32q40@48@56@64@72@80@88@96@104@112
// Implementation: 0x1064705d4

// -[SCLensSocialUnlockFlow modularCameraPresenter]
// Type encoding: @16@0:8
// Implementation: 0x1064708b8

// -[SCLensSocialUnlockFlow modularCollectionsCameraPresenter]
// Type encoding: @16@0:8
// Implementation: 0x1064708c0

// -[SCLensSocialUnlockFlow lensUnlocker]
// Type encoding: @16@0:8
// Implementation: 0x1064708c8

// -[SCLensSocialUnlockFlow shouldStartUnlockFlowForDeepLinkURL:deepLinkUnlockPolicy:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1064708d0

// -[SCLensSocialUnlockFlow startUnlockFlowWithDeepLinkURL:replyParameters:baseViewController:delegate:snapId:unlockableSnapInfo:chatMessageId:storyServerId:lensOptions:]
// Type encoding: B88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1064708d8

// -[SCLensSocialUnlockFlow _startUnlockFlowWithReplyParameters:promptLensReplyParameters:inLensCreationReplyParameters:needsLensReplyCameraScope:baseViewController:delegate:isLensCollectionType:lensId:collectionId:unlockableSnapInfo:machineReadableCode:lensOptions:]
// Type encoding: v104@0:8@16@24@32B40@44@52B60@64@72@80@88@96
// Implementation: 0x106471374

// -[SCLensSocialUnlockFlow _applicationWillEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x106471b64

// -[SCLensSocialUnlockFlow _didDismissCameraWithDelegate:didSendSnap:lensReplyParams:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106471bec

// -[SCLensSocialUnlockFlow _modularCameraLensData]
// Type encoding: @16@0:8
// Implementation: 0x106471d1c

// -[SCLensSocialUnlockFlow _lensReplyParamsWithReplyParameters:promptLensReplyParameters:inLensCreationReplyParameters:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106471df4

// -[SCLensSocialUnlockFlow _replyConfigurationWithLensReplyParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064722b8

// -[SCLensSocialUnlockFlow _presentCameraWithPresentingViewController:lensModularCameraLensData:replyParameters:dismissBlock:lensWithId:collectionWithId:machineReadableCode:unlockableSnapInfo:needsLensReplyCameraScope:lensOptions:isLensCollectionType:]
// Type encoding: v96@0:8@16@24@32@?40@48@56@64@72B80@84B92
// Implementation: 0x10647240c

// -[SCLensSocialUnlockFlow _fetchLensWithId:machineReadableCode:unlockableSnapInfo:replyParameters:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1064729f8

// -[SCLensSocialUnlockFlow _legacyFetchLensWithId:machineReadableCode:unlockableSnapInfo:replyParameters:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106472f4c

// -[SCLensSocialUnlockFlow _didUnlockLensWithResult:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106473260

// -[SCLensSocialUnlockFlow _shouldPresentWithGamesViewOnLensId:presentationMode:isPlayGamesCTA:isTurnBasedReply:activationSource:isGameLens:]
// Type encoding: B52@0:8@16q24B32B36Q40B48
// Implementation: 0x1064733e0

// -[SCLensSocialUnlockFlow _shouldPresentWithSingleLensModeOnLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106473528

// -[SCLensSocialUnlockFlow _presentationModeWithIsLensCollectionType:collectionId:needsLensReplyCameraScope:lensId:isPlayGamesCTA:isTurnBasedReply:activationSource:isGameLens:]
// Type encoding: q60@0:8B16@20B28@32B40B44Q48B56
// Implementation: 0x106473678

// -[SCLensSocialUnlockFlow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106473774

// +[SCLensSocialUnlockFlow _unlockSourceFromReplySnapSource:]
// Type encoding: Q24@0:8q16
// Implementation: 0x1064733cc

// +[SCLensSocialUnlockFlow _isPlayGamesCTAFromReplyParameters:]
// Type encoding: B24@0:8@16
// Implementation: 0x1064735b8

// +[SCLensSocialUnlockFlow _isTurnBasedReplyFromReplyParameters:]
// Type encoding: B24@0:8@16
// Implementation: 0x1064735fc

@end
