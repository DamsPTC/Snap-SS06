// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDownloadRequest
// Superclass: SCRequest
// Address: 0x112c71a18

@interface SCDownloadRequest

// Property: urlRequest; attributes: T@"NSURLRequest",R,N
// Property: parameters; attributes: T@"NSDictionary",R,N,V_parameters
// Property: additionalHTTPHeaders; attributes: T@"NSDictionary",R,N

// -[SCDownloadRequest initWithEndpoint:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestType:requestParser:method:authenticated:requestTimestamp:readTimeoutInterval:compressionConfig:estimatedResponseSizeBytes:]
// Type encoding: @140@0:8@16@24@32@40@48@56q64q72q80@88q96B104d108d116@124q132
// Implementation: 0x10b265ae8

// -[SCDownloadRequest initWithURL:parameters:uploadData:additionalHTTPHeaders:key:contexts:priority:connectivity:requestParser:requestType:method:authenticated:requestTimestamp:readTimeoutInterval:compressionConfig:estimatedResponseSizeBytes:]
// Type encoding: @140@0:8@16@24@32@40@48@56q64q72@80q88q96B104d108d116@124q132
// Implementation: 0x10059d9dc

// -[SCDownloadRequest initializeURLRequestWithAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005a0e00

// -[SCDownloadRequest executeWithAuthenticator:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b265e20

// -[SCDownloadRequest cancel]
// Type encoding: v16@0:8
// Implementation: 0x10b266330

// -[SCDownloadRequest pause]
// Type encoding: v16@0:8
// Implementation: 0x10b266398

// -[SCDownloadRequest _pause]
// Type encoding: v16@0:8
// Implementation: 0x10b2663fc

// -[SCDownloadRequest resumeWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b266500

// -[SCDownloadRequest _resumeWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b266504

// -[SCDownloadRequest cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x1008a4c48

// -[SCDownloadRequest additionalHTTPHeaders]
// Type encoding: @16@0:8
// Implementation: 0x10b266c40

// -[SCDownloadRequest timeoutInterval]
// Type encoding: d16@0:8
// Implementation: 0x100678dd4

// -[SCDownloadRequest url]
// Type encoding: @16@0:8
// Implementation: 0x10059ef64

// -[SCDownloadRequest path]
// Type encoding: @16@0:8
// Implementation: 0x10059efd8

// -[SCDownloadRequest urlRequest]
// Type encoding: @16@0:8
// Implementation: 0x1005ab768

// -[SCDownloadRequest approximateRequestSize]
// Type encoding: Q16@0:8
// Implementation: 0x10b266c98

// -[SCDownloadRequest resumableDownloadedData]
// Type encoding: @16@0:8
// Implementation: 0x10b266ca8

// -[SCDownloadRequest _isValidTimeoutInterval:]
// Type encoding: B24@0:8d16
// Implementation: 0x1005a2278

// -[SCDownloadRequest setTimeoutInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x100b42f64

// -[SCDownloadRequest _downloadTask]
// Type encoding: @16@0:8
// Implementation: 0x10b266cec

// -[SCDownloadRequest _addAdditionalHeadersIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1005a2100

// -[SCDownloadRequest parameters]
// Type encoding: @16@0:8
// Implementation: 0x10b266cf0

// -[SCDownloadRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1008aab28

@end
