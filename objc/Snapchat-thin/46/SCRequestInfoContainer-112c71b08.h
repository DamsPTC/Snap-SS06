// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestInfoContainer
// Superclass: NSObject
// Address: 0x112c71b08

@interface SCRequestInfoContainer

// Property: requestInfo; attributes: T@"SCAPIRequestInfo",&,N,V_requestInfo
// Property: uploadProgress; attributes: T@"NSProgress",&,N,V_uploadProgress
// Property: downloadProgress; attributes: T@"NSProgress",&,N,V_downloadProgress
// Property: concurrencyObserver; attributes: T@"<SCRequestConcurrencyObserver>",W,N,V_concurrencyObserver
// Property: moveFileError; attributes: T@"NSError",&,N,V_moveFileError
// Property: timestampSubmitToNm; attributes: Td,V_timestampSubmitToNm
// Property: timestampSubmitToNSURLSession; attributes: Td,V_timestampSubmitToNSURLSession
// Property: timestampNSURLSessionFinished; attributes: Td,V_timestampNSURLSessionFinished
// Property: timestampParsingStart; attributes: Td,V_timestampParsingStart
// Property: timestampParsingEnd; attributes: Td,V_timestampParsingEnd
// Property: timestampSubmitToFeatureTaskQueue; attributes: Td,V_timestampSubmitToFeatureTaskQueue
// Property: firstHitSubmitToNm; attributes: TB,V_firstHitSubmitToNm
// Property: firstHitSubmitToNSURLSession; attributes: TB,V_firstHitSubmitToNSURLSession
// Property: firstHitNSURLSessionFinished; attributes: TB,V_firstHitNSURLSessionFinished
// Property: firstHitParsingStart; attributes: TB,V_firstHitParsingStart
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRequestInfoContainer init]
// Type encoding: @16@0:8
// Implementation: 0x10059df40

// -[SCRequestInfoContainer URLSession:task:didCompleteWithError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b267ba4

// -[SCRequestInfoContainer URLSession:dataTask:didReceiveData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b267c38

// -[SCRequestInfoContainer URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x10b267cb0

// -[SCRequestInfoContainer onReadCompletedTotalBodyBytesReceived:totalBodyBytesExpectedToReceive:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x100894b40

// -[SCRequestInfoContainer onWriteCompletedTotalBytesSent:totalBytesExpectedToSend:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10078c3cc

// -[SCRequestInfoContainer URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x10b267d28

// -[SCRequestInfoContainer URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x10b267f24

// -[SCRequestInfoContainer URLSession:downloadTask:didFinishDownloadingToURL:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b267fb4

// -[SCRequestInfoContainer monitorProgressiveDownloadWithQueue:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b267fb8

// -[SCRequestInfoContainer _progressiveUpdateDataTask:data:error:completed:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x10b268030

// -[SCRequestInfoContainer monitorDownloadProgressWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b2682e8

// -[SCRequestInfoContainer monitorDownloadProgressWithQueue:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b26836c

// -[SCRequestInfoContainer monitorUploadProgressWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b268418

// -[SCRequestInfoContainer removeDownloadProgressMonitoring]
// Type encoding: v16@0:8
// Implementation: 0x10b2684e4

// -[SCRequestInfoContainer setRequestConcurrencyObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005a9574

// -[SCRequestInfoContainer requestInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b2689e4

// -[SCRequestInfoContainer setRequestInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2689ec

// -[SCRequestInfoContainer uploadProgress]
// Type encoding: @16@0:8
// Implementation: 0x10078c590

// -[SCRequestInfoContainer setUploadProgress:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b268a1c

// -[SCRequestInfoContainer downloadProgress]
// Type encoding: @16@0:8
// Implementation: 0x100894c9c

// -[SCRequestInfoContainer setDownloadProgress:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b268a4c

// -[SCRequestInfoContainer concurrencyObserver]
// Type encoding: @16@0:8
// Implementation: 0x10068d768

// -[SCRequestInfoContainer setConcurrencyObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b268a7c

// -[SCRequestInfoContainer moveFileError]
// Type encoding: @16@0:8
// Implementation: 0x10b268a88

// -[SCRequestInfoContainer setMoveFileError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b268a90

// -[SCRequestInfoContainer timestampSubmitToNm]
// Type encoding: d16@0:8
// Implementation: 0x10059e7c4

// -[SCRequestInfoContainer setTimestampSubmitToNm:]
// Type encoding: v24@0:8d16
// Implementation: 0x10059e7cc

// -[SCRequestInfoContainer timestampSubmitToNSURLSession]
// Type encoding: d16@0:8
// Implementation: 0x10068e14c

// -[SCRequestInfoContainer setTimestampSubmitToNSURLSession:]
// Type encoding: v24@0:8d16
// Implementation: 0x10068e29c

// -[SCRequestInfoContainer timestampNSURLSessionFinished]
// Type encoding: d16@0:8
// Implementation: 0x1008a31d0

// -[SCRequestInfoContainer setTimestampNSURLSessionFinished:]
// Type encoding: v24@0:8d16
// Implementation: 0x10089e8a0

// -[SCRequestInfoContainer timestampParsingStart]
// Type encoding: d16@0:8
// Implementation: 0x1008a32ac

// -[SCRequestInfoContainer setTimestampParsingStart:]
// Type encoding: v24@0:8d16
// Implementation: 0x10089ddf8

// -[SCRequestInfoContainer timestampParsingEnd]
// Type encoding: d16@0:8
// Implementation: 0x1008a33ec

// -[SCRequestInfoContainer setTimestampParsingEnd:]
// Type encoding: v24@0:8d16
// Implementation: 0x10089dfe4

// -[SCRequestInfoContainer timestampSubmitToFeatureTaskQueue]
// Type encoding: d16@0:8
// Implementation: 0x1008a32a4

// -[SCRequestInfoContainer setTimestampSubmitToFeatureTaskQueue:]
// Type encoding: v24@0:8d16
// Implementation: 0x1008a2e40

// -[SCRequestInfoContainer firstHitSubmitToNm]
// Type encoding: B16@0:8
// Implementation: 0x1008a35b0

// -[SCRequestInfoContainer setFirstHitSubmitToNm:]
// Type encoding: v20@0:8B16
// Implementation: 0x10059e7d4

// -[SCRequestInfoContainer firstHitSubmitToNSURLSession]
// Type encoding: B16@0:8
// Implementation: 0x1008a38f0

// -[SCRequestInfoContainer setFirstHitSubmitToNSURLSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x10068e008

// -[SCRequestInfoContainer firstHitNSURLSessionFinished]
// Type encoding: B16@0:8
// Implementation: 0x1008a3aa4

// -[SCRequestInfoContainer setFirstHitNSURLSessionFinished:]
// Type encoding: v20@0:8B16
// Implementation: 0x10089e898

// -[SCRequestInfoContainer firstHitParsingStart]
// Type encoding: B16@0:8
// Implementation: 0x1008a3c58

// -[SCRequestInfoContainer setFirstHitParsingStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x10089ddf0

// -[SCRequestInfoContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1008aad14

// +[SCRequestInfoContainer statusCodeErrorForRequest:response:data:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b268538

@end
