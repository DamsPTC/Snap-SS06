// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTMSessionFetcherSessionDelegateDispatcher
// Superclass: NSObject
// Address: 0x1129ed260

@interface GTMSessionFetcherSessionDelegateDispatcher

// Property: session; attributes: T@"NSURLSession",&,V_session
// Property: discardInterval; attributes: Td,V_discardInterval
// Property: discardTimer; attributes: T@"NSTimer",R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[GTMSessionFetcherSessionDelegateDispatcher init]
// Type encoding: @16@0:8
// Implementation: 0x104a5ae10

// -[GTMSessionFetcherSessionDelegateDispatcher initWithParentService:sessionDiscardInterval:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10097b168

// -[GTMSessionFetcherSessionDelegateDispatcher description]
// Type encoding: @16@0:8
// Implementation: 0x104a5ae40

// -[GTMSessionFetcherSessionDelegateDispatcher discardTimer]
// Type encoding: @16@0:8
// Implementation: 0x104a5aec0

// -[GTMSessionFetcherSessionDelegateDispatcher startDiscardTimer]
// Type encoding: v16@0:8
// Implementation: 0x104a5af04

// -[GTMSessionFetcherSessionDelegateDispatcher destroyDiscardTimer]
// Type encoding: v16@0:8
// Implementation: 0x104a5afc8

// -[GTMSessionFetcherSessionDelegateDispatcher discardTimerFired:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5aff4

// -[GTMSessionFetcherSessionDelegateDispatcher abandon]
// Type encoding: v16@0:8
// Implementation: 0x104a5b090

// -[GTMSessionFetcherSessionDelegateDispatcher startSessionUsage]
// Type encoding: v16@0:8
// Implementation: 0x104a5b0dc

// -[GTMSessionFetcherSessionDelegateDispatcher destroySessionAndTimer]
// Type encoding: v16@0:8
// Implementation: 0x104a5b128

// -[GTMSessionFetcherSessionDelegateDispatcher setFetcher:forTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a5b158

// -[GTMSessionFetcherSessionDelegateDispatcher removeFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5b220

// -[GTMSessionFetcherSessionDelegateDispatcher fetcherForTask:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a5b2c8

// -[GTMSessionFetcherSessionDelegateDispatcher removeTaskFromMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5b350

// -[GTMSessionFetcherSessionDelegateDispatcher setSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a5b3bc

// -[GTMSessionFetcherSessionDelegateDispatcher session]
// Type encoding: @16@0:8
// Implementation: 0x104a5b40c

// -[GTMSessionFetcherSessionDelegateDispatcher discardInterval]
// Type encoding: d16@0:8
// Implementation: 0x104a5b450

// -[GTMSessionFetcherSessionDelegateDispatcher setDiscardInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x104a5b494

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:didBecomeInvalidWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a5b4d4

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x104a5b73c

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:didReceiveChallenge:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104a5b810

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:needNewBodyStream:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104a5b8c8

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x104a5b95c

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:didCompleteWithError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a5b9f4

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:task:didFinishCollectingMetrics:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a5baa0

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:dataTask:didReceiveResponse:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104a5bb34

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:dataTask:didBecomeDownloadTask:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a5bbec

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:dataTask:didReceiveData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a5bcac

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:dataTask:willCacheResponse:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104a5bd40

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:downloadTask:didFinishDownloadingToURL:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104a5bdf8

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x104a5be8c

// -[GTMSessionFetcherSessionDelegateDispatcher URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x104a5bf24

// -[GTMSessionFetcherSessionDelegateDispatcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a5bfb4

@end
