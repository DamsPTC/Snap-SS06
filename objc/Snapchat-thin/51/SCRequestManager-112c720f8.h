// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestManager
// Superclass: NSObject
// Address: 0x112c720f8

@interface SCRequestManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: networkInterceptors; attributes: T@"NSArray<SCNetworkInterceptor>",C,N
// Property: delegate; attributes: T@"<SCRequestManagerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRequestManager submitRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:priority:method:authenticated:authenticator:useGzipRequestCompression:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: @136@0:8@16@24@32@40@48@56q64q72q80B88@92B100@104@112@?120@?128
// Implementation: 0x10b264a40

// -[SCRequestManager submitRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:priority:method:authenticated:authenticator:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: @132@0:8@16@24@32@40@48@56q64q72q80B88@92@100@108@?116@?124
// Implementation: 0x10b264aac

// -[SCRequestManager _submitRequestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:priority:method:authenticated:authenticator:useGzipRequestCompression:maxNumRequestAttempts:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64q72q80q88B96@100B108@112@120@128@?136@?144
// Implementation: 0x10b264b14

// -[SCRequestManager submitImmediateRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:method:authenticated:authenticator:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: @124@0:8@16@24@32@40@48@56q64q72B80@84@92@100@?108@?116
// Implementation: 0x10b264d24

// -[SCRequestManager submitImmediateRequestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:method:authenticated:authenticator:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: @132@0:8@16@24@32@40@48@56@64q72q80B88@92@100@108@?116@?124
// Implementation: 0x10b264d78

// -[SCRequestManager submitImmediateRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:method:authenticated:authenticator:maxNumRequestAttempts:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: @132@0:8@16@24@32@40@48@56q64q72B80@84@92@100@108@?116@?124
// Implementation: 0x10b264dd0

// -[SCRequestManager submitRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:priority:method:authenticated:authenticator:completionQueue:completionBlock:]
// Type encoding: @116@0:8@16@24@32@40@48@56q64q72q80B88@92@100@?108
// Implementation: 0x10b264e34

// -[SCRequestManager _requestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:priority:method:authenticated:useGzipRequestCompression:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64q72q80q88B96B100
// Implementation: 0x10b264f90

// -[SCRequestManager init]
// Type encoding: @16@0:8
// Implementation: 0x1000e0410

// -[SCRequestManager networkManager]
// Type encoding: @16@0:8
// Implementation: 0x100107d58

// -[SCRequestManager submitRequest:authenticator:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x100b43260

// -[SCRequestManager submitRequest:authenticator:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x10059e598

// -[SCRequestManager submitRequest:authenticator:progressiveUpdateQueue:progressiveUpdateBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10b2700e8

// -[SCRequestManager submitRequest:progressiveUpdateQueue:progressiveUpdateBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b2701c8

// -[SCRequestManager submitRequest:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b2701dc

// -[SCRequestManager submitRequest:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x10b2701ec

// -[SCRequestManager cancelRequestWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b270204

// -[SCRequestManager cancelRequestWithKey:cancelReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b27020c

// -[SCRequestManager cancelQueuedRequestWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b270214

// -[SCRequestManager cancelRequestsWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27021c

// -[SCRequestManager cancelRequestsWithContext:cancelReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b270224

// -[SCRequestManager boostRequestWithKey:toHigherPriority:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b27022c

// -[SCRequestManager boostRequestWithKey:toHigherConnectivity:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b270234

// -[SCRequestManager updateRequestWithKey:toPriority:importance:connectivity:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x10b27023c

// -[SCRequestManager updateRequestWithKey:toPriority:importance:connectivity:pageId:]
// Type encoding: v52@0:8@16q24q32q40i48
// Implementation: 0x10b270244

// -[SCRequestManager addContext:toRequestWithKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b27024c

// -[SCRequestManager enableCriticalMode]
// Type encoding: v16@0:8
// Implementation: 0x10b270254

// -[SCRequestManager disableCriticalMode]
// Type encoding: v16@0:8
// Implementation: 0x10b27025c

// -[SCRequestManager setNetworkInterceptors:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e2b3c

// -[SCRequestManager networkInterceptors]
// Type encoding: @16@0:8
// Implementation: 0x10b270264

// -[SCRequestManager contextsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b27026c

// -[SCRequestManager setContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008541c0

// -[SCRequestManager setContexts:withRequestManagerMode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b270274

// -[SCRequestManager addContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27027c

// -[SCRequestManager removeContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b270284

// -[SCRequestManager removeContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27028c

// -[SCRequestManager removeContext:disableContextOnlyModeIfRemoved:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b270294

// -[SCRequestManager removeWithChildsParentContext:disableContextOnlyModeIfRemoved:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b27029c

// -[SCRequestManager pauseBackgroundDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b2702a4

// -[SCRequestManager resumeBackgroundDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b2702ac

// -[SCRequestManager startToMonitorProgressWithRequestKey:queue:progressHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b2702b4

// -[SCRequestManager stopToMonitorProgressWithRequestKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2702bc

// -[SCRequestManager startToMonitorUploadProgressWithRequestKey:progressHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b2702c4

// -[SCRequestManager downloadStateForRequestWithKey:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b2702cc

// -[SCRequestManager resetWithAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2702d4

// -[SCRequestManager criticalModeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b2702dc

// -[SCRequestManager numOfLargeDLTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b2702e4

// -[SCRequestManager numOfUploadTasks]
// Type encoding: Q16@0:8
// Implementation: 0x10b2702ec

// -[SCRequestManager totalRequestConcurrencyReceivingData]
// Type encoding: Q16@0:8
// Implementation: 0x10b2702f4

// -[SCRequestManager downloadRequestConcurrency]
// Type encoding: Q16@0:8
// Implementation: 0x10b2702fc

// -[SCRequestManager metadataRequestConcurrency]
// Type encoding: Q16@0:8
// Implementation: 0x10b270304

// -[SCRequestManager consumeContentWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27030c

// -[SCRequestManager contextsDidChangeForNetworkManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x100854420

// -[SCRequestManager setNetworkDeps:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e2b84

// -[SCRequestManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x100854470

// -[SCRequestManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b270314

// -[SCRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b270320

// +[SCRequestManager requestContextsForWatchingFriendStories:]
// Type encoding: @24@0:8@16
// Implementation: 0x10721d134

// +[SCRequestManager requestContextForFriendStoriesInChatViewWithUsername:]
// Type encoding: @24@0:8@16
// Implementation: 0x10721d2a0

// +[SCRequestManager pageContextForFriendStories:]
// Type encoding: @24@0:8@16
// Implementation: 0x10721d36c

// +[SCRequestManager shared]
// Type encoding: @16@0:8
// Implementation: 0x1000e0140

// +[SCRequestManager cronetConfig]
// Type encoding: @16@0:8
// Implementation: 0x1000f6ef0

// +[SCRequestManager networkQualityEstimatorConfig]
// Type encoding: @16@0:8
// Implementation: 0x1005c92d4

// +[SCRequestManager cronetStreamEngineFromNnm]
// Type encoding: ^v16@0:8
// Implementation: 0x1000f6e9c

@end
