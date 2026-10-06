// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesTransferController
// Superclass: NSObject
// Address: 0x112b43628

@interface SCSpectaclesTransferController

// Property: currentMutableTransferSession; attributes: T@"SCSpectaclesMutableTransferSession",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesTransferController initWithDevice:delegate:dataFlowsManager:analyticsLogger:networkConnectivityServices:shouldDisplayErrorAlertWhenTransferFails:]
// Type encoding: @60@0:8@16@24@32@40@48B56
// Implementation: 0x106ea6518

// -[SCSpectaclesTransferController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106ea66b0

// -[SCSpectaclesTransferController initiateContentTransferWithStartSource:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ea673c

// -[SCSpectaclesTransferController initiateContentTransferForContentIds:withStartSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ea6830

// -[SCSpectaclesTransferController initiateAnimatedThumbnailTransferForContentIds:withStartSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ea6a60

// -[SCSpectaclesTransferController cancelTransfer]
// Type encoding: v16@0:8
// Implementation: 0x106ea6cc8

// -[SCSpectaclesTransferController currentTransferSession]
// Type encoding: @16@0:8
// Implementation: 0x106ea6da4

// -[SCSpectaclesTransferController currentMutableTransferSession]
// Type encoding: @16@0:8
// Implementation: 0x106ea6f28

// -[SCSpectaclesTransferController prioritizeTransferForContent:context:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ea7094

// -[SCSpectaclesTransferController dataFlowsRequestStartedPreparing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea718c

// -[SCSpectaclesTransferController dataFlowsRequest:startedExecutingTask:channelConnectionTimeInMs:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106ea72ac

// -[SCSpectaclesTransferController dataFlowsRequest:updatedProgressForTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ea756c

// -[SCSpectaclesTransferController dataFlowsRequest:executedTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ea7750

// -[SCSpectaclesTransferController _completeContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea7a08

// -[SCSpectaclesTransferController dataFlowsRequestCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea7a94

// -[SCSpectaclesTransferController dataFlowsRequestCancelled:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea7c2c

// -[SCSpectaclesTransferController dataFlowsRequest:failedWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ea7d94

// -[SCSpectaclesTransferController _logTransferFlowStarted]
// Type encoding: v16@0:8
// Implementation: 0x106ea8160

// -[SCSpectaclesTransferController _logTransferFlowCancelled]
// Type encoding: v16@0:8
// Implementation: 0x106ea828c

// -[SCSpectaclesTransferController _logConnectionStart]
// Type encoding: v16@0:8
// Implementation: 0x106ea83b4

// -[SCSpectaclesTransferController _logConnectionOpenWithConnectionTimeInMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea83f0

// -[SCSpectaclesTransferController _logConnectionFailure]
// Type encoding: v16@0:8
// Implementation: 0x106ea853c

// -[SCSpectaclesTransferController _specsConnectionInfo]
// Type encoding: @16@0:8
// Implementation: 0x106ea85a0

// -[SCSpectaclesTransferController _addTransferRequestWithStartSource:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ea8920

// -[SCSpectaclesTransferController _addTransferRequestForContents:withStartSource:animatedThumbnailOnly:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x106ea89a4

// -[SCSpectaclesTransferController _cancelBackupForContents:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea8dfc

// -[SCSpectaclesTransferController _cancelTransferRequest]
// Type encoding: v16@0:8
// Implementation: 0x106ea8e7c

// -[SCSpectaclesTransferController _isBackgrounded]
// Type encoding: B16@0:8
// Implementation: 0x106ea8ef8

// -[SCSpectaclesTransferController _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x106ea8f40

// -[SCSpectaclesTransferController _retryTransfer]
// Type encoding: v16@0:8
// Implementation: 0x106ea8fcc

// -[SCSpectaclesTransferController _markContentTransferredAfterTransferCompleteIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea8fd4

// -[SCSpectaclesTransferController _shouldAnnounceUpdatesForTask:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ea9140

// -[SCSpectaclesTransferController _displayErrorAlertViewShouldAddRetryButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ea9164

// -[SCSpectaclesTransferController _dismissErrorAlertView]
// Type encoding: v16@0:8
// Implementation: 0x106ea95fc

// -[SCSpectaclesTransferController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ea9654

@end
