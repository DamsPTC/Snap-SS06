// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDataFlowsManager
// Superclass: NSObject
// Address: 0x112b43808

@interface SCSpectaclesDataFlowsManager

// Property: taskQueue; attributes: T@"SCSpectaclesTaskQueue",&,N,V_taskQueue
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: stateObservable; attributes: T@"SCObservable",R,N,V_stateObservable

// -[SCSpectaclesDataFlowsManager initWithDevice:peripheralResponseHandler:connectionHub:centralManager:backgroundTaskWrapper:clientControllerScopeExposer:clientControllerScopeServices:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106eb3ad0

// -[SCSpectaclesDataFlowsManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106eb3d30

// -[SCSpectaclesDataFlowsManager initiateDataFlowWithRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb3ef0

// -[SCSpectaclesDataFlowsManager addTasks:forRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb41e8

// -[SCSpectaclesDataFlowsManager moveTaskToTheFrontOfTheQueue:forRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb43e8

// -[SCSpectaclesDataFlowsManager cancelDataFlowRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb43ec

// -[SCSpectaclesDataFlowsManager clientControllerConnectedClient:withChannelConnectionTimeInMs:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb4528

// -[SCSpectaclesDataFlowsManager clientController:didErrorShouldReTry:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106eb475c

// -[SCSpectaclesDataFlowsManager clientControllerDisconnectingClient:disconnectReason:error:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x106eb47f4

// -[SCSpectaclesDataFlowsManager clientControllerDisconnectedClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb490c

// -[SCSpectaclesDataFlowsManager taskExecutor:startedExecutingTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb4ad0

// -[SCSpectaclesDataFlowsManager taskExecutor:updatedProgressForTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb4d14

// -[SCSpectaclesDataFlowsManager taskExecutor:didExecutedTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb4e98

// -[SCSpectaclesDataFlowsManager taskExecutor:failedToExecuteTask:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106eb50d8

// -[SCSpectaclesDataFlowsManager taskExecutor:failedWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb5258

// -[SCSpectaclesDataFlowsManager taskExecutorDidExecutedAllTasks:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb5400

// -[SCSpectaclesDataFlowsManager _addNewRequestState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb5474

// -[SCSpectaclesDataFlowsManager _cancelRequestState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb56e8

// -[SCSpectaclesDataFlowsManager _handleTaskDoneForRequestState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb5820

// -[SCSpectaclesDataFlowsManager _handleTaskFailedForRequestState:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb597c

// -[SCSpectaclesDataFlowsManager _markCompletedRequestState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb5a08

// -[SCSpectaclesDataFlowsManager _markFailedRequestState:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb5b40

// -[SCSpectaclesDataFlowsManager _closeChannelIfNoLongerNeededForTransferChannel:]
// Type encoding: v24@0:8q16
// Implementation: 0x106eb5c90

// -[SCSpectaclesDataFlowsManager _haveOpenTransferChannel:]
// Type encoding: B24@0:8q16
// Implementation: 0x106eb5e68

// -[SCSpectaclesDataFlowsManager _canSetupTransferChannel:error:]
// Type encoding: B32@0:8q16^@24
// Implementation: 0x106eb5f20

// -[SCSpectaclesDataFlowsManager _checkRequestsThatAreWaitingForChannelToFinishDisconnecting:]
// Type encoding: v24@0:8q16
// Implementation: 0x106eb6080

// -[SCSpectaclesDataFlowsManager _setupTransferChannelWithRequestState:]
// Type encoding: B24@0:8@16
// Implementation: 0x106eb634c

// -[SCSpectaclesDataFlowsManager _connectClientController:scope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb67d4

// -[SCSpectaclesDataFlowsManager reConnectClients]
// Type encoding: v16@0:8
// Implementation: 0x106eb6890

// -[SCSpectaclesDataFlowsManager _shouldReTryClientController:error:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106eb69d8

// -[SCSpectaclesDataFlowsManager _shouldReTryTransferChannelContainer:error:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106eb6b3c

