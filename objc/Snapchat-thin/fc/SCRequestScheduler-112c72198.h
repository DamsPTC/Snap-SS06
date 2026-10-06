// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestScheduler
// Superclass: NSObject
// Address: 0x112c72198

@interface SCRequestScheduler

// Property: allTasks; attributes: T@"SCRequestTaskPool",&,N,V_allTasks
// Property: runningTaskState; attributes: T@"SCRequestManagerRunningTaskState",&,N,V_runningTaskState
// Property: runningNSURLSessionTasks; attributes: T@"NSMutableDictionary",&,N,V_runningNSURLSessionTasks
// Property: networkManagerLogger; attributes: T@"SCRequestManagerLogger",C,N,V_networkManagerLogger
// Property: isBackgroundDownloadPaused; attributes: TB,N,V_isBackgroundDownloadPaused
// Property: isAllDownloadPaused; attributes: TB,N,V_isAllDownloadPaused
// Property: queuePerformer; attributes: T@"<SCPerforming>",&,N,V_queuePerformer
// Property: isCriticalMode; attributes: TB,N,V_isCriticalMode
// Property: isContextOnlyModeForCurrentContextSession; attributes: TB,N,V_isContextOnlyModeForCurrentContextSession
// Property: lazyNetworkApiRouter; attributes: T@"SCLazy",&,N,V_lazyNetworkApiRouter
// Property: networkInterceptors; attributes: T@"NSArray<SCNetworkInterceptor>",C,V_networkInterceptors
// Property: networkDeps; attributes: T@"SCNetworkDeps",&,N,V_networkDeps
// Property: delegate; attributes: T@"<SCRequestSchedulerDelegate>",W,N,V_delegate
// Property: nonFatalReporter; attributes: T@"<SCNetworkNonFatalReporting>",&,N,V_nonFatalReporter
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRequestScheduler initWithQueuePerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000e0564

// -[SCRequestScheduler _appWillTerminate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2704c8

// -[SCRequestScheduler _sceneDidDisconnect:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2704d4

// -[SCRequestScheduler _applicationWillEnterForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b270504

// -[SCRequestScheduler _setupNativeRankerNotifiers]
// Type encoding: v16@0:8
// Implementation: 0x1005aea0c

// -[SCRequestScheduler _setupNetworkTracing]
// Type encoding: v16@0:8
// Implementation: 0x1000e2a40

// -[SCRequestScheduler _resetTasks]
// Type encoding: v16@0:8
// Implementation: 0x1000e0900

// -[SCRequestScheduler submitRequest:authenticator:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x100b43354

// -[SCRequestScheduler submitRequest:authenticator:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x10059e7e4

// -[SCRequestScheduler submitRequest:authenticator:progressiveUpdateQueue:progressiveUpdateBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10b2705d0

// -[SCRequestScheduler _submitRequest:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10059ec58

// -[SCRequestScheduler _addTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005a932c

// -[SCRequestScheduler _enqueueTask:reason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1005a9580

// -[SCRequestScheduler _enqueueTask:reason:andRun:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x1005a9588

// -[SCRequestScheduler cancelTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b270b9c

// -[SCRequestScheduler cancelTask:cancelReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b270ba4

// -[SCRequestScheduler cancelRequestWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b270cdc

// -[SCRequestScheduler cancelRequestWithKey:cancelReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b270d94

// -[SCRequestScheduler cancelQueuedRequestWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b270e54

// -[SCRequestScheduler _cancelRequestWithKey:cancelReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b270e58

// -[SCRequestScheduler cancelRequestsWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b270f60

// -[SCRequestScheduler cancelRequestsWithContext:cancelReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b270f68

// -[SCRequestScheduler handleUserInitiatedRequestWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b271230

// -[SCRequestScheduler _handleUserInitiatedRequestTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27138c

// -[SCRequestScheduler allowRequestRunOnWwanWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b271438

// -[SCRequestScheduler updateRequestWithKey:toPriority:importance:connectivity:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x10b271694

// -[SCRequestScheduler updateRequestWithKey:toPriority:importance:connectivity:pageId:]
// Type encoding: v56@0:8@16q24q32q40@48
// Implementation: 0x10b27169c

// -[SCRequestScheduler addContext:toRequestWithKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b271a44

// -[SCRequestScheduler _addContext:toRequestWithKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b271b24

// -[SCRequestScheduler _addContext:toRequestTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b271c1c

// -[SCRequestScheduler _updateTask:withContexts:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b271dd4

// -[SCRequestScheduler enableCriticalMode]
// Type encoding: v16@0:8
// Implementation: 0x10b271edc

// -[SCRequestScheduler disableCriticalMode]
// Type encoding: v16@0:8
// Implementation: 0x10b271f74

// -[SCRequestScheduler _runTaskUsingNSURLSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27200c

// -[SCRequestScheduler _onTaskComplete:response:data:error:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10b2721fc

// -[SCRequestScheduler _calculateSessionPriorityForTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27236c

// -[SCRequestScheduler _willRunTaskUsingNSURLSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b272478

// -[SCRequestScheduler _didRunNSURLSessionTaskWithKey:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b272578

// -[SCRequestScheduler _removeRunningNSURLSessionTaskWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b272654

// -[SCRequestScheduler contextsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b27272c

// -[SCRequestScheduler setContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008541d0

// -[SCRequestScheduler setContexts:withRequestManagerMode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b272838

// -[SCRequestScheduler _setContexts:withQueuePerformer:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100854258

// -[SCRequestScheduler _setContexts:withQueuePerformer:withRequestManagerMode:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x100854260

