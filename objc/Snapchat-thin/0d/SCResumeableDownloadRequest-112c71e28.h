// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCResumeableDownloadRequest
// Superclass: SCRequest
// Address: 0x112c71e28

@interface SCResumeableDownloadRequest

// Property: location; attributes: T@"NSURL",R,C,N,V_location

// -[SCResumeableDownloadRequest initWithResumeData:key:contexts:priority:connectivity:trackingInfo:]
// Type encoding: @64@0:8@16@24@32q40q48@56
// Implementation: 0x10b26cb2c

// -[SCResumeableDownloadRequest initWithURL:additionalHTTPHeaders:key:contexts:priority:connectivity:trackingInfo:parameters:]
// Type encoding: @80@0:8@16@24@32@40q48q56@64@72
// Implementation: 0x10b26cc80

// -[SCResumeableDownloadRequest initWithEndpoint:parameters:additionalHTTPHeaders:key:contexts:priority:connectivity:trackingInfo:]
// Type encoding: @80@0:8@16@24@32@40@48q56q64@72
// Implementation: 0x10b26ce38

// -[SCResumeableDownloadRequest initializeURLRequestWithAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26cfec

// -[SCResumeableDownloadRequest executeWithAuthenticator:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b26d254

// -[SCResumeableDownloadRequest downloadTask]
// Type encoding: @16@0:8
// Implementation: 0x10b26d904

// -[SCResumeableDownloadRequest cancelByProducingResumeData:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b26d908

// -[SCResumeableDownloadRequest cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x10b26d958

// -[SCResumeableDownloadRequest setNativeDownloadLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b26d9c4

// -[SCResumeableDownloadRequest timeoutInterval]
// Type encoding: d16@0:8
// Implementation: 0x10b26d9fc

// -[SCResumeableDownloadRequest url]
// Type encoding: @16@0:8
// Implementation: 0x10b26da00

// -[SCResumeableDownloadRequest path]
// Type encoding: @16@0:8
// Implementation: 0x10b26da74

// -[SCResumeableDownloadRequest urlRequest]
// Type encoding: @16@0:8
// Implementation: 0x10b26db18

// -[SCResumeableDownloadRequest approximateRequestSize]
// Type encoding: Q16@0:8
// Implementation: 0x10b26db48

// -[SCResumeableDownloadRequest downloadedData]
// Type encoding: @16@0:8
// Implementation: 0x10b26db58

// -[SCResumeableDownloadRequest location]
// Type encoding: @16@0:8
// Implementation: 0x10b26db9c

// -[SCResumeableDownloadRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b26dbac

@end
