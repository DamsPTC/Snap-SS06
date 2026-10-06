// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGtqNetworkRequest
// Superclass: NSObject
// Address: 0x112c1db48

@interface SCGtqNetworkRequest

// Property: pathComponents; attributes: T@"NSArray",&,N,V_pathComponents
// Property: parameters; attributes: T@"NSDictionary",&,N,V_parameters
// Property: additionalHTTPHeaders; attributes: T@"NSDictionary",&,N,V_additionalHTTPHeaders
// Property: contexts; attributes: T@"NSArray",&,N,V_contexts
// Property: path; attributes: T@"NSString",&,N,V_path
// Property: host; attributes: T@"NSString",&,N,V_host
// Property: key; attributes: T@"NSString",C,N,V_key
// Property: requestParser; attributes: T@"<SCRequestParser>",&,N,V_requestParser
// Property: requestType; attributes: Tq,N,V_requestType
// Property: maxAttempts; attributes: TQ,N,V_maxAttempts
// Property: method; attributes: Tq,N,V_method
// Property: priority; attributes: Tq,N,V_priority
// Property: connectivity; attributes: Tq,N,V_connectivity
// Property: useGzipRequestCompression; attributes: TB,N,V_useGzipRequestCompression
// Property: tokenAccessType; attributes: TQ,N,V_tokenAccessType
// Property: retryCount; attributes: TQ,N,VretryCount
// Property: numberOfAttempts; attributes: Tq,N,V_numberOfAttempts
// Property: shouldPersist; attributes: TB,N,VshouldPersist
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGtqNetworkRequest init]
// Type encoding: @16@0:8
// Implementation: 0x10af38040

// -[SCGtqNetworkRequest buildRequestWithPayload:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af38168

// -[SCGtqNetworkRequest fetchSnapToken:queue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10af383b8

// -[SCGtqNetworkRequest getServerConfigRetryCount:adConfigProvider:]
// Type encoding: Q32@0:8q16@24
// Implementation: 0x10af385ac

// -[SCGtqNetworkRequest toSCRequest]
// Type encoding: @16@0:8
// Implementation: 0x10af38638

// -[SCGtqNetworkRequest toPersistenceObject:]
// Type encoding: @24@0:8q16
// Implementation: 0x10af3868c

// -[SCGtqNetworkRequest shouldPersist]
// Type encoding: B16@0:8
// Implementation: 0x10af386e0

// -[SCGtqNetworkRequest setShouldPersist:]
// Type encoding: v20@0:8B16
// Implementation: 0x10af386e8

// -[SCGtqNetworkRequest retryCount]
// Type encoding: Q16@0:8
// Implementation: 0x10af386f0

// -[SCGtqNetworkRequest setRetryCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10af386f8

// -[SCGtqNetworkRequest key]
// Type encoding: @16@0:8
// Implementation: 0x10af38700

// -[SCGtqNetworkRequest setKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af38708

// -[SCGtqNetworkRequest numberOfAttempts]
// Type encoding: q16@0:8
// Implementation: 0x10af38710

// -[SCGtqNetworkRequest setNumberOfAttempts:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af38718

// -[SCGtqNetworkRequest pathComponents]
// Type encoding: @16@0:8
// Implementation: 0x10af38720

// -[SCGtqNetworkRequest setPathComponents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af38728

// -[SCGtqNetworkRequest parameters]
// Type encoding: @16@0:8
// Implementation: 0x10af38758

// -[SCGtqNetworkRequest setParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af38760

// -[SCGtqNetworkRequest additionalHTTPHeaders]
// Type encoding: @16@0:8
// Implementation: 0x10af38790

// -[SCGtqNetworkRequest setAdditionalHTTPHeaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af38798

// -[SCGtqNetworkRequest contexts]
// Type encoding: @16@0:8
// Implementation: 0x10af387c8

// -[SCGtqNetworkRequest setContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af387d0

// -[SCGtqNetworkRequest path]
// Type encoding: @16@0:8
// Implementation: 0x10af38800

// -[SCGtqNetworkRequest setPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af38808

// -[SCGtqNetworkRequest host]
// Type encoding: @16@0:8
// Implementation: 0x10af38838

// -[SCGtqNetworkRequest setHost:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af38840

// -[SCGtqNetworkRequest requestParser]
// Type encoding: @16@0:8
// Implementation: 0x10af38870

// -[SCGtqNetworkRequest setRequestParser:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af38878

// -[SCGtqNetworkRequest requestType]
// Type encoding: q16@0:8
// Implementation: 0x10af388a8

// -[SCGtqNetworkRequest setRequestType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af388b0

// -[SCGtqNetworkRequest maxAttempts]
// Type encoding: Q16@0:8
// Implementation: 0x10af388b8

// -[SCGtqNetworkRequest setMaxAttempts:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10af388c0

// -[SCGtqNetworkRequest method]
// Type encoding: q16@0:8
// Implementation: 0x10af388c8

// -[SCGtqNetworkRequest setMethod:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af388d0

// -[SCGtqNetworkRequest priority]
// Type encoding: q16@0:8
// Implementation: 0x10af388d8

// -[SCGtqNetworkRequest setPriority:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af388e0

// -[SCGtqNetworkRequest connectivity]
// Type encoding: q16@0:8
// Implementation: 0x10af388e8

// -[SCGtqNetworkRequest setConnectivity:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af388f0

// -[SCGtqNetworkRequest useGzipRequestCompression]
// Type encoding: B16@0:8
// Implementation: 0x10af388f8

// -[SCGtqNetworkRequest setUseGzipRequestCompression:]
// Type encoding: v20@0:8B16
// Implementation: 0x10af38900

// -[SCGtqNetworkRequest tokenAccessType]
// Type encoding: Q16@0:8
// Implementation: 0x10af38908

// -[SCGtqNetworkRequest setTokenAccessType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10af38910

// -[SCGtqNetworkRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af38918

@end
