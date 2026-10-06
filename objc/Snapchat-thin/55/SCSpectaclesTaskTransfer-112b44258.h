// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesTaskTransfer
// Superclass: SCSpectaclesTask
// Address: 0x112b44258

@interface SCSpectaclesTaskTransfer

// Property: content; attributes: T@"SCSpectaclesContent",R,N,V_content
// Property: contentComponent; attributes: TQ,R,N,V_contentComponent
// Property: file; attributes: T@"SCSpectaclesFile",R,N
// Property: allowBurstRequests; attributes: TB,N,V_allowBurstRequests
// Property: isResuming; attributes: TB,R,N

// -[SCSpectaclesTaskTransfer initWithContent:contentComponent:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106ec1d9c

// -[SCSpectaclesTaskTransfer file]
// Type encoding: @16@0:8
// Implementation: 0x106ec1e38

// -[SCSpectaclesTaskTransfer _burstTransferForTransferChannel:]
// Type encoding: B24@0:8q16
// Implementation: 0x106ec1e8c

// -[SCSpectaclesTaskTransfer nextRequest:]
// Type encoding: @24@0:8q16
// Implementation: 0x106ec1e94

// -[SCSpectaclesTaskTransfer nextRequestWithRange:chunkSize:]
// Type encoding: @40@0:8{_NSRange=QQ}16Q32
// Implementation: 0x106ec1f80

// -[SCSpectaclesTaskTransfer handleResponse:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ec1fd4

// -[SCSpectaclesTaskTransfer appendDataWithResponse:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ec2078

// -[SCSpectaclesTaskTransfer _requestLength:]
// Type encoding: Q24@0:8q16
// Implementation: 0x106ec20d8

// -[SCSpectaclesTaskTransfer _isCheerios]
// Type encoding: B16@0:8
// Implementation: 0x106ec216c

// -[SCSpectaclesTaskTransfer _isHermosa]
// Type encoding: B16@0:8
// Implementation: 0x106ec21e8

// -[SCSpectaclesTaskTransfer _requestLengthForCheerios:]
// Type encoding: Q24@0:8q16
// Implementation: 0x106ec2264

// -[SCSpectaclesTaskTransfer _requestLengthForHermosa:]
// Type encoding: Q24@0:8q16
// Implementation: 0x106ec2284

// -[SCSpectaclesTaskTransfer isResuming]
// Type encoding: B16@0:8
// Implementation: 0x106ec22a4

// -[SCSpectaclesTaskTransfer isFinished]
// Type encoding: B16@0:8
// Implementation: 0x106ec22e4

// -[SCSpectaclesTaskTransfer isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ec2338

// -[SCSpectaclesTaskTransfer hash]
// Type encoding: Q16@0:8
// Implementation: 0x106ec23f0

// -[SCSpectaclesTaskTransfer content]
// Type encoding: @16@0:8
// Implementation: 0x106ec24a0

// -[SCSpectaclesTaskTransfer contentComponent]
// Type encoding: Q16@0:8
// Implementation: 0x106ec24b0

// -[SCSpectaclesTaskTransfer allowBurstRequests]
// Type encoding: B16@0:8
// Implementation: 0x106ec24c0

// -[SCSpectaclesTaskTransfer setAllowBurstRequests:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ec24d0

// -[SCSpectaclesTaskTransfer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ec24e0

@end
