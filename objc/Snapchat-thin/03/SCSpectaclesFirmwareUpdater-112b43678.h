// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFirmwareUpdater
// Superclass: NSObject
// Address: 0x112b43678

@interface SCSpectaclesFirmwareUpdater

// Property: parameters; attributes: T@"SCSpectaclesFirmwareUpdateParameters",&,N,V_parameters
// Property: updateActive; attributes: TB,N,V_updateActive
// Property: uploadDataFlowRequest; attributes: T@"<SCSpectaclesDataFlowsRequest>",&,N,V_uploadDataFlowRequest
// Property: uploadTask; attributes: T@"SCSpectaclesTaskFirmwareUpload",&,N,V_uploadTask
// Property: outstandingRequest; attributes: T@"SCSpectaclesRequestMessage",&,N,V_outstandingRequest
// Property: device; attributes: T@"SCSpectaclesDevice",W,N,V_device
// Property: state; attributes: Tq,N,V_state
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: savedPassiveUpdateParameters; attributes: T@"SCSpectaclesFirmwareUpdateParameters",&,N,V_savedPassiveUpdateParameters
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesFirmwareUpdater initWithDevice:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106ea96e8

// -[SCSpectaclesFirmwareUpdater _transitionToState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106ea97c4

// -[SCSpectaclesFirmwareUpdater startFirmwareUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ea9c4c

// -[SCSpectaclesFirmwareUpdater applyFirmwareUpdatePatch:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ea9d70

// -[SCSpectaclesFirmwareUpdater revertFirmwareBinary]
// Type encoding: v16@0:8
// Implementation: 0x106ea9f2c

// -[SCSpectaclesFirmwareUpdater requestUpdateWithParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eaa034

// -[SCSpectaclesFirmwareUpdater cancelUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106eaa190

// -[SCSpectaclesFirmwareUpdater _sendRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eaa288

// -[SCSpectaclesFirmwareUpdater _startUpload]
// Type encoding: v16@0:8
// Implementation: 0x106eaa2e4

// -[SCSpectaclesFirmwareUpdater _stopUpload]
// Type encoding: v16@0:8
// Implementation: 0x106eaa48c

// -[SCSpectaclesFirmwareUpdater _firmwareUploadTaskDidSucceed]
// Type encoding: v16@0:8
// Implementation: 0x106eaa548

// -[SCSpectaclesFirmwareUpdater responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x106eaa584

// -[SCSpectaclesFirmwareUpdater handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eaa58c

// -[SCSpectaclesFirmwareUpdater _handlePassiveUpdateResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eaa65c

// -[SCSpectaclesFirmwareUpdater _handleDiffUpdateResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eaa9fc

// -[SCSpectaclesFirmwareUpdater deviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eaaca4

// -[SCSpectaclesFirmwareUpdater device:didUpdateInfo:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106eaade8

// -[SCSpectaclesFirmwareUpdater dataFlowsRequest:executedTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eab064

// -[SCSpectaclesFirmwareUpdater dataFlowsRequest:failedToExecutedTask:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106eab164

// -[SCSpectaclesFirmwareUpdater dataFlowsRequest:updatedProgressForTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eab264

// -[SCSpectaclesFirmwareUpdater dataFlowsRequestCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eab424

// -[SCSpectaclesFirmwareUpdater dataFlowsRequestCancelled:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eab528

// -[SCSpectaclesFirmwareUpdater dataFlowsRequest:failedWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eab62c

// -[SCSpectaclesFirmwareUpdater savedPassiveUpdateParameters]
// Type encoding: @16@0:8
// Implementation: 0x106eab72c

// -[SCSpectaclesFirmwareUpdater setSavedPassiveUpdateParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eab734

// -[SCSpectaclesFirmwareUpdater parameters]
// Type encoding: @16@0:8
// Implementation: 0x106eab764

// -[SCSpectaclesFirmwareUpdater setParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eab76c

// -[SCSpectaclesFirmwareUpdater updateActive]
// Type encoding: B16@0:8
// Implementation: 0x106eab79c

// -[SCSpectaclesFirmwareUpdater setUpdateActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x106eab7a4

// -[SCSpectaclesFirmwareUpdater uploadDataFlowRequest]
// Type encoding: @16@0:8
// Implementation: 0x106eab7ac

// -[SCSpectaclesFirmwareUpdater setUploadDataFlowRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eab7b4

// -[SCSpectaclesFirmwareUpdater uploadTask]
// Type encoding: @16@0:8
// Implementation: 0x106eab7e4

// -[SCSpectaclesFirmwareUpdater setUploadTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eab7ec

// -[SCSpectaclesFirmwareUpdater outstandingRequest]
// Type encoding: @16@0:8
// Implementation: 0x106eab81c

// -[SCSpectaclesFirmwareUpdater setOutstandingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eab824

// -[SCSpectaclesFirmwareUpdater device]
// Type encoding: @16@0:8
// Implementation: 0x106eab854

// -[SCSpectaclesFirmwareUpdater setDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eab86c

// -[SCSpectaclesFirmwareUpdater state]
// Type encoding: q16@0:8
// Implementation: 0x106eab878

// -[SCSpectaclesFirmwareUpdater setState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106eab880

// -[SCSpectaclesFirmwareUpdater performer]
// Type encoding: @16@0:8
// Implementation: 0x106eab888

// -[SCSpectaclesFirmwareUpdater setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eab890

// -[SCSpectaclesFirmwareUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106eab8c0

@end
