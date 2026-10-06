// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDeviceController
// Superclass: NSObject
// Address: 0x112b433a8

@interface SCSpectaclesDeviceController

// Property: device; attributes: T@"SCSpectaclesDevice",R,N,V_device
// Property: contentRefreshController; attributes: T@"SCSpectaclesDeviceContentRefreshController",R,N,V_contentRefreshController
// Property: contentTransferController; attributes: T@"SCSpectaclesTransferController",R,N
// Property: progressiveContentLoader; attributes: T@"SCSpectaclesProgressiveContentLoader",R,N
// Property: backupStatusController; attributes: T@"SCSpectaclesBackupStatusController",R,N,V_backupStatusController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesDeviceController initWithDevice:analyticsLogger:crashLogger:cache:announcer:networkConnectivityServices:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106e9dd28

// -[SCSpectaclesDeviceController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106e9df80

// -[SCSpectaclesDeviceController contentTransferController]
// Type encoding: @16@0:8
// Implementation: 0x106e9dfd4

// -[SCSpectaclesDeviceController progressiveContentLoader]
// Type encoding: @16@0:8
// Implementation: 0x106e9e09c

// -[SCSpectaclesDeviceController activateDevice]
// Type encoding: v16@0:8
// Implementation: 0x106e9e128

// -[SCSpectaclesDeviceController _reconnectIfActive]
// Type encoding: v16@0:8
// Implementation: 0x106e9e168

// -[SCSpectaclesDeviceController deactivateDevice]
// Type encoding: v16@0:8
// Implementation: 0x106e9e1a0

// -[SCSpectaclesDeviceController rePairDevice]
// Type encoding: v16@0:8
// Implementation: 0x106e9e1c8

// -[SCSpectaclesDeviceController handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9e208

// -[SCSpectaclesDeviceController responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x106e9e330

// -[SCSpectaclesDeviceController deviceContentRefreshControllerStartedContentRefresh:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e338

// -[SCSpectaclesDeviceController deviceContentRefreshControllerStartedDownloadingThumbnail:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e348

// -[SCSpectaclesDeviceController deviceContentRefreshControllerCompletedDownloadingThumbnail:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e358

// -[SCSpectaclesDeviceController deviceContentRefreshControllerDidUpdateContentList:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e368

// -[SCSpectaclesDeviceController deviceContentRefreshControllerHasCompleted:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e398

// -[SCSpectaclesDeviceController deviceContentRefreshController:transferSession:failedWithError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106e9e3ec

// -[SCSpectaclesDeviceController deviceContentRefreshControllerDidReceiveBackupStatusEndEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9e3fc

// -[SCSpectaclesDeviceController contentTransferControllerStartedTransfer:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e40c

// -[SCSpectaclesDeviceController contentTransferControllerAddedNewContentRefreshTask:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e41c

// -[SCSpectaclesDeviceController contentTransferControllerStartedDownloadingContent:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e42c

// -[SCSpectaclesDeviceController contentTransferControllerUpdatedDownloadStatus:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e43c

// -[SCSpectaclesDeviceController contentTransferControllerCompletedDownloadingContent:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e44c

// -[SCSpectaclesDeviceController contentTransferControllerCompletedTransfer:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e45c

// -[SCSpectaclesDeviceController contentTransferControllerCancelledTransfer:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e4a8

// -[SCSpectaclesDeviceController contentTransferControllerFailedTransfer:transferSession:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106e9e4b8

// -[SCSpectaclesDeviceController device:didReceiveCrashReport:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9e4c8

// -[SCSpectaclesDeviceController deviceDidRequestBLERestart:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9e868

// -[SCSpectaclesDeviceController addDeviceLogsRequest:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106e9e88c

// -[SCSpectaclesDeviceController addDeviceIdleAnalyticsRequest:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106e9eb24

// -[SCSpectaclesDeviceController deleteAnalyticsLogs]
// Type encoding: v16@0:8
// Implementation: 0x106e9ed90

// -[SCSpectaclesDeviceController dataFlowsRequestStartedExecuting:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9efc0

// -[SCSpectaclesDeviceController dataFlowsRequest:executedTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9f144

// -[SCSpectaclesDeviceController dataFlowsRequestCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9f370

// -[SCSpectaclesDeviceController dataFlowsRequestCancelled:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9f428

// -[SCSpectaclesDeviceController dataFlowsRequest:failedWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e9f500

// -[SCSpectaclesDeviceController deviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9f6cc

// -[SCSpectaclesDeviceController device:didUpdateInfo:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106e9f79c

// -[SCSpectaclesDeviceController _setupRepeatedDeviceUpdatesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106e9f870

// -[SCSpectaclesDeviceController _sendDeviceUpdateRequest]
// Type encoding: v16@0:8
// Implementation: 0x106e9f8dc

// -[SCSpectaclesDeviceController updateGPSAlmanac:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9fb38

// -[SCSpectaclesDeviceController _applicationDidBecomeActiveNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9fd0c

// -[SCSpectaclesDeviceController _addNewDeviceSyncRequestIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106e9fe3c

// -[SCSpectaclesDeviceController _addStartBLERequest]
// Type encoding: v16@0:8
// Implementation: 0x106ea0010

// -[SCSpectaclesDeviceController _cancelStartBLERequest]
// Type encoding: v16@0:8
// Implementation: 0x106ea00d8

// -[SCSpectaclesDeviceController _stopTransferDataFlow]
// Type encoding: v16@0:8
// Implementation: 0x106ea012c

// -[SCSpectaclesDeviceController _stopSecondaryDataFlow]
// Type encoding: v16@0:8
// Implementation: 0x106ea0164

// -[SCSpectaclesDeviceController _handleDownloadLogsRequestFailedOrCancelled:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea0280

// -[SCSpectaclesDeviceController device]
// Type encoding: @16@0:8
// Implementation: 0x106ea0360

// -[SCSpectaclesDeviceController contentRefreshController]
// Type encoding: @16@0:8
// Implementation: 0x106ea0368

// -[SCSpectaclesDeviceController backupStatusController]
// Type encoding: @16@0:8
// Implementation: 0x106ea0370

// -[SCSpectaclesDeviceController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ea0378

@end
