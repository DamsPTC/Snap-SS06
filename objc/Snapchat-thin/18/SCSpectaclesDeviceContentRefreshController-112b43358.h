// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDeviceContentRefreshController
// Superclass: NSObject
// Address: 0x112b43358

@interface SCSpectaclesDeviceContentRefreshController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesDeviceContentRefreshController initWithDevice:analyticsLogger:cache:delegate:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106e9ac88

// -[SCSpectaclesDeviceContentRefreshController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106e9ae08

// -[SCSpectaclesDeviceContentRefreshController initiateContentRefresh]
// Type encoding: v16@0:8
// Implementation: 0x106e9aebc

// -[SCSpectaclesDeviceContentRefreshController currentTransferSession]
// Type encoding: @16@0:8
// Implementation: 0x106e9b178

// -[SCSpectaclesDeviceContentRefreshController isContentRefreshInProgress]
// Type encoding: B16@0:8
// Implementation: 0x106e9b1dc

// -[SCSpectaclesDeviceContentRefreshController cancelContentRefresh]
// Type encoding: v16@0:8
// Implementation: 0x106e9b224

// -[SCSpectaclesDeviceContentRefreshController deleteSyncedContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9b2d4

// -[SCSpectaclesDeviceContentRefreshController dataFlowsRequest:startedExecutingTask:connectionTimeInMs:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106e9b33c

// -[SCSpectaclesDeviceContentRefreshController dataFlowsRequest:executedTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9b4e8

// -[SCSpectaclesDeviceContentRefreshController dataFlowsRequest:failedToExecutedTask:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106e9b83c

// -[SCSpectaclesDeviceContentRefreshController dataFlowsRequestCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9b8fc

// -[SCSpectaclesDeviceContentRefreshController dataFlowsRequestCancelled:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9ba7c

// -[SCSpectaclesDeviceContentRefreshController dataFlowsRequest:failedWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9baf0

// -[SCSpectaclesDeviceContentRefreshController _handleMediaListTaskCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9bbd4

// -[SCSpectaclesDeviceContentRefreshController _handleMetadataTaskCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9bc18

// -[SCSpectaclesDeviceContentRefreshController _handleMetadataTaskFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9c5c4

// -[SCSpectaclesDeviceContentRefreshController _generateTasksWithMediaList:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9c700

// -[SCSpectaclesDeviceContentRefreshController _populateContentMetadata:fromMetadataTask:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106e9c940

// -[SCSpectaclesDeviceContentRefreshController _emptySdVideoFileForContentIfNeeded:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e9cfd4

// -[SCSpectaclesDeviceContentRefreshController _createFileWithLocalFilename:fromMetadata:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106e9d0bc

// -[SCSpectaclesDeviceContentRefreshController _createFileWithLocalFilename:fromGenericAssetMetadata:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106e9d1c8

// -[SCSpectaclesDeviceContentRefreshController _enqueueTasks:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9d2d4

// -[SCSpectaclesDeviceContentRefreshController _isBackgrounded]
// Type encoding: B16@0:8
// Implementation: 0x106e9d43c

// -[SCSpectaclesDeviceContentRefreshController _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x106e9d484

// -[SCSpectaclesDeviceContentRefreshController _transferChannel]
// Type encoding: q16@0:8
// Implementation: 0x106e9d50c

// -[SCSpectaclesDeviceContentRefreshController _addRefreshContentRequestIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106e9d598

// -[SCSpectaclesDeviceContentRefreshController deviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9d8f4

// -[SCSpectaclesDeviceContentRefreshController device:didUpdateInfo:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106e9d9e8

// -[SCSpectaclesDeviceContentRefreshController device:didReceiveCrashReport:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9da6c

// -[SCSpectaclesDeviceContentRefreshController deviceDidStartRecording:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9da78

// -[SCSpectaclesDeviceContentRefreshController responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x106e9daec

// -[SCSpectaclesDeviceContentRefreshController handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9daf4

// -[SCSpectaclesDeviceContentRefreshController _handleMediaCount:]
// Type encoding: B24@0:8q16
// Implementation: 0x106e9dc48

// -[SCSpectaclesDeviceContentRefreshController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e9dcb8

@end