// -[SCRequestScheduler _setCurrentContextsForRunningNSURLSessionTasks]
// Type encoding: v16@0:8
// Implementation: 0x10b272844

// -[SCRequestScheduler addContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2729b0

// -[SCRequestScheduler removeContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b272ac4

// -[SCRequestScheduler removeContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b272ad0

// -[SCRequestScheduler removeContext:disableContextOnlyModeIfRemoved:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b272be4

// -[SCRequestScheduler removeWithChildsParentContext:disableContextOnlyModeIfRemoved:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b272bf0

// -[SCRequestScheduler pauseBackgroundDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b272bfc

// -[SCRequestScheduler resumeBackgroundDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b272c88

// -[SCRequestScheduler startToMonitorProgressWithRequestKey:queue:progressHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b272d14

// -[SCRequestScheduler stopToMonitorProgressWithRequestKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b272fd0

// -[SCRequestScheduler startToMonitorUploadProgressWithRequestKey:progressHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b273144

// -[SCRequestScheduler resetWithAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b273348

// -[SCRequestScheduler _shouldCancelTask:withAuthenticator:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b2736ec

// -[SCRequestScheduler networkReachabilityStatusDidChangeWithNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003db82c

// -[SCRequestScheduler _removeContext:withChilds:disableContextOnlyModeIfRemoved:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x10b2736f8

// -[SCRequestScheduler _removeTaskForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1008a2258

// -[SCRequestScheduler _hasIntersetContext:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b273900

// -[SCRequestScheduler _shouldEnterContextOnlyMode:withContexts:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x10b2739b0

// -[SCRequestScheduler _shouldLeaveContextOnlyMode:withContexts:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x10b273a28

// -[SCRequestScheduler downloadStateForRequestWithKey:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b273aa0

// -[SCRequestScheduler _loggerParameter]
// Type encoding: @16@0:8
// Implementation: 0x1005aa278

// -[SCRequestScheduler numOfLargeDLTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b273ca8

// -[SCRequestScheduler numOfUploadTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b273cb0

// -[SCRequestScheduler totalRequestConcurrencyReceivingData]
// Type encoding: Q16@0:8
// Implementation: 0x10b273cb8

// -[SCRequestScheduler downloadRequestConcurrency]
// Type encoding: Q16@0:8
// Implementation: 0x10b273cc0

// -[SCRequestScheduler metadataRequestConcurrency]
// Type encoding: Q16@0:8
// Implementation: 0x10b273cc8

// -[SCRequestScheduler _cancelNativeHttpRequestWithRequestTask:cancelReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b273cd0

// -[SCRequestScheduler _updateNativeHttpRequestWithRequestTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b273e3c

// -[SCRequestScheduler didRunTask:withData:withResponse:withError:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1008a1b44

// -[SCRequestScheduler _fetchClientSBConfigAndUpdateRequestIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10059ecc0

// -[SCRequestScheduler networkInterceptors]
// Type encoding: @16@0:8
// Implementation: 0x1005a0744

// -[SCRequestScheduler setNetworkInterceptors:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e2b7c

// -[SCRequestScheduler networkDeps]
// Type encoding: @16@0:8
// Implementation: 0x1005a8a4c

// -[SCRequestScheduler setNetworkDeps:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e2c2c

// -[SCRequestScheduler delegate]
// Type encoding: @16@0:8
// Implementation: 0x1008543a0

// -[SCRequestScheduler setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e2ac4

// -[SCRequestScheduler isCriticalMode]
// Type encoding: B16@0:8
// Implementation: 0x10b273f50

// -[SCRequestScheduler setIsCriticalMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b273f58

// -[SCRequestScheduler nonFatalReporter]
// Type encoding: @16@0:8
// Implementation: 0x1005a85e8

// -[SCRequestScheduler setNonFatalReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b273f60

// -[SCRequestScheduler allTasks]
// Type encoding: @16@0:8
// Implementation: 0x1005a9ef8

// -[SCRequestScheduler setAllTasks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e263c

// -[SCRequestScheduler runningTaskState]
// Type encoding: @16@0:8
// Implementation: 0x10b273f90

// -[SCRequestScheduler setRunningTaskState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b273f98

// -[SCRequestScheduler runningNSURLSessionTasks]
// Type encoding: @16@0:8
// Implementation: 0x1005a9564

// -[SCRequestScheduler setRunningNSURLSessionTasks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e2568

// -[SCRequestScheduler networkManagerLogger]
// Type encoding: @16@0:8
// Implementation: 0x10b273fc8

// -[SCRequestScheduler setNetworkManagerLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b273fd0

// -[SCRequestScheduler isBackgroundDownloadPaused]
// Type encoding: B16@0:8
// Implementation: 0x10b273fd8

// -[SCRequestScheduler setIsBackgroundDownloadPaused:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b273fe0

// -[SCRequestScheduler isAllDownloadPaused]
// Type encoding: B16@0:8
// Implementation: 0x10b273fe8

// -[SCRequestScheduler setIsAllDownloadPaused:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b273ff0

// -[SCRequestScheduler queuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1003db8d4

// -[SCRequestScheduler setQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b273ff8

// -[SCRequestScheduler isContextOnlyModeForCurrentContextSession]
// Type encoding: B16@0:8
// Implementation: 0x10b274028

// -[SCRequestScheduler setIsContextOnlyModeForCurrentContextSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b274030

// -[SCRequestScheduler lazyNetworkApiRouter]
// Type encoding: @16@0:8
// Implementation: 0x1005ae580

// -[SCRequestScheduler setLazyNetworkApiRouter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b274038

// -[SCRequestScheduler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b274068

@end
