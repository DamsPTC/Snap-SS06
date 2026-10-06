// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAPIURLSession
// Superclass: NSObject
// Address: 0x112c71978

@interface SCAPIURLSession

// Property: isUsingCrNet; attributes: TB,V_isUsingCrNet
// Property: identifier; attributes: T@"NSString",R,N,V_identifier
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAPIURLSession initWithIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b26202c

// -[SCAPIURLSession _createNewSessionConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2621bc

// -[SCAPIURLSession _determineTimeoutInterval]
// Type encoding: d16@0:8
// Implementation: 0x10b2624d0

// -[SCAPIURLSession useNewSessionWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b262508

// -[SCAPIURLSession createSessionWithTimeoutValue:]
// Type encoding: @24@0:8d16
// Implementation: 0x10b26255c

// -[SCAPIURLSession timeoutInterval]
// Type encoding: d16@0:8
// Implementation: 0x10b2625d8

// -[SCAPIURLSession networkConnectivityStatusDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b262620

// -[SCAPIURLSession dataTaskWithRequest:requestInfoContainer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b262624

// -[SCAPIURLSession downloadTaskWithRequest:requestInfoContainer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b2626ac

// -[SCAPIURLSession downloadTaskWithResumeData:requestInfoContainer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b262734

// -[SCAPIURLSession uploadTaskWithRequest:fileURL:requestInfoContainer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b2627bc

// -[SCAPIURLSession setRequestInfoContainer:forTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b262840

// -[SCAPIURLSession _containerForTask:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b26290c

// -[SCAPIURLSession _removeContainerForTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b262a6c

// -[SCAPIURLSession infoForTask:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b262b08

// -[SCAPIURLSession _requestIdForTask:requestInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b262b4c

// -[SCAPIURLSession URLSession:didReceiveChallenge:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b262c60

// -[SCAPIURLSession URLSession:task:didFinishCollectingMetrics:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b262d28

// -[SCAPIURLSession URLSession:task:didCompleteWithError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b263568

// -[SCAPIURLSession URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x10b263be8

// -[SCAPIURLSession URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10b263d60

// -[SCAPIURLSession isRedirectAllowed:from:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b263e84

// -[SCAPIURLSession URLSession:dataTask:didReceiveData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b263f60

// -[SCAPIURLSession URLSession:dataTask:didReceiveResponse:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10b264114

// -[SCAPIURLSession URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x10b264124

// -[SCAPIURLSession URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x10b26426c

// -[SCAPIURLSession URLSession:downloadTask:didFinishDownloadingToURL:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b2642f8

// -[SCAPIURLSession logTaskStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b264460

// -[SCAPIURLSession identifier]
// Type encoding: @16@0:8
// Implementation: 0x10b26488c

// -[SCAPIURLSession isUsingCrNet]
// Type encoding: B16@0:8
// Implementation: 0x10b264894

// -[SCAPIURLSession setIsUsingCrNet:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2648a0

// -[SCAPIURLSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2648a8

@end
