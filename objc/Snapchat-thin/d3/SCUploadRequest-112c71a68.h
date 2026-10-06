// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUploadRequest
// Superclass: SCRequest
// Address: 0x112c71a68

@interface SCUploadRequest

// Property: uploadFileURL; attributes: T@"NSURL",R,N,V_uploadFileURL

// -[SCUploadRequest initWithURL:parameters:uploadFileURL:additionalHTTPHeaders:key:contexts:priority:connectivity:requestParser:requestType:method:authenticated:requestTimestamp:estimatedResponseSizeBytes:]
// Type encoding: @124@0:8@16@24@32@40@48@56q64q72@80q88q96B104d108q116
// Implementation: 0x10b266d00

// -[SCUploadRequest initializeURLRequestWithAuthenticator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b266e80

// -[SCUploadRequest executeWithAuthenticator:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10b2670c4

// -[SCUploadRequest url]
// Type encoding: @16@0:8
// Implementation: 0x10b267648

// -[SCUploadRequest path]
// Type encoding: @16@0:8
// Implementation: 0x10b2676a0

// -[SCUploadRequest urlRequest]
// Type encoding: @16@0:8
// Implementation: 0x10b267718

// -[SCUploadRequest approximateRequestSize]
// Type encoding: Q16@0:8
// Implementation: 0x10b267748

// -[SCUploadRequest _onRequestCompleteWithResponseData:response:error:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10b2677bc

// -[SCUploadRequest uploadFileURL]
// Type encoding: @16@0:8
// Implementation: 0x10b2677fc

// -[SCUploadRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b26780c

@end
