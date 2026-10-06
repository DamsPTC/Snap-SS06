// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchatNetworkRequestSender
// Superclass: NSObject
// Address: 0x112b100e8

@interface SCSnapchatNetworkRequestSender

// Property: capturedTraceSessionID; attributes: T@"NSData",&,V_capturedTraceSessionID

// -[SCSnapchatNetworkRequestSender initWithHTTPMetadataService:httpRequestModifier:spectrum:graphene:configProvider:tokenProvider:blizzardSessionIDProvider:appInsightsMetadataStoring:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1006e8528

// -[SCSnapchatNetworkRequestSender uploadMetaData:workQueue:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x106aa2258

// -[SCSnapchatNetworkRequestSender _logUploadLatencyGraphene:outcome:statusCode:isAuthed:isManualEmail:isSpectrum:]
// Type encoding: v52@0:8d16Q24q32B40B44B48
// Implementation: 0x106aa26bc

// -[SCSnapchatNetworkRequestSender _logLegacyMetadataUploadLatency:outcome:statusCode:isAuthed:isManualEmail:]
// Type encoding: v48@0:8d16Q24q32B40B44
// Implementation: 0x106aa28e4

// -[SCSnapchatNetworkRequestSender _isAuthed]
// Type encoding: B16@0:8
// Implementation: 0x106aa2ac0

// -[SCSnapchatNetworkRequestSender uploadShakeLogs:uploadUrl:workQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x106aa2ad0

// -[SCSnapchatNetworkRequestSender _prepareShakeUploadToGCS:uploadUrl:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106aa2da8

// -[SCSnapchatNetworkRequestSender _reportToAirRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106aa2e6c

// -[SCSnapchatNetworkRequestSender captureTraceIDForShake]
// Type encoding: v16@0:8
// Implementation: 0x106aa4768

// -[SCSnapchatNetworkRequestSender traceSessionIDWithRenewal]
// Type encoding: @16@0:8
// Implementation: 0x106aa47b8

// -[SCSnapchatNetworkRequestSender _logUploadGraphene:statusCode:isAuthed:isManualEmail:isSpectrum:]
// Type encoding: v44@0:8Q16q24B32B36B40
// Implementation: 0x106aa484c

// -[SCSnapchatNetworkRequestSender _logMetadataGraphene:isManualEmail:isSpectrum:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x106aa4a64

// -[SCSnapchatNetworkRequestSender _isManualEmailReport:]
// Type encoding: B24@0:8@16
// Implementation: 0x106aa4ba8

// -[SCSnapchatNetworkRequestSender capturedTraceSessionID]
// Type encoding: @16@0:8
// Implementation: 0x106aa4d30

// -[SCSnapchatNetworkRequestSender setCapturedTraceSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa4d3c

// -[SCSnapchatNetworkRequestSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1009c44e4

@end
