// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSessionRequestManager
// Superclass: NSObject
// Address: 0x112c721e8

@interface SCSessionRequestManager

// Property: authToken; attributes: T@"NSString",R,C,N,V_authToken
// Property: username; attributes: T@"NSString",R,C,N,V_username
// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSessionRequestManager submitProtoRequest:responseClass:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16#24@32@?40
// Implementation: 0x10b265130

// -[SCSessionRequestManager initWithAuthToken:username:userId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10043dfe4

// -[SCSessionRequestManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b27413c

// -[SCSessionRequestManager submitRequest:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x10059e4c4

// -[SCSessionRequestManager submitRequest:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x100b431c0

// -[SCSessionRequestManager submitRequest:progressiveUpdateQueue:progressiveUpdateBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b27418c

// -[SCSessionRequestManager cancelRequestWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b274228

// -[SCSessionRequestManager cancelRequestWithKey:cancelReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b27427c

// -[SCSessionRequestManager boostRequestWithKey:toHigherConnectivity:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b2742e0

// -[SCSessionRequestManager boostRequestWithKey:toHigherPriority:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b274344

// -[SCSessionRequestManager updateRequestWithKey:toPriority:importance:connectivity:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x10b2743a8

// -[SCSessionRequestManager updateRequestWithKey:toPriority:importance:connectivity:pageId:]
// Type encoding: v52@0:8@16q24q32q40i48
// Implementation: 0x10b274424

// -[SCSessionRequestManager addContext:toRequestWithKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2744a8

// -[SCSessionRequestManager setContexts:withRequestManagerMode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b27451c

// -[SCSessionRequestManager cancelRequestsWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b274580

// -[SCSessionRequestManager cancelRequestsWithContext:cancelReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b2745d4

// -[SCSessionRequestManager consumeContentWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b274638

// -[SCSessionRequestManager setContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27463c

// -[SCSessionRequestManager addContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b274690

// -[SCSessionRequestManager removeContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2746e4

// -[SCSessionRequestManager pauseBackgroundDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b274738

// -[SCSessionRequestManager resumeBackgroundDownloads]
// Type encoding: v16@0:8
// Implementation: 0x10b274770

// -[SCSessionRequestManager enableCriticalMode]
// Type encoding: v16@0:8
// Implementation: 0x10b2747a8

// -[SCSessionRequestManager disableCriticalMode]
// Type encoding: v16@0:8
// Implementation: 0x10b2747e0

// -[SCSessionRequestManager startToMonitorProgressWithRequestKey:queue:progressHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b274818

// -[SCSessionRequestManager stopToMonitorProgressWithRequestKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2748a4

// -[SCSessionRequestManager startToMonitorUploadProgressWithRequestKey:progressHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b2748f8

// -[SCSessionRequestManager submitRequestToEndpoint:relativeToURL:parameters:uploadData:key:additionalHeaders:contexts:requestParser:requestType:priority:connectivity:method:authenticated:useGzipRequestCompression:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v152@0:8@16@24@32@40@48@56@64@72q80q88q96q104B112B116@120@128@?136@?144
// Implementation: 0x10b27496c

// -[SCSessionRequestManager submitRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:priority:method:authenticated:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v124@0:8@16@24@32@40@48@56q64q72q80B88@92@100@?108@?116
// Implementation: 0x10b274b50

// -[SCSessionRequestManager submitImmediateRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:method:authenticated:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v116@0:8@16@24@32@40@48@56q64q72B80@84@92@?100@?108
// Implementation: 0x10b274d08

// -[SCSessionRequestManager submitRequestToEndpoint:parameters:uploadData:key:contexts:requestParser:requestType:priority:method:authenticated:completionQueue:completionBlock:]
// Type encoding: v108@0:8@16@24@32@40@48@56q64q72q80B88@92@?100
// Implementation: 0x10b274d4c

// -[SCSessionRequestManager submitRequestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:priority:method:authenticated:completionQueue:completionBlock:]
// Type encoding: v116@0:8@16@24@32@40@48@56@64q72q80q88B96@100@?108
// Implementation: 0x10b274d9c

// -[SCSessionRequestManager submitRequestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:priority:method:authenticated:useGzipRequestCompression:completionQueue:completionBlock:]
// Type encoding: v120@0:8@16@24@32@40@48@56@64q72q80q88B96B100@104@?112
// Implementation: 0x10b274ee0

// -[SCSessionRequestManager _requestToEndpoint:parameters:uploadData:additionalHttpHeaders:key:contexts:requestParser:requestType:priority:method:authenticated:useGzipRequestCompression:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64q72q80q88B96B100
// Implementation: 0x10b275028

// -[SCSessionRequestManager authToken]
// Type encoding: @16@0:8
// Implementation: 0x10b2751c8

// -[SCSessionRequestManager username]
// Type encoding: @16@0:8
// Implementation: 0x10b2751d0

// -[SCSessionRequestManager userId]
// Type encoding: @16@0:8
// Implementation: 0x10b2751d8

// -[SCSessionRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2751e0

@end
