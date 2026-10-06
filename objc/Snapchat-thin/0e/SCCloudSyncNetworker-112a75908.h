// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncNetworker
// Superclass: NSObject
// Address: 0x112a75908

@interface SCCloudSyncNetworker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCloudSyncNetworker initWithRequestManager:networkConnectivityMonitor:userTrackedLogger:headerProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1058c0454

// -[SCCloudSyncNetworker networkResumeableDownloadRequestWithUrl:key:SOJURequest:isSmallFile:additionalHTTPHeaders:contexts:trackingInfo:]
// Type encoding: @68@0:8@16@24@32B40@44@52@60
// Implementation: 0x1058c0550

// -[SCCloudSyncNetworker submitDownloadRequest:callbackQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1058c0680

// -[SCCloudSyncNetworker submitResumeableRequest:callbackQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1058c077c

// -[SCCloudSyncNetworker submitPostRequestToURL:SOJURequest:key:contexts:requestParser:callbackQueue:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x1058c0878

// -[SCCloudSyncNetworker submitPostRequestToURL:SOJURequest:key:contexts:requestParser:callbackQueue:completionBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x1058c0b5c

// -[SCCloudSyncNetworker submitPostRequestToEndpoint:SOJURequest:additionalHTTPHeaders:key:contexts:requestParser:authenticated:shouldTrace:callbackQueue:successBlock:failureBlock:]
// Type encoding: v96@0:8@16@24@32@40@48@56B64B68@72@?80@?88
// Implementation: 0x1058c0efc

// -[SCCloudSyncNetworker submitPostRequestToEndpoint:proto:additionalHTTPHeaders:callbackQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x1058c14b0

// -[SCCloudSyncNetworker submitPutRequestToURL:uploadData:additionalHTTPHeaders:key:contexts:callbackQueue:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x1058c17c0

// -[SCCloudSyncNetworker submitPutRequestToURL:uploadFileURL:additionalHTTPHeaders:key:contexts:callbackQueue:progressBlock:successBlock:failureBlock:]
// Type encoding: v88@0:8@16@24@32@40@48@56@?64@?72@?80
// Implementation: 0x1058c1a74

// -[SCCloudSyncNetworker submitBackgroundPutRequestToURL:uploadFileURL:additionalHTTPHeaders:key:contexts:callbackQueue:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x1058c1d48

// -[SCCloudSyncNetworker _configureAdditionalHTTPHeadersIfNeeded:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058c1ff4

// -[SCCloudSyncNetworker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058c2060

@end
