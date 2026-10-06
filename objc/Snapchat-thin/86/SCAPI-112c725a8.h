// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAPI
// Superclass: NSObject
// Address: 0x112c725a8

@interface SCAPI


// +[SCAPI isErrorResponse:]
// Type encoding: B24@0:8@16
// Implementation: 0x100c31874

// +[SCAPI isErrorSojuResponse:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b2769e8

// +[SCAPI errorMessageForResponseDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b276a40

// +[SCAPI fallbackMessageForResponseDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b276a78

// +[SCAPI requestCouldNotConnectErrorDictionary]
// Type encoding: @16@0:8
// Implementation: 0x10b276ab0

// +[SCAPI requestSomethingWentWrongErrorDictionary]
// Type encoding: @16@0:8
// Implementation: 0x10b276b78

// +[SCAPI requestErrorInfoWithRequestDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b276c58

// +[SCAPI extractErrorMessageFromFailureResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b276ddc

// +[SCAPI stringForMethod:]
// Type encoding: @24@0:8q16
// Implementation: 0x1005a1a80

// +[SCAPI methodForString:]
// Type encoding: q24@0:8@16
// Implementation: 0x10b276f20

// +[SCAPI failureReasonFromStatusCode:withError:]
// Type encoding: q32@0:8q16@24
// Implementation: 0x10b276fec

// +[SCAPI failureReasonFromPosixErrorCode:]
// Type encoding: q24@0:8q16
// Implementation: 0x10b27706c

// +[SCAPI stringForFailureReason:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b2770a4

// +[SCAPI failureReasonStringFromPosixErrorCode:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b2770d4

// +[SCAPI generalDownloadSession]
// Type encoding: @16@0:8
// Implementation: 0x10b260714

// +[SCAPI streamingSession]
// Type encoding: @16@0:8
// Implementation: 0x10b2607a0

// +[SCAPI metadataSession]
// Type encoding: @16@0:8
// Implementation: 0x10b26082c

// +[SCAPI uploadSession]
// Type encoding: @16@0:8
// Implementation: 0x10b2608b8

// +[SCAPI backgroundUploadSession]
// Type encoding: @16@0:8
// Implementation: 0x10b260944

// +[SCAPI analyticsSession]
// Type encoding: @16@0:8
// Implementation: 0x10b2609d0

// +[SCAPI sessionForRequestType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b260a5c

// +[SCAPI requestInfoForURLRequest:path:requestKey:requestTypeStr:requestBatchId:requestSize:requestParser:trackingInfo:taskId:queuingLatency:isLargeDownloadRequest:isUserInitiated:isStreaming:appState:userContext:taskContext:userInitiatedQueuingLatency:completionQueue:completionBlock:]
// Type encoding: @156@0:8@16@24@32@40@48Q56@64@72@80q88B96B100B104q108@116@124q132@140@?148
// Implementation: 0x10b260b28

// +[SCAPI requestInfoForURLRequest:path:requestKey:requestTypeStr:requestBatchId:requestSize:resumedData:requestParser:trackingInfo:taskId:queuingLatency:isLargeDownloadRequest:isUserInitiated:isStreaming:appState:userContext:taskContext:userInitiatedQueuingLatency:completionQueue:completionBlock:]
// Type encoding: @164@0:8@16@24@32@40@48Q56@64@72@80@88q96B104B108B112q116@124@132q140@148@?156
// Implementation: 0x10b260b84

// +[SCAPI makeURLRequest:requestKey:method:session:URLSessionTaskPriority:requestInfoContainer:]
// Type encoding: @60@0:8@16@24q32@40f48@52
// Implementation: 0x10b2610c4

// +[SCAPI makeURLRequest:requestKey:uploadFileURL:method:session:URLSessionTaskPriority:requestInfoContainer:]
// Type encoding: @68@0:8@16@24@32q40@48f56@60
// Implementation: 0x10b261128

// +[SCAPI makeResumableURLRequest:resumeData:requestKey:method:session:URLSessionTaskPriority:requestInfoContainer:]
// Type encoding: @68@0:8@16@24@32q40@48f56@60
// Implementation: 0x10b2611d4

// +[SCAPI paramDictionary:endpoint:authenticator:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b2771a4

// +[SCAPI _buildRequestParamForEndpoint:parameters:authenticator:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1005a152c

// +[SCAPI URLRequestWithEndpoint:parameters:uploadData:additionalHTTPHeaders:method:compressionConfig:authenticator:]
// Type encoding: @72@0:8@16@24@32@40q48@56@64
// Implementation: 0x10b2772f8

// +[SCAPI _compressData:compressionConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b277b98

// +[SCAPI URLRequestWithURL:parameters:uploadFileURL:additionalHTTPHeaders:method:authenticator:]
// Type encoding: @64@0:8@16@24@32@40q48@56
// Implementation: 0x10b277c7c

// +[SCAPI URLRequestWithURL:parameters:uploadData:additionalHTTPHeaders:method:compressionConfig:authenticator:]
// Type encoding: @72@0:8@16@24@32@40q48@56@64
// Implementation: 0x1005a11d8

// +[SCAPI snapConnectURLRequestForPath:parameters:uploadData:additionalHTTPHeaders:method:]
// Type encoding: @56@0:8@16@24@32@40q48
// Implementation: 0x10b277e28

// +[SCAPI incSeqnoWithAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b278144

// +[SCAPI _updateRequest:withAdditionalHeaders:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1005a1fe4

@end