// -[SCSpectaclesDataFlowsManager _handleUnrecoverableErrorForTransferChannelContainer:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb6bc4

// -[SCSpectaclesDataFlowsManager _startExecutingTasksWithRequestState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb6d58

// -[SCSpectaclesDataFlowsManager _addTasks:forRequestState:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb6ec4

// -[SCSpectaclesDataFlowsManager _removeTasksForRequestState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb71bc

// -[SCSpectaclesDataFlowsManager _startStaleRequestTimer]
// Type encoding: v16@0:8
// Implementation: 0x106eb7388

// -[SCSpectaclesDataFlowsManager _stopStaleRequestTimer]
// Type encoding: v16@0:8
// Implementation: 0x106eb7410

// -[SCSpectaclesDataFlowsManager _handleStaleRequestTimer]
// Type encoding: v16@0:8
// Implementation: 0x106eb746c

// -[SCSpectaclesDataFlowsManager _isStaleRequestState:]
// Type encoding: B24@0:8@16
// Implementation: 0x106eb76c0

// -[SCSpectaclesDataFlowsManager _updateBackgroundTask]
// Type encoding: v16@0:8
// Implementation: 0x106eb77c8

// -[SCSpectaclesDataFlowsManager _beginBackgroundTask]
// Type encoding: v16@0:8
// Implementation: 0x106eb7828

// -[SCSpectaclesDataFlowsManager _endBackgroundTask]
// Type encoding: v16@0:8
// Implementation: 0x106eb78b0

// -[SCSpectaclesDataFlowsManager _updateConnectionState]
// Type encoding: v16@0:8
// Implementation: 0x106eb7914

// -[SCSpectaclesDataFlowsManager connectedOverBT]
// Type encoding: B16@0:8
// Implementation: 0x106eb7b18

// -[SCSpectaclesDataFlowsManager tryingToConnectBT]
// Type encoding: B16@0:8
// Implementation: 0x106eb7b6c

// -[SCSpectaclesDataFlowsManager connectedOverBLE]
// Type encoding: B16@0:8
// Implementation: 0x106eb7bc0

// -[SCSpectaclesDataFlowsManager tryingToConnectBLE]
// Type encoding: B16@0:8
// Implementation: 0x106eb7c14

// -[SCSpectaclesDataFlowsManager connectedOverWiFi]
// Type encoding: B16@0:8
// Implementation: 0x106eb7c68

// -[SCSpectaclesDataFlowsManager tryingToConnectWiFi]
// Type encoding: B16@0:8
// Implementation: 0x106eb7cbc

// -[SCSpectaclesDataFlowsManager connectedOverBLEOrWiFi]
// Type encoding: B16@0:8
// Implementation: 0x106eb7d10

// -[SCSpectaclesDataFlowsManager connectedOverBTOrWiFi]
// Type encoding: B16@0:8
// Implementation: 0x106eb7d48

// -[SCSpectaclesDataFlowsManager tryingToConnectBTForContentTransfer]
// Type encoding: B16@0:8
// Implementation: 0x106eb7d80

// -[SCSpectaclesDataFlowsManager _requestStateWithRequestIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x106eb7db4

// -[SCSpectaclesDataFlowsManager _requestStateForTask:]
// Type encoding: @24@0:8@16
// Implementation: 0x106eb7f20

// -[SCSpectaclesDataFlowsManager _requestStatesWithTransferChannel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106eb8000

// -[SCSpectaclesDataFlowsManager _requestStatesWithBackgroundExecutionMode:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106eb8178

// -[SCSpectaclesDataFlowsManager stateObservable]
// Type encoding: @16@0:8
// Implementation: 0x106eb82f0

// -[SCSpectaclesDataFlowsManager taskQueue]
// Type encoding: @16@0:8
// Implementation: 0x106eb82f8

// -[SCSpectaclesDataFlowsManager setTaskQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb8300

// -[SCSpectaclesDataFlowsManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106eb8330

@end
