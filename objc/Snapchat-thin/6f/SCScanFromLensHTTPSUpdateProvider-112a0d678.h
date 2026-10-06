// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanFromLensHTTPSUpdateProvider
// Superclass: NSObject
// Address: 0x112a0d678

@interface SCScanFromLensHTTPSUpdateProvider

// Property: scanFromLensNetworkUpdateObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScanFromLensHTTPSUpdateProvider initWithUserNetworkServices:endpointConfiguration:snapTokenProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104fa52bc

// -[SCScanFromLensHTTPSUpdateProvider performAnalysisForImage:contexts:isFrontFacing:lensId:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x104fa5444

// -[SCScanFromLensHTTPSUpdateProvider performAnalysisForLensTexture:contexts:lensId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104fa549c

// -[SCScanFromLensHTTPSUpdateProvider scanFromLensNetworkUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x104fa5500

// -[SCScanFromLensHTTPSUpdateProvider _setupTimeoutForSFLRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fa5528

// -[SCScanFromLensHTTPSUpdateProvider _handleSnapTokenSuccessWithRequest:token:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104fa5738

// -[SCScanFromLensHTTPSUpdateProvider _handleSuccessForSFLRequest:jsonResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104fa5aac

// -[SCScanFromLensHTTPSUpdateProvider _handleFailureForSFLRequest:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104fa5ba0

// -[SCScanFromLensHTTPSUpdateProvider _sflRequestForImage:contexts:isFrontFacing:lensId:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x104fa5c94

// -[SCScanFromLensHTTPSUpdateProvider _sflRequestForImageData:contexts:isFrontFacing:lensId:isLensTexture:]
// Type encoding: @48@0:8@16@24B32@36B44
// Implementation: 0x104fa5d3c

// -[SCScanFromLensHTTPSUpdateProvider _performScanFromLensRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fa5e58

// -[SCScanFromLensHTTPSUpdateProvider _requestForSFLRequest:token:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104fa6174

// -[SCScanFromLensHTTPSUpdateProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fa6470

@end
