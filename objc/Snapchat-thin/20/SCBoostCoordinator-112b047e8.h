// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBoostCoordinator
// Superclass: NSObject
// Address: 0x112b047e8

@interface SCBoostCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBoostCoordinator initWithDocObjectContext:currentUserId:requestManager:snapTokenProvider:attestationProvider:networkConnectivityMonitor:locationProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1068bbdbc

// -[SCBoostCoordinator observableBoostStatesWithStoryId:snapId:observationQueue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1068bbfa0

// -[SCBoostCoordinator observableBoostStatesWithItemIds:observationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1068bc02c

// -[SCBoostCoordinator fetchBoostStatesWithItemIds:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068bc0a8

// -[SCBoostCoordinator fetchBoostStatesWithStoryId:snapId:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1068bc294

// -[SCBoostCoordinator saveBoostAction:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068bc498

// -[SCBoostCoordinator saveBoostActionLocally:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068bc668

// -[SCBoostCoordinator deleteExpiredStatesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1068bc798

// -[SCBoostCoordinator resetBoostActionsForUploading]
// Type encoding: v16@0:8
// Implementation: 0x1068bc80c

// -[SCBoostCoordinator _fetchAccessTokenAndUploadBoostActionToServer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068bc82c

// -[SCBoostCoordinator _fetchArgosTokenAndUploadBoostActionToServer:accessToken:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068bca04

// -[SCBoostCoordinator _uploadBoostActionToServerWithRetryLogic:accessToken:attestationHeaders:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068bcc14

// -[SCBoostCoordinator _uploadBoostActionToServer:accessToken:attestationHeaders:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068bce2c

// -[SCBoostCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068bd144

@end
